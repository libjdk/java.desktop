#include <sun/awt/X11/XEmbedHelper.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XEmbedServerTester.h>
#include <sun/awt/X11/XKeysym$Keysym2JavaKeycode.h>
#include <sun/awt/X11/XKeysym.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef CTRL_DOWN_MASK
#undef FINE
#undef FINER
#undef NON_STANDARD_XEMBED_GTK_GRAB_KEY
#undef NON_STANDARD_XEMBED_GTK_UNGRAB_KEY
#undef SHIFT_DOWN_MASK
#undef SYSTEM_EVENT_MASK
#undef VK_UNDEFINED
#undef XEMBED_ACTIVATE_ACCELERATOR
#undef XEMBED_EMBEDDED_NOTIFY
#undef XEMBED_FOCUS_CURRENT
#undef XEMBED_FOCUS_FIRST
#undef XEMBED_FOCUS_IN
#undef XEMBED_FOCUS_LAST
#undef XEMBED_FOCUS_NEXT
#undef XEMBED_FOCUS_OUT
#undef XEMBED_FOCUS_PREV
#undef XEMBED_GRAB_KEY
#undef XEMBED_MAPPED
#undef XEMBED_MODALITY_OFF
#undef XEMBED_MODALITY_ON
#undef XEMBED_MODIFIER_ALT
#undef XEMBED_MODIFIER_CONTROL
#undef XEMBED_MODIFIER_HYPER
#undef XEMBED_MODIFIER_SHIFT
#undef XEMBED_MODIFIER_SUPER
#undef XEMBED_REGISTER_ACCELERATOR
#undef XEMBED_REQUEST_FOCUS
#undef XEMBED_UNGRAB_KEY
#undef XEMBED_UNREGISTER_ACCELERATOR
#undef XEMBED_VERSION
#undef XEMBED_WINDOW_ACTIVATE
#undef XEMBED_WINDOW_DEACTIVATE

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XEmbedServerTester = ::sun::awt::X11::XEmbedServerTester;
using $XKeysym = ::sun::awt::X11::XKeysym;
using $XKeysym$Keysym2JavaKeycode = ::sun::awt::X11::XKeysym$Keysym2JavaKeycode;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedHelper_FieldInfo_[] = {
	{"xembedLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbedHelper, xembedLog)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(XEmbedHelper, unsafe)},
	{"XEMBED_VERSION", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_VERSION)},
	{"XEMBED_MAPPED", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MAPPED)},
	{"XEMBED_EMBEDDED_NOTIFY", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_EMBEDDED_NOTIFY)},
	{"XEMBED_WINDOW_ACTIVATE", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_WINDOW_ACTIVATE)},
	{"XEMBED_WINDOW_DEACTIVATE", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_WINDOW_DEACTIVATE)},
	{"XEMBED_REQUEST_FOCUS", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_REQUEST_FOCUS)},
	{"XEMBED_FOCUS_IN", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_IN)},
	{"XEMBED_FOCUS_OUT", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_OUT)},
	{"XEMBED_FOCUS_NEXT", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_NEXT)},
	{"XEMBED_FOCUS_PREV", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_PREV)},
	{"XEMBED_GRAB_KEY", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_GRAB_KEY)},
	{"XEMBED_UNGRAB_KEY", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_UNGRAB_KEY)},
	{"XEMBED_MODALITY_ON", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODALITY_ON)},
	{"XEMBED_MODALITY_OFF", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODALITY_OFF)},
	{"XEMBED_REGISTER_ACCELERATOR", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_REGISTER_ACCELERATOR)},
	{"XEMBED_UNREGISTER_ACCELERATOR", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_UNREGISTER_ACCELERATOR)},
	{"XEMBED_ACTIVATE_ACCELERATOR", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_ACTIVATE_ACCELERATOR)},
	{"NON_STANDARD_XEMBED_GTK_GRAB_KEY", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, NON_STANDARD_XEMBED_GTK_GRAB_KEY)},
	{"NON_STANDARD_XEMBED_GTK_UNGRAB_KEY", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, NON_STANDARD_XEMBED_GTK_UNGRAB_KEY)},
	{"XEMBED_FOCUS_CURRENT", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_CURRENT)},
	{"XEMBED_FOCUS_FIRST", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_FIRST)},
	{"XEMBED_FOCUS_LAST", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_FOCUS_LAST)},
	{"XEMBED_MODIFIER_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODIFIER_SHIFT)},
	{"XEMBED_MODIFIER_CONTROL", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODIFIER_CONTROL)},
	{"XEMBED_MODIFIER_ALT", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODIFIER_ALT)},
	{"XEMBED_MODIFIER_SUPER", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODIFIER_SUPER)},
	{"XEMBED_MODIFIER_HYPER", "I", nullptr, $STATIC | $FINAL, $constField(XEmbedHelper, XEMBED_MODIFIER_HYPER)},
	{"XEmbedInfo", "Lsun/awt/X11/XAtom;", nullptr, $STATIC, $staticField(XEmbedHelper, XEmbedInfo)},
	{"XEmbed", "Lsun/awt/X11/XAtom;", nullptr, $STATIC, $staticField(XEmbedHelper, XEmbed)},
	{}
};

$MethodInfo _XEmbedHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XEmbedHelper::*)()>(&XEmbedHelper::init$))},
	{"XEmbedMessageToString", "(Lsun/awt/X11/XClientMessageEvent;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($XClientMessageEvent*)>(&XEmbedHelper::XEmbedMessageToString))},
	{"focusIdToString", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XEmbedHelper::focusIdToString))},
	{"getKeyStrokeForKeySym", "(JJ)Ljava/awt/AWTKeyStroke;", nullptr, 0},
	{"getModifiers", "(I)I", nullptr, 0},
	{"msgidToString", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XEmbedHelper::msgidToString))},
	{"sendMessage", "(JI)V", nullptr, 0},
	{"sendMessage", "(JIJJJ)V", nullptr, 0},
	{}
};

$ClassInfo _XEmbedHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbedHelper",
	"java.lang.Object",
	nullptr,
	_XEmbedHelper_FieldInfo_,
	_XEmbedHelper_MethodInfo_
};

$Object* allocate$XEmbedHelper($Class* clazz) {
	return $of($alloc(XEmbedHelper));
}

$PlatformLogger* XEmbedHelper::xembedLog = nullptr;
$Unsafe* XEmbedHelper::unsafe = nullptr;
$XAtom* XEmbedHelper::XEmbedInfo = nullptr;
$XAtom* XEmbedHelper::XEmbed = nullptr;

void XEmbedHelper::init$() {
	$useLocalCurrentObjectStackCache();
	if (XEmbedHelper::XEmbed == nullptr) {
		$assignStatic(XEmbedHelper::XEmbed, $XAtom::get("_XEMBED"_s));
		$init($PlatformLogger$Level);
		if ($nc(XEmbedHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XEmbedHelper::xembedLog)->finer($$str({"Created atom "_s, $($nc(XEmbedHelper::XEmbed)->toString())}));
		}
	}
	if (XEmbedHelper::XEmbedInfo == nullptr) {
		$assignStatic(XEmbedHelper::XEmbedInfo, $XAtom::get("_XEMBED_INFO"_s));
		$init($PlatformLogger$Level);
		if ($nc(XEmbedHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XEmbedHelper::xembedLog)->finer($$str({"Created atom "_s, $($nc(XEmbedHelper::XEmbedInfo)->toString())}));
		}
	}
}

void XEmbedHelper::sendMessage(int64_t window, int32_t message) {
	sendMessage(window, message, 0, 0, 0);
}

void XEmbedHelper::sendMessage(int64_t window, int32_t message, int64_t detail, int64_t data1, int64_t data2) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	msg->set_type($XConstants::ClientMessage);
	msg->set_window(window);
	msg->set_message_type($nc(XEmbedHelper::XEmbed)->getAtom());
	msg->set_format(32);
	msg->set_data(0, $XToolkit::getCurrentServerTime());
	msg->set_data(1, message);
	msg->set_data(2, detail);
	msg->set_data(3, data1);
	msg->set_data(4, data2);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($PlatformLogger$Level);
			if ($nc(XEmbedHelper::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XEmbedHelper::xembedLog)->fine($$str({"Sending "_s, $(XEmbedMessageToString(msg))}));
			}
			$XlibWrapper::XSendEvent($XToolkit::getDisplay(), window, false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	msg->dispose();
}

$String* XEmbedHelper::msgidToString(int32_t msg_id) {
	$init(XEmbedHelper);
	do {
		if (msg_id == XEmbedHelper::XEMBED_EMBEDDED_NOTIFY) {
			goto case$0;
		}
		if (msg_id == XEmbedHelper::XEMBED_WINDOW_ACTIVATE) {
			goto case$1;
		}
		if (msg_id == XEmbedHelper::XEMBED_WINDOW_DEACTIVATE) {
			goto case$2;
		}
		if (msg_id == XEmbedHelper::XEMBED_FOCUS_IN) {
			goto case$3;
		}
		if (msg_id == XEmbedHelper::XEMBED_FOCUS_OUT) {
			goto case$4;
		}
		if (msg_id == XEmbedHelper::XEMBED_REQUEST_FOCUS) {
			goto case$5;
		}
		if (msg_id == XEmbedHelper::XEMBED_FOCUS_NEXT) {
			goto case$6;
		}
		if (msg_id == XEmbedHelper::XEMBED_FOCUS_PREV) {
			goto case$7;
		}
		if (msg_id == XEmbedHelper::XEMBED_MODALITY_ON) {
			goto case$8;
		}
		if (msg_id == XEmbedHelper::XEMBED_MODALITY_OFF) {
			goto case$9;
		}
		if (msg_id == XEmbedHelper::XEMBED_REGISTER_ACCELERATOR) {
			goto case$10;
		}
		if (msg_id == XEmbedHelper::XEMBED_UNREGISTER_ACCELERATOR) {
			goto case$11;
		}
		if (msg_id == XEmbedHelper::XEMBED_ACTIVATE_ACCELERATOR) {
			goto case$12;
		}
		if (msg_id == XEmbedHelper::XEMBED_GRAB_KEY) {
			goto case$13;
		}
		if (msg_id == XEmbedHelper::XEMBED_UNGRAB_KEY) {
			goto case$14;
		}
		if (msg_id == XEmbedHelper::NON_STANDARD_XEMBED_GTK_UNGRAB_KEY) {
			goto case$15;
		}
		if (msg_id == XEmbedHelper::NON_STANDARD_XEMBED_GTK_GRAB_KEY) {
			goto case$16;
		}
		if (msg_id == ($XConstants::KeyPress | $XEmbedServerTester::SYSTEM_EVENT_MASK)) {
			goto case$17;
		}
		if (msg_id == ($XConstants::MapNotify | $XEmbedServerTester::SYSTEM_EVENT_MASK)) {
			goto case$18;
		}
		if (msg_id == ($XConstants::PropertyNotify | $XEmbedServerTester::SYSTEM_EVENT_MASK)) {
			goto case$19;
		}
		goto case$20;
case$0:
		// XEMBED_EMBEDDED_NOTIFY
		{
			return "XEMBED_EMBEDDED_NOTIFY"_s;
		}
case$1:
		// XEMBED_WINDOW_ACTIVATE
		{
			return "XEMBED_WINDOW_ACTIVATE"_s;
		}
case$2:
		// XEMBED_WINDOW_DEACTIVATE
		{
			return "XEMBED_WINDOW_DEACTIVATE"_s;
		}
case$3:
		// XEMBED_FOCUS_IN
		{
			return "XEMBED_FOCUS_IN"_s;
		}
case$4:
		// XEMBED_FOCUS_OUT
		{
			return "XEMBED_FOCUS_OUT"_s;
		}
case$5:
		// XEMBED_REQUEST_FOCUS
		{
			return "XEMBED_REQUEST_FOCUS"_s;
		}
case$6:
		// XEMBED_FOCUS_NEXT
		{
			return "XEMBED_FOCUS_NEXT"_s;
		}
case$7:
		// XEMBED_FOCUS_PREV
		{
			return "XEMBED_FOCUS_PREV"_s;
		}
case$8:
		// XEMBED_MODALITY_ON
		{
			return "XEMBED_MODALITY_ON"_s;
		}
case$9:
		// XEMBED_MODALITY_OFF
		{
			return "XEMBED_MODALITY_OFF"_s;
		}
case$10:
		// XEMBED_REGISTER_ACCELERATOR
		{
			return "XEMBED_REGISTER_ACCELERATOR"_s;
		}
case$11:
		// XEMBED_UNREGISTER_ACCELERATOR
		{
			return "XEMBED_UNREGISTER_ACCELERATOR"_s;
		}
case$12:
		// XEMBED_ACTIVATE_ACCELERATOR
		{
			return "XEMBED_ACTIVATE_ACCELERATOR"_s;
		}
case$13:
		// XEMBED_GRAB_KEY
		{
			return "XEMBED_GRAB_KEY"_s;
		}
case$14:
		// XEMBED_UNGRAB_KEY
		{
			return "XEMBED_UNGRAB_KEY"_s;
		}
case$15:
		// NON_STANDARD_XEMBED_GTK_UNGRAB_KEY
		{
			return "NON_STANDARD_XEMBED_GTK_UNGRAB_KEY"_s;
		}
case$16:
		// NON_STANDARD_XEMBED_GTK_GRAB_KEY
		{
			return "NON_STANDARD_XEMBED_GTK_GRAB_KEY"_s;
		}
case$17:
		// XConstants.KeyPress | XEmbedServerTester.SYSTEM_EVENT_MASK
		{
			return "KeyPress"_s;
		}
case$18:
		// XConstants.MapNotify | XEmbedServerTester.SYSTEM_EVENT_MASK
		{
			return "MapNotify"_s;
		}
case$19:
		// XConstants.PropertyNotify | XEmbedServerTester.SYSTEM_EVENT_MASK
		{
			return "PropertyNotify"_s;
		}
case$20:
		// default
		{
			return $str({"unknown XEMBED id "_s, $$str(msg_id)});
		}
	} while (false);
}

$String* XEmbedHelper::focusIdToString(int32_t focus_id) {
	$init(XEmbedHelper);
	switch (focus_id) {
	case XEmbedHelper::XEMBED_FOCUS_CURRENT:
		{
			return "XEMBED_FOCUS_CURRENT"_s;
		}
	case XEmbedHelper::XEMBED_FOCUS_FIRST:
		{
			return "XEMBED_FOCUS_FIRST"_s;
		}
	case XEmbedHelper::XEMBED_FOCUS_LAST:
		{
			return "XEMBED_FOCUS_LAST"_s;
		}
	default:
		{
			return $str({"unknown focus id "_s, $$str(focus_id)});
		}
	}
}

$String* XEmbedHelper::XEmbedMessageToString($XClientMessageEvent* msg) {
	$init(XEmbedHelper);
	$useLocalCurrentObjectStackCache();
	$var($String, var$7, $$str({"XEmbed message to "_s, $($Long::toHexString($nc(msg)->get_window())), ": "_s}));
	$var($String, var$6, $$concat(var$7, $(msgidToString((int32_t)$nc(msg)->get_data(1)))));
	$var($String, var$5, $$concat(var$6, ", detail: "_s));
	$var($String, var$4, $$concat(var$5, $$str($nc(msg)->get_data(2))));
	$var($String, var$3, $$concat(var$4, ", data:["_s));
	$var($String, var$2, $$concat(var$3, $$str(msg->get_data(3))));
	$var($String, var$1, $$concat(var$2, ","_s));
	$var($String, var$0, $$concat(var$1, $$str(msg->get_data(4))));
	return ($concat(var$0, "]"_s));
}

int32_t XEmbedHelper::getModifiers(int32_t state) {
	int32_t mods = 0;
	if (((int32_t)(state & (uint32_t)XEmbedHelper::XEMBED_MODIFIER_SHIFT)) != 0) {
		mods |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if (((int32_t)(state & (uint32_t)XEmbedHelper::XEMBED_MODIFIER_CONTROL)) != 0) {
		mods |= $InputEvent::CTRL_DOWN_MASK;
	}
	if (((int32_t)(state & (uint32_t)XEmbedHelper::XEMBED_MODIFIER_ALT)) != 0) {
		mods |= $InputEvent::ALT_DOWN_MASK;
	}
	if (((int32_t)(state & (uint32_t)XEmbedHelper::XEMBED_MODIFIER_SUPER)) != 0) {
		mods |= $InputEvent::ALT_DOWN_MASK;
	}
	return mods;
}

$AWTKeyStroke* XEmbedHelper::getKeyStrokeForKeySym(int64_t keysym, int64_t state) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::checkSecurity();
	int32_t keycode = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XKeysym$Keysym2JavaKeycode, kc, $XKeysym::getJavaKeycode(keysym));
			if (kc == nullptr) {
				keycode = $KeyEvent::VK_UNDEFINED;
			} else {
				keycode = $nc(kc)->getJavaKeycode();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	int32_t modifiers = getModifiers((int32_t)state);
	return $AWTKeyStroke::getAWTKeyStroke(keycode, modifiers);
}

void clinit$XEmbedHelper($Class* class$) {
	$assignStatic(XEmbedHelper::xembedLog, $PlatformLogger::getLogger("sun.awt.X11.xembed"_s));
	$assignStatic(XEmbedHelper::unsafe, $Unsafe::getUnsafe());
}

XEmbedHelper::XEmbedHelper() {
}

$Class* XEmbedHelper::load$($String* name, bool initialize) {
	$loadClass(XEmbedHelper, name, initialize, &_XEmbedHelper_ClassInfo_, clinit$XEmbedHelper, allocate$XEmbedHelper);
	return class$;
}

$Class* XEmbedHelper::class$ = nullptr;

		} // X11
	} // awt
} // sun