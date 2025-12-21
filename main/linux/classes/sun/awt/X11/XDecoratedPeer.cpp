#include <sun/awt/X11/XDecoratedPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/WindowDimensions.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XContentWindow.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer$1.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFocusChangeEvent.h>
#include <sun/awt/X11/XFocusProxyWindow.h>
#include <sun/awt/X11/XIconWindow.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef AWT_DECOR_NONE
#undef BOUNDS
#undef CDE_WM
#undef COMPONENT_MOVED
#undef EVENT_MASK
#undef FINE
#undef FINER
#undef FINEST
#undef MAXIMIZED_BOTH
#undef METACITY_WM
#undef MIN_SIZE
#undef MOTIF_WM
#undef MWM_FUNC_ALL
#undef MWM_FUNC_MAXIMIZE
#undef MWM_FUNC_RESIZE
#undef NO_EMBEDDED_CHECK
#undef NO_WM
#undef POPUP
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_SIZE
#undef UNITY_COMPIZ_WM
#undef WARNING
#undef WINDOW_CLOSING
#undef WINDOW_DEICONIFIED
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_ICONIFIED
#undef XA_KDE_NET_WM_FRAME_STRUT
#undef XA_NET_FRAME_EXTENTS
#undef XA_WM_ICON_NAME

using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $WindowDimensions = ::sun::awt::X11::WindowDimensions;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XContentWindow = ::sun::awt::X11::XContentWindow;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer$1 = ::sun::awt::X11::XDecoratedPeer$1;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFocusChangeEvent = ::sun::awt::X11::XFocusChangeEvent;
using $XFocusProxyWindow = ::sun::awt::X11::XFocusProxyWindow;
using $XIconWindow = ::sun::awt::X11::XIconWindow;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XWM = ::sun::awt::X11::XWM;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDecoratedPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDecoratedPeer, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDecoratedPeer, log)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDecoratedPeer, insLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDecoratedPeer, focusLog)},
	{"iconLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDecoratedPeer, iconLog)},
	{"configure_seen", "Z", nullptr, 0, $field(XDecoratedPeer, configure_seen)},
	{"insets_corrected", "Z", nullptr, 0, $field(XDecoratedPeer, insets_corrected)},
	{"iconWindow", "Lsun/awt/X11/XIconWindow;", nullptr, 0, $field(XDecoratedPeer, iconWindow)},
	{"dimensions", "Lsun/awt/X11/WindowDimensions;", nullptr, $VOLATILE, $field(XDecoratedPeer, dimensions)},
	{"content", "Lsun/awt/X11/XContentWindow;", nullptr, 0, $field(XDecoratedPeer, content)},
	{"currentInsets", "Ljava/awt/Insets;", nullptr, $VOLATILE, $field(XDecoratedPeer, currentInsets)},
	{"focusProxy", "Lsun/awt/X11/XFocusProxyWindow;", nullptr, 0, $field(XDecoratedPeer, focusProxy)},
	{"lastKnownInsets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/awt/Insets;>;", $STATIC | $FINAL, $staticField(XDecoratedPeer, lastKnownInsets)},
	{"wm_set_insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(XDecoratedPeer, wm_set_insets)},
	{"reparent_serial", "J", nullptr, 0, $field(XDecoratedPeer, reparent_serial)},
	{"no_reparent_artifacts", "Z", nullptr, 0, $field(XDecoratedPeer, no_reparent_artifacts)},
	{"actualFocusedWindow", "Lsun/awt/X11/XWindowPeer;", nullptr, 0, $field(XDecoratedPeer, actualFocusedWindow)},
	{}
};

$MethodInfo _XDecoratedPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(XDecoratedPeer::*)($Window*)>(&XDecoratedPeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XDecoratedPeer::*)($XCreateWindowParams*)>(&XDecoratedPeer::init$))},
	{"applyGuessedInsets", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::applyGuessedInsets))},
	{"checkShellRect", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::checkShellRect))},
	{"checkShellRectPos", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::checkShellRectPos))},
	{"checkShellRectSize", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::checkShellRectSize))},
	{"copy", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Insets*(*)($Insets*)>(&XDecoratedPeer::copy))},
	{"copyAndScaleDown", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(XDecoratedPeer::*)($Insets*)>(&XDecoratedPeer::copyAndScaleDown))},
	{"createFocusProxy", "()Lsun/awt/X11/XFocusProxyWindow;", nullptr, 0},
	{"difference", "(Ljava/awt/Insets;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Insets*(*)($Insets*,$Insets*)>(&XDecoratedPeer::difference))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"dumpAll", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpAll))},
	{"dumpContent", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpContent))},
	{"dumpMe", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpMe))},
	{"dumpParent", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpParent))},
	{"dumpShell", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpShell))},
	{"dumpTarget", "()V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::dumpTarget))},
	{"dumpWindow", "(Ljava/lang/String;J)V", nullptr, $FINAL, $method(static_cast<void(XDecoratedPeer::*)($String*,int64_t)>(&XDecoratedPeer::dumpWindow))},
	{"getAbsoluteX", "()I", nullptr, $PUBLIC},
	{"getAbsoluteY", "()I", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getContentWindow", "()J", nullptr, $PUBLIC},
	{"getDecorations", "()I", nullptr, 0},
	{"getDimensions", "()Lsun/awt/X11/WindowDimensions;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$WindowDimensions*(XDecoratedPeer::*)()>(&XDecoratedPeer::getDimensions))},
	{"getFocusProxy", "()Lsun/awt/X11/XFocusProxyWindow;", nullptr, 0},
	{"getFunctions", "()I", nullptr, 0},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getInputMethodHeight", "()I", nullptr, 0},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getRealInsets", "()Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(XDecoratedPeer::*)()>(&XDecoratedPeer::getRealInsets))},
	{"getShell", "()J", nullptr, $PUBLIC},
	{"getShellBounds", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWMProtocols", "()Lsun/awt/X11/XAtomList;", nullptr, $PROTECTED},
	{"getWMSetInsets", "(Lsun/awt/X11/XAtom;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(XDecoratedPeer::*)($XAtom*)>(&XDecoratedPeer::getWMSetInsets))},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getX", "()I", nullptr, $PUBLIC},
	{"getY", "()I", nullptr, $PUBLIC},
	{"gravityBug", "()Z", nullptr, 0},
	{"guessInsets", "()Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(XDecoratedPeer::*)()>(&XDecoratedPeer::guessInsets))},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleCorrectInsets", "(Ljava/awt/Insets;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Insets*)>(&XDecoratedPeer::handleCorrectInsets))},
	{"handleDeiconify", "()V", nullptr, $PUBLIC},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleIconify", "()V", nullptr, $PUBLIC},
	{"handleMoved", "(Lsun/awt/X11/WindowDimensions;)V", nullptr, 0},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleQuit", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::handleQuit))},
	{"handleReparentNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleWindowFocusIn", "(J)V", nullptr, $PUBLIC},
	{"handleWindowFocusOut", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC},
	{"handleWmTakeFocus", "(Lsun/awt/X11/XClientMessageEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($XClientMessageEvent*)>(&XDecoratedPeer::handleWmTakeFocus))},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"isInitialReshape", "()Z", nullptr, $PROTECTED},
	{"isMaximized", "()Z", nullptr, 0},
	{"isNull", "(Ljava/awt/Insets;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Insets*)>(&XDecoratedPeer::isNull))},
	{"isOverrideRedirect", "()Z", nullptr, 0},
	{"isTargetUndecorated", "()Z", nullptr, $ABSTRACT},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"reconfigureContentWindow", "(Lsun/awt/X11/WindowDimensions;)V", nullptr, 0},
	{"requestWindowFocus", "(JZ)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "(Lsun/awt/X11/XWindowPeer;JZ)Z", nullptr, 0},
	{"requestXFocus", "(JZ)V", nullptr, $PROTECTED},
	{"resetWMSetInsets", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::resetWMSetInsets))},
	{"reshape", "(Lsun/awt/X11/WindowDimensions;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($WindowDimensions*,int32_t,bool)>(&XDecoratedPeer::reshape))},
	{"reshape", "(IIIIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)(int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&XDecoratedPeer::reshape))},
	{"setActualFocusedWindow", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setIconHints", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/IconInfo;>;)V", 0},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setShellBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::setShellBounds))},
	{"setShellPosition", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::setShellPosition))},
	{"setShellSize", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)($Rectangle*)>(&XDecoratedPeer::setShellSize))},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"suppressWmTakeFocus", "(Z)V", nullptr, $PROTECTED},
	{"updateMinSizeHints", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDecoratedPeer::*)()>(&XDecoratedPeer::updateMinSizeHints))},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateSizeHints", "(Lsun/awt/X11/WindowDimensions;)V", nullptr, 0},
	{"updateSizeHints", "()V", nullptr, 0},
	{"updateWMName", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _XDecoratedPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDecoratedPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XDecoratedPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XDecoratedPeer",
	"sun.awt.X11.XWindowPeer",
	nullptr,
	_XDecoratedPeer_FieldInfo_,
	_XDecoratedPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XDecoratedPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XDecoratedPeer$1"
};

$Object* allocate$XDecoratedPeer($Class* clazz) {
	return $of($alloc(XDecoratedPeer));
}

bool XDecoratedPeer::$assertionsDisabled = false;
$PlatformLogger* XDecoratedPeer::log = nullptr;
$PlatformLogger* XDecoratedPeer::insLog = nullptr;
$PlatformLogger* XDecoratedPeer::focusLog = nullptr;
$PlatformLogger* XDecoratedPeer::iconLog = nullptr;
$Map* XDecoratedPeer::lastKnownInsets = nullptr;

void XDecoratedPeer::init$($Window* target) {
	$XWindowPeer::init$(target);
	this->reparent_serial = 0;
	this->no_reparent_artifacts = false;
	$set(this, actualFocusedWindow, nullptr);
}

void XDecoratedPeer::init$($XCreateWindowParams* params) {
	$XWindowPeer::init$(params);
	this->reparent_serial = 0;
	this->no_reparent_artifacts = false;
	$set(this, actualFocusedWindow, nullptr);
}

int64_t XDecoratedPeer::getShell() {
	return this->window;
}

int64_t XDecoratedPeer::getContentWindow() {
	return (this->content == nullptr) ? this->window : $nc(this->content)->getWindow();
}

void XDecoratedPeer::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XWindowPeer::preInit(params);
	$nc(this->winAttr)->initialFocus = true;
	$set(this, currentInsets, $new($Insets, 0, 0, 0, 0));
	if ($XWM::getWMID() == $XWM::UNITY_COMPIZ_WM) {
		$set(this, currentInsets, $cast($Insets, $nc(XDecoratedPeer::lastKnownInsets)->get($of(this)->getClass())));
	}
	applyGuessedInsets();
	$init($XBaseWindow);
	$var($Rectangle, bounds, $cast($Rectangle, $nc(params)->get($XBaseWindow::BOUNDS)));
	$set(this, dimensions, $new($WindowDimensions, bounds, $(getRealInsets()), false));
	params->put($XBaseWindow::BOUNDS, $($nc(this->dimensions)->getClientRect()));
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine("Initial dimensions {0}"_s, $$new($ObjectArray, {$of(this->dimensions)}));
	}
	$var($Long, eventMask, $cast($Long, params->get($XBaseWindow::EVENT_MASK)));
	params->add($of($XBaseWindow::EVENT_MASK), $($of($Long::valueOf((int64_t)($nc(eventMask)->longValue() & (uint64_t)~(($XConstants::FocusChangeMask | $XConstants::KeyPressMask) | $XConstants::KeyReleaseMask))))));
}

void XDecoratedPeer::postInit($XCreateWindowParams* params) {
	updateSizeHints(this->dimensions);
	$XWindowPeer::postInit(params);
	setResizable($nc(this->winAttr)->initialResizability);
	$XWM::requestWMExtents(getWindow());
	$set(this, content, $XContentWindow::createContent(this));
	if (this->warningWindow != nullptr) {
		$nc(this->warningWindow)->toFront();
	}
	$set(this, focusProxy, createFocusProxy());
}

void XDecoratedPeer::setIconHints($List* icons) {
	if (!$nc($($XWM::getWM()))->setNetWMIcon(this, icons)) {
		if ($nc(icons)->size() > 0) {
			if (this->iconWindow == nullptr) {
				$set(this, iconWindow, $new($XIconWindow, this));
			}
			$nc(this->iconWindow)->setIconImages(icons);
		}
	}
}

void XDecoratedPeer::updateMinimumSize() {
	$XWindowPeer::updateMinimumSize();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			updateMinSizeHints();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDecoratedPeer::updateMinSizeHints() {
	$useLocalCurrentObjectStackCache();
	if (isResizable()) {
		$var($Dimension, minimumSize, getTargetMinimumSize());
		if (minimumSize != nullptr) {
			$var($Insets, insets, getRealInsets());
			int32_t minWidth = minimumSize->width - $nc(insets)->left - insets->right;
			int32_t minHeight = minimumSize->height - insets->top - insets->bottom;
			if (minWidth < 0) {
				minWidth = 0;
			}
			if (minHeight < 0) {
				minHeight = 0;
			}
			int64_t var$0 = $XUtilConstants::PMinSize | (isLocationByPlatform() ? (int64_t)0 : ($XUtilConstants::PPosition | $XUtilConstants::USPosition));
			int32_t var$1 = getX();
			setSizeHints(var$0, var$1, getY(), minWidth, minHeight);
			if (isVisible()) {
				$var($Rectangle, bounds, getShellBounds());
				int32_t nw = ($nc(bounds)->width < minWidth) ? minWidth : $nc(bounds)->width;
				int32_t nh = (bounds->height < minHeight) ? minHeight : bounds->height;
				if (nw != bounds->width || nh != bounds->height) {
					setShellSize($$new($Rectangle, 0, 0, nw, nh));
				}
			}
		} else {
			bool isMinSizeSet = this->isMinSizeSet();
			$XWM::removeSizeHints(this, $XUtilConstants::PMinSize);
			bool var$2 = isMinSizeSet && isShowing();
			if (var$2 && $XWM::needRemap(this)) {
				xSetVisible(false);
				$XToolkit::XSync();
				xSetVisible(true);
			}
		}
	}
}

$XFocusProxyWindow* XDecoratedPeer::createFocusProxy() {
	return $new($XFocusProxyWindow, this);
}

$XAtomList* XDecoratedPeer::getWMProtocols() {
	$var($XAtomList, protocols, $XWindowPeer::getWMProtocols());
	$init($XWindow);
	$nc(protocols)->add($XWindow::wm_delete_window);
	protocols->add($XWindow::wm_take_focus);
	return protocols;
}

$Graphics* XDecoratedPeer::getGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	$var($SurfaceData, var$0, $nc(this->content)->surfaceData);
	$var($Color, var$1, $nc(compAccessor)->getForeground(this->target));
	$var($Color, var$2, compAccessor->getBackground(this->target));
	return getGraphics(var$0, var$1, var$2, $(compAccessor->getFont(this->target)));
}

void XDecoratedPeer::setTitle($String* title) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::log)->fine($$str({"Title is "_s, title}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc(this->winAttr), title, title);
			updateWMName();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* XDecoratedPeer::getWMName() {
	if ($nc(this->winAttr)->title == nullptr || $($nc($nc(this->winAttr)->title)->trim())->isEmpty()) {
		return " "_s;
	} else {
		return $nc(this->winAttr)->title;
	}
}

void XDecoratedPeer::updateWMName() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XWindowPeer::updateWMName();
			$var($String, name, getWMName());
			if (name == nullptr || $($nc(name)->trim())->isEmpty()) {
				$assign(name, "Java"_s);
			}
			$var($XAtom, iconNameAtom, $XAtom::get($XAtom::XA_WM_ICON_NAME));
			$nc(iconNameAtom)->setProperty(getWindow(), name);
			$var($XAtom, netIconNameAtom, $XAtom::get("_NET_WM_ICON_NAME"_s));
			$nc(netIconNameAtom)->setPropertyUTF8(getWindow(), name);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDecoratedPeer::handleIconify() {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_ICONIFIED));
}

void XDecoratedPeer::handleDeiconify() {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_DEICONIFIED));
}

void XDecoratedPeer::handleFocusEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XWindowPeer::handleFocusEvent(xev);
	$var($XFocusChangeEvent, xfe, $nc(xev)->get_xfocus());
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::focusLog)->finer($$str({"Received focus event on shell: "_s, xfe}));
	}
}

bool XDecoratedPeer::isInitialReshape() {
	return false;
}

$Insets* XDecoratedPeer::difference($Insets* i1, $Insets* i2) {
	$init(XDecoratedPeer);
	return $new($Insets, $nc(i1)->top - $nc(i2)->top, i1->left - i2->left, i1->bottom - i2->bottom, i1->right - i2->right);
}

bool XDecoratedPeer::isNull($Insets* i) {
	$init(XDecoratedPeer);
	return (i == nullptr) || (((($nc(i)->left | i->top) | i->right) | i->bottom) == 0);
}

$Insets* XDecoratedPeer::copy($Insets* i) {
	$init(XDecoratedPeer);
	return $new($Insets, $nc(i)->top, i->left, i->bottom, i->right);
}

$Insets* XDecoratedPeer::copyAndScaleDown($Insets* i) {
	int32_t var$0 = scaleDown($nc(i)->top);
	int32_t var$1 = scaleDown($nc(i)->left);
	int32_t var$2 = scaleDown($nc(i)->bottom);
	return $new($Insets, var$0, var$1, var$2, scaleDown($nc(i)->right));
}

$Insets* XDecoratedPeer::getWMSetInsets($XAtom* changedAtom) {
	if (isEmbedded()) {
		return nullptr;
	}
	if (this->wm_set_insets != nullptr) {
		return this->wm_set_insets;
	}
	if (changedAtom == nullptr) {
		$set(this, wm_set_insets, $XWM::getInsetsFromExtents(getWindow()));
	} else {
		$set(this, wm_set_insets, $XWM::getInsetsFromProp(getWindow(), changedAtom));
	}
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::insLog)->finer("FRAME_EXTENTS: {0}"_s, $$new($ObjectArray, {$of(this->wm_set_insets)}));
	}
	if (this->wm_set_insets != nullptr) {
		$set(this, wm_set_insets, copyAndScaleDown(this->wm_set_insets));
	}
	return this->wm_set_insets;
}

void XDecoratedPeer::resetWMSetInsets() {
	if ($XWM::getWMID() != $XWM::UNITY_COMPIZ_WM) {
		$set(this, currentInsets, $new($Insets, 0, 0, 0, 0));
		$set(this, wm_set_insets, nullptr);
	} else {
		this->insets_corrected = false;
	}
}

void XDecoratedPeer::handlePropertyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XWindowPeer::handlePropertyNotify(xev);
	$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
	bool var$0 = !this->insets_corrected && isReparented();
	if (var$0 && $XWM::getWMID() == $XWM::UNITY_COMPIZ_WM) {
		int32_t state = $nc($($XWM::getWM()))->getState(this);
		if (((int32_t)(state & (uint32_t)$Frame::MAXIMIZED_BOTH)) == $Frame::MAXIMIZED_BOTH) {
			this->insets_corrected = true;
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XConfigureWindow(var$1, getWindow(), 0, 0);
		}
	}
	int64_t var$3 = $nc(ev)->get_atom();
	bool var$2 = var$3 == $nc($XWM::XA_KDE_NET_WM_FRAME_STRUT)->getAtom();
	if (!var$2) {
		int64_t var$4 = $nc(ev)->get_atom();
		var$2 = var$4 == $nc($XWM::XA_NET_FRAME_EXTENTS)->getAtom();
	}
	if (var$2) {
		if ($XWM::getWMID() != $XWM::UNITY_COMPIZ_WM) {
			getWMSetInsets($($XAtom::get(ev->get_atom())));
		} else {
			if (!isReparented()) {
				return;
			}
			$set(this, wm_set_insets, nullptr);
			$var($Insets, in, getWMSetInsets($($XAtom::get(ev->get_atom()))));
			if (isNull(in)) {
				return;
			}
			bool var$5 = !isEmbedded();
			if (var$5 && !isTargetUndecorated()) {
				$nc(XDecoratedPeer::lastKnownInsets)->put($of(this)->getClass(), in);
			}
			if (!$nc(in)->equals($($nc(this->dimensions)->getInsets()))) {
				if (this->insets_corrected || isMaximized()) {
					$set(this, currentInsets, in);
					this->insets_corrected = true;
					int64_t var$6 = $XToolkit::getDisplay();
					$XlibWrapper::XConfigureWindow(var$6, getWindow(), 0, 0);
				} else {
					handleCorrectInsets(in);
				}
			} else if (!this->insets_corrected || !$nc(this->dimensions)->isClientSizeSet()) {
				this->insets_corrected = true;
				int64_t var$7 = $XToolkit::getDisplay();
				$XlibWrapper::XConfigureWindow(var$7, getWindow(), 0, 0);
			}
		}
	}
}

void XDecoratedPeer::handleReparentNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XReparentEvent, xe, $nc(xev)->get_xreparent());
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine($($nc(xe)->toString()));
	}
	this->reparent_serial = $nc(xe)->get_serial();
	int64_t var$0 = $XToolkit::getDisplay();
	int64_t root = $XlibWrapper::RootWindow(var$0, getScreenNumber());
	if (isEmbedded()) {
		setReparented(true);
		this->insets_corrected = true;
		return;
	}
	$init($XWindowAttributesData);
	if (getDecorations() == $XWindowAttributesData::AWT_DECOR_NONE) {
		setReparented(true);
		this->insets_corrected = true;
		reshape(this->dimensions, $ComponentPeer::SET_SIZE, false);
	} else if (xe->get_parent() == root) {
		this->configure_seen = false;
		this->insets_corrected = false;
		if (isVisible()) {
			$nc($($XWM::getWM()))->unshadeKludge(this);
			$nc(XDecoratedPeer::insLog)->fine("- WM exited"_s);
		} else {
			$nc(XDecoratedPeer::insLog)->fine(" - reparent due to hide"_s);
		}
	} else {
		setReparented(true);
		this->insets_corrected = false;
		if ($XWM::getWMID() == $XWM::UNITY_COMPIZ_WM) {
			return;
		}
		$var($Insets, correctWM, getWMSetInsets(nullptr));
		if (correctWM != nullptr) {
			if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XDecoratedPeer::insLog)->finer("wm-provided insets {0}"_s, $$new($ObjectArray, {$of(correctWM)}));
			}
			$var($Insets, dimInsets, $nc(this->dimensions)->getInsets());
			if (correctWM->equals(dimInsets)) {
				$nc(XDecoratedPeer::insLog)->finer("Insets are the same as estimated - no additional reshapes necessary"_s);
				this->no_reparent_artifacts = true;
				this->insets_corrected = true;
				applyGuessedInsets();
				return;
			}
		} else {
			int64_t var$1 = xe->get_window();
			$assign(correctWM, $nc($($XWM::getWM()))->getInsets(this, var$1, xe->get_parent()));
			if (correctWM != nullptr) {
				$assign(correctWM, copyAndScaleDown(correctWM));
			}
			if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				if (correctWM != nullptr) {
					$nc(XDecoratedPeer::insLog)->finer("correctWM {0}"_s, $$new($ObjectArray, {$of(correctWM)}));
				} else {
					$nc(XDecoratedPeer::insLog)->finer("correctWM insets are not available, waiting for configureNotify"_s);
				}
			}
		}
		if (correctWM != nullptr) {
			handleCorrectInsets(correctWM);
		}
	}
}

void XDecoratedPeer::handleCorrectInsets($Insets* correctWM) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, correction, difference(correctWM, this->currentInsets));
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDecoratedPeer::insLog)->finest("Corrention {0}"_s, $$new($ObjectArray, {$of(correction)}));
	}
	if (!isNull(correction)) {
		$set(this, currentInsets, copy(correctWM));
		applyGuessedInsets();
		updateMinSizeHints();
	}
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::insLog)->finer($$str({"Dimensions before reparent: "_s, this->dimensions}));
	}
	$var($WindowDimensions, newDimensions, $new($WindowDimensions, this->dimensions));
	newDimensions->setInsets($(getRealInsets()));
	$set(this, dimensions, newDimensions);
	this->insets_corrected = true;
	if (isMaximized()) {
		return;
	}
	if (((int64_t)($nc($(getHints()))->get_flags() & (uint64_t)($XUtilConstants::USPosition | $XUtilConstants::PPosition))) != 0) {
		reshape(this->dimensions, $ComponentPeer::SET_BOUNDS, false);
	} else {
		reshape(this->dimensions, $ComponentPeer::SET_SIZE, false);
	}
}

void XDecoratedPeer::handleMoved($WindowDimensions* dims) {
	$useLocalCurrentObjectStackCache();
	$var($Point, loc, $nc(dims)->getLocation());
	$nc($($AWTAccessor::getComponentAccessor()))->setLocation(this->target, $nc(loc)->x, loc->y);
	postEvent($$new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_MOVED));
}

$Insets* XDecoratedPeer::guessInsets() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isEmbedded();
	if (var$0 || isTargetUndecorated()) {
		return $new($Insets, 0, 0, 0, 0);
	} else if (!isNull(this->currentInsets)) {
		return copy(this->currentInsets);
	} else {
		$var($Insets, res, getWMSetInsets(nullptr));
		if (res == nullptr) {
			$assign(res, $nc($($XWM::getWM()))->guessInsets(this));
			if (res != nullptr) {
				$assign(res, copyAndScaleDown(res));
			}
		}
		return res;
	}
}

void XDecoratedPeer::applyGuessedInsets() {
	$var($Insets, guessed, guessInsets());
	$set(this, currentInsets, copy(guessed));
}

$Insets* XDecoratedPeer::getRealInsets() {
	if (isNull(this->currentInsets)) {
		applyGuessedInsets();
	}
	return this->currentInsets;
}

$Insets* XDecoratedPeer::getInsets() {
	$useLocalCurrentObjectStackCache();
	$var($Insets, in, copy($(getRealInsets())));
	$nc(in)->top += getMenuBarHeight();
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDecoratedPeer::insLog)->finest("Get insets returns {0}"_s, $$new($ObjectArray, {$of(in)}));
	}
	return in;
}

bool XDecoratedPeer::gravityBug() {
	return $XWM::configureGravityBuggy();
}

int32_t XDecoratedPeer::getInputMethodHeight() {
	return 0;
}

void XDecoratedPeer::updateSizeHints($WindowDimensions* dims) {
	$var($Rectangle, rec, $nc(dims)->getClientRect());
	checkShellRect(rec);
	updateSizeHints($nc(rec)->x, rec->y, rec->width, rec->height);
}

void XDecoratedPeer::updateSizeHints() {
	updateSizeHints(this->dimensions);
}

void XDecoratedPeer::reshape($WindowDimensions* newDimensions$renamed, int32_t op, bool userReshape) {
	$useLocalCurrentObjectStackCache();
	$var($WindowDimensions, newDimensions, newDimensions$renamed);
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine($$str({"Reshaping "_s, this, " to "_s, newDimensions, " op "_s, $$str(op), " user reshape "_s, $$str(userReshape)}));
	}
	if (userReshape) {
		$var($Rectangle, newBounds, $nc(newDimensions)->getBounds());
		$var($Insets, insets, newDimensions->getInsets());
		if (newDimensions->isClientSizeSet()) {
			$assign(newBounds, $new($Rectangle, $nc(newBounds)->x, newBounds->y, newBounds->width - $nc(insets)->left - insets->right, newBounds->height - insets->top - insets->bottom));
		}
		$assign(newDimensions, $new($WindowDimensions, newBounds, insets, newDimensions->isClientSizeSet()));
	}
	bool var$0 = !isReparented();
	if (var$0 || !isVisible()) {
		if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XDecoratedPeer::insLog)->fine("- not reparented({0}) or not visible({1}), default reshape"_s, $$new($ObjectArray, {
				$($of($Boolean::valueOf(isReparented()))),
				$($of($Boolean::valueOf(this->visible)))
			}));
		}
		$var($Point, oldLocation, getLocation());
		int32_t var$1 = $nc($($AWTAccessor::getComponentAccessor()))->getX(this->target);
		$var($Point, newLocation, $new($Point, var$1, $nc($($AWTAccessor::getComponentAccessor()))->getY(this->target)));
		if (!newLocation->equals(oldLocation)) {
			handleMoved(newDimensions);
		}
		$set(this, dimensions, $new($WindowDimensions, newDimensions));
		updateSizeHints(this->dimensions);
		$var($Rectangle, client, $nc(this->dimensions)->getClientRect());
		checkShellRect(client);
		setShellBounds(client);
		if (this->content != nullptr && !$nc($($nc(this->content)->getSize()))->equals($($nc(newDimensions)->getSize()))) {
			reconfigureContentWindow(newDimensions);
		}
		return;
	}
	updateChildrenSizes();
	applyGuessedInsets();
	$var($Rectangle, shellRect, $nc(newDimensions)->getClientRect());
	if (gravityBug()) {
		$var($Insets, in, newDimensions->getInsets());
		$nc(shellRect)->translate($nc(in)->left, in->top);
	}
	if (((int32_t)(op & (uint32_t)$ComponentPeer::NO_EMBEDDED_CHECK)) == 0 && isEmbedded()) {
		$nc(shellRect)->setLocation(0, 0);
	}
	checkShellRectSize(shellRect);
	if (!isEmbedded()) {
		checkShellRectPos(shellRect);
	}
	op = (int32_t)(op & (uint32_t)~$ComponentPeer::NO_EMBEDDED_CHECK);
	if (op == $ComponentPeer::SET_LOCATION) {
		setShellPosition(shellRect);
	} else if (isResizable()) {
		if (op == $ComponentPeer::SET_BOUNDS) {
			setShellBounds(shellRect);
		} else {
			setShellSize(shellRect);
		}
	} else {
		$XWM::setShellNotResizable(this, newDimensions, shellRect, true);
		if (op == $ComponentPeer::SET_BOUNDS) {
			setShellPosition(shellRect);
		}
	}
	reconfigureContentWindow(newDimensions);
}

void XDecoratedPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height, int32_t operation, bool userReshape) {
	$useLocalCurrentObjectStackCache();
	$var($WindowDimensions, dims, $new($WindowDimensions, this->dimensions));
	switch ((int32_t)(operation & (uint32_t)(~$ComponentPeer::NO_EMBEDDED_CHECK))) {
	case $ComponentPeer::SET_LOCATION:
		{
			dims->setLocation(x, y);
			break;
		}
	case $ComponentPeer::SET_SIZE:
		{
			dims->setSize(width, height);
			break;
		}
	case $ComponentPeer::SET_CLIENT_SIZE:
		{
			{
				$var($Insets, in, this->currentInsets);
				width -= $nc(in)->left + in->right;
				height -= in->top + in->bottom;
				dims->setClientSize(width, height);
				break;
			}
		}
	case $ComponentPeer::SET_BOUNDS:
		{}
	default:
		{
			dims->setLocation(x, y);
			dims->setSize(width, height);
			break;
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine("For the operation {0} new dimensions are {1}"_s, $$new($ObjectArray, {
			$($of(operationToString(operation))),
			$of(dims)
		}));
	}
	reshape(dims, operation, userReshape);
}

void XDecoratedPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			reshape(x, y, width, height, op, true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	validateSurface();
}

void XDecoratedPeer::reconfigureContentWindow($WindowDimensions* dims) {
	if (this->content == nullptr) {
		$nc(XDecoratedPeer::insLog)->fine("WARNING: Content window is null"_s);
		return;
	}
	$nc(this->content)->setContentBounds(dims);
}

void XDecoratedPeer::handleConfigureNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	if ($XWM::getWMID() == $XWM::UNITY_COMPIZ_WM && !this->insets_corrected) {
		return;
	}
	if (!XDecoratedPeer::$assertionsDisabled && !($SunToolkit::isAWTLockHeldByCurrentThread())) {
		$throwNew($AssertionError);
	}
	$var($XConfigureEvent, xe, $nc(xev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine("Configure notify {0}"_s, $$new($ObjectArray, {$of(xe)}));
	}
	if (isReparented()) {
		this->configure_seen = true;
	}
	bool var$0 = !isMaximized();
	if (var$0) {
		bool var$1 = $nc(xe)->get_serial() == this->reparent_serial;
		if (!var$1) {
			int64_t var$2 = $nc(xe)->get_window();
			var$1 = var$2 != getShell();
		}
		var$0 = (var$1);
	}
	if (var$0 && !this->no_reparent_artifacts) {
		$nc(XDecoratedPeer::insLog)->fine("- reparent artifact, skipping"_s);
		return;
	}
	this->no_reparent_artifacts = false;
	bool var$3 = !isVisible();
	if (var$3 && $XWM::getWMID() != $XWM::NO_WM) {
		$nc(XDecoratedPeer::insLog)->fine(" - not visible, skipping"_s);
		return;
	}
	int32_t runningWM = $XWM::getWMID();
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine("reparented={0}, visible={1}, WM={2}, decorations={3}"_s, $$new($ObjectArray, {
			$($of($Boolean::valueOf(isReparented()))),
			$($of($Boolean::valueOf(isVisible()))),
			$($of($Integer::valueOf(runningWM))),
			$($of($Integer::valueOf(getDecorations())))
		}));
	}
	bool var$6 = !isReparented();
	bool var$5 = var$6 && isVisible() && runningWM != $XWM::NO_WM;
	bool var$4 = var$5 && !$XWM::isNonReparentingWM();
	$init($XWindowAttributesData);
	if (var$4 && getDecorations() != $XWindowAttributesData::AWT_DECOR_NONE) {
		$nc(XDecoratedPeer::insLog)->fine("- visible but not reparented, skipping"_s);
		return;
	}
	if (!this->insets_corrected && getDecorations() != $XWindowAttributesData::AWT_DECOR_NONE) {
		int64_t parent = $XlibUtil::getParentWindow(this->window);
		$var($Insets, correctWM, (parent != -1) ? $nc($($XWM::getWM()))->getInsets(this, this->window, parent) : ($Insets*)nullptr);
		if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
			if (correctWM != nullptr) {
				$nc(XDecoratedPeer::insLog)->finer($$str({"Configure notify - insets : "_s, correctWM}));
			} else {
				$nc(XDecoratedPeer::insLog)->finer("Configure notify - insets are still not available"_s);
			}
		}
		if (correctWM != nullptr) {
			handleCorrectInsets($(copyAndScaleDown(correctWM)));
		} else {
			this->insets_corrected = true;
		}
	}
	updateChildrenSizes();
	$var($Point, newLocation, getNewLocation(xe, $nc(this->currentInsets)->left, $nc(this->currentInsets)->top));
	$var($Point, var$7, newLocation);
	int32_t var$9 = scaleDown($nc(xe)->get_width());
	$var($Dimension, var$8, $new($Dimension, var$9, scaleDown($nc(xe)->get_height())));
	$var($WindowDimensions, newDimensions, $new($WindowDimensions, var$7, var$8, $(copy(this->currentInsets)), true));
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::insLog)->finer("Insets are {0}, new dimensions {1}"_s, $$new($ObjectArray, {
			$of(this->currentInsets),
			$of(newDimensions)
		}));
	}
	checkIfOnNewScreen($(newDimensions->getBounds()));
	$var($Point, oldLocation, getLocation());
	$set(this, dimensions, newDimensions);
	if (!$nc(newLocation)->equals(oldLocation)) {
		handleMoved(newDimensions);
	}
	reconfigureContentWindow(newDimensions);
	updateChildrenSizes();
	repositionSecurityWarning();
}

void XDecoratedPeer::checkShellRectSize($Rectangle* shellRect) {
	$nc(shellRect)->width = $Math::max($XBaseWindow::MIN_SIZE, shellRect->width);
	shellRect->height = $Math::max($XBaseWindow::MIN_SIZE, shellRect->height);
}

void XDecoratedPeer::checkShellRectPos($Rectangle* shellRect) {
	int32_t wm = $XWM::getWMID();
	if (wm == $XWM::MOTIF_WM || wm == $XWM::CDE_WM) {
		if ($nc(shellRect)->x == 0 && shellRect->y == 0) {
			shellRect->x = (shellRect->y = 1);
		}
	}
}

void XDecoratedPeer::checkShellRect($Rectangle* shellRect) {
	checkShellRectSize(shellRect);
	checkShellRectPos(shellRect);
}

void XDecoratedPeer::setShellBounds($Rectangle* rec) {
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine($$str({"Setting shell bounds on "_s, this, " to "_s, rec}));
	}
	updateSizeHints($nc(rec)->x, rec->y, rec->width, rec->height);
	int64_t var$0 = $XToolkit::getDisplay();
	int64_t var$1 = getShell();
	int32_t var$2 = scaleUp($nc(rec)->x);
	int32_t var$3 = scaleUp($nc(rec)->y);
	int32_t var$4 = scaleUp($nc(rec)->width);
	$XlibWrapper::XMoveResizeWindow(var$0, var$1, var$2, var$3, var$4, scaleUp($nc(rec)->height));
}

void XDecoratedPeer::setShellSize($Rectangle* rec) {
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine($$str({"Setting shell size on "_s, this, " to "_s, rec}));
	}
	updateSizeHints($nc(rec)->x, rec->y, rec->width, rec->height);
	int64_t var$0 = $XToolkit::getDisplay();
	int64_t var$1 = getShell();
	int32_t var$2 = scaleUp($nc(rec)->width);
	$XlibWrapper::XResizeWindow(var$0, var$1, var$2, scaleUp($nc(rec)->height));
}

void XDecoratedPeer::setShellPosition($Rectangle* rec) {
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine($$str({"Setting shell position on "_s, this, " to "_s, rec}));
	}
	updateSizeHints($nc(rec)->x, rec->y, rec->width, rec->height);
	int64_t var$0 = $XToolkit::getDisplay();
	int64_t var$1 = getShell();
	int32_t var$2 = scaleUp($nc(rec)->x);
	$XlibWrapper::XMoveWindow(var$0, var$1, var$2, scaleUp($nc(rec)->y));
}

void XDecoratedPeer::setResizable(bool resizable) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t fs = $nc(this->winAttr)->functions;
			if (!isResizable() && resizable) {
				resetWMSetInsets();
				if (!isEmbedded()) {
					setReparented(false);
				}
				$nc(this->winAttr)->isResizable = resizable;
				if (((int32_t)(fs & (uint32_t)$MWMConstants::MWM_FUNC_ALL)) != 0) {
					fs &= (uint32_t)~($MWMConstants::MWM_FUNC_RESIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
				} else {
					fs |= ($MWMConstants::MWM_FUNC_RESIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
				}
				$nc(this->winAttr)->functions = fs;
				$XWM::setShellResizable(this);
			} else if (isResizable() && !resizable) {
				resetWMSetInsets();
				if (!isEmbedded()) {
					setReparented(false);
				}
				$nc(this->winAttr)->isResizable = resizable;
				if (((int32_t)(fs & (uint32_t)$MWMConstants::MWM_FUNC_ALL)) != 0) {
					fs |= ($MWMConstants::MWM_FUNC_RESIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
				} else {
					fs &= (uint32_t)~($MWMConstants::MWM_FUNC_RESIZE | $MWMConstants::MWM_FUNC_MAXIMIZE);
				}
				$nc(this->winAttr)->functions = fs;
				$XWM::setShellNotResizable(this, this->dimensions, $XWM::getWMID() == $XWM::UNITY_COMPIZ_WM && this->configure_seen ? $($nc(this->dimensions)->getScreenBounds()) : $($nc(this->dimensions)->getBounds()), false);
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
}

$Rectangle* XDecoratedPeer::getShellBounds() {
	return $nc(this->dimensions)->getClientRect();
}

$Rectangle* XDecoratedPeer::getBounds() {
	return $nc(this->dimensions)->getBounds();
}

$Dimension* XDecoratedPeer::getSize() {
	return $nc(this->dimensions)->getSize();
}

int32_t XDecoratedPeer::getX() {
	return $nc($($nc(this->dimensions)->getLocation()))->x;
}

int32_t XDecoratedPeer::getY() {
	return $nc($($nc(this->dimensions)->getLocation()))->y;
}

$Point* XDecoratedPeer::getLocation() {
	return $nc(this->dimensions)->getLocation();
}

int32_t XDecoratedPeer::getAbsoluteX() {
	return $nc($($nc(this->dimensions)->getScreenBounds()))->x;
}

int32_t XDecoratedPeer::getAbsoluteY() {
	return $nc($($nc(this->dimensions)->getScreenBounds()))->y;
}

int32_t XDecoratedPeer::getWidth() {
	return $nc($(getSize()))->width;
}

int32_t XDecoratedPeer::getHeight() {
	return $nc($(getSize()))->height;
}

$WindowDimensions* XDecoratedPeer::getDimensions() {
	return this->dimensions;
}

$Point* XDecoratedPeer::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Point, var$2, nullptr);
		bool return$1 = false;
		try {
			if (this->configure_seen) {
				$assign(var$2, toGlobal(0, 0));
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$var($Point, location, $nc(this->target)->getLocation());
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::insLog)->fine("getLocationOnScreen {0} not reparented: {1} "_s, $$new($ObjectArray, {
			$of(this),
			$of(location)
		}));
	}
	return location;
}

bool XDecoratedPeer::isEventDisabled($XEvent* e) {
	switch ($nc(e)->get_type()) {
	case $XConstants::ConfigureNotify:
		{
			return true;
		}
	case $XConstants::EnterNotify:
		{}
	case $XConstants::LeaveNotify:
		{
			return true;
		}
	default:
		{
			return $XWindowPeer::isEventDisabled(e);
		}
	}
}

int32_t XDecoratedPeer::getDecorations() {
	return $nc(this->winAttr)->decorations;
}

int32_t XDecoratedPeer::getFunctions() {
	return $nc(this->winAttr)->functions;
}

void XDecoratedPeer::setVisible(bool vis) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::log)->finer("Setting {0} to visible {1}"_s, $$new($ObjectArray, {
			$of(this),
			$($of($Boolean::valueOf(vis)))
		}));
	}
	if (vis && !isVisible()) {
		$XWM::setShellDecor(this);
		$XWindowPeer::setVisible(vis);
		if ($nc(this->winAttr)->isResizable) {
			$XWM::removeSizeHints(this, $XUtilConstants::PMaxSize);
			updateMinimumSize();
		}
	} else {
		$XWindowPeer::setVisible(vis);
	}
}

void XDecoratedPeer::suppressWmTakeFocus(bool doSuppress) {
	$var($XAtomList, protocols, getWMProtocols());
	if (doSuppress) {
		$init($XWindow);
		$nc(protocols)->remove($XWindow::wm_take_focus);
	} else {
		$init($XWindow);
		$nc(protocols)->add($XWindow::wm_take_focus);
	}
	$init($XWindow);
	$nc($XWindow::wm_protocols)->setAtomListProperty(static_cast<$XBaseWindow*>(this), protocols);
}

void XDecoratedPeer::dispose() {
	if (this->content != nullptr) {
		$nc(this->content)->destroy();
	}
	$nc(this->focusProxy)->destroy();
	if (this->iconWindow != nullptr) {
		$nc(this->iconWindow)->destroy();
	}
	$XWindowPeer::dispose();
}

void XDecoratedPeer::handleClientMessage($XEvent* xev) {
	$XWindowPeer::handleClientMessage(xev);
	$var($XClientMessageEvent, cl, $nc(xev)->get_xclient());
	$init($XWindow);
	bool var$0 = ($XWindow::wm_protocols != nullptr);
	if (var$0) {
		int64_t var$1 = $nc(cl)->get_message_type();
		var$0 = (var$1 == $nc($XWindow::wm_protocols)->getAtom());
	}
	if (var$0) {
		int64_t var$2 = cl->get_data(0);
		if (var$2 == $nc($XWindow::wm_delete_window)->getAtom()) {
			handleQuit();
		} else {
			int64_t var$4 = cl->get_data(0);
			if (var$4 == $nc($XWindow::wm_take_focus)->getAtom()) {
				handleWmTakeFocus(cl);
			}
		}
	}
}

void XDecoratedPeer::handleWmTakeFocus($XClientMessageEvent* cl) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::focusLog)->fine("WM_TAKE_FOCUS on {0}"_s, $$new($ObjectArray, {$of(this)}));
	}
	if ($XWM::getWMID() == $XWM::UNITY_COMPIZ_WM) {
		$var($Window, focusedWindow, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
		$var($Window, activeWindow, $XWindowPeer::getDecoratedOwner(focusedWindow));
		if (!$equals(activeWindow, this->target)) {
			requestWindowFocus($nc(cl)->get_data(1), true);
		} else {
			$var($WindowEvent, we, $new($WindowEvent, focusedWindow, $WindowEvent::WINDOW_GAINED_FOCUS));
			sendEvent(we);
		}
	} else {
		requestWindowFocus($nc(cl)->get_data(1), true);
	}
}

void XDecoratedPeer::requestXFocus(int64_t time, bool timeProvided) {
	$useLocalCurrentObjectStackCache();
	if (this->focusProxy == nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::WARNING)) {
			$nc(XDecoratedPeer::focusLog)->warning($$str({"Focus proxy is null for "_s, this}));
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XDecoratedPeer::focusLog)->fine($$str({"Requesting focus to proxy: "_s, this->focusProxy}));
		}
		if (timeProvided) {
			$nc(this->focusProxy)->xRequestFocus(time);
		} else {
			$nc(this->focusProxy)->xRequestFocus();
		}
	}
}

$XFocusProxyWindow* XDecoratedPeer::getFocusProxy() {
	return this->focusProxy;
}

void XDecoratedPeer::handleQuit() {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_CLOSING));
}

void XDecoratedPeer::dumpMe() {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({">>> Peer: "_s, $$str(this->x), ", "_s, $$str(this->y), ", "_s, $$str(this->width), ", "_s, $$str(this->height)}));
}

void XDecoratedPeer::dumpTarget() {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	int32_t getWidth = $nc(compAccessor)->getWidth(this->target);
	int32_t getHeight = compAccessor->getHeight(this->target);
	int32_t getTargetX = compAccessor->getX(this->target);
	int32_t getTargetY = compAccessor->getY(this->target);
	$nc($System::err)->println($$str({">>> Target: "_s, $$str(getTargetX), ", "_s, $$str(getTargetY), ", "_s, $$str(getWidth), ", "_s, $$str(getHeight)}));
}

void XDecoratedPeer::dumpShell() {
	dumpWindow("Shell"_s, getShell());
}

void XDecoratedPeer::dumpContent() {
	dumpWindow("Content"_s, getContentWindow());
}

void XDecoratedPeer::dumpParent() {
	int64_t parent = $XlibUtil::getParentWindow(getShell());
	if (parent != 0) {
		dumpWindow("Parent"_s, parent);
	} else {
		$nc($System::err)->println(">>> NO PARENT"_s);
	}
}

void XDecoratedPeer::dumpWindow($String* id, int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($XWindowAttributes, pattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), window, pattr->pData);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			$var($String, var$7, $$str({">>>> "_s, id, ": "_s, $$str(pattr->get_x()), ", "_s}));
			$var($String, var$6, $$concat(var$7, $$str(pattr->get_y())));
			$var($String, var$5, $$concat(var$6, ", "_s));
			$var($String, var$4, $$concat(var$5, $$str(pattr->get_width())));
			$var($String, var$3, $$concat(var$4, ", "_s));
			$nc($System::err)->println($$concat(var$3, $$str(pattr->get_height())));
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} /*finally*/ {
			pattr->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDecoratedPeer::dumpAll() {
	dumpTarget();
	dumpMe();
	dumpParent();
	dumpShell();
	dumpContent();
}

bool XDecoratedPeer::isMaximized() {
	return false;
}

bool XDecoratedPeer::isOverrideRedirect() {
	$init($Window$Type);
	return $Window$Type::POPUP->equals($(getWindowType()));
}

bool XDecoratedPeer::requestWindowFocus(int64_t time, bool timeProvided) {
	$useLocalCurrentObjectStackCache();
	$nc(XDecoratedPeer::focusLog)->fine("Request for decorated window focus"_s);
	$var($Window, focusedWindow, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	$var($Window, activeWindow, $XWindowPeer::getDecoratedOwner(focusedWindow));
	$init($PlatformLogger$Level);
	if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XDecoratedPeer::focusLog)->finer("Current window is: active={0}, focused={1}"_s, $$new($ObjectArray, {
			$($of($Boolean::valueOf($equals(this->target, activeWindow)))),
			$($of($Boolean::valueOf($equals(this->target, focusedWindow))))
		}));
	}
	$var($XWindowPeer, toFocus, this);
	while ($nc(toFocus)->nextTransientFor != nullptr) {
		$assign(toFocus, toFocus->nextTransientFor);
	}
	if (toFocus == nullptr || !$nc(toFocus)->focusAllowedFor()) {
		return false;
	}
	if ($equals(this, toFocus)) {
		if (isWMStateNetHidden()) {
			$nc(XDecoratedPeer::focusLog)->fine("The window is unmapped, so rejecting the request"_s);
			return false;
		}
		if ($equals(this->target, activeWindow) && !$equals(this->target, focusedWindow)) {
			$nc(XDecoratedPeer::focusLog)->fine("Focus is on child window - transferring it back to the owner"_s);
			handleWindowFocusInSync(-1);
			return true;
		}
		$var($Window, realNativeFocusedWindow, $XWindowPeer::getNativeFocusedWindow());
		if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(XDecoratedPeer::focusLog)->finest($$str({"Real native focused window: "_s, realNativeFocusedWindow, "\nKFM\'s focused window: "_s, focusedWindow}));
		}
		if ($equals(this->target, realNativeFocusedWindow) && $XWM::getWMID() == $XWM::METACITY_WM) {
			if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XDecoratedPeer::focusLog)->fine("The window is already natively focused."_s);
			}
			return true;
		}
	}
	if ($nc(XDecoratedPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDecoratedPeer::focusLog)->fine($$str({"Requesting focus to "_s, ($equals(this, toFocus) ? $of("this window"_s) : $of(toFocus))}));
	}
	if (timeProvided) {
		$nc(toFocus)->requestXFocus(time);
	} else {
		$nc(toFocus)->requestXFocus();
	}
	return ($equals(this, toFocus));
}

void XDecoratedPeer::setActualFocusedWindow($XWindowPeer* actualFocusedWindow) {
	$synchronized(getStateLock()) {
		$set(this, actualFocusedWindow, actualFocusedWindow);
	}
}

bool XDecoratedPeer::requestWindowFocus($XWindowPeer* actualFocusedWindow, int64_t time, bool timeProvided) {
	setActualFocusedWindow(actualFocusedWindow);
	return requestWindowFocus(time, timeProvided);
}

void XDecoratedPeer::handleWindowFocusIn(int64_t serial) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->actualFocusedWindow) {
		$XWindowPeer::handleWindowFocusIn(serial);
	} else {
		postEvent($$new($InvocationEvent, this->target, $$new($XDecoratedPeer$1, this)));
	}
}

void XDecoratedPeer::handleWindowFocusOut($Window* oppositeWindow, int64_t serial) {
	$useLocalCurrentObjectStackCache();
	$var($Window, actualFocusedWindow, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	if (actualFocusedWindow != nullptr && !$equals(actualFocusedWindow, this->target)) {
		$var($Window, owner, $XWindowPeer::getDecoratedOwner(actualFocusedWindow));
		if (owner != nullptr && $equals(owner, this->target)) {
			setActualFocusedWindow($cast($XWindowPeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(actualFocusedWindow))));
		}
	}
	$XWindowPeer::handleWindowFocusOut(oppositeWindow, serial);
}

void clinit$XDecoratedPeer($Class* class$) {
	XDecoratedPeer::$assertionsDisabled = !XDecoratedPeer::class$->desiredAssertionStatus();
	$assignStatic(XDecoratedPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XDecoratedPeer"_s));
	$assignStatic(XDecoratedPeer::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XDecoratedPeer"_s));
	$assignStatic(XDecoratedPeer::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XDecoratedPeer"_s));
	$assignStatic(XDecoratedPeer::iconLog, $PlatformLogger::getLogger("sun.awt.X11.icon.XDecoratedPeer"_s));
	$assignStatic(XDecoratedPeer::lastKnownInsets, $Collections::synchronizedMap($$new($HashMap)));
}

XDecoratedPeer::XDecoratedPeer() {
}

$Class* XDecoratedPeer::load$($String* name, bool initialize) {
	$loadClass(XDecoratedPeer, name, initialize, &_XDecoratedPeer_ClassInfo_, clinit$XDecoratedPeer, allocate$XDecoratedPeer);
	return class$;
}

$Class* XDecoratedPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun