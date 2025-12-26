#include <sun/awt/X11/XBaseWindow.h>

#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/StackTraceElement.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAwtState.h>
#include <sun/awt/X11/XBaseWindow$1.h>
#include <sun/awt/X11/XBaseWindow$InitialiseState.h>
#include <sun/awt/X11/XBaseWindow$StateLock.h>
#include <sun/awt/X11/XButtonEvent.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyCache.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSetWindowAttributes.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWMHints.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALL_BUTTONS_MASK
#undef BACKGROUND_PIXMAP
#undef BACKING_STORE
#undef BIT_GRAVITY
#undef BORDER_PIXEL
#undef BOUNDS
#undef COLORMAP
#undef DEF_LOCATION
#undef DELAYED
#undef DEPTH
#undef EMBEDDED
#undef EVENT_MASK
#undef FAILED_INITIALISATION
#undef FINE
#undef FINER
#undef FINEST
#undef INITIALISED
#undef INITIALISING
#undef MAX_BUTTONS_SUPPORTED
#undef MAX_VALUE
#undef MIN_SIZE
#undef OVERRIDE_REDIRECT
#undef PARENT
#undef PARENT_WINDOW
#undef SAVE_UNDER
#undef TRUE
#undef VALUE_MASK
#undef VISIBLE
#undef VISUAL
#undef VISUAL_CLASS
#undef XA_WM_CLASS
#undef XA_WM_NAME

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAwtState = ::sun::awt::X11::XAwtState;
using $XBaseWindow$1 = ::sun::awt::X11::XBaseWindow$1;
using $XBaseWindow$InitialiseState = ::sun::awt::X11::XBaseWindow$InitialiseState;
using $XBaseWindow$StateLock = ::sun::awt::X11::XBaseWindow$StateLock;
using $XButtonEvent = ::sun::awt::X11::XButtonEvent;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyCache = ::sun::awt::X11::XPropertyCache;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSetWindowAttributes = ::sun::awt::X11::XSetWindowAttributes;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XWM = ::sun::awt::X11::XWM;
using $XWMHints = ::sun::awt::X11::XWMHints;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XBaseWindow_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XBaseWindow, log)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XBaseWindow, insLog)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XBaseWindow, eventLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XBaseWindow, focusLog)},
	{"grabLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XBaseWindow, grabLog)},
	{"PARENT_WINDOW", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, PARENT_WINDOW)},
	{"BOUNDS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, BOUNDS)},
	{"OVERRIDE_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, OVERRIDE_REDIRECT)},
	{"EVENT_MASK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, EVENT_MASK)},
	{"VALUE_MASK", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, VALUE_MASK)},
	{"BORDER_PIXEL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, BORDER_PIXEL)},
	{"COLORMAP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, COLORMAP)},
	{"DEPTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, DEPTH)},
	{"VISUAL_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, VISUAL_CLASS)},
	{"VISUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, VISUAL)},
	{"EMBEDDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, EMBEDDED)},
	{"DELAYED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, DELAYED)},
	{"PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, PARENT)},
	{"BACKGROUND_PIXMAP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, BACKGROUND_PIXMAP)},
	{"VISIBLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, VISIBLE)},
	{"SAVE_UNDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, SAVE_UNDER)},
	{"BACKING_STORE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, BACKING_STORE)},
	{"BIT_GRAVITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XBaseWindow, BIT_GRAVITY)},
	{"delayedParams", "Lsun/awt/X11/XCreateWindowParams;", nullptr, $PRIVATE, $field(XBaseWindow, delayedParams)},
	{"children", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Long;>;", 0, $field(XBaseWindow, children)},
	{"window", "J", nullptr, 0, $field(XBaseWindow, window)},
	{"visible", "Z", nullptr, 0, $field(XBaseWindow, visible)},
	{"mapped", "Z", nullptr, 0, $field(XBaseWindow, mapped)},
	{"embedded", "Z", nullptr, 0, $field(XBaseWindow, embedded)},
	{"maxBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(XBaseWindow, maxBounds)},
	{"parentWindow", "Lsun/awt/X11/XBaseWindow;", nullptr, $VOLATILE, $field(XBaseWindow, parentWindow)},
	{"disposed", "Z", nullptr, $PRIVATE, $field(XBaseWindow, disposed)},
	{"screen", "J", nullptr, $PRIVATE, $field(XBaseWindow, screen)},
	{"hints", "Lsun/awt/X11/XSizeHints;", nullptr, $PRIVATE, $field(XBaseWindow, hints)},
	{"wmHints", "Lsun/awt/X11/XWMHints;", nullptr, $PRIVATE, $field(XBaseWindow, wmHints)},
	{"MIN_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XBaseWindow, MIN_SIZE)},
	{"DEF_LOCATION", "I", nullptr, $STATIC | $FINAL, $constField(XBaseWindow, DEF_LOCATION)},
	{"wm_client_leader", "Lsun/awt/X11/XAtom;", nullptr, $PRIVATE | $STATIC, $staticField(XBaseWindow, wm_client_leader)},
	{"initialising", "Lsun/awt/X11/XBaseWindow$InitialiseState;", nullptr, $PRIVATE, $field(XBaseWindow, initialising)},
	{"x", "I", nullptr, 0, $field(XBaseWindow, x)},
	{"y", "I", nullptr, 0, $field(XBaseWindow, y)},
	{"width", "I", nullptr, 0, $field(XBaseWindow, width)},
	{"height", "I", nullptr, 0, $field(XBaseWindow, height)},
	{"state_lock", "Lsun/awt/X11/XBaseWindow$StateLock;", nullptr, $PROTECTED, $field(XBaseWindow, state_lock)},
	{}
};

$MethodInfo _XBaseWindow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XBaseWindow::*)()>(&XBaseWindow::init$))},
	{"<init>", "(JLjava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(XBaseWindow::*)(int64_t,$Rectangle*)>(&XBaseWindow::init$))},
	{"<init>", "(Ljava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(XBaseWindow::*)($Rectangle*)>(&XBaseWindow::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC, $method(static_cast<void(XBaseWindow::*)($XCreateWindowParams*)>(&XBaseWindow::init$))},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(XBaseWindow::*)(int64_t)>(&XBaseWindow::init$))},
	{"awtLock", "()V", nullptr, 0},
	{"awtLockNotifyAll", "()V", nullptr, 0},
	{"awtLockWait", "()V", nullptr, 0, nullptr, "java.lang.InterruptedException"},
	{"awtUnlock", "()V", nullptr, 0},
	{"checkInitialised", "()Z", nullptr, $PUBLIC},
	{"checkParams", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PROTECTED},
	{"checkSecurity", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XBaseWindow::checkSecurity))},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{"containsGlobal", "(II)Z", nullptr, $PUBLIC},
	{"create", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PRIVATE, $method(static_cast<void(XBaseWindow::*)($XCreateWindowParams*)>(&XBaseWindow::create))},
	{"destroy", "()V", nullptr, 0},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"dispatchToWindow", "(Lsun/awt/X11/XEvent;)V", nullptr, $STATIC, $method(static_cast<void(*)($XEvent*)>(&XBaseWindow::dispatchToWindow))},
	{"flush", "()V", nullptr, 0},
	{"getAbsoluteX", "()I", nullptr, $PUBLIC},
	{"getAbsoluteY", "()I", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getChildren", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Long;>;", $PUBLIC},
	{"getContentWindow", "()J", nullptr, $PUBLIC},
	{"getContentXWindow", "()Lsun/awt/X11/XBaseWindow;", nullptr, $PUBLIC},
	{"getDelayedParams", "()Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, 0},
	{"getHints", "()Lsun/awt/X11/XSizeHints;", nullptr, $PUBLIC},
	{"getParentWindow", "()Lsun/awt/X11/XBaseWindow;", nullptr, $PUBLIC},
	{"getScale", "()I", nullptr, $PROTECTED},
	{"getScreen", "()J", nullptr, 0},
	{"getScreenNumber", "()J", nullptr, 0},
	{"getScreenOfWindow", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&XBaseWindow::getScreenOfWindow))},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getStateLock", "()Ljava/lang/Object;", nullptr, 0},
	{"getToplevelXWindow", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC},
	{"getWMHints", "()Lsun/awt/X11/XWMHints;", nullptr, $PUBLIC},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWidth", "()I", nullptr, 0},
	{"getWindow", "()J", nullptr, $PUBLIC},
	{"getX", "()I", nullptr, 0},
	{"getXAWTRootWindow", "()Lsun/awt/X11/XRootWindow;", nullptr, $STATIC, $method(static_cast<$XRootWindow*(*)()>(&XBaseWindow::getXAWTRootWindow))},
	{"getY", "()I", nullptr, 0},
	{"grabInput", "()Z", nullptr, $PUBLIC},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleCreateNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleDestroyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleReparentNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleVisibilityEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"init", "(JLjava/awt/Rectangle;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XBaseWindow::*)(int64_t,$Rectangle*)>(&XBaseWindow::init))},
	{"init", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XBaseWindow::*)($XCreateWindowParams*)>(&XBaseWindow::init))},
	{"initClientLeader", "()V", nullptr, $PROTECTED},
	{"instantPreInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"isDisposed", "()Z", nullptr, 0},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"isFullRelease", "(II)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&XBaseWindow::isFullRelease))},
	{"isGrabbedEvent", "(Lsun/awt/X11/XEvent;Lsun/awt/X11/XBaseWindow;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XEvent*,XBaseWindow*)>(&XBaseWindow::isGrabbedEvent))},
	{"isMapped", "()Z", nullptr, 0},
	{"isMinSizeSet", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, 0},
	{"postInit", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XBaseWindow::*)()>(&XBaseWindow::postInit))},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"preInit", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XBaseWindow::*)()>(&XBaseWindow::preInit))},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"scaleDown", "(I)I", nullptr, $PROTECTED},
	{"scaleUp", "(I)I", nullptr, $PROTECTED},
	{"setDisposed", "(Z)V", nullptr, 0},
	{"setSizeHints", "(JIIII)V", nullptr, $PUBLIC},
	{"setWMClass", "([Ljava/lang/String;)V", nullptr, 0},
	{"setWMHints", "(Lsun/awt/X11/XWMHints;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XBaseWindow::*)($XWMHints*)>(&XBaseWindow::setWMHints))},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"toGlobal", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, 0},
	{"toGlobal", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, 0},
	{"toGlobal", "(II)Ljava/awt/Point;", nullptr, 0},
	{"toLocal", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, 0},
	{"toLocal", "(II)Ljava/awt/Point;", nullptr, 0},
	{"toOtherWindow", "(JJII)Ljava/awt/Point;", nullptr, $STATIC, $method(static_cast<$Point*(*)(int64_t,int64_t,int32_t,int32_t)>(&XBaseWindow::toOtherWindow))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabInput", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&XBaseWindow::ungrabInput))},
	{"ungrabInputImpl", "()V", nullptr, 0},
	{"updateWMName", "()V", nullptr, 0},
	{"xGetInputFocus", "()J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)()>(&XBaseWindow::xGetInputFocus))},
	{"xRequestFocus", "(J)V", nullptr, $PUBLIC},
	{"xRequestFocus", "()V", nullptr, $PUBLIC},
	{"xSetBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"xSetBounds", "(IIII)V", nullptr, $PUBLIC},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XBaseWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseWindow$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.awt.X11.XBaseWindow$StateLock", "sun.awt.X11.XBaseWindow", "StateLock", $STATIC},
	{"sun.awt.X11.XBaseWindow$InitialiseState", "sun.awt.X11.XBaseWindow", "InitialiseState", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _XBaseWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XBaseWindow",
	"java.lang.Object",
	nullptr,
	_XBaseWindow_FieldInfo_,
	_XBaseWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XBaseWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseWindow$1,sun.awt.X11.XBaseWindow$StateLock,sun.awt.X11.XBaseWindow$InitialiseState"
};

$Object* allocate$XBaseWindow($Class* clazz) {
	return $of($alloc(XBaseWindow));
}

$PlatformLogger* XBaseWindow::log = nullptr;
$PlatformLogger* XBaseWindow::insLog = nullptr;
$PlatformLogger* XBaseWindow::eventLog = nullptr;
$PlatformLogger* XBaseWindow::focusLog = nullptr;
$PlatformLogger* XBaseWindow::grabLog = nullptr;
$String* XBaseWindow::PARENT_WINDOW = nullptr;
$String* XBaseWindow::BOUNDS = nullptr;
$String* XBaseWindow::OVERRIDE_REDIRECT = nullptr;
$String* XBaseWindow::EVENT_MASK = nullptr;
$String* XBaseWindow::VALUE_MASK = nullptr;
$String* XBaseWindow::BORDER_PIXEL = nullptr;
$String* XBaseWindow::COLORMAP = nullptr;
$String* XBaseWindow::DEPTH = nullptr;
$String* XBaseWindow::VISUAL_CLASS = nullptr;
$String* XBaseWindow::VISUAL = nullptr;
$String* XBaseWindow::EMBEDDED = nullptr;
$String* XBaseWindow::DELAYED = nullptr;
$String* XBaseWindow::PARENT = nullptr;
$String* XBaseWindow::BACKGROUND_PIXMAP = nullptr;
$String* XBaseWindow::VISIBLE = nullptr;
$String* XBaseWindow::SAVE_UNDER = nullptr;
$String* XBaseWindow::BACKING_STORE = nullptr;
$String* XBaseWindow::BIT_GRAVITY = nullptr;
$XAtom* XBaseWindow::wm_client_leader = nullptr;

void XBaseWindow::awtLock() {
	$XToolkit::awtLock();
}

void XBaseWindow::awtUnlock() {
	$XToolkit::awtUnlock();
}

void XBaseWindow::awtLockNotifyAll() {
	$XToolkit::awtLockNotifyAll();
}

void XBaseWindow::awtLockWait() {
	$XToolkit::awtLockWait();
}

void XBaseWindow::init(int64_t parentWindow, $Rectangle* bounds) {
}

void XBaseWindow::preInit() {
}

void XBaseWindow::postInit() {
}

void XBaseWindow::instantPreInit($XCreateWindowParams* params) {
	$set(this, state_lock, $new($XBaseWindow$StateLock));
}

void XBaseWindow::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$set(this, state_lock, $new($XBaseWindow$StateLock));
	$init($Boolean);
	this->embedded = $nc($Boolean::TRUE)->equals($($nc(params)->get(XBaseWindow::EMBEDDED)));
	this->visible = $nc($Boolean::TRUE)->equals($($nc(params)->get(XBaseWindow::VISIBLE)));
	$var($Object, parent, $nc(params)->get(XBaseWindow::PARENT));
	if ($instanceOf(XBaseWindow, parent)) {
		$set(this, parentWindow, $cast(XBaseWindow, parent));
	} else {
		$var($Long, parentWindowID, $cast($Long, params->get(XBaseWindow::PARENT_WINDOW)));
		if (parentWindowID != nullptr) {
			$set(this, parentWindow, $XToolkit::windowToXWindow(parentWindowID->longValue()));
		}
	}
	$var($Long, eventMask, $cast($Long, params->get(XBaseWindow::EVENT_MASK)));
	if (eventMask != nullptr) {
		int64_t mask = eventMask->longValue();
		mask |= $XConstants::SubstructureNotifyMask;
		params->put(XBaseWindow::EVENT_MASK, $($Long::valueOf(mask)));
	}
	this->screen = -1;
}

void XBaseWindow::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XBaseWindow::log)->fine($$str({"WM name is "_s, $(getWMName())}));
	}
	updateWMName();
	initClientLeader();
}

void XBaseWindow::init($XCreateWindowParams* params) {
	awtLock();
	$init($XBaseWindow$InitialiseState);
	$set(this, initialising, $XBaseWindow$InitialiseState::INITIALISING);
	awtUnlock();
	try {
		$init($Boolean);
		if (!$nc($Boolean::TRUE)->equals($($nc(params)->get(XBaseWindow::DELAYED)))) {
			preInit(params);
			create(params);
			postInit(params);
		} else {
			instantPreInit(params);
			$set(this, delayedParams, params);
		}
		awtLock();
		$set(this, initialising, $XBaseWindow$InitialiseState::INITIALISED);
		awtLockNotifyAll();
		awtUnlock();
	} catch ($RuntimeException& re) {
		awtLock();
		$set(this, initialising, $XBaseWindow$InitialiseState::FAILED_INITIALISATION);
		awtLockNotifyAll();
		awtUnlock();
		$throw(re);
	} catch ($Throwable& t) {
		$nc(XBaseWindow::log)->warning("Exception during peer initialization"_s, $cast($Throwable, t));
		awtLock();
		$set(this, initialising, $XBaseWindow$InitialiseState::FAILED_INITIALISATION);
		awtLockNotifyAll();
		awtUnlock();
	}
}

bool XBaseWindow::checkInitialised() {
	awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($XBaseWindow$1);
			switch ($nc($XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)->get($nc((this->initialising))->ordinal())) {
			case 1:
				{
					var$2 = true;
					return$1 = true;
					goto $finally;
				}
			case 2:
				{
					try {
						$init($XBaseWindow$InitialiseState);
						while (this->initialising != $XBaseWindow$InitialiseState::INITIALISED) {
							awtLockWait();
						}
					} catch ($InterruptedException& ie) {
						var$2 = false;
						return$1 = true;
						goto $finally;
					}
					var$2 = true;
					return$1 = true;
					goto $finally;
				}
			case 3:
				{
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
			default:
				{
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XBaseWindow::init$() {
	XBaseWindow::init$($$new($XCreateWindowParams));
}

void XBaseWindow::init$(int64_t parentWindow, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of(XBaseWindow::BOUNDS),
		$of(bounds),
		$of(XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf(parentWindow)))
	})));
}

void XBaseWindow::init$($Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of(XBaseWindow::BOUNDS),
		$of(bounds)
	})));
}

void XBaseWindow::init$($XCreateWindowParams* params) {
	$set(this, children, $new($HashSet));
	init(params);
}

void XBaseWindow::init$(int64_t parentWindow) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of(XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf(parentWindow))),
		$of(XBaseWindow::EMBEDDED),
		$of($Boolean::TRUE)
	})));
}

void XBaseWindow::checkParams($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	if (params == nullptr) {
		$throwNew($IllegalArgumentException, "Window creation parameters are null"_s);
	}
	$nc(params)->putIfNull($of(XBaseWindow::PARENT_WINDOW), $($of($Long::valueOf($XToolkit::getDefaultRootWindow()))));
	params->putIfNull($of(XBaseWindow::BOUNDS), $of($$new($Rectangle, XBaseWindow::DEF_LOCATION, XBaseWindow::DEF_LOCATION, XBaseWindow::MIN_SIZE, XBaseWindow::MIN_SIZE)));
	params->putIfNull($of(XBaseWindow::DEPTH), $($of($Integer::valueOf((int32_t)$XConstants::CopyFromParent))));
	params->putIfNull($of(XBaseWindow::VISUAL), $($of($Long::valueOf($XConstants::CopyFromParent))));
	params->putIfNull($of(XBaseWindow::VISUAL_CLASS), $($of($Integer::valueOf($XConstants::InputOnly))));
	params->putIfNull($of(XBaseWindow::VALUE_MASK), $($of($Long::valueOf($XConstants::CWEventMask))));
	$var($Rectangle, bounds, $cast($Rectangle, params->get(XBaseWindow::BOUNDS)));
	$nc(bounds)->width = $Math::max(XBaseWindow::MIN_SIZE, bounds->width);
	bounds->height = $Math::max(XBaseWindow::MIN_SIZE, bounds->height);
	$var($Long, eventMaskObj, $cast($Long, params->get(XBaseWindow::EVENT_MASK)));
	int64_t eventMask = eventMaskObj != nullptr ? $nc(eventMaskObj)->longValue() : (int64_t)0;
	eventMask |= $XConstants::PropertyChangeMask | $XConstants::OwnerGrabButtonMask;
	params->put(XBaseWindow::EVENT_MASK, $($Long::valueOf(eventMask)));
}

int32_t XBaseWindow::getScale() {
	return 1;
}

int32_t XBaseWindow::scaleUp(int32_t x) {
	return x;
}

int32_t XBaseWindow::scaleDown(int32_t x) {
	return x;
}

void XBaseWindow::create($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XSetWindowAttributes, xattr, $new($XSetWindowAttributes));
			{
				$var($Throwable, var$1, nullptr);
				try {
					checkParams(params);
					int64_t value_mask = $nc(($cast($Long, $($nc(params)->get(XBaseWindow::VALUE_MASK)))))->longValue();
					$var($Long, eventMask, $cast($Long, params->get(XBaseWindow::EVENT_MASK)));
					xattr->set_event_mask($nc(eventMask)->longValue());
					value_mask |= $XConstants::CWEventMask;
					$var($Long, border_pixel, $cast($Long, params->get(XBaseWindow::BORDER_PIXEL)));
					if (border_pixel != nullptr) {
						xattr->set_border_pixel(border_pixel->longValue());
						value_mask |= $XConstants::CWBorderPixel;
					}
					$var($Long, colormap, $cast($Long, params->get(XBaseWindow::COLORMAP)));
					if (colormap != nullptr) {
						xattr->set_colormap(colormap->longValue());
						value_mask |= $XConstants::CWColormap;
					}
					$var($Long, background_pixmap, $cast($Long, params->get(XBaseWindow::BACKGROUND_PIXMAP)));
					if (background_pixmap != nullptr) {
						xattr->set_background_pixmap(background_pixmap->longValue());
						value_mask |= $XConstants::CWBackPixmap;
					}
					$var($Long, parentWindow, $cast($Long, params->get(XBaseWindow::PARENT_WINDOW)));
					$var($Rectangle, bounds, $cast($Rectangle, params->get(XBaseWindow::BOUNDS)));
					$var($Integer, depth, $cast($Integer, params->get(XBaseWindow::DEPTH)));
					$var($Integer, visual_class, $cast($Integer, params->get(XBaseWindow::VISUAL_CLASS)));
					$var($Long, visual, $cast($Long, params->get(XBaseWindow::VISUAL)));
					$var($Boolean, overrideRedirect, $cast($Boolean, params->get(XBaseWindow::OVERRIDE_REDIRECT)));
					if (overrideRedirect != nullptr) {
						xattr->set_override_redirect(overrideRedirect->booleanValue());
						value_mask |= $XConstants::CWOverrideRedirect;
					}
					$var($Boolean, saveUnder, $cast($Boolean, params->get(XBaseWindow::SAVE_UNDER)));
					if (saveUnder != nullptr) {
						xattr->set_save_under(saveUnder->booleanValue());
						value_mask |= $XConstants::CWSaveUnder;
					}
					$var($Integer, backingStore, $cast($Integer, params->get(XBaseWindow::BACKING_STORE)));
					if (backingStore != nullptr) {
						xattr->set_backing_store(backingStore->intValue());
						value_mask |= $XConstants::CWBackingStore;
					}
					$var($Integer, bitGravity, $cast($Integer, params->get(XBaseWindow::BIT_GRAVITY)));
					if (bitGravity != nullptr) {
						xattr->set_bit_gravity(bitGravity->intValue());
						value_mask |= $XConstants::CWBitGravity;
					}
					$init($PlatformLogger$Level);
					if ($nc(XBaseWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XBaseWindow::log)->fine($$str({"Creating window for "_s, this, " with the following attributes: \n"_s, params}));
					}
					int64_t var$2 = $XToolkit::getDisplay();
					int64_t var$3 = $nc(parentWindow)->longValue();
					int32_t var$4 = scaleUp($nc(bounds)->x);
					int32_t var$5 = scaleUp($nc(bounds)->y);
					int32_t var$6 = scaleUp($nc(bounds)->width);
					int32_t var$7 = scaleUp($nc(bounds)->height);
					int32_t var$8 = $nc(depth)->intValue();
					int64_t var$9 = (int64_t)$nc(visual_class)->intValue();
					this->window = $XlibWrapper::XCreateWindow(var$2, var$3, var$4, var$5, var$6, var$7, 0, var$8, var$9, $nc(visual)->longValue(), value_mask, xattr->pData);
					if (this->window == 0) {
						$throwNew($IllegalStateException, "Couldn\'t create window because of wrong parameters. Run with NOISY_AWT to see details"_s);
					}
					$XToolkit::addToWinMap(this->window, this);
				} catch ($Throwable& var$10) {
					$assign(var$1, var$10);
				} /*finally*/ {
					xattr->dispose();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$XCreateWindowParams* XBaseWindow::getDelayedParams() {
	return this->delayedParams;
}

$String* XBaseWindow::getWMName() {
	return $XToolkit::getCorrectXIDString($($of(this)->getClass()->getName()));
}

void XBaseWindow::initClientLeader() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (XBaseWindow::wm_client_leader == nullptr) {
				$assignStatic(XBaseWindow::wm_client_leader, $XAtom::get("WM_CLIENT_LEADER"_s));
			}
			$nc(XBaseWindow::wm_client_leader)->setWindowProperty(this, $(static_cast<XBaseWindow*>(getXAWTRootWindow())));
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

$XRootWindow* XBaseWindow::getXAWTRootWindow() {
	$init(XBaseWindow);
	return $XRootWindow::getInstance();
}

void XBaseWindow::destroy() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->hints != nullptr) {
				$XlibWrapper::XFree($nc(this->hints)->pData);
				$set(this, hints, nullptr);
			}
			$XToolkit::removeFromWinMap(getWindow(), this);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XDestroyWindow(var$1, getWindow());
			if ($XPropertyCache::isCachingSupported()) {
				$XPropertyCache::clearCache(this->window);
			}
			this->window = -1;
			if (!isDisposed()) {
				setDisposed(true);
			}
			$XAwtState::getGrabWindow();
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XBaseWindow::flush() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XFlush($XToolkit::getDisplay());
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

void XBaseWindow::setWMHints($XWMHints* hints) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMHints(var$1, getWindow(), $nc(hints)->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$XWMHints* XBaseWindow::getWMHints() {
	if (this->wmHints == nullptr) {
		$set(this, wmHints, $new($XWMHints, $XlibWrapper::XAllocWMHints()));
	}
	return this->wmHints;
}

$XSizeHints* XBaseWindow::getHints() {
	if (this->hints == nullptr) {
		int64_t p_hints = $XlibWrapper::XAllocSizeHints();
		$set(this, hints, $new($XSizeHints, p_hints));
	}
	return this->hints;
}

void XBaseWindow::setSizeHints(int64_t flags, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XBaseWindow::insLog)->finer($$str({"Setting hints, flags "_s, $($XlibWrapper::hintsToString(flags))}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XSizeHints, hints, getHints());
			if (((int64_t)(flags & (uint64_t)$XUtilConstants::PPosition)) != 0) {
				$nc(hints)->set_x(scaleUp(x));
				hints->set_y(scaleUp(y));
			}
			if (((int64_t)(flags & (uint64_t)$XUtilConstants::PSize)) != 0) {
				$nc(hints)->set_width(scaleUp(width));
				hints->set_height(scaleUp(height));
			} else if (((int64_t)($nc(hints)->get_flags() & (uint64_t)$XUtilConstants::PSize)) != 0) {
				flags |= $XUtilConstants::PSize;
			}
			if (((int64_t)(flags & (uint64_t)$XUtilConstants::PMinSize)) != 0) {
				$nc(hints)->set_min_width(scaleUp(width));
				hints->set_min_height(scaleUp(height));
			} else if (((int64_t)($nc(hints)->get_flags() & (uint64_t)$XUtilConstants::PMinSize)) != 0) {
				flags |= $XUtilConstants::PMinSize;
			}
			if (((int64_t)(flags & (uint64_t)$XUtilConstants::PMaxSize)) != 0) {
				if (this->maxBounds != nullptr) {
					if ($nc(this->maxBounds)->width != $Integer::MAX_VALUE) {
						$nc(hints)->set_max_width(scaleUp($nc(this->maxBounds)->width));
					} else {
						$nc(hints)->set_max_width($XToolkit::getMaxWindowWidthInPixels());
					}
					if ($nc(this->maxBounds)->height != $Integer::MAX_VALUE) {
						$nc(hints)->set_max_height(scaleUp($nc(this->maxBounds)->height));
					} else {
						$nc(hints)->set_max_height($XToolkit::getMaxWindowHeightInPixels());
					}
				} else {
					$nc(hints)->set_max_width(scaleUp(width));
					hints->set_max_height(scaleUp(height));
				}
			} else if (((int64_t)($nc(hints)->get_flags() & (uint64_t)$XUtilConstants::PMaxSize)) != 0) {
				flags |= $XUtilConstants::PMaxSize;
				if (this->maxBounds != nullptr) {
					if ($nc(this->maxBounds)->width != $Integer::MAX_VALUE) {
						hints->set_max_width(scaleUp($nc(this->maxBounds)->width));
					} else {
						hints->set_max_width($XToolkit::getMaxWindowWidthInPixels());
					}
					if ($nc(this->maxBounds)->height != $Integer::MAX_VALUE) {
						hints->set_max_height(scaleUp($nc(this->maxBounds)->height));
					} else {
						hints->set_max_height($XToolkit::getMaxWindowHeightInPixels());
					}
				} else {
				}
			}
			flags |= $XUtilConstants::PWinGravity;
			$nc(hints)->set_flags(flags);
			hints->set_win_gravity($XConstants::NorthWestGravity);
			if ($nc(XBaseWindow::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XBaseWindow::insLog)->finer($$str({"Setting hints, resulted flags "_s, $($XlibWrapper::hintsToString(flags)), ", values "_s, hints}));
			}
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMNormalHints(var$1, getWindow(), hints->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XBaseWindow::isMinSizeSet() {
	$var($XSizeHints, hints, getHints());
	int64_t flags = $nc(hints)->get_flags();
	return (((int64_t)(flags & (uint64_t)$XUtilConstants::PMinSize)) == $XUtilConstants::PMinSize);
}

$Object* XBaseWindow::getStateLock() {
	return $of(this->state_lock);
}

int64_t XBaseWindow::getWindow() {
	return this->window;
}

int64_t XBaseWindow::getContentWindow() {
	return this->window;
}

XBaseWindow* XBaseWindow::getContentXWindow() {
	return $XToolkit::windowToXWindow(getContentWindow());
}

$Rectangle* XBaseWindow::getBounds() {
	return $new($Rectangle, this->x, this->y, this->width, this->height);
}

$Dimension* XBaseWindow::getSize() {
	return $new($Dimension, this->width, this->height);
}

void XBaseWindow::toFront() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XRaiseWindow(var$1, getWindow());
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XBaseWindow::xRequestFocus(int64_t time) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($PlatformLogger$Level);
			if ($nc(XBaseWindow::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XBaseWindow::focusLog)->finer($$str({"XSetInputFocus on "_s, $($Long::toHexString(getWindow())), " with time "_s, $$str(time)}));
			}
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetInputFocus2(var$1, getWindow(), time);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XBaseWindow::xRequestFocus() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($PlatformLogger$Level);
			if ($nc(XBaseWindow::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XBaseWindow::focusLog)->finer($$str({"XSetInputFocus on "_s, $($Long::toHexString(getWindow()))}));
			}
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetInputFocus(var$1, getWindow());
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t XBaseWindow::xGetInputFocus() {
	$init(XBaseWindow);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $XlibWrapper::XGetInputFocus($XToolkit::getDisplay());
			return$1 = true;
			goto $finally;
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
	$shouldNotReachHere();
}

void XBaseWindow::xSetVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XBaseWindow::log)->fine($$str({"Setting visible on "_s, this, " to "_s, $$str(visible)}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->visible = visible;
			if (visible) {
				int64_t var$1 = $XToolkit::getDisplay();
				$XlibWrapper::XMapWindow(var$1, getWindow());
			} else {
				int64_t var$2 = $XToolkit::getDisplay();
				$XlibWrapper::XUnmapWindow(var$2, getWindow());
			}
			$XlibWrapper::XFlush($XToolkit::getDisplay());
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XBaseWindow::isMapped() {
	return this->mapped;
}

void XBaseWindow::updateWMName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getWMName());
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (name == nullptr) {
				$assign(name, " "_s);
			}
			$var($XAtom, nameAtom, $XAtom::get($XAtom::XA_WM_NAME));
			$nc(nameAtom)->setProperty(getWindow(), name);
			$var($XAtom, netNameAtom, $XAtom::get("_NET_WM_NAME"_s));
			$nc(netNameAtom)->setPropertyUTF8(getWindow(), name);
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

void XBaseWindow::setWMClass($StringArray* cl) {
	$useLocalCurrentObjectStackCache();
	if ($nc(cl)->length != 2) {
		$throwNew($IllegalArgumentException, "WM_CLASS_NAME consists of exactly two strings"_s);
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XAtom, xa, $XAtom::get($XAtom::XA_WM_CLASS));
			$nc(xa)->setProperty8(getWindow(), $$str({$nc(cl)->get(0), $$str(u'\0'), cl->get(1), $$str(u'\0')}));
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

bool XBaseWindow::isVisible() {
	return this->visible;
}

int64_t XBaseWindow::getScreenOfWindow(int64_t window) {
	$init(XBaseWindow);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $XlibWrapper::getScreenOfWindow($XToolkit::getDisplay(), window);
			return$1 = true;
			goto $finally;
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
	$shouldNotReachHere();
}

int64_t XBaseWindow::getScreenNumber() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = $XlibWrapper::XScreenNumberOfScreen(getScreen());
			return$1 = true;
			goto $finally;
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
	$shouldNotReachHere();
}

int64_t XBaseWindow::getScreen() {
	if (this->screen == -1) {
		this->screen = getScreenOfWindow(this->window);
	}
	return this->screen;
}

void XBaseWindow::xSetBounds($Rectangle* bounds) {
	xSetBounds($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
}

void XBaseWindow::xSetBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (getWindow() == 0) {
		$nc(XBaseWindow::insLog)->warning("Attempt to resize uncreated window"_s);
		$throwNew($IllegalStateException, "Attempt to resize uncreated window"_s);
	}
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XBaseWindow::insLog)->fine($$str({"Setting bounds on "_s, this, " to ("_s, $$str(x), ", "_s, $$str(y), "), "_s, $$str(width), "x"_s, $$str(height)}));
	}
	width = $Math::max(XBaseWindow::MIN_SIZE, width);
	height = $Math::max(XBaseWindow::MIN_SIZE, height);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = getWindow();
			int32_t var$3 = scaleUp(x);
			int32_t var$4 = scaleUp(y);
			int32_t var$5 = scaleUp(width);
			$XlibWrapper::XMoveResizeWindow(var$1, var$2, var$3, var$4, var$5, scaleUp(height));
		} catch ($Throwable& var$6) {
			$assign(var$0, var$6);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Point* XBaseWindow::toOtherWindow(int64_t src, int64_t dst, int32_t x, int32_t y) {
	$init(XBaseWindow);
	$useLocalCurrentObjectStackCache();
	$var($Point, rpt, $new($Point, 0, 0));
	$var(XBaseWindow, srcPeer, $XToolkit::windowToXWindow(src));
	$var(XBaseWindow, dstPeer, $XToolkit::windowToXWindow(dst));
	if (srcPeer != nullptr && dstPeer != nullptr) {
		int32_t var$0 = x + srcPeer->getAbsoluteX();
		rpt->x = var$0 - dstPeer->getAbsoluteX();
		int32_t var$1 = y + srcPeer->getAbsoluteY();
		rpt->y = var$1 - dstPeer->getAbsoluteY();
	} else if (dstPeer != nullptr && $XlibUtil::isRoot(src, dstPeer->getScreenNumber())) {
		rpt->x = x - dstPeer->getAbsoluteX();
		rpt->y = y - dstPeer->getAbsoluteY();
	} else if (srcPeer != nullptr && $XlibUtil::isRoot(dst, srcPeer->getScreenNumber())) {
		rpt->x = x + srcPeer->getAbsoluteX();
		rpt->y = y + srcPeer->getAbsoluteY();
	} else {
		int32_t scale = srcPeer == nullptr ? 1 : srcPeer->getScale();
		$assign(rpt, $XlibUtil::translateCoordinates(src, dst, $$new($Point, x, y), scale));
	}
	return rpt;
}

$Rectangle* XBaseWindow::toGlobal($Rectangle* rec) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, toGlobal($($nc(rec)->getLocation())));
	$var($Rectangle, newRec, $new($Rectangle, rec));
	if (p != nullptr) {
		newRec->setLocation(p);
	}
	return newRec;
}

$Point* XBaseWindow::toGlobal($Point* pt) {
	$var($Point, p, toGlobal($nc(pt)->x, pt->y));
	if (p != nullptr) {
		return p;
	} else {
		return $new($Point, pt);
	}
}

$Point* XBaseWindow::toGlobal(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int64_t root = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			root = $XlibWrapper::RootWindow(var$1, getScreenNumber());
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($Point, p, toOtherWindow(getContentWindow(), root, x, y));
	if (p != nullptr) {
		return p;
	} else {
		return $new($Point, x, y);
	}
}

$Point* XBaseWindow::toLocal($Point* pt) {
	$var($Point, p, toLocal($nc(pt)->x, pt->y));
	if (p != nullptr) {
		return p;
	} else {
		return $new($Point, pt);
	}
}

$Point* XBaseWindow::toLocal(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int64_t root = 0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			root = $XlibWrapper::RootWindow(var$1, getScreenNumber());
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($Point, p, toOtherWindow(root, getContentWindow(), x, y));
	if (p != nullptr) {
		return p;
	} else {
		return $new($Point, x, y);
	}
}

bool XBaseWindow::grabInput() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XBaseWindow::grabLog)->fine("Grab input on {0}"_s, $$new($ObjectArray, {$of(this)}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			bool var$3 = $XAwtState::getGrabWindow() == this;
			if (var$3 && $XAwtState::isManualGrab()) {
				$nc(XBaseWindow::grabLog)->fine("    Already Grabbed"_s);
				var$2 = true;
				return$1 = true;
				goto $finally;
			}
			$var(XBaseWindow, prevGrabWindow, $XAwtState::getGrabWindow());
			int32_t eventMask = (int32_t)((((($XConstants::ButtonPressMask | $XConstants::ButtonReleaseMask) | $XConstants::EnterWindowMask) | $XConstants::LeaveWindowMask) | $XConstants::PointerMotionMask) | $XConstants::ButtonMotionMask);
			int32_t ownerEvents = 1;
			if (!$XToolkit::getSunAwtDisableGrab()) {
				int64_t var$4 = $XToolkit::getDisplay();
				int64_t var$5 = getContentWindow();
				int32_t var$6 = ownerEvents;
				int32_t var$7 = eventMask;
				int32_t ptrGrab = $XlibWrapper::XGrabPointer(var$4, var$5, var$6, var$7, $XConstants::GrabModeAsync, $XConstants::GrabModeAsync, $XConstants::None, ($XWM::isMotif() ? (int64_t)$XToolkit::arrowCursor : $XConstants::None), $XConstants::CurrentTime);
				if (ptrGrab != $XConstants::GrabSuccess) {
					$XlibWrapper::XUngrabPointer($XToolkit::getDisplay(), $XConstants::CurrentTime);
					$XAwtState::setGrabWindow(nullptr);
					$nc(XBaseWindow::grabLog)->fine("    Grab Failure - mouse"_s);
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
				int64_t var$8 = $XToolkit::getDisplay();
				int32_t keyGrab = $XlibWrapper::XGrabKeyboard(var$8, getContentWindow(), ownerEvents, $XConstants::GrabModeAsync, $XConstants::GrabModeAsync, $XConstants::CurrentTime);
				if (keyGrab != $XConstants::GrabSuccess) {
					$XlibWrapper::XUngrabPointer($XToolkit::getDisplay(), $XConstants::CurrentTime);
					$XlibWrapper::XUngrabKeyboard($XToolkit::getDisplay(), $XConstants::CurrentTime);
					$XAwtState::setGrabWindow(nullptr);
					$nc(XBaseWindow::grabLog)->fine("    Grab Failure - keyboard"_s);
					var$2 = false;
					return$1 = true;
					goto $finally;
				}
			}
			if (prevGrabWindow != nullptr) {
				prevGrabWindow->ungrabInputImpl();
			}
			$XAwtState::setGrabWindow(this);
			$nc(XBaseWindow::grabLog)->fine("    Grab - success"_s);
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
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
	$shouldNotReachHere();
}

void XBaseWindow::ungrabInput() {
	$init(XBaseWindow);
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var(XBaseWindow, grabWindow, $XAwtState::getGrabWindow());
			$init($PlatformLogger$Level);
			if ($nc(XBaseWindow::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XBaseWindow::grabLog)->fine("UnGrab input on {0}"_s, $$new($ObjectArray, {$of(grabWindow)}));
			}
			if (grabWindow != nullptr) {
				grabWindow->ungrabInputImpl();
				if (!$XToolkit::getSunAwtDisableGrab()) {
					$XlibWrapper::XUngrabPointer($XToolkit::getDisplay(), $XConstants::CurrentTime);
					$XlibWrapper::XUngrabKeyboard($XToolkit::getDisplay(), $XConstants::CurrentTime);
				}
				$XAwtState::setGrabWindow(nullptr);
				$XlibWrapper::XFlush($XToolkit::getDisplay());
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

void XBaseWindow::ungrabInputImpl() {
}

void XBaseWindow::checkSecurity() {
	$init(XBaseWindow);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $XToolkit::isSecurityWarningEnabled();
	if (var$0 && $XToolkit::isToolkitThread()) {
		$var($StackTraceElementArray, stack, ($$new($Throwable))->getStackTrace());
		$nc(XBaseWindow::log)->warning($$str({$nc(stack)->get(1), ": Security violation: calling user code on toolkit thread"_s}));
	}
}

$Set* XBaseWindow::getChildren() {
	$synchronized(getStateLock()) {
		return $new($HashSet, static_cast<$Collection*>(this->children));
	}
}

void XBaseWindow::handleMapNotifyEvent($XEvent* xev) {
	this->mapped = true;
}

void XBaseWindow::handleUnmapNotifyEvent($XEvent* xev) {
	this->mapped = false;
}

void XBaseWindow::handleReparentNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::eventLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($XReparentEvent, msg, $nc(xev)->get_xreparent());
		$nc(XBaseWindow::eventLog)->finer($($nc(msg)->toString()));
	}
}

void XBaseWindow::handlePropertyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XPropertyEvent, msg, $nc(xev)->get_xproperty());
	if ($XPropertyCache::isCachingSupported()) {
		$XPropertyCache::clearCache(this->window, $($XAtom::get($nc(msg)->get_atom())));
	}
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::eventLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XBaseWindow::eventLog)->finer("{0}"_s, $$new($ObjectArray, {$of(msg)}));
	}
}

void XBaseWindow::handleDestroyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XAnyEvent, xany, $nc(xev)->get_xany());
	int64_t var$0 = $nc(xany)->get_window();
	if (var$0 == getWindow()) {
		$XToolkit::removeFromWinMap(getWindow(), this);
		if ($XPropertyCache::isCachingSupported()) {
			$XPropertyCache::clearCache(getWindow());
		}
	}
	int64_t var$1 = $nc(xany)->get_window();
	if (var$1 != getWindow()) {
		$synchronized(getStateLock()) {
			$nc(this->children)->remove($($Long::valueOf(xany->get_window())));
		}
	}
}

void XBaseWindow::handleCreateNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XAnyEvent, xany, $nc(xev)->get_xany());
	int64_t var$0 = $nc(xany)->get_window();
	if (var$0 != getWindow()) {
		$synchronized(getStateLock()) {
			$nc(this->children)->add($($Long::valueOf(xany->get_window())));
		}
	}
}

void XBaseWindow::handleClientMessage($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::eventLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($XClientMessageEvent, msg, $nc(xev)->get_xclient());
		$nc(XBaseWindow::eventLog)->finer($($nc(msg)->toString()));
	}
}

void XBaseWindow::handleVisibilityEvent($XEvent* xev) {
}

void XBaseWindow::handleKeyPress($XEvent* xev) {
}

void XBaseWindow::handleKeyRelease($XEvent* xev) {
}

void XBaseWindow::handleExposeEvent($XEvent* xev) {
}

void XBaseWindow::handleButtonPressRelease($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XButtonEvent, xbe, $nc(xev)->get_xbutton());
	int32_t theButton = $nc(xbe)->get_button();
	if (theButton > $SunToolkit::MAX_BUTTONS_SUPPORTED) {
		return;
	}
	int32_t buttonState = 0;
	buttonState = (int32_t)(xbe->get_state() & (uint32_t)$XConstants::ALL_BUTTONS_MASK);
	$init($XConstants);
	bool isWheel = (theButton == $XConstants::MouseWheelUp || theButton == $XConstants::MouseWheelDown);
	if (!isWheel) {
		switch (xev->get_type()) {
		case $XConstants::ButtonPress:
			{
				if (buttonState == 0) {
					$var($XWindowPeer, parent, getToplevelXWindow());
					if (parent != nullptr && parent->isFocusableWindow()) {
						parent->setActualFocusedWindow(nullptr);
						parent->requestWindowFocus(xbe->get_time(), true);
					}
					$XAwtState::setAutoGrabWindow(this);
				}
				break;
			}
		case $XConstants::ButtonRelease:
			{
				if (isFullRelease(buttonState, xbe->get_button())) {
					$XAwtState::setAutoGrabWindow(nullptr);
				}
				break;
			}
		}
	}
}

void XBaseWindow::handleMotionNotify($XEvent* xev) {
}

void XBaseWindow::handleXCrossingEvent($XEvent* xev) {
}

void XBaseWindow::handleConfigureNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XConfigureEvent, xe, $nc(xev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XBaseWindow::insLog)->finer("Configure, {0}"_s, $$new($ObjectArray, {$of(xe)}));
	}
	this->x = scaleDown($nc(xe)->get_x());
	this->y = scaleDown($nc(xe)->get_y());
	this->width = scaleDown($nc(xe)->get_width());
	this->height = scaleDown($nc(xe)->get_height());
}

bool XBaseWindow::isFullRelease(int32_t buttonState, int32_t button) {
	$init(XBaseWindow);
	int32_t buttonsNumber = $XToolkit::getNumberOfButtonsForMask();
	if (button < 0 || button > buttonsNumber) {
		return buttonState == 0;
	} else {
		return buttonState == $XlibUtil::getButtonMask(button);
	}
}

bool XBaseWindow::isGrabbedEvent($XEvent* ev, XBaseWindow* target) {
	$init(XBaseWindow);
	switch ($nc(ev)->get_type()) {
	case $XConstants::ButtonPress:
		{}
	case $XConstants::ButtonRelease:
		{}
	case $XConstants::MotionNotify:
		{}
	case $XConstants::KeyPress:
		{}
	case $XConstants::KeyRelease:
		{
			return true;
		}
	case $XConstants::LeaveNotify:
		{}
	case $XConstants::EnterNotify:
		{
			return ($instanceOf($XWindowPeer, target));
		}
	default:
		{
			return false;
		}
	}
}

void XBaseWindow::dispatchToWindow($XEvent* ev) {
	$init(XBaseWindow);
	$useLocalCurrentObjectStackCache();
	$var(XBaseWindow, target, $XAwtState::getGrabWindow());
	if (target == nullptr || !isGrabbedEvent(ev, target)) {
		$assign(target, $XToolkit::windowToXWindow($nc($($nc(ev)->get_xany()))->get_window()));
	}
	if (target != nullptr && target->checkInitialised()) {
		target->dispatchEvent(ev);
	}
}

void XBaseWindow::dispatchEvent($XEvent* xev) {
	$init($PlatformLogger$Level);
	if ($nc(XBaseWindow::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XBaseWindow::eventLog)->finest($($nc(xev)->toString()));
	}
	int32_t type = $nc(xev)->get_type();
	if (isDisposed()) {
		return;
	}
	switch (type) {
	case $XConstants::VisibilityNotify:
		{
			handleVisibilityEvent(xev);
			break;
		}
	case $XConstants::ClientMessage:
		{
			handleClientMessage(xev);
			break;
		}
	case $XConstants::Expose:
		{}
	case $XConstants::GraphicsExpose:
		{
			handleExposeEvent(xev);
			break;
		}
	case $XConstants::ButtonPress:
		{}
	case $XConstants::ButtonRelease:
		{
			handleButtonPressRelease(xev);
			break;
		}
	case $XConstants::MotionNotify:
		{
			handleMotionNotify(xev);
			break;
		}
	case $XConstants::KeyPress:
		{
			handleKeyPress(xev);
			break;
		}
	case $XConstants::KeyRelease:
		{
			handleKeyRelease(xev);
			break;
		}
	case $XConstants::EnterNotify:
		{}
	case $XConstants::LeaveNotify:
		{
			handleXCrossingEvent(xev);
			break;
		}
	case $XConstants::ConfigureNotify:
		{
			handleConfigureNotifyEvent(xev);
			break;
		}
	case $XConstants::MapNotify:
		{
			handleMapNotifyEvent(xev);
			break;
		}
	case $XConstants::UnmapNotify:
		{
			handleUnmapNotifyEvent(xev);
			break;
		}
	case $XConstants::ReparentNotify:
		{
			handleReparentNotifyEvent(xev);
			break;
		}
	case $XConstants::PropertyNotify:
		{
			handlePropertyNotify(xev);
			break;
		}
	case $XConstants::DestroyNotify:
		{
			handleDestroyNotify(xev);
			break;
		}
	case $XConstants::CreateNotify:
		{
			handleCreateNotify(xev);
			break;
		}
	}
}

bool XBaseWindow::isEventDisabled($XEvent* e) {
	return false;
}

int32_t XBaseWindow::getX() {
	return this->x;
}

int32_t XBaseWindow::getY() {
	return this->y;
}

int32_t XBaseWindow::getWidth() {
	return this->width;
}

int32_t XBaseWindow::getHeight() {
	return this->height;
}

void XBaseWindow::setDisposed(bool d) {
	this->disposed = d;
}

bool XBaseWindow::isDisposed() {
	return this->disposed;
}

int32_t XBaseWindow::getAbsoluteX() {
	$var(XBaseWindow, pw, getParentWindow());
	if (pw != nullptr) {
		int32_t var$0 = pw->getAbsoluteX();
		return var$0 + getX();
	} else {
		return getX();
	}
}

int32_t XBaseWindow::getAbsoluteY() {
	$var(XBaseWindow, pw, getParentWindow());
	if (pw != nullptr) {
		int32_t var$0 = pw->getAbsoluteY();
		return var$0 + getY();
	} else {
		return getY();
	}
}

XBaseWindow* XBaseWindow::getParentWindow() {
	return this->parentWindow;
}

$XWindowPeer* XBaseWindow::getToplevelXWindow() {
	$var(XBaseWindow, bw, this);
	while (bw != nullptr && !($instanceOf($XWindowPeer, bw))) {
		$assign(bw, bw->getParentWindow());
	}
	return $cast($XWindowPeer, bw);
}

$String* XBaseWindow::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($Object::toString()), "("_s}));
	$var($String, var$0, $$concat(var$1, $($Long::toString(getWindow(), 16))));
	return $concat(var$0, ")"_s);
}

bool XBaseWindow::contains(int32_t x, int32_t y) {
	bool var$0 = x >= 0 && y >= 0 && x < getWidth();
	return var$0 && y < getHeight();
}

bool XBaseWindow::containsGlobal(int32_t x, int32_t y) {
	bool var$2 = x >= getAbsoluteX();
	bool var$1 = var$2 && y >= getAbsoluteY();
	if (var$1) {
		int32_t var$3 = x;
		int32_t var$5 = getAbsoluteX();
		int32_t var$4 = (var$5 + getWidth());
		var$1 = var$3 < var$4;
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$6 = y;
		int32_t var$8 = getAbsoluteY();
		int32_t var$7 = (var$8 + getHeight());
		var$0 = var$6 < var$7;
	}
	return var$0;
}

void clinit$XBaseWindow($Class* class$) {
	$assignStatic(XBaseWindow::PARENT_WINDOW, "parent window"_s);
	$assignStatic(XBaseWindow::BOUNDS, "bounds"_s);
	$assignStatic(XBaseWindow::OVERRIDE_REDIRECT, "overrideRedirect"_s);
	$assignStatic(XBaseWindow::EVENT_MASK, "event mask"_s);
	$assignStatic(XBaseWindow::VALUE_MASK, "value mask"_s);
	$assignStatic(XBaseWindow::BORDER_PIXEL, "border pixel"_s);
	$assignStatic(XBaseWindow::COLORMAP, "color map"_s);
	$assignStatic(XBaseWindow::DEPTH, "visual depth"_s);
	$assignStatic(XBaseWindow::VISUAL_CLASS, "visual class"_s);
	$assignStatic(XBaseWindow::VISUAL, "visual"_s);
	$assignStatic(XBaseWindow::EMBEDDED, "embedded"_s);
	$assignStatic(XBaseWindow::DELAYED, "delayed"_s);
	$assignStatic(XBaseWindow::PARENT, "parent"_s);
	$assignStatic(XBaseWindow::BACKGROUND_PIXMAP, "pixmap"_s);
	$assignStatic(XBaseWindow::VISIBLE, "visible"_s);
	$assignStatic(XBaseWindow::SAVE_UNDER, "save under"_s);
	$assignStatic(XBaseWindow::BACKING_STORE, "backing store"_s);
	$assignStatic(XBaseWindow::BIT_GRAVITY, "bit gravity"_s);
	$assignStatic(XBaseWindow::log, $PlatformLogger::getLogger("sun.awt.X11.XBaseWindow"_s));
	$assignStatic(XBaseWindow::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XBaseWindow"_s));
	$assignStatic(XBaseWindow::eventLog, $PlatformLogger::getLogger("sun.awt.X11.event.XBaseWindow"_s));
	$assignStatic(XBaseWindow::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XBaseWindow"_s));
	$assignStatic(XBaseWindow::grabLog, $PlatformLogger::getLogger("sun.awt.X11.grab.XBaseWindow"_s));
}

XBaseWindow::XBaseWindow() {
}

$Class* XBaseWindow::load$($String* name, bool initialize) {
	$loadClass(XBaseWindow, name, initialize, &_XBaseWindow_ClassInfo_, clinit$XBaseWindow, allocate$XBaseWindow);
	return class$;
}

$Class* XBaseWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun