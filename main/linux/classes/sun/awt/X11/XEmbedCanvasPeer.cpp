#include <sun/awt/X11/XEmbedCanvasPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ModalityEvent.h>
#include <sun/awt/ModalityListener.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowEvent.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDestroyWindowEvent.h>
#include <sun/awt/X11/XDropTargetContextPeer.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XEmbedCanvasPeer$1.h>
#include <sun/awt/X11/XEmbedCanvasPeer$2.h>
#include <sun/awt/X11/XEmbedCanvasPeer$3.h>
#include <sun/awt/X11/XEmbedCanvasPeer$4.h>
#include <sun/awt/X11/XEmbedCanvasPeer$5.h>
#include <sun/awt/X11/XEmbedCanvasPeer$6.h>
#include <sun/awt/X11/XEmbedCanvasPeer$7.h>
#include <sun/awt/X11/XEmbedCanvasPeer$8.h>
#include <sun/awt/X11/XEmbedCanvasPeer$9.h>
#include <sun/awt/X11/XEmbedCanvasPeer$GrabbedKey.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedDropTarget.h>
#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedServer.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XReparentEvent.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACCEL_LOCK
#undef COMPONENT_RESIZED
#undef EVENT_MASK
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef GRAB_LOCK
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_FORWARD

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $ModalityEvent = ::sun::awt::ModalityEvent;
using $ModalityListener = ::sun::awt::ModalityListener;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowEvent = ::sun::awt::X11::XCreateWindowEvent;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDestroyWindowEvent = ::sun::awt::X11::XDestroyWindowEvent;
using $XDropTargetContextPeer = ::sun::awt::X11::XDropTargetContextPeer;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XEmbedCanvasPeer$1 = ::sun::awt::X11::XEmbedCanvasPeer$1;
using $XEmbedCanvasPeer$2 = ::sun::awt::X11::XEmbedCanvasPeer$2;
using $XEmbedCanvasPeer$3 = ::sun::awt::X11::XEmbedCanvasPeer$3;
using $XEmbedCanvasPeer$4 = ::sun::awt::X11::XEmbedCanvasPeer$4;
using $XEmbedCanvasPeer$5 = ::sun::awt::X11::XEmbedCanvasPeer$5;
using $XEmbedCanvasPeer$6 = ::sun::awt::X11::XEmbedCanvasPeer$6;
using $XEmbedCanvasPeer$7 = ::sun::awt::X11::XEmbedCanvasPeer$7;
using $XEmbedCanvasPeer$8 = ::sun::awt::X11::XEmbedCanvasPeer$8;
using $XEmbedCanvasPeer$9 = ::sun::awt::X11::XEmbedCanvasPeer$9;
using $XEmbedCanvasPeer$GrabbedKey = ::sun::awt::X11::XEmbedCanvasPeer$GrabbedKey;
using $XEmbedCanvasPeer$XEmbedDropTarget = ::sun::awt::X11::XEmbedCanvasPeer$XEmbedDropTarget;
using $XEmbedCanvasPeer$XEmbedServer = ::sun::awt::X11::XEmbedCanvasPeer$XEmbedServer;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XReparentEvent = ::sun::awt::X11::XReparentEvent;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer_FieldInfo_[] = {
	{"xembedLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbedCanvasPeer, xembedLog)},
	{"applicationActive", "Z", nullptr, 0, $field(XEmbedCanvasPeer, applicationActive)},
	{"xembed", "Lsun/awt/X11/XEmbedCanvasPeer$XEmbedServer;", nullptr, 0, $field(XEmbedCanvasPeer, xembed)},
	{"accelerators", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/awt/AWTKeyStroke;>;", 0, $field(XEmbedCanvasPeer, accelerators)},
	{"accel_lookup", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/AWTKeyStroke;Ljava/lang/Long;>;", 0, $field(XEmbedCanvasPeer, accel_lookup)},
	{"grabbed_keys", "Ljava/util/Set;", "Ljava/util/Set<Lsun/awt/X11/XEmbedCanvasPeer$GrabbedKey;>;", 0, $field(XEmbedCanvasPeer, grabbed_keys)},
	{"ACCEL_LOCK", "Ljava/lang/Object;", nullptr, 0, $field(XEmbedCanvasPeer, ACCEL_LOCK)},
	{"GRAB_LOCK", "Ljava/lang/Object;", nullptr, 0, $field(XEmbedCanvasPeer, GRAB_LOCK)},
	{}
};

$MethodInfo _XEmbedCanvasPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getWindow", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer::*)()>(&XEmbedCanvasPeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer::*)($XCreateWindowParams*)>(&XEmbedCanvasPeer::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer::*)($Component*)>(&XEmbedCanvasPeer::init$))},
	{"canvasFocusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"canvasFocusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"childDestroyed", "()V", nullptr, 0},
	{"childResized", "()V", nullptr, 0},
	{"deinstallAcceleratorListener", "()V", nullptr, 0},
	{"deinstallActivateListener", "()V", nullptr, 0},
	{"deinstallModalityListener", "()V", nullptr, 0},
	{"detachChild", "()V", nullptr, 0},
	{"disableBackgroundErase", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"embedChild", "(J)V", nullptr, 0},
	{"endDispatching", "()V", nullptr, 0},
	{"focusNext", "()V", nullptr, 0},
	{"focusPrev", "()V", nullptr, 0},
	{"forwardKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getBData", "(Ljava/awt/event/KeyEvent;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($KeyEvent*)>(&XEmbedCanvasPeer::getBData))},
	{"getClientBounds", "()Ljava/awt/Rectangle;", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTopLevel", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, 0},
	{"grabKey", "(JJ)V", nullptr, 0},
	{"handleClientMessage", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"initDispatching", "()V", nullptr, 0},
	{"installAcceleratorListener", "()V", nullptr, 0},
	{"installActivateListener", "()V", nullptr, 0},
	{"installModalityListener", "()V", nullptr, 0},
	{"isApplicationActive", "()Z", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isXEmbedActive", "()Z", nullptr, 0},
	{"modalityPopped", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC},
	{"modalityPushed", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC},
	{"notifyChildEmbedded", "()V", nullptr, 0},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PROTECTED},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PROTECTED},
	{"processXEmbedDnDEvent", "(JI)Z", nullptr, $PUBLIC},
	{"propogateRegisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, 0},
	{"propogateUnRegisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, 0},
	{"registerAccelerator", "(JJJ)V", nullptr, 0},
	{"removeXEmbedDropTarget", "()V", nullptr, $PUBLIC},
	{"requestXEmbedFocus", "()V", nullptr, 0},
	{"setXEmbedDropTarget", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrabKey", "(JJ)V", nullptr, 0},
	{"unregisterAccelerator", "(J)V", nullptr, 0},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XEmbedCanvasPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$GrabbedKey", "sun.awt.X11.XEmbedCanvasPeer", "GrabbedKey", $STATIC},
	{"sun.awt.X11.XEmbedCanvasPeer$XEmbedServer", "sun.awt.X11.XEmbedCanvasPeer", "XEmbedServer", 0},
	{"sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget", "sun.awt.X11.XEmbedCanvasPeer", "XEmbedDropTarget", $PRIVATE | $STATIC},
	{"sun.awt.X11.XEmbedCanvasPeer$9", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$8", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$7", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$6", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$5", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$4", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XEmbedCanvasPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer",
	"sun.awt.X11.XCanvasPeer",
	"java.awt.event.WindowFocusListener,java.awt.KeyEventPostProcessor,sun.awt.ModalityListener,sun.awt.WindowIDProvider",
	_XEmbedCanvasPeer_FieldInfo_,
	_XEmbedCanvasPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedCanvasPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer$GrabbedKey,sun.awt.X11.XEmbedCanvasPeer$XEmbedServer,sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget,sun.awt.X11.XEmbedCanvasPeer$9,sun.awt.X11.XEmbedCanvasPeer$8,sun.awt.X11.XEmbedCanvasPeer$7,sun.awt.X11.XEmbedCanvasPeer$6,sun.awt.X11.XEmbedCanvasPeer$5,sun.awt.X11.XEmbedCanvasPeer$4,sun.awt.X11.XEmbedCanvasPeer$3,sun.awt.X11.XEmbedCanvasPeer$2,sun.awt.X11.XEmbedCanvasPeer$1"
};

$Object* allocate$XEmbedCanvasPeer($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer));
}

int64_t XEmbedCanvasPeer::getWindow() {
	 return this->$XCanvasPeer::getWindow();
}

$String* XEmbedCanvasPeer::toString() {
	 return this->$XCanvasPeer::toString();
}

int32_t XEmbedCanvasPeer::hashCode() {
	 return this->$XCanvasPeer::hashCode();
}

bool XEmbedCanvasPeer::equals(Object$* arg0) {
	 return this->$XCanvasPeer::equals(arg0);
}

$Object* XEmbedCanvasPeer::clone() {
	 return this->$XCanvasPeer::clone();
}

void XEmbedCanvasPeer::finalize() {
	this->$XCanvasPeer::finalize();
}

$PlatformLogger* XEmbedCanvasPeer::xembedLog = nullptr;

void XEmbedCanvasPeer::init$() {
	$XCanvasPeer::init$();
	$set(this, xembed, $new($XEmbedCanvasPeer$XEmbedServer, this));
	$set(this, accelerators, $new($HashMap));
	$set(this, accel_lookup, $new($HashMap));
	$set(this, grabbed_keys, $new($HashSet));
	$set(this, ACCEL_LOCK, this->accelerators);
	$set(this, GRAB_LOCK, this->grabbed_keys);
}

void XEmbedCanvasPeer::init$($XCreateWindowParams* params) {
	$XCanvasPeer::init$(params);
	$set(this, xembed, $new($XEmbedCanvasPeer$XEmbedServer, this));
	$set(this, accelerators, $new($HashMap));
	$set(this, accel_lookup, $new($HashMap));
	$set(this, grabbed_keys, $new($HashSet));
	$set(this, ACCEL_LOCK, this->accelerators);
	$set(this, GRAB_LOCK, this->grabbed_keys);
}

void XEmbedCanvasPeer::init$($Component* target) {
	$XCanvasPeer::init$(target);
	$set(this, xembed, $new($XEmbedCanvasPeer$XEmbedServer, this));
	$set(this, accelerators, $new($HashMap));
	$set(this, accel_lookup, $new($HashMap));
	$set(this, grabbed_keys, $new($HashSet));
	$set(this, ACCEL_LOCK, this->accelerators);
	$set(this, GRAB_LOCK, this->grabbed_keys);
}

void XEmbedCanvasPeer::postInit($XCreateWindowParams* params) {
	$XCanvasPeer::postInit(params);
	installActivateListener();
	installAcceleratorListener();
	installModalityListener();
	$nc(this->target)->setFocusTraversalKeysEnabled(false);
}

void XEmbedCanvasPeer::preInit($XCreateWindowParams* params) {
	$XCanvasPeer::preInit(params);
	$init($XBaseWindow);
	$nc(params)->put($XBaseWindow::EVENT_MASK, $($Long::valueOf((((((((((($XConstants::KeyPressMask | $XConstants::KeyReleaseMask) | $XConstants::FocusChangeMask) | $XConstants::ButtonPressMask) | $XConstants::ButtonReleaseMask) | $XConstants::EnterWindowMask) | $XConstants::LeaveWindowMask) | $XConstants::PointerMotionMask) | $XConstants::ButtonMotionMask) | $XConstants::ExposureMask) | $XConstants::StructureNotifyMask) | $XConstants::SubstructureNotifyMask)));
}

void XEmbedCanvasPeer::installModalityListener() {
	$nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->addModalityListener(this);
}

void XEmbedCanvasPeer::deinstallModalityListener() {
	$nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->removeModalityListener(this);
}

void XEmbedCanvasPeer::installAcceleratorListener() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addKeyEventPostProcessor(this);
}

void XEmbedCanvasPeer::deinstallAcceleratorListener() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removeKeyEventPostProcessor(this);
}

void XEmbedCanvasPeer::installActivateListener() {
	$var($Window, toplevel, getTopLevel(this->target));
	if (toplevel != nullptr) {
		toplevel->addWindowFocusListener(this);
		this->applicationActive = toplevel->isFocused();
	}
}

void XEmbedCanvasPeer::deinstallActivateListener() {
	$var($Window, toplevel, getTopLevel(this->target));
	if (toplevel != nullptr) {
		toplevel->removeWindowFocusListener(this);
	}
}

bool XEmbedCanvasPeer::isXEmbedActive() {
	return $nc(this->xembed)->handle != 0;
}

bool XEmbedCanvasPeer::isApplicationActive() {
	return this->applicationActive;
}

void XEmbedCanvasPeer::initDispatching() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Init embedding for "_s, $($Long::toHexString($nc(this->xembed)->handle))}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XToolkit::addEventDispatcher($nc(this->xembed)->handle, this->xembed);
			$XlibWrapper::XSelectInput($XToolkit::getDisplay(), $nc(this->xembed)->handle, $XConstants::StructureNotifyMask | $XConstants::PropertyChangeMask);
			$nc($($XDropTargetRegistry::getRegistry()))->registerXEmbedClient(getWindow(), $nc(this->xembed)->handle);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc(this->xembed)->processXEmbedInfo();
	notifyChildEmbedded();
}

void XEmbedCanvasPeer::endDispatching() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"End dispatching for "_s, $($Long::toHexString($nc(this->xembed)->handle))}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc($($XDropTargetRegistry::getRegistry()))->unregisterXEmbedClient(getWindow(), $nc(this->xembed)->handle);
			$XToolkit::removeEventDispatcher($nc(this->xembed)->handle, this->xembed);
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

void XEmbedCanvasPeer::embedChild(int64_t child) {
	if ($nc(this->xembed)->handle != 0) {
		detachChild();
	}
	$nc(this->xembed)->handle = child;
	initDispatching();
}

void XEmbedCanvasPeer::childDestroyed() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Child "_s, $($Long::toHexString($nc(this->xembed)->handle)), " has self-destroyed."_s}));
	}
	endDispatching();
	$nc(this->xembed)->handle = 0;
}

void XEmbedCanvasPeer::handleEvent($AWTEvent* e) {
	$XCanvasPeer::handleEvent(e);
	if (isXEmbedActive()) {
		switch ($nc(e)->getID()) {
		case $FocusEvent::FOCUS_GAINED:
			{
				canvasFocusGained($cast($FocusEvent, e));
				break;
			}
		case $FocusEvent::FOCUS_LOST:
			{
				canvasFocusLost($cast($FocusEvent, e));
				break;
			}
		case $KeyEvent::KEY_PRESSED:
			{}
		case $KeyEvent::KEY_RELEASED:
			{
				if (!$nc(($cast($InputEvent, e)))->isConsumed()) {
					forwardKeyEvent($cast($KeyEvent, e));
				}
				break;
			}
		}
	}
}

void XEmbedCanvasPeer::dispatchEvent($XEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$XCanvasPeer::dispatchEvent(ev);
	{
		$var($XCreateWindowEvent, cr, nullptr)
		$var($XDestroyWindowEvent, dn, nullptr)
		$var($XReparentEvent, rep, nullptr)
		switch ($nc(ev)->get_type()) {
		case $XConstants::CreateNotify:
			{
				$assign(cr, ev->get_xcreatewindow());
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(XEmbedCanvasPeer::xembedLog)->finest($$str({"Message on embedder: "_s, cr}));
				}
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$var($String, var$0, $$str({"Create notify for parent "_s, $($Long::toHexString($nc(cr)->get_parent())), ", window "_s}));
					$nc(XEmbedCanvasPeer::xembedLog)->finer($$concat(var$0, $($Long::toHexString($nc(cr)->get_window()))));
				}
				embedChild($nc(cr)->get_window());
				break;
			}
		case $XConstants::DestroyNotify:
			{
				$assign(dn, ev->get_xdestroywindow());
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(XEmbedCanvasPeer::xembedLog)->finest($$str({"Message on embedder: "_s, dn}));
				}
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XEmbedCanvasPeer::xembedLog)->finer($$str({"Destroy notify for parent: "_s, dn}));
				}
				childDestroyed();
				break;
			}
		case $XConstants::ReparentNotify:
			{
				$assign(rep, ev->get_xreparent());
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(XEmbedCanvasPeer::xembedLog)->finest($$str({"Message on embedder: "_s, rep}));
				}
				$init($PlatformLogger$Level);
				if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$var($String, var$3, $$str({"Reparent notify for parent "_s, $($Long::toHexString($nc(rep)->get_parent())), ", window "_s}));
					$var($String, var$2, $$concat(var$3, $($Long::toHexString($nc(rep)->get_window()))));
					$var($String, var$1, $$concat(var$2, ", event "_s));
					$nc(XEmbedCanvasPeer::xembedLog)->finer($$concat(var$1, $($Long::toHexString($nc(rep)->get_event()))));
				}
				int64_t var$4 = $nc(rep)->get_parent();
				if (var$4 == getWindow()) {
					embedChild(rep->get_window());
				} else {
					childDestroyed();
				}
				break;
			}
		}
	}
}

$Dimension* XEmbedCanvasPeer::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	if (isXEmbedActive()) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			$var($Dimension, var$2, nullptr);
			bool return$1 = false;
			try {
				int64_t p_hints = $XlibWrapper::XAllocSizeHints();
				$var($XSizeHints, hints, $new($XSizeHints, p_hints));
				$XlibWrapper::XGetWMNormalHints($XToolkit::getDisplay(), $nc(this->xembed)->handle, p_hints, $XlibWrapper::larg1);
				int32_t var$3 = hints->get_width();
				$var($Dimension, res, $new($Dimension, var$3, hints->get_height()));
				$XlibWrapper::XFree(p_hints);
				$assign(var$2, res);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
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
	} else {
		return $XCanvasPeer::getPreferredSize();
	}
}

$Dimension* XEmbedCanvasPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	if (isXEmbedActive()) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			$var($Dimension, var$2, nullptr);
			bool return$1 = false;
			try {
				int64_t p_hints = $XlibWrapper::XAllocSizeHints();
				$var($XSizeHints, hints, $new($XSizeHints, p_hints));
				$XlibWrapper::XGetWMNormalHints($XToolkit::getDisplay(), $nc(this->xembed)->handle, p_hints, $XlibWrapper::larg1);
				int32_t var$3 = hints->get_min_width();
				$var($Dimension, res, $new($Dimension, var$3, hints->get_min_height()));
				$XlibWrapper::XFree(p_hints);
				$assign(var$2, res);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
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
	} else {
		return $XCanvasPeer::getMinimumSize();
	}
}

void XEmbedCanvasPeer::dispose() {
	if (isXEmbedActive()) {
		detachChild();
	}
	deinstallActivateListener();
	deinstallModalityListener();
	deinstallAcceleratorListener();
	$XCanvasPeer::dispose();
}

bool XEmbedCanvasPeer::isFocusable() {
	return true;
}

$Window* XEmbedCanvasPeer::getTopLevel($Component* comp$renamed) {
	$var($Component, comp, comp$renamed);
	while (comp != nullptr && !($instanceOf($Window, comp))) {
		$assign(comp, comp->getParent());
	}
	return $cast($Window, comp);
}

$Rectangle* XEmbedCanvasPeer::getClientBounds() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Rectangle, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($XWindowAttributes, wattr, $new($XWindowAttributes));
			{
				$var($Throwable, var$3, nullptr);
				$var($Rectangle, var$5, nullptr);
				bool return$4 = false;
				try {
					$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), $nc(this->xembed)->handle, wattr->pData);
					$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
					if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
						$assign(var$5, nullptr);
						return$4 = true;
						goto $finally1;
					}
					int32_t var$6 = wattr->get_x();
					int32_t var$7 = wattr->get_y();
					int32_t var$8 = wattr->get_width();
					$assign(var$5, $new($Rectangle, var$6, var$7, var$8, wattr->get_height()));
					return$4 = true;
					goto $finally1;
				} catch ($Throwable& var$9) {
					$assign(var$3, var$9);
				} $finally1: {
					wattr->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					$assign(var$2, var$5);
					return$1 = true;
					goto $finally;
				}
			}
		} catch ($Throwable& var$10) {
			$assign(var$0, var$10);
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

void XEmbedCanvasPeer::childResized() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($Rectangle, bounds, getClientBounds());
		$nc(XEmbedCanvasPeer::xembedLog)->finer($$str({"Child resized: "_s, bounds}));
	}
	$var($AppContext, var$0, $XToolkit::targetToAppContext(this->target));
	$XToolkit::postEvent(var$0, $$new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_RESIZED));
}

void XEmbedCanvasPeer::focusNext() {
	$useLocalCurrentObjectStackCache();
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Requesting focus for the next component after embedder"_s);
		postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$1, this)));
	} else {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("XEmbed is not active - denying focus next"_s);
	}
}

void XEmbedCanvasPeer::focusPrev() {
	$useLocalCurrentObjectStackCache();
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Requesting focus for the next component after embedder"_s);
		postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$2, this)));
	} else {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("XEmbed is not active - denying focus prev"_s);
	}
}

void XEmbedCanvasPeer::requestXEmbedFocus() {
	$useLocalCurrentObjectStackCache();
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Requesting focus for client"_s);
		postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$3, this)));
	} else {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("XEmbed is not active - denying request focus"_s);
	}
}

void XEmbedCanvasPeer::notifyChildEmbedded() {
	int64_t var$0 = $nc(this->xembed)->handle;
	int64_t var$1 = getWindow();
	$nc(this->xembed)->sendMessage(var$0, 0, var$1, $Math::min($nc(this->xembed)->version, (int64_t)0), 0);
	if (isApplicationActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Sending WINDOW_ACTIVATE during initialization"_s);
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 1);
		if (hasFocus()) {
			$nc(XEmbedCanvasPeer::xembedLog)->fine("Sending FOCUS_GAINED during initialization"_s);
			$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 4, 0, 0, 0);
		}
	}
}

void XEmbedCanvasPeer::detachChild() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Detaching child "_s, $($Long::toHexString($nc(this->xembed)->handle))}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XUnmapWindow($XToolkit::getDisplay(), $nc(this->xembed)->handle);
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = $nc(this->xembed)->handle;
			$XlibWrapper::XReparentWindow(var$1, var$2, $XToolkit::getDefaultRootWindow(), 0, 0);
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	endDispatching();
	$nc(this->xembed)->handle = 0;
}

void XEmbedCanvasPeer::windowGainedFocus($WindowEvent* e) {
	this->applicationActive = true;
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Sending WINDOW_ACTIVATE"_s);
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 1);
	}
}

void XEmbedCanvasPeer::windowLostFocus($WindowEvent* e) {
	this->applicationActive = false;
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Sending WINDOW_DEACTIVATE"_s);
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 2);
	}
}

void XEmbedCanvasPeer::canvasFocusGained($FocusEvent* e) {
	if (isXEmbedActive()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Forwarding FOCUS_GAINED"_s);
		int32_t flavor = 0;
		$init($FocusEvent$Cause);
		if ($nc(e)->getCause() == $FocusEvent$Cause::TRAVERSAL_FORWARD) {
			flavor = 1;
		} else {
			if (e->getCause() == $FocusEvent$Cause::TRAVERSAL_BACKWARD) {
				flavor = 2;
			}
		}
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 4, flavor, 0, 0);
	}
}

void XEmbedCanvasPeer::canvasFocusLost($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool var$0 = isXEmbedActive();
	if (var$0 && !$nc(e)->isTemporary()) {
		$nc(XEmbedCanvasPeer::xembedLog)->fine("Forwarding FOCUS_LOST"_s);
		int32_t num = 0;
		if ($nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.xembed.testing"_s)))))))->booleanValue()) {
			$var($Component, opp, e->getOppositeComponent());
			try {
				num = $Integer::parseInt($($nc(opp)->getName()));
			} catch ($NumberFormatException& nfe) {
			}
		}
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 5, num, 0, 0);
	}
}

$bytes* XEmbedCanvasPeer::getBData($KeyEvent* e) {
	$init(XEmbedCanvasPeer);
	return $nc($($AWTAccessor::getAWTEventAccessor()))->getBData(e);
}

void XEmbedCanvasPeer::forwardKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(XEmbedCanvasPeer::xembedLog)->fine("Try to forward key event"_s);
	$var($bytes, bdata, getBData(e));
	int64_t data = $Native::toData(bdata);
	if (data == 0) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XKeyEvent, ke, $new($XKeyEvent, data));
			ke->set_window($nc(this->xembed)->handle);
			$init($PlatformLogger$Level);
			if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Forwarding native key event: "_s, ke}));
			}
			$XToolkit::awtLock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$XlibWrapper::XSendEvent($XToolkit::getDisplay(), $nc(this->xembed)->handle, false, $XConstants::NoEventMask, data);
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$init($XlibWrapper);
			$nc($XlibWrapper::unsafe)->freeMemory(data);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XEmbedCanvasPeer::grabKey(int64_t keysym, int64_t modifiers) {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$4, this, keysym, modifiers)));
}

void XEmbedCanvasPeer::ungrabKey(int64_t keysym, int64_t modifiers) {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$5, this, keysym, modifiers)));
}

void XEmbedCanvasPeer::registerAccelerator(int64_t accel_id, int64_t keysym, int64_t modifiers) {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$6, this, keysym, modifiers, accel_id)));
}

void XEmbedCanvasPeer::unregisterAccelerator(int64_t accel_id) {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->target, $$new($XEmbedCanvasPeer$7, this, accel_id)));
}

void XEmbedCanvasPeer::propogateRegisterAccelerator($AWTKeyStroke* stroke) {
	$useLocalCurrentObjectStackCache();
	$var($XWindowPeer, parent, getToplevelXWindow());
	if (parent != nullptr && $instanceOf($XEmbeddedFramePeer, parent)) {
		$var($XEmbeddedFramePeer, embedded, $cast($XEmbeddedFramePeer, parent));
		embedded->registerAccelerator(stroke);
	}
}

void XEmbedCanvasPeer::propogateUnRegisterAccelerator($AWTKeyStroke* stroke) {
	$useLocalCurrentObjectStackCache();
	$var($XWindowPeer, parent, getToplevelXWindow());
	if (parent != nullptr && $instanceOf($XEmbeddedFramePeer, parent)) {
		$var($XEmbeddedFramePeer, embedded, $cast($XEmbeddedFramePeer, parent));
		embedded->unregisterAccelerator(stroke);
	}
}

bool XEmbedCanvasPeer::postProcessKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($XWindowPeer, parent, getToplevelXWindow());
	bool var$0 = parent == nullptr || !$nc(($cast($Window, $($nc(parent)->getTarget()))))->isFocused();
	if (var$0 || $nc(this->target)->isFocusOwner()) {
		return false;
	}
	bool result = false;
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XEmbedCanvasPeer::xembedLog)->finer($$str({"Post-processing event "_s, e}));
	}
	$var($AWTKeyStroke, stroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(e));
	int64_t accel_id = 0;
	bool exists = false;
	$synchronized(this->ACCEL_LOCK) {
		exists = $nc(this->accel_lookup)->containsKey(stroke);
		if (exists) {
			accel_id = $nc(($cast($Long, $($nc(this->accel_lookup)->get(stroke)))))->longValue();
		}
	}
	if (exists) {
		if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Activating accelerator "_s, $$str(accel_id)}));
		}
		$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 14, accel_id, 0, 0);
		result = true;
	}
	exists = false;
	$var($XEmbedCanvasPeer$GrabbedKey, key, $new($XEmbedCanvasPeer$GrabbedKey, e));
	$synchronized(this->GRAB_LOCK) {
		exists = $nc(this->grabbed_keys)->contains(key);
	}
	if (exists) {
		if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XEmbedCanvasPeer::xembedLog)->fine($$str({"Forwarding grabbed key "_s, e}));
		}
		forwardKeyEvent(e);
		result = true;
	}
	return result;
}

void XEmbedCanvasPeer::modalityPushed($ModalityEvent* ev) {
	$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 10);
}

void XEmbedCanvasPeer::modalityPopped($ModalityEvent* ev) {
	$nc(this->xembed)->sendMessage($nc(this->xembed)->handle, 11);
}

void XEmbedCanvasPeer::handleClientMessage($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XCanvasPeer::handleClientMessage(xev);
	$var($XClientMessageEvent, msg, $nc(xev)->get_xclient());
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XEmbedCanvasPeer::xembedLog)->finer($$str({"Client message to embedder: "_s, msg}));
	}
	int64_t var$0 = $nc(msg)->get_message_type();
	$init($XEmbedHelper);
	if (var$0 == $nc($XEmbedHelper::XEmbed)->getAtom()) {
		if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XEmbedCanvasPeer::xembedLog)->fine($($XEmbedHelper::XEmbedMessageToString(msg)));
		}
	}
	if (isXEmbedActive()) {
		switch ((int32_t)$nc(msg)->get_data(1)) {
		case 3:
			{
				requestXEmbedFocus();
				break;
			}
		case 6:
			{
				focusNext();
				break;
			}
		case 7:
			{
				focusPrev();
				break;
			}
		case 12:
			{
				int64_t var$1 = msg->get_data(2);
				int64_t var$2 = msg->get_data(3);
				registerAccelerator(var$1, var$2, msg->get_data(4));
				break;
			}
		case 13:
			{
				unregisterAccelerator(msg->get_data(2));
				break;
			}
		case 108:
			{
				int64_t var$3 = msg->get_data(3);
				grabKey(var$3, msg->get_data(4));
				break;
			}
		case 109:
			{
				int64_t var$4 = msg->get_data(3);
				ungrabKey(var$4, msg->get_data(4));
				break;
			}
		}
	} else {
		$nc(XEmbedCanvasPeer::xembedLog)->finer("But XEmbed is not Active!"_s);
	}
}

void XEmbedCanvasPeer::setXEmbedDropTarget() {
	$var($Runnable, r, $new($XEmbedCanvasPeer$8, this));
	$SunToolkit::executeOnEventHandlerThread(this->target, r);
}

void XEmbedCanvasPeer::removeXEmbedDropTarget() {
	$var($Runnable, r, $new($XEmbedCanvasPeer$9, this));
	$SunToolkit::executeOnEventHandlerThread(this->target, r);
}

bool XEmbedCanvasPeer::processXEmbedDnDEvent(int64_t ctxt, int32_t eventID) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XEmbedCanvasPeer::xembedLog)->finest($$str({"     Drop target="_s, $($nc(this->target)->getDropTarget())}));
	}
	if ($instanceOf($XEmbedCanvasPeer$XEmbedDropTarget, $($nc(this->target)->getDropTarget()))) {
		$var($AppContext, appContext, $XToolkit::targetToAppContext($(getTarget())));
		$var($XDropTargetContextPeer, peer, $XDropTargetContextPeer::getPeer(appContext));
		$nc(peer)->forwardEventToEmbedded($nc(this->xembed)->handle, ctxt, eventID);
		return true;
	} else {
		return false;
	}
}

void XEmbedCanvasPeer::disableBackgroundErase() {
	$XCanvasPeer::disableBackgroundErase();
}

$GraphicsConfiguration* XEmbedCanvasPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return $XCanvasPeer::getAppropriateGraphicsConfiguration(gc);
}

void clinit$XEmbedCanvasPeer($Class* class$) {
	$assignStatic(XEmbedCanvasPeer::xembedLog, $PlatformLogger::getLogger("sun.awt.X11.xembed.XEmbedCanvasPeer"_s));
}

XEmbedCanvasPeer::XEmbedCanvasPeer() {
}

$Class* XEmbedCanvasPeer::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer, name, initialize, &_XEmbedCanvasPeer_ClassInfo_, clinit$XEmbedCanvasPeer, allocate$XEmbedCanvasPeer);
	return class$;
}

$Class* XEmbedCanvasPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun