#include <sun/awt/X11/XWindow.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/ExtendedKeyCodes.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XAwtState.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XButtonEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XCrossingEvent.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExposeEvent.h>
#include <sun/awt/X11/XGlobalCursorManager.h>
#include <sun/awt/X11/XKeyEvent.h>
#include <sun/awt/X11/XKeySymConstants.h>
#include <sun/awt/X11/XKeysym$Keysym2JavaKeycode.h>
#include <sun/awt/X11/XKeysym.h>
#include <sun/awt/X11/XMotionEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XRepaintArea.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XVisualInfo.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWindow$1.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef AWT_MULTICLICK_SMUDGE
#undef BACKING_STORE
#undef BORDER_PIXEL
#undef BOUNDS
#undef CHAR_UNDEFINED
#undef COLORMAP
#undef COMPONENT_HIDDEN
#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef COMPONENT_SHOWN
#undef CTRL_DOWN_MASK
#undef CTRL_MASK
#undef DEFAULT_CURSOR
#undef DEPTH
#undef DIALOG
#undef EMBEDDED
#undef EVENT_MASK
#undef FINE
#undef FINER
#undef FINEST
#undef JAWT_LOCK_BOUNDS_CHANGED
#undef JAWT_LOCK_CLIP_CHANGED
#undef JAWT_LOCK_ERROR
#undef JAWT_LOCK_SURFACE_CHANGED
#undef KEY_LOCATION_UNKNOWN
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef MAX_BUTTONS_SUPPORTED
#undef META_DOWN_MASK
#undef META_MASK
#undef MIN_SIZE
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef NOBUTTON
#undef PARENT_WINDOW
#undef PLAIN
#undef PROP_MWM_HINTS_ELEMENTS
#undef REPARENTED
#undef SHIFT_DOWN_MASK
#undef SHIFT_MASK
#undef TARGET
#undef TRUE
#undef ULTIMATE_PRIORITY_EVENT
#undef VALUE_MASK
#undef VISUAL
#undef VISUAL_CLASS
#undef VK_ALT
#undef VK_ALT_GRAPH
#undef VK_CONTROL
#undef VK_META
#undef VK_SHIFT
#undef VK_UNDEFINED
#undef WHEEL_UNIT_SCROLL
#undef XA_MWM_HINTS
#undef XA_WM_STATE

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AWTEventAccessor = ::sun::awt::AWTAccessor$AWTEventAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $ExtendedKeyCodes = ::sun::awt::ExtendedKeyCodes;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $Native = ::sun::awt::X11::Native;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XAwtState = ::sun::awt::X11::XAwtState;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XButtonEvent = ::sun::awt::X11::XButtonEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XCrossingEvent = ::sun::awt::X11::XCrossingEvent;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XExposeEvent = ::sun::awt::X11::XExposeEvent;
using $XGlobalCursorManager = ::sun::awt::X11::XGlobalCursorManager;
using $XKeyEvent = ::sun::awt::X11::XKeyEvent;
using $XKeySymConstants = ::sun::awt::X11::XKeySymConstants;
using $XKeysym = ::sun::awt::X11::XKeysym;
using $XKeysym$Keysym2JavaKeycode = ::sun::awt::X11::XKeysym$Keysym2JavaKeycode;
using $XMotionEvent = ::sun::awt::X11::XMotionEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XRepaintArea = ::sun::awt::X11::XRepaintArea;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XVisualInfo = ::sun::awt::X11::XVisualInfo;
using $XWM = ::sun::awt::X11::XWM;
using $XWindow$1 = ::sun::awt::X11::XWindow$1;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindow_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, log)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, insLog)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, eventLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindow, focusLog)},
	{"keyEventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, keyEventLog)},
	{"AWT_MULTICLICK_SMUDGE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XWindow, AWT_MULTICLICK_SMUDGE)},
	{"lastX", "I", nullptr, $STATIC, $staticField(XWindow, lastX)},
	{"lastY", "I", nullptr, $STATIC, $staticField(XWindow, lastY)},
	{"lastTime", "J", nullptr, $STATIC, $staticField(XWindow, lastTime)},
	{"lastButton", "J", nullptr, $STATIC, $staticField(XWindow, lastButton)},
	{"lastWindowRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/awt/X11/XWindow;>;", $STATIC, $staticField(XWindow, lastWindowRef)},
	{"clickCount", "I", nullptr, $STATIC, $staticField(XWindow, clickCount)},
	{"oldWidth", "I", nullptr, 0, $field(XWindow, oldWidth)},
	{"oldHeight", "I", nullptr, 0, $field(XWindow, oldHeight)},
	{"mwm_hints", "Lsun/awt/X11/PropMwmHints;", nullptr, $PROTECTED, $field(XWindow, mwm_hints)},
	{"wm_protocols", "Lsun/awt/X11/XAtom;", nullptr, $PROTECTED | $STATIC, $staticField(XWindow, wm_protocols)},
	{"wm_delete_window", "Lsun/awt/X11/XAtom;", nullptr, $PROTECTED | $STATIC, $staticField(XWindow, wm_delete_window)},
	{"wm_take_focus", "Lsun/awt/X11/XAtom;", nullptr, $PROTECTED | $STATIC, $staticField(XWindow, wm_take_focus)},
	{"stateChanged", "Z", nullptr, $PRIVATE, $field(XWindow, stateChanged$)},
	{"savedState", "I", nullptr, $PRIVATE, $field(XWindow, savedState)},
	{"winAttr", "Lsun/awt/X11/XWindowAttributesData;", nullptr, 0, $field(XWindow, winAttr)},
	{"graphicsConfig", "Lsun/awt/X11GraphicsConfig;", nullptr, $PROTECTED, $field(XWindow, graphicsConfig)},
	{"graphicsConfigData", "Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PROTECTED, $field(XWindow, graphicsConfigData)},
	{"reparented", "Z", nullptr, $PRIVATE, $field(XWindow, reparented)},
	{"parent", "Lsun/awt/X11/XWindow;", nullptr, 0, $field(XWindow, parent)},
	{"target", "Ljava/awt/Component;", nullptr, 0, $field(XWindow, target)},
	{"JAWT_LOCK_ERROR", "I", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, JAWT_LOCK_ERROR)},
	{"JAWT_LOCK_CLIP_CHANGED", "I", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, JAWT_LOCK_CLIP_CHANGED)},
	{"JAWT_LOCK_BOUNDS_CHANGED", "I", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, JAWT_LOCK_BOUNDS_CHANGED)},
	{"JAWT_LOCK_SURFACE_CHANGED", "I", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, JAWT_LOCK_SURFACE_CHANGED)},
	{"drawState", "I", nullptr, $PRIVATE, $field(XWindow, drawState)},
	{"TARGET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XWindow, TARGET)},
	{"REPARENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XWindow, REPARENTED)},
	{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, 0, $field(XWindow, surfaceData)},
	{"paintArea", "Lsun/awt/X11/XRepaintArea;", nullptr, 0, $field(XWindow, paintArea)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $staticField(XWindow, defaultFont)},
	{"mouseButtonClickAllowed", "I", nullptr, $PRIVATE, $field(XWindow, mouseButtonClickAllowed)},
	{"backgroundColor", "Ljava/awt/Color;", nullptr, 0, $field(XWindow, backgroundColor)},
	{"mouseAboveMe", "Z", nullptr, $PRIVATE, $field(XWindow, mouseAboveMe)},
	{"fullScreenExclusiveModeState", "Z", nullptr, $PRIVATE, $field(XWindow, fullScreenExclusiveModeState)},
	{}
};

$MethodInfo _XWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"*getContentWindow", "()J", nullptr, $PUBLIC},
	{"*getWindow", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XWindow::*)($XCreateWindowParams*)>(&XWindow::init$))},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XWindow::*)()>(&XWindow::init$))},
	{"<init>", "(JLjava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(XWindow::*)(int64_t,$Rectangle*)>(&XWindow::init$))},
	{"<init>", "(Ljava/awt/Component;JLjava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(XWindow::*)($Component*,int64_t,$Rectangle*)>(&XWindow::init$))},
	{"<init>", "(Ljava/awt/Component;J)V", nullptr, 0, $method(static_cast<void(XWindow::*)($Component*,int64_t)>(&XWindow::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(XWindow::*)($Component*)>(&XWindow::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XWindow::*)(Object$*)>(&XWindow::init$))},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(XWindow::*)(int64_t)>(&XWindow::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"doEraseBackground", "()Z", nullptr, $PROTECTED},
	{"doLayout", "(IIII)V", nullptr, $PUBLIC},
	{"doValidateSurface", "()V", nullptr, $FINAL, $method(static_cast<void(XWindow::*)()>(&XWindow::doValidateSurface))},
	{"dumpKeysymArray", "(Lsun/awt/X11/XKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XWindow::*)($XKeyEvent*)>(&XWindow::dumpKeysymArray))},
	{"enterNotify", "(J)V", nullptr, $PROTECTED},
	{"flush", "()V", nullptr, $PROTECTED},
	{"getAWTKeyCodeForKeySym", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&XWindow::getAWTKeyCodeForKeySym))},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getDefaultFont", "()Ljava/awt/Font;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$Font*(*)()>(&XWindow::getDefaultFont))},
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "(Lsun/java2d/SurfaceData;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Font;)Ljava/awt/Graphics;", nullptr, 0},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGraphicsConfigurationData", "()Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PUBLIC},
	{"getKeySymForAWTKeyCode", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&XWindow::getKeySymForAWTKeyCode))},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC},
	{"getModifiers", "(III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&XWindow::getModifiers))},
	{"getModifiers", "(IIIZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t,bool)>(&XWindow::getModifiers))},
	{"getMouseMovementSmudge", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&XWindow::getMouseMovementSmudge))},
	{"getParentWindowID", "(Ljava/awt/Component;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($Component*)>(&XWindow::getParentWindowID))},
	{"getParentXWindowObject", "(Ljava/awt/Component;)Lsun/awt/X11/XWindow;", nullptr, $STATIC, $method(static_cast<XWindow*(*)($Component*)>(&XWindow::getParentXWindowObject))},
	{"getScale", "()I", nullptr, $PROTECTED},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTargetBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getWMClass", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWMProtocols", "()Lsun/awt/X11/XAtomList;", nullptr, $PROTECTED},
	{"getWMState", "()I", nullptr, 0},
	{"getWheelModifiers", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&XWindow::getWheelModifiers))},
	{"getWinBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getXModifiers", "(Ljava/awt/AWTKeyStroke;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($AWTKeyStroke*)>(&XWindow::getXModifiers))},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyPress", "(Lsun/awt/X11/XKeyEvent;)V", nullptr, $FINAL, $method(static_cast<void(XWindow::*)($XKeyEvent*)>(&XWindow::handleKeyPress))},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyRelease", "(Lsun/awt/X11/XKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(XWindow::*)($XKeyEvent*)>(&XWindow::handleKeyRelease))},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"haveCurrentX11InputMethodInstance", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(XWindow::*)()>(&XWindow::haveCurrentX11InputMethodInstance))},
	{"initGraphicsConfiguration", "()V", nullptr, $PROTECTED},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&XWindow::initIDs))},
	{"initWMProtocols", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XWindow::*)()>(&XWindow::initWMProtocols))},
	{"isDeadKey", "(J)Z", nullptr, $PRIVATE, $method(static_cast<bool(XWindow::*)(int64_t)>(&XWindow::isDeadKey))},
	{"isEmbedded", "()Z", nullptr, $PUBLIC},
	{"isFullScreenExclusiveMode", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XWindow::*)()>(&XWindow::isFullScreenExclusiveMode))},
	{"isLocationByPlatform", "()Z", nullptr, 0},
	{"isMouseAbove", "()Z", nullptr, $PUBLIC},
	{"isParentOf", "(Lsun/awt/X11/XWindow;)Z", nullptr, 0},
	{"isReparented", "()Z", nullptr, 0},
	{"isResizable", "()Z", nullptr, 0},
	{"isShowing", "()Z", nullptr, 0},
	{"isWheel", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&XWindow::isWheel))},
	{"keyEventType2Id", "(I)I", nullptr, 0},
	{"keysymToUnicode", "(JI)I", nullptr, 0},
	{"layout", "()V", nullptr, $PUBLIC},
	{"leaveNotify", "(J)V", nullptr, $PROTECTED},
	{"logIncomingKeyEvent", "(Lsun/awt/X11/XKeyEvent;)V", nullptr, 0},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"popup", "(IIII)V", nullptr, $PUBLIC},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"postEventStatic", "(Ljava/awt/AWTEvent;)V", nullptr, $STATIC, $method(static_cast<void(*)($AWTEvent*)>(&XWindow::postEventStatic))},
	{"postEventToEventQueue", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"postKeyEvent", "(IIIIIJIJII)V", nullptr, $PUBLIC},
	{"postPaintEvent", "(Ljava/awt/Component;IIII)V", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"prePostEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"primaryUnicode2JavaKeycode", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&XWindow::primaryUnicode2JavaKeycode))},
	{"repaint", "(IIII)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XWindow::*)(int32_t,int32_t,int32_t,int32_t)>(&XWindow::repaint))},
	{"repaint", "()V", nullptr, 0},
	{"reshape", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"scaleDown", "(I)I", nullptr, $PROTECTED},
	{"scaleUp", "(I)I", nullptr, $PROTECTED},
	{"sendEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $STATIC, $method(static_cast<void(*)($AWTEvent*)>(&XWindow::sendEvent))},
	{"setBData", "(Ljava/awt/event/KeyEvent;[B)V", nullptr, $STATIC, $method(static_cast<void(*)($KeyEvent*,$bytes*)>(&XWindow::setBData))},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC},
	{"setMouseAbove", "(Z)V", nullptr, $PROTECTED},
	{"setReparented", "(Z)V", nullptr, 0},
	{"stateChanged", "(JII)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSizeHints", "()V", nullptr, 0},
	{"updateSizeHints", "(IIII)V", nullptr, 0},
	{"updateSizeHints", "(II)V", nullptr, 0},
	{"validateSurface", "()V", nullptr, 0},
	{"winBackground", "(Ljava/awt/Color;)V", nullptr, 0},
	{"x11inputMethodLookupString", "(J[J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(XWindow::*)(int64_t,$longs*)>(&XWindow::x11inputMethodLookupString))},
	{"xSetBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XWindow::*)($Color*)>(&XWindow::xSetBackground))},
	{"xkeycodeToKeysym", "(Lsun/awt/X11/XKeyEvent;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($XKeyEvent*)>(&XWindow::xkeycodeToKeysym))},
	{"xkeycodeToPrimaryKeysym", "(Lsun/awt/X11/XKeyEvent;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(XWindow::*)($XKeyEvent*)>(&XWindow::xkeycodeToPrimaryKeysym))},
	{}
};

#define _METHOD_INDEX_getAWTKeyCodeForKeySym 22
#define _METHOD_INDEX_getKeySymForAWTKeyCode 32
#define _METHOD_INDEX_haveCurrentX11InputMethodInstance 62
#define _METHOD_INDEX_initIDs 64
#define _METHOD_INDEX_x11inputMethodLookupString 113

$InnerClassInfo _XWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindow_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindow",
	"sun.awt.X11.XBaseWindow",
	"sun.awt.X11ComponentPeer",
	_XWindow_FieldInfo_,
	_XWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindow$1"
};

$Object* allocate$XWindow($Class* clazz) {
	return $of($alloc(XWindow));
}

int64_t XWindow::getWindow() {
	 return this->$XBaseWindow::getWindow();
}

int64_t XWindow::getContentWindow() {
	 return this->$XBaseWindow::getContentWindow();
}

$Rectangle* XWindow::getBounds() {
	 return this->$XBaseWindow::getBounds();
}

$String* XWindow::toString() {
	 return this->$XBaseWindow::toString();
}

int32_t XWindow::hashCode() {
	 return this->$XBaseWindow::hashCode();
}

bool XWindow::equals(Object$* arg0) {
	 return this->$XBaseWindow::equals(arg0);
}

$Object* XWindow::clone() {
	 return this->$XBaseWindow::clone();
}

void XWindow::finalize() {
	this->$XBaseWindow::finalize();
}

$PlatformLogger* XWindow::log = nullptr;
$PlatformLogger* XWindow::insLog = nullptr;
$PlatformLogger* XWindow::eventLog = nullptr;
$PlatformLogger* XWindow::focusLog = nullptr;
$PlatformLogger* XWindow::keyEventLog = nullptr;
int32_t XWindow::lastX = 0;
int32_t XWindow::lastY = 0;
int64_t XWindow::lastTime = 0;
int64_t XWindow::lastButton = 0;
$WeakReference* XWindow::lastWindowRef = nullptr;
int32_t XWindow::clickCount = 0;
$XAtom* XWindow::wm_protocols = nullptr;
$XAtom* XWindow::wm_delete_window = nullptr;
$XAtom* XWindow::wm_take_focus = nullptr;
int32_t XWindow::JAWT_LOCK_ERROR = 0;
int32_t XWindow::JAWT_LOCK_CLIP_CHANGED = 0;
int32_t XWindow::JAWT_LOCK_BOUNDS_CHANGED = 0;
int32_t XWindow::JAWT_LOCK_SURFACE_CHANGED = 0;
$String* XWindow::TARGET = nullptr;
$String* XWindow::REPARENTED = nullptr;
$Font* XWindow::defaultFont = nullptr;

$Font* XWindow::getDefaultFont() {
	$load(XWindow);
	$synchronized(class$) {
		$init(XWindow);
		if (nullptr == XWindow::defaultFont) {
			$init($Font);
			$assignStatic(XWindow::defaultFont, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
		}
		return XWindow::defaultFont;
	}
}

void XWindow::initIDs() {
	$init(XWindow);
	$prepareNativeStatic(XWindow, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void XWindow::init$($XCreateWindowParams* params) {
	$XBaseWindow::init$(params);
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->drawState = (XWindow::JAWT_LOCK_CLIP_CHANGED | XWindow::JAWT_LOCK_BOUNDS_CHANGED) | XWindow::JAWT_LOCK_SURFACE_CHANGED;
	this->mouseButtonClickAllowed = 0;
	this->fullScreenExclusiveModeState = false;
}

void XWindow::init$() {
	$XBaseWindow::init$();
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->drawState = (XWindow::JAWT_LOCK_CLIP_CHANGED | XWindow::JAWT_LOCK_BOUNDS_CHANGED) | XWindow::JAWT_LOCK_SURFACE_CHANGED;
	this->mouseButtonClickAllowed = 0;
	this->fullScreenExclusiveModeState = false;
}

void XWindow::init$(int64_t parentWindow, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::BOUNDS),
		$of(bounds),
		$of($XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf(parentWindow)))
	})));
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->drawState = (XWindow::JAWT_LOCK_CLIP_CHANGED | XWindow::JAWT_LOCK_BOUNDS_CHANGED) | XWindow::JAWT_LOCK_SURFACE_CHANGED;
	this->mouseButtonClickAllowed = 0;
	this->fullScreenExclusiveModeState = false;
}

void XWindow::init$($Component* target, int64_t parentWindow, $Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::BOUNDS),
		$of(bounds),
		$of($XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf(parentWindow))),
		$of(XWindow::TARGET),
		$of(target)
	})));
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->drawState = (XWindow::JAWT_LOCK_CLIP_CHANGED | XWindow::JAWT_LOCK_BOUNDS_CHANGED) | XWindow::JAWT_LOCK_SURFACE_CHANGED;
	this->mouseButtonClickAllowed = 0;
	this->fullScreenExclusiveModeState = false;
}

void XWindow::init$($Component* target, int64_t parentWindow) {
	$useLocalCurrentObjectStackCache();
	XWindow::init$(target, parentWindow, $$new($Rectangle, $($nc(target)->getBounds())));
}

void XWindow::init$($Component* target) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, target);
	int64_t var$1 = ($nc(target)->getParent() == nullptr) ? (int64_t)0 : getParentWindowID(target);
	XWindow::init$(var$0, var$1, $$new($Rectangle, $($nc(target)->getBounds())));
}

void XWindow::init$(Object$* target) {
	XWindow::init$(nullptr, 0, nullptr);
}

void XWindow::init$(int64_t parentWindow) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$init($Boolean);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf(parentWindow))),
		$of(XWindow::REPARENTED),
		$of($Boolean::TRUE),
		$of($XBaseWindow::EMBEDDED),
		$of($Boolean::TRUE)
	})));
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->drawState = (XWindow::JAWT_LOCK_CLIP_CHANGED | XWindow::JAWT_LOCK_BOUNDS_CHANGED) | XWindow::JAWT_LOCK_SURFACE_CHANGED;
	this->mouseButtonClickAllowed = 0;
	this->fullScreenExclusiveModeState = false;
}

void XWindow::initGraphicsConfiguration() {
	$set(this, graphicsConfig, $cast($X11GraphicsConfig, $nc(this->target)->getGraphicsConfiguration()));
	$set(this, graphicsConfigData, $new($AwtGraphicsConfigData, $nc(this->graphicsConfig)->getAData()));
}

void XWindow::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::preInit(params);
	$init($Boolean);
	this->reparented = $nc($Boolean::TRUE)->equals($($nc(params)->get(XWindow::REPARENTED)));
	$set(this, target, $cast($Component, $nc(params)->get(XWindow::TARGET)));
	initGraphicsConfiguration();
	$var($AwtGraphicsConfigData, gData, getGraphicsConfigurationData());
	$var($X11GraphicsConfig, config, $cast($X11GraphicsConfig, getGraphicsConfiguration()));
	$var($XVisualInfo, visInfo, $nc(gData)->get_awt_visInfo());
	params->putIfNull($of($XBaseWindow::EVENT_MASK), ((((((((($XConstants::KeyPressMask | $XConstants::KeyReleaseMask) | $XConstants::FocusChangeMask) | $XConstants::ButtonPressMask) | $XConstants::ButtonReleaseMask) | $XConstants::EnterWindowMask) | $XConstants::LeaveWindowMask) | $XConstants::PointerMotionMask) | $XConstants::ButtonMotionMask) | $XConstants::ExposureMask) | $XConstants::StructureNotifyMask);
	if (this->target != nullptr) {
		params->putIfNull($of($XBaseWindow::BOUNDS), $of($$new($Rectangle, $($nc(this->target)->getBounds()))));
	} else {
		params->putIfNull($of($XBaseWindow::BOUNDS), $of($$new($Rectangle, 0, 0, $XBaseWindow::MIN_SIZE, $XBaseWindow::MIN_SIZE)));
	}
	params->putIfNull($of($XBaseWindow::BORDER_PIXEL), $($of($Long::valueOf((int64_t)0))));
	getColorModel();
	params->putIfNull($of($XBaseWindow::COLORMAP), gData->get_awt_cmap());
	params->putIfNull($of($XBaseWindow::DEPTH), gData->get_awt_depth());
	params->putIfNull($of($XBaseWindow::VISUAL_CLASS), $($of($Integer::valueOf($XConstants::InputOutput))));
	params->putIfNull($of($XBaseWindow::VISUAL), $nc(visInfo)->get_visual());
	params->putIfNull($of($XBaseWindow::VALUE_MASK), ($XConstants::CWBorderPixel | $XConstants::CWEventMask) | $XConstants::CWColormap);
	$var($Long, parentWindow, $cast($Long, params->get($XBaseWindow::PARENT_WINDOW)));
	if (parentWindow == nullptr || $nc(parentWindow)->longValue() == 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int32_t screen = $nc(visInfo)->get_screen();
				if (screen != -1) {
					params->add($of($XBaseWindow::PARENT_WINDOW), $XlibWrapper::RootWindow($XToolkit::getDisplay(), screen));
				} else {
					params->add($of($XBaseWindow::PARENT_WINDOW), $XToolkit::getDefaultRootWindow());
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
	$set(this, paintArea, $new($XRepaintArea));
	if (this->target != nullptr) {
		$set(this, parent, getParentXWindowObject($($nc(this->target)->getParent())));
	}
	params->putIfNull($of($XBaseWindow::BACKING_STORE), $XToolkit::getBackingStoreType());
	$XToolkit::awtLock();
	{
		$var($Throwable, var$2, nullptr);
		try {
			if (XWindow::wm_protocols == nullptr) {
				$assignStatic(XWindow::wm_protocols, $XAtom::get("WM_PROTOCOLS"_s));
				$assignStatic(XWindow::wm_delete_window, $XAtom::get("WM_DELETE_WINDOW"_s));
				$assignStatic(XWindow::wm_take_focus, $XAtom::get("WM_TAKE_FOCUS"_s));
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	$set(this, winAttr, $new($XWindowAttributesData));
	this->savedState = $XUtilConstants::WithdrawnState;
}

void XWindow::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::postInit(params);
	setWMClass($(getWMClass()));
	$set(this, surfaceData, $nc(this->graphicsConfig)->createSurfaceData(this));
	$var($Color, c, nullptr);
	if (this->target != nullptr && ($assign(c, $nc(this->target)->getBackground())) != nullptr) {
		xSetBackground(c);
	}
}

$GraphicsConfiguration* XWindow::getGraphicsConfiguration() {
	if (this->graphicsConfig == nullptr) {
		initGraphicsConfiguration();
	}
	return this->graphicsConfig;
}

$AwtGraphicsConfigData* XWindow::getGraphicsConfigurationData() {
	if (this->graphicsConfigData == nullptr) {
		initGraphicsConfiguration();
	}
	return this->graphicsConfigData;
}

$StringArray* XWindow::getWMClass() {
	$useLocalCurrentObjectStackCache();
	return $new($StringArray, {
		$($XToolkit::getAWTAppClassName()),
		$($XToolkit::getAWTAppClassName())
	});
}

void XWindow::setReparented(bool newValue) {
	this->reparented = newValue;
}

bool XWindow::isReparented() {
	return this->reparented;
}

int64_t XWindow::getParentWindowID($Component* target) {
	$init(XWindow);
	$useLocalCurrentObjectStackCache();
	$var($Component, temp, $nc(target)->getParent());
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($ComponentPeer, peer, $nc(acc)->getPeer(temp));
	while (!($instanceOf(XWindow, peer))) {
		$assign(temp, $nc(temp)->getParent());
		$assign(peer, acc->getPeer(temp));
	}
	if (peer != nullptr && $instanceOf(XWindow, peer)) {
		return $nc(($cast(XWindow, peer)))->getContentWindow();
	} else {
		return 0;
	}
}

XWindow* XWindow::getParentXWindowObject($Component* target) {
	$init(XWindow);
	$useLocalCurrentObjectStackCache();
	if (target == nullptr) {
		return nullptr;
	}
	$var($Component, temp, $nc(target)->getParent());
	if (temp == nullptr) {
		return nullptr;
	}
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	$var($ComponentPeer, peer, $nc(acc)->getPeer(temp));
	if (peer == nullptr) {
		return nullptr;
	}
	while ((peer != nullptr) && !($instanceOf(XWindow, peer))) {
		$assign(temp, $nc(temp)->getParent());
		$assign(peer, acc->getPeer(temp));
	}
	if (peer != nullptr && $instanceOf(XWindow, peer)) {
		return $cast(XWindow, peer);
	} else {
		return nullptr;
	}
}

bool XWindow::isParentOf(XWindow* win) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Container, this->target)) || win == nullptr || $nc(win)->getTarget() == nullptr) {
		return false;
	}
	$var($Container, parent, $nc($($AWTAccessor::getComponentAccessor()))->getParent($nc(win)->target));
	while (parent != nullptr && !$equals(parent, this->target)) {
		$assign(parent, $nc($($AWTAccessor::getComponentAccessor()))->getParent(parent));
	}
	return ($equals(parent, this->target));
}

$Object* XWindow::getTarget() {
	return $of(this->target);
}

$Component* XWindow::getEventSource() {
	return this->target;
}

$ColorModel* XWindow::getColorModel(int32_t transparency) {
	return $nc(this->graphicsConfig)->getColorModel(transparency);
}

$ColorModel* XWindow::getColorModel() {
	if (this->graphicsConfig != nullptr) {
		return $nc(this->graphicsConfig)->getColorModel();
	} else {
		return $nc($($Toolkit::getDefaultToolkit()))->getColorModel();
	}
}

$Graphics* XWindow::getGraphics($SurfaceData* surfData, $Color* afore, $Color* aback, $Font* afont) {
	$useLocalCurrentObjectStackCache();
	if (surfData == nullptr) {
		return nullptr;
	}
	$var($Component, target, this->target);
	$var($Color, bgColor, aback);
	if (bgColor == nullptr) {
		$init($SystemColor);
		$assign(bgColor, $SystemColor::window);
	}
	$var($Color, fgColor, afore);
	if (fgColor == nullptr) {
		$init($SystemColor);
		$assign(fgColor, $SystemColor::windowText);
	}
	$var($Font, font, afont);
	if (font == nullptr) {
		$assign(font, XWindow::getDefaultFont());
	}
	return $new($SunGraphics2D, surfData, fgColor, bgColor, font);
}

$Graphics* XWindow::getGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, var$0, this->surfaceData);
	$var($Color, var$1, $nc(this->target)->getForeground());
	$var($Color, var$2, $nc(this->target)->getBackground());
	return getGraphics(var$0, var$1, var$2, $($nc(this->target)->getFont()));
}

$FontMetrics* XWindow::getFontMetrics($Font* font) {
	return $nc($($Toolkit::getDefaultToolkit()))->getFontMetrics(font);
}

$Rectangle* XWindow::getTargetBounds() {
	return $nc(this->target)->getBounds();
}

bool XWindow::prePostEvent($AWTEvent* e) {
	return false;
}

void XWindow::sendEvent($AWTEvent* e) {
	$init(XWindow);
	$useLocalCurrentObjectStackCache();
	$SunToolkit::setSystemGenerated(e);
	$var($Object, var$0, $of($Toolkit::getDefaultToolkit()));
	$var($PeerEvent, pe, $new($PeerEvent, var$0, $$new($XWindow$1, e), $PeerEvent::ULTIMATE_PRIORITY_EVENT));
	$init($PlatformLogger$Level);
	if ($nc(XWindow::focusLog)->isLoggable($PlatformLogger$Level::FINER) && ($instanceOf($FocusEvent, e))) {
		$nc(XWindow::focusLog)->finer($$str({"Sending "_s, e}));
	}
	$XToolkit::postEvent($($XToolkit::targetToAppContext($($nc(e)->getSource()))), pe);
}

void XWindow::postEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::postEvent($($XToolkit::targetToAppContext($($nc(event)->getSource()))), event);
}

void XWindow::postEventStatic($AWTEvent* event) {
	$init(XWindow);
	$useLocalCurrentObjectStackCache();
	$XToolkit::postEvent($($XToolkit::targetToAppContext($($nc(event)->getSource()))), event);
}

void XWindow::postEventToEventQueue($AWTEvent* event) {
	if (!prePostEvent(event)) {
		postEvent(event);
	}
}

bool XWindow::doEraseBackground() {
	return true;
}

void XWindow::xSetBackground($Color* c) {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			winBackground(c);
			if (!doEraseBackground()) {
				return$1 = true;
				goto $finally;
			}
			int32_t pixel = $nc(this->surfaceData)->pixelFor($nc(c)->getRGB());
			int64_t var$2 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWindowBackground(var$2, getContentWindow(), pixel);
			int64_t var$3 = $XToolkit::getDisplay();
			$XlibWrapper::XClearWindow(var$3, getContentWindow());
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void XWindow::setBackground($Color* c) {
	xSetBackground(c);
}

void XWindow::winBackground($Color* c) {
	$set(this, backgroundColor, c);
}

$Color* XWindow::getWinBackground() {
	$var($Color, c, nullptr);
	if (this->backgroundColor != nullptr) {
		$assign(c, this->backgroundColor);
	} else if (this->parent != nullptr) {
		$assign(c, $nc(this->parent)->getWinBackground());
	}
	if ($instanceOf($SystemColor, c)) {
		$assign(c, $new($Color, $nc(c)->getRGB()));
	}
	return c;
}

bool XWindow::isEmbedded() {
	return this->embedded;
}

void XWindow::repaint(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = !isVisible();
	bool var$0 = var$1 || getWidth() == 0;
	if (var$0 || getHeight() == 0) {
		return;
	}
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$2, nullptr);
			try {
				g->setClip(x, y, width, height);
				if ($SunToolkit::isDispatchThreadForAppContext($(getTarget()))) {
					paint(g);
				} else {
					paintPeer(g);
					postPaintEvent(this->target, x, y, width, height);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				g->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

void XWindow::repaint() {
	int32_t var$0 = getWidth();
	repaint(0, 0, var$0, getHeight());
}

void XWindow::paint($Graphics* g) {
	paintPeer(g);
}

void XWindow::paintPeer($Graphics* g) {
}

void XWindow::flush() {
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

void XWindow::popup(int32_t x, int32_t y, int32_t width, int32_t height) {
	xSetBounds(x, y, width, height);
}

void XWindow::handleExposeEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleExposeEvent(xev);
	$var($XExposeEvent, xe, $nc(xev)->get_xexpose());
	if (isEventDisabled(xev)) {
		return;
	}
	int32_t x = scaleDown($nc(xe)->get_x());
	int32_t y = scaleDown($nc(xe)->get_y());
	int32_t w = scaleDown($nc(xe)->get_width());
	int32_t h = scaleDown($nc(xe)->get_height());
	$var($Component, target, getEventSource());
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	bool var$1 = !$nc(compAccessor)->getIgnoreRepaint(target);
	bool var$0 = var$1 && compAccessor->getWidth(target) != 0;
	if (var$0 && compAccessor->getHeight(target) != 0) {
		postPaintEvent(target, x, y, w, h);
	}
}

void XWindow::postPaintEvent($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($PaintEvent, event, $nc($($PaintEventDispatcher::getPaintEventDispatcher()))->createPaintEvent(target, x, y, w, h));
	if (event != nullptr) {
		postEventToEventQueue(event);
	}
}

int32_t XWindow::getModifiers(int32_t state, int32_t button, int32_t keyCode) {
	$init(XWindow);
	return getModifiers(state, button, keyCode, false);
}

int32_t XWindow::getWheelModifiers(int32_t state, int32_t button) {
	$init(XWindow);
	return getModifiers(state, button, 0, true);
}

int32_t XWindow::getModifiers(int32_t state, int32_t button, int32_t keyCode, bool isWheelMouse) {
	$init(XWindow);
	int32_t modifiers = 0;
	if ((((int32_t)(state & (uint32_t)$XConstants::ShiftMask)) != 0) ^ (keyCode == $KeyEvent::VK_SHIFT)) {
		modifiers |= $InputEvent::SHIFT_DOWN_MASK;
	}
	if ((((int32_t)(state & (uint32_t)$XConstants::ControlMask)) != 0) ^ (keyCode == $KeyEvent::VK_CONTROL)) {
		modifiers |= $InputEvent::CTRL_DOWN_MASK;
	}
	$init($XToolkit);
	if ((((int32_t)(state & (uint32_t)$XToolkit::metaMask)) != 0) ^ (keyCode == $KeyEvent::VK_META)) {
		modifiers |= $InputEvent::META_DOWN_MASK;
	}
	if ((((int32_t)(state & (uint32_t)$XToolkit::altMask)) != 0) ^ (keyCode == $KeyEvent::VK_ALT)) {
		modifiers |= $InputEvent::ALT_DOWN_MASK;
	}
	if ((((int32_t)(state & (uint32_t)$XToolkit::modeSwitchMask)) != 0) ^ (keyCode == $KeyEvent::VK_ALT_GRAPH)) {
		modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
	}
	$init($XConstants);
	for (int32_t i = 0; i < $nc($XConstants::buttons)->length; ++i) {
		if ((((int32_t)(state & (uint32_t)$XlibUtil::getButtonMask(i + 1))) != 0) != (button == $nc($XConstants::buttons)->get(i))) {
			if (!isWheelMouse || !isWheel($nc($XConstants::buttons)->get(i))) {
				modifiers |= $InputEvent::getMaskForButton(i + 1);
			}
		}
	}
	return modifiers;
}

bool XWindow::isWheel(int32_t button) {
	$init(XWindow);
	$init($XConstants);
	return button == $nc($XConstants::buttons)->get(3) || button == $nc($XConstants::buttons)->get(4);
}

int32_t XWindow::getXModifiers($AWTKeyStroke* stroke) {
	$init(XWindow);
	int32_t mods = $nc(stroke)->getModifiers();
	int32_t res = 0;
	if (((int32_t)(mods & (uint32_t)($InputEvent::SHIFT_DOWN_MASK | $InputEvent::SHIFT_MASK))) != 0) {
		res |= $XConstants::ShiftMask;
	}
	if (((int32_t)(mods & (uint32_t)($InputEvent::CTRL_DOWN_MASK | $InputEvent::CTRL_MASK))) != 0) {
		res |= $XConstants::ControlMask;
	}
	if (((int32_t)(mods & (uint32_t)($InputEvent::ALT_DOWN_MASK | $InputEvent::ALT_MASK))) != 0) {
		$init($XToolkit);
		res |= $XToolkit::altMask;
	}
	if (((int32_t)(mods & (uint32_t)($InputEvent::META_DOWN_MASK | $InputEvent::META_MASK))) != 0) {
		$init($XToolkit);
		res |= $XToolkit::metaMask;
	}
	if (((int32_t)(mods & (uint32_t)($InputEvent::ALT_GRAPH_DOWN_MASK | $InputEvent::ALT_GRAPH_MASK))) != 0) {
		$init($XToolkit);
		res |= $XToolkit::modeSwitchMask;
	}
	return res;
}

int32_t XWindow::getMouseMovementSmudge() {
	$init(XWindow);
	return XWindow::AWT_MULTICLICK_SMUDGE;
}

void XWindow::handleButtonPressRelease($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleButtonPressRelease(xev);
	$var($XButtonEvent, xbe, $nc(xev)->get_xbutton());
	if (isEventDisabled(xev)) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XWindow::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::eventLog)->fine($($nc(xbe)->toString()));
	}
	int64_t when = 0;
	int32_t modifiers = 0;
	bool popupTrigger = false;
	int32_t button = 0;
	int32_t lbutton = $nc(xbe)->get_button();
	if (lbutton > $SunToolkit::MAX_BUTTONS_SUPPORTED) {
		return;
	}
	int32_t type = xev->get_type();
	when = xbe->get_time();
	int64_t jWhen = $System::currentTimeMillis();
	int32_t x = scaleDown(xbe->get_x());
	int32_t y = scaleDown(xbe->get_y());
	if ($nc($(xev->get_xany()))->get_window() != this->window) {
		int32_t var$0 = scaleDown(xbe->get_x_root());
		$var($Point, localXY, toLocal(var$0, scaleDown(xbe->get_y_root())));
		x = $nc(localXY)->x;
		y = localXY->y;
	}
	if (type == $XConstants::ButtonPress) {
		this->mouseButtonClickAllowed |= $XlibUtil::getButtonMask(lbutton);
		$var(XWindow, lastWindow, (XWindow::lastWindowRef != nullptr) ? ($cast(XWindow, $nc(XWindow::lastWindowRef)->get())) : ((XWindow*)nullptr));
		if ($nc(XWindow::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$var($String, var$1, $$str({"lastWindow = "_s, lastWindow, ", lastButton "_s, $$str(XWindow::lastButton), ", lastTime "_s, $$str(XWindow::lastTime), ", multiClickTime "_s}));
			$nc(XWindow::eventLog)->finest($$concat(var$1, $$str($XToolkit::getMultiClickTime())));
		}
		if (lastWindow == this && XWindow::lastButton == lbutton && (when - XWindow::lastTime) < $XToolkit::getMultiClickTime()) {
			++XWindow::clickCount;
		} else {
			XWindow::clickCount = 1;
			$assignStatic(XWindow::lastWindowRef, $new($WeakReference, this));
			XWindow::lastButton = lbutton;
			XWindow::lastX = x;
			XWindow::lastY = y;
		}
		XWindow::lastTime = when;
		popupTrigger = (lbutton == 3);
	}
	$init($XConstants);
	button = $nc($XConstants::buttons)->get(lbutton - 1);
	if ((button > $nc($XConstants::buttons)->get(4)) && (!$nc($($Toolkit::getDefaultToolkit()))->areExtraMouseButtonsEnabled())) {
		return;
	}
	if (button > $nc($XConstants::buttons)->get(4)) {
		button -= 2;
	}
	if (!isWheel(lbutton)) {
		modifiers = getModifiers(xbe->get_state(), button, 0);
		$var($Component, var$2, getEventSource());
		int32_t var$3 = type == $XConstants::ButtonPress ? $MouseEvent::MOUSE_PRESSED : $MouseEvent::MOUSE_RELEASED;
		int64_t var$4 = jWhen;
		int32_t var$5 = modifiers;
		int32_t var$6 = x;
		int32_t var$7 = y;
		int32_t var$8 = scaleDown(xbe->get_x_root());
		$var($MouseEvent, me, $new($MouseEvent, var$2, var$3, var$4, var$5, var$6, var$7, var$8, scaleDown(xbe->get_y_root()), XWindow::clickCount, popupTrigger, button));
		postEventToEventQueue(me);
		if ((type == $XConstants::ButtonRelease) && (((int32_t)(this->mouseButtonClickAllowed & (uint32_t)$XlibUtil::getButtonMask(lbutton))) != 0)) {
			$var($Component, var$9, getEventSource());
			int64_t var$10 = jWhen;
			int32_t var$11 = modifiers;
			int32_t var$12 = x;
			int32_t var$13 = y;
			int32_t var$14 = scaleDown(xbe->get_x_root());
			postEventToEventQueue(($assign(me, $new($MouseEvent, var$9, $MouseEvent::MOUSE_CLICKED, var$10, var$11, var$12, var$13, var$14, scaleDown(xbe->get_y_root()), XWindow::clickCount, false, button))));
		}
	} else {
		modifiers = getWheelModifiers(xbe->get_state(), button);
		if (xev->get_type() == $XConstants::ButtonPress) {
			$var($Component, var$15, getEventSource());
			int64_t var$16 = jWhen;
			int32_t var$17 = modifiers;
			int32_t var$18 = x;
			int32_t var$19 = y;
			int32_t var$20 = scaleDown(xbe->get_x_root());
			$var($MouseWheelEvent, mwe, $new($MouseWheelEvent, var$15, $MouseEvent::MOUSE_WHEEL, var$16, var$17, var$18, var$19, var$20, scaleDown(xbe->get_y_root()), 1, false, $MouseWheelEvent::WHEEL_UNIT_SCROLL, 3, button == 4 ? -1 : 1));
			postEventToEventQueue(mwe);
		}
	}
	if (type == $XConstants::ButtonRelease) {
		this->mouseButtonClickAllowed &= (uint32_t)~$XlibUtil::getButtonMask(lbutton);
	}
}

void XWindow::handleMotionNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleMotionNotify(xev);
	$var($XMotionEvent, xme, $nc(xev)->get_xmotion());
	if (isEventDisabled(xev)) {
		return;
	}
	int32_t mouseKeyState = 0;
	int32_t buttonsNumber = $XToolkit::getNumberOfButtonsForMask();
	for (int32_t i = 0; i < buttonsNumber; ++i) {
		if ((i != 4) && (i != 5)) {
			int32_t var$0 = mouseKeyState;
			int32_t var$2 = $nc(xme)->get_state();
			int32_t var$1 = ((int32_t)(var$2 & (uint32_t)$XlibUtil::getButtonMask(i + 1)));
			mouseKeyState = var$0 | var$1;
		}
	}
	bool isDragging = (mouseKeyState != 0);
	int32_t mouseEventType = 0;
	if (isDragging) {
		mouseEventType = $MouseEvent::MOUSE_DRAGGED;
	} else {
		mouseEventType = $MouseEvent::MOUSE_MOVED;
	}
	int32_t x = scaleDown($nc(xme)->get_x());
	int32_t y = scaleDown($nc(xme)->get_y());
	$var(XWindow, lastWindow, (XWindow::lastWindowRef != nullptr) ? ($cast(XWindow, $nc(XWindow::lastWindowRef)->get())) : ((XWindow*)nullptr));
	bool var$4 = lastWindow == this;
	if (var$4) {
		int64_t var$5 = ($nc(xme)->get_time() - XWindow::lastTime);
		var$4 = var$5 < $XToolkit::getMultiClickTime();
	}
	bool var$3 = var$4;
	if (var$3) {
		bool var$6 = $Math::abs(XWindow::lastX - x) < XWindow::AWT_MULTICLICK_SMUDGE;
		var$3 = (var$6 && $Math::abs(XWindow::lastY - y) < XWindow::AWT_MULTICLICK_SMUDGE);
	}
	if (!(var$3)) {
		XWindow::clickCount = 0;
		$assignStatic(XWindow::lastWindowRef, nullptr);
		this->mouseButtonClickAllowed = 0;
		XWindow::lastTime = 0;
		XWindow::lastX = 0;
		XWindow::lastY = 0;
	}
	int64_t jWhen = $System::currentTimeMillis();
	int32_t modifiers = getModifiers($nc(xme)->get_state(), 0, 0);
	bool popupTrigger = false;
	$var($Component, source, getEventSource());
	if ($nc(xme)->get_window() != this->window) {
		int32_t var$7 = scaleDown(xme->get_x_root());
		$var($Point, localXY, toLocal(var$7, scaleDown(xme->get_y_root())));
		x = $nc(localXY)->x;
		y = localXY->y;
	}
	if ((isDragging && XWindow::clickCount == 0) || !isDragging) {
		$var($Component, var$8, source);
		int32_t var$9 = mouseEventType;
		int64_t var$10 = jWhen;
		int32_t var$11 = modifiers;
		int32_t var$12 = x;
		int32_t var$13 = y;
		int32_t var$14 = scaleDown($nc(xme)->get_x_root());
		$var($MouseEvent, mme, $new($MouseEvent, var$8, var$9, var$10, var$11, var$12, var$13, var$14, scaleDown($nc(xme)->get_y_root()), XWindow::clickCount, popupTrigger, $MouseEvent::NOBUTTON));
		postEventToEventQueue(mme);
	}
}

bool XWindow::x11inputMethodLookupString(int64_t event, $longs* keysymArray) {
	bool $ret = false;
	$prepareNative(XWindow, x11inputMethodLookupString, bool, int64_t event, $longs* keysymArray);
	$ret = $invokeNative(event, keysymArray);
	$finishNative();
	return $ret;
}

bool XWindow::haveCurrentX11InputMethodInstance() {
	bool $ret = false;
	$prepareNative(XWindow, haveCurrentX11InputMethodInstance, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

bool XWindow::isMouseAbove() {
	$synchronized(getStateLock()) {
		return this->mouseAboveMe;
	}
}

void XWindow::setMouseAbove(bool above) {
	$synchronized(getStateLock()) {
		this->mouseAboveMe = above;
	}
}

void XWindow::enterNotify(int64_t window) {
	if (window == getWindow()) {
		setMouseAbove(true);
	}
}

void XWindow::leaveNotify(int64_t window) {
	if (window == getWindow()) {
		setMouseAbove(false);
	}
}

void XWindow::handleXCrossingEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleXCrossingEvent(xev);
	$var($XCrossingEvent, xce, $nc(xev)->get_xcrossing());
	$init($PlatformLogger$Level);
	if ($nc(XWindow::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWindow::eventLog)->finest($($nc(xce)->toString()));
	}
	if ($nc(xce)->get_type() == $XConstants::EnterNotify) {
		enterNotify(xce->get_window());
	} else {
		leaveNotify(xce->get_window());
	}
	$var($XWindowPeer, toplevel, getToplevelXWindow());
	if (toplevel != nullptr && !toplevel->isModalBlocked()) {
		if ($nc(xce)->get_mode() != $XConstants::NotifyNormal) {
			if (xce->get_type() == $XConstants::EnterNotify) {
				$XAwtState::setComponentMouseEntered($(getEventSource()));
				$XGlobalCursorManager::nativeUpdateCursor($(getEventSource()));
			} else {
				$XAwtState::setComponentMouseEntered(nullptr);
			}
			return;
		}
	}
	int64_t childWnd = $nc(xce)->get_subwindow();
	if (childWnd != $XConstants::None) {
		$var($XBaseWindow, child, $XToolkit::windowToXWindow(childWnd));
		if (child != nullptr && $instanceOf(XWindow, child) && !child->isEventDisabled(xev)) {
			return;
		}
	}
	$var($Component, compWithMouse, $XAwtState::getComponentMouseEntered());
	if (toplevel != nullptr) {
		if (!toplevel->isModalBlocked()) {
			if (xce->get_type() == $XConstants::EnterNotify) {
				$XAwtState::setComponentMouseEntered($(getEventSource()));
				$XGlobalCursorManager::nativeUpdateCursor($(getEventSource()));
			} else {
				$XAwtState::setComponentMouseEntered(nullptr);
			}
		} else {
			$nc(($cast($XComponentPeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->target)))))->pSetCursor($($Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR)));
		}
	}
	if (isEventDisabled(xev)) {
		return;
	}
	int64_t jWhen = $System::currentTimeMillis();
	int32_t modifiers = getModifiers(xce->get_state(), 0, 0);
	int32_t clickCount = 0;
	bool popupTrigger = false;
	int32_t x = scaleDown(xce->get_x());
	int32_t y = scaleDown(xce->get_y());
	if (xce->get_window() != this->window) {
		int32_t var$0 = scaleDown(xce->get_x_root());
		$var($Point, localXY, toLocal(var$0, scaleDown(xce->get_y_root())));
		x = $nc(localXY)->x;
		y = localXY->y;
	}
	if (compWithMouse != nullptr) {
		$var($Component, var$1, compWithMouse);
		int64_t var$2 = jWhen;
		int32_t var$3 = modifiers;
		int32_t var$4 = scaleDown(xce->get_x());
		int32_t var$5 = scaleDown(xce->get_y());
		int32_t var$6 = scaleDown(xce->get_x_root());
		$var($MouseEvent, me, $new($MouseEvent, var$1, $MouseEvent::MOUSE_EXITED, var$2, var$3, var$4, var$5, var$6, scaleDown(xce->get_y_root()), clickCount, popupTrigger, $MouseEvent::NOBUTTON));
		postEventToEventQueue(me);
		$nc(XWindow::eventLog)->finest("Clearing last window ref"_s);
		$assignStatic(XWindow::lastWindowRef, nullptr);
	}
	if (xce->get_type() == $XConstants::EnterNotify) {
		$var($Component, var$7, getEventSource());
		int64_t var$8 = jWhen;
		int32_t var$9 = modifiers;
		int32_t var$10 = scaleDown(xce->get_x());
		int32_t var$11 = scaleDown(xce->get_y());
		int32_t var$12 = scaleDown(xce->get_x_root());
		$var($MouseEvent, me, $new($MouseEvent, var$7, $MouseEvent::MOUSE_ENTERED, var$8, var$9, var$10, var$11, var$12, scaleDown(xce->get_y_root()), clickCount, popupTrigger, $MouseEvent::NOBUTTON));
		postEventToEventQueue(me);
	}
}

void XWindow::doLayout(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void XWindow::handleConfigureNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, oldBounds, getBounds());
	$XBaseWindow::handleConfigureNotifyEvent(xev);
	$init($PlatformLogger$Level);
	if ($nc(XWindow::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XWindow::insLog)->finer("Configure, {0}, event disabled: {1}"_s, $$new($ObjectArray, {
			$($of($nc(xev)->get_xconfigure())),
			$($of($Boolean::valueOf(isEventDisabled(xev))))
		}));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	$var($Rectangle, bounds, getBounds());
	if (!$nc($($nc(bounds)->getSize()))->equals($($nc(oldBounds)->getSize()))) {
		postEventToEventQueue($$new($ComponentEvent, $(getEventSource()), $ComponentEvent::COMPONENT_RESIZED));
	}
	if (!$nc($($nc(bounds)->getLocation()))->equals($($nc(oldBounds)->getLocation()))) {
		postEventToEventQueue($$new($ComponentEvent, $(getEventSource()), $ComponentEvent::COMPONENT_MOVED));
	}
}

void XWindow::handleMapNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleMapNotifyEvent(xev);
	$init($PlatformLogger$Level);
	if ($nc(XWindow::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::log)->fine("Mapped {0}"_s, $$new($ObjectArray, {$of(this)}));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	$var($ComponentEvent, ce, nullptr);
	$assign(ce, $new($ComponentEvent, $(getEventSource()), $ComponentEvent::COMPONENT_SHOWN));
	postEventToEventQueue(ce);
}

void XWindow::handleUnmapNotifyEvent($XEvent* xev) {
	$XBaseWindow::handleUnmapNotifyEvent(xev);
	if (isEventDisabled(xev)) {
		return;
	}
	$var($ComponentEvent, ce, nullptr);
	$assign(ce, $new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_HIDDEN));
	postEventToEventQueue(ce);
}

void XWindow::dumpKeysymArray($XKeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($String, var$6, "  "_s);
		int64_t var$7 = $XToolkit::getDisplay();
		$var($String, var$5, $$concat(var$6, $($Long::toHexString($XlibWrapper::XKeycodeToKeysym(var$7, $nc(ev)->get_keycode(), 0)))));
		$var($String, var$4, $$concat(var$5, "\n        "_s));
		int64_t var$8 = $XToolkit::getDisplay();
		$var($String, var$3, $$concat(var$4, $($Long::toHexString($XlibWrapper::XKeycodeToKeysym(var$8, $nc(ev)->get_keycode(), 1)))));
		$var($String, var$2, $$concat(var$3, "\n        "_s));
		int64_t var$9 = $XToolkit::getDisplay();
		$var($String, var$1, $$concat(var$2, $($Long::toHexString($XlibWrapper::XKeycodeToKeysym(var$9, $nc(ev)->get_keycode(), 2)))));
		$var($String, var$0, $$concat(var$1, "\n        "_s));
		int64_t var$10 = $XToolkit::getDisplay();
		$nc(XWindow::keyEventLog)->fine($$concat(var$0, $($Long::toHexString($XlibWrapper::XKeycodeToKeysym(var$10, $nc(ev)->get_keycode(), 3)))));
	}
}

int32_t XWindow::keysymToUnicode(int64_t keysym, int32_t state) {
	return $XKeysym::convertKeysym(keysym, state);
}

int32_t XWindow::keyEventType2Id(int32_t xEventType) {
	return xEventType == $XConstants::KeyPress ? $KeyEvent::KEY_PRESSED : xEventType == $XConstants::KeyRelease ? $KeyEvent::KEY_RELEASED : 0;
}

int64_t XWindow::xkeycodeToKeysym($XKeyEvent* ev) {
	$init(XWindow);
	return $XKeysym::getKeysym(ev);
}

int64_t XWindow::xkeycodeToPrimaryKeysym($XKeyEvent* ev) {
	return $XKeysym::xkeycode2primary_keysym(ev);
}

int32_t XWindow::primaryUnicode2JavaKeycode(int32_t uni) {
	$init(XWindow);
	return (uni > 0 ? $ExtendedKeyCodes::getExtendedKeyCodeForChar(uni) : 0);
}

void XWindow::logIncomingKeyEvent($XKeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::keyEventLog)->fine($$str({"--XWindow.java:handleKeyEvent:"_s, ev}));
	}
	dumpKeysymArray(ev);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::keyEventLog)->fine($$str({"XXXXXXXXXXXXXX javakeycode will be most probably:0x"_s, $($Integer::toHexString($XKeysym::getJavaKeycodeOnly(ev)))}));
	}
}

void XWindow::handleKeyPress($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleKeyPress(xev);
	$var($XKeyEvent, ev, $nc(xev)->get_xkey());
	$init($PlatformLogger$Level);
	if ($nc(XWindow::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::eventLog)->fine($($nc(ev)->toString()));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	handleKeyPress(ev);
}

void XWindow::handleKeyPress($XKeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($longs, keysym, $new($longs, 2));
	int32_t unicodeKey = 0;
	keysym->set(0, $XConstants::NoSymbol);
	$init($PlatformLogger$Level);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		logIncomingKeyEvent(ev);
	}
	if (haveCurrentX11InputMethodInstance()) {
		if (x11inputMethodLookupString($nc(ev)->pData, keysym)) {
			if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XWindow::keyEventLog)->fine($$str({"--XWindow.java XIM did process event; return; dec keysym processed:"_s, $$str((keysym->get(0))), "; hex keysym processed:"_s, $($Long::toHexString(keysym->get(0)))}));
			}
			return;
		} else {
			unicodeKey = keysymToUnicode(keysym->get(0), $nc(ev)->get_state());
			if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$var($String, var$0, $$str({"--XWindow.java XIM did NOT process event, hex keysym:"_s, $($Long::toHexString(keysym->get(0))), "\n                                         unicode key:"_s}));
				$nc(XWindow::keyEventLog)->fine($$concat(var$0, $($Integer::toHexString(unicodeKey))));
			}
		}
	} else {
		keysym->set(0, xkeycodeToKeysym(ev));
		unicodeKey = keysymToUnicode(keysym->get(0), $nc(ev)->get_state());
		if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$var($String, var$1, $$str({"--XWindow.java XIM is absent;             hex keysym:"_s, $($Long::toHexString(keysym->get(0))), "\n                                         unicode key:"_s}));
			$nc(XWindow::keyEventLog)->fine($$concat(var$1, $($Integer::toHexString(unicodeKey))));
		}
	}
	bool isDeadKey = this->isDeadKey(keysym->get(0));
	$var($XKeysym$Keysym2JavaKeycode, jkc, isDeadKey ? $XKeysym::getJavaKeycode(keysym->get(0)) : $XKeysym::getJavaKeycode(ev));
	if (jkc == nullptr) {
		$assign(jkc, $new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDEFINED, $KeyEvent::KEY_LOCATION_UNKNOWN));
	}
	int32_t unicodeFromPrimaryKeysym = keysymToUnicode(xkeycodeToPrimaryKeysym(ev), 0);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($String, var$9, $$str({">>>Fire Event:"_s, ($nc(ev)->get_type() == $XConstants::KeyPress ? "KEY_PRESSED; "_s : "KEY_RELEASED; "_s), "jkeycode:decimal="_s}));
		$var($String, var$8, $$concat(var$9, $$str($nc(jkc)->getJavaKeycode())));
		$var($String, var$7, $$concat(var$8, ", hex=0x"_s));
		$var($String, var$6, $$concat(var$7, $($Integer::toHexString(jkc->getJavaKeycode()))));
		$var($String, var$5, $$concat(var$6, ";  legacy jkeycode: decimal="_s));
		$var($String, var$4, $$concat(var$5, $$str($XKeysym::getLegacyJavaKeycodeOnly(ev))));
		$var($String, var$3, $$concat(var$4, ", hex=0x"_s));
		$var($String, var$2, $$concat(var$3, $($Integer::toHexString($XKeysym::getLegacyJavaKeycodeOnly(ev)))));
		$nc(XWindow::keyEventLog)->fine($$concat(var$2, "; "_s));
	}
	int32_t jkeyToReturn = $XKeysym::getLegacyJavaKeycodeOnly(ev);
	int32_t jkeyExtended = $nc(jkc)->getJavaKeycode() == $KeyEvent::VK_UNDEFINED ? primaryUnicode2JavaKeycode(unicodeFromPrimaryKeysym) : $nc(jkc)->getJavaKeycode();
	int32_t var$10 = isDeadKey ? jkeyExtended : jkeyToReturn;
	int32_t var$11 = (unicodeKey == 0 ? (int32_t)$KeyEvent::CHAR_UNDEFINED : unicodeKey);
	int32_t var$12 = jkc->getKeyLocation();
	int32_t var$13 = $nc(ev)->get_state();
	int64_t var$14 = ev->getPData();
	int32_t var$15 = $XKeyEvent::getSize();
	postKeyEvent($KeyEvent::KEY_PRESSED, var$10, var$11, var$12, var$13, var$14, var$15, (int64_t)(ev->get_keycode()), unicodeFromPrimaryKeysym, jkeyExtended);
	if (unicodeKey > 0 && !isDeadKey) {
		if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWindow::keyEventLog)->fine($$str({"fire _TYPED on "_s, $$str(unicodeKey)}));
		}
		int32_t var$16 = unicodeKey;
		int32_t var$17 = $nc(ev)->get_state();
		int64_t var$18 = ev->getPData();
		postKeyEvent($KeyEvent::KEY_TYPED, $KeyEvent::VK_UNDEFINED, var$16, $KeyEvent::KEY_LOCATION_UNKNOWN, var$17, var$18, $XKeyEvent::getSize(), (int64_t)0, unicodeFromPrimaryKeysym, $KeyEvent::VK_UNDEFINED);
	}
}

void XWindow::handleKeyRelease($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XBaseWindow::handleKeyRelease(xev);
	$var($XKeyEvent, ev, $nc(xev)->get_xkey());
	$init($PlatformLogger$Level);
	if ($nc(XWindow::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindow::eventLog)->fine($($nc(ev)->toString()));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	handleKeyRelease(ev);
}

void XWindow::handleKeyRelease($XKeyEvent* ev) {
	$useLocalCurrentObjectStackCache();
	int32_t unicodeKey = 0;
	$init($PlatformLogger$Level);
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		logIncomingKeyEvent(ev);
	}
	int64_t keysym = xkeycodeToKeysym(ev);
	bool isDeadKey = this->isDeadKey(keysym);
	$var($XKeysym$Keysym2JavaKeycode, jkc, isDeadKey ? $XKeysym::getJavaKeycode(keysym) : $XKeysym::getJavaKeycode(ev));
	if (jkc == nullptr) {
		$assign(jkc, $new($XKeysym$Keysym2JavaKeycode, $KeyEvent::VK_UNDEFINED, $KeyEvent::KEY_LOCATION_UNKNOWN));
	}
	if ($nc(XWindow::keyEventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($String, var$7, $$str({">>>Fire Event:"_s, ($nc(ev)->get_type() == $XConstants::KeyPress ? "KEY_PRESSED; "_s : "KEY_RELEASED; "_s), "jkeycode:decimal="_s}));
		$var($String, var$6, $$concat(var$7, $$str($nc(jkc)->getJavaKeycode())));
		$var($String, var$5, $$concat(var$6, ", hex=0x"_s));
		$var($String, var$4, $$concat(var$5, $($Integer::toHexString(jkc->getJavaKeycode()))));
		$var($String, var$3, $$concat(var$4, ";  legacy jkeycode: decimal="_s));
		$var($String, var$2, $$concat(var$3, $$str($XKeysym::getLegacyJavaKeycodeOnly(ev))));
		$var($String, var$1, $$concat(var$2, ", hex=0x"_s));
		$var($String, var$0, $$concat(var$1, $($Integer::toHexString($XKeysym::getLegacyJavaKeycodeOnly(ev)))));
		$nc(XWindow::keyEventLog)->fine($$concat(var$0, "; "_s));
	}
	int64_t var$8 = xkeycodeToKeysym(ev);
	unicodeKey = keysymToUnicode(var$8, $nc(ev)->get_state());
	int32_t unicodeFromPrimaryKeysym = keysymToUnicode(xkeycodeToPrimaryKeysym(ev), 0);
	int32_t jkeyToReturn = $XKeysym::getLegacyJavaKeycodeOnly(ev);
	int32_t jkeyExtended = $nc(jkc)->getJavaKeycode() == $KeyEvent::VK_UNDEFINED ? primaryUnicode2JavaKeycode(unicodeFromPrimaryKeysym) : $nc(jkc)->getJavaKeycode();
	int32_t var$9 = isDeadKey ? jkeyExtended : jkeyToReturn;
	int32_t var$10 = (unicodeKey == 0 ? (int32_t)$KeyEvent::CHAR_UNDEFINED : unicodeKey);
	int32_t var$11 = jkc->getKeyLocation();
	int32_t var$12 = $nc(ev)->get_state();
	int64_t var$13 = ev->getPData();
	int32_t var$14 = $XKeyEvent::getSize();
	postKeyEvent($KeyEvent::KEY_RELEASED, var$9, var$10, var$11, var$12, var$13, var$14, (int64_t)(ev->get_keycode()), unicodeFromPrimaryKeysym, jkeyExtended);
}

bool XWindow::isDeadKey(int64_t keysym) {
	return $XKeySymConstants::XK_dead_grave <= keysym && keysym <= $XKeySymConstants::XK_dead_semivoiced_sound;
}

int32_t XWindow::getWMState() {
	$useLocalCurrentObjectStackCache();
	if (this->stateChanged$) {
		this->stateChanged$ = false;
		$init($XWM);
		$var($WindowPropertyGetter, getter, $new($WindowPropertyGetter, this->window, $XWM::XA_WM_STATE, (int64_t)0, (int64_t)1, false, $XWM::XA_WM_STATE));
		{
			$var($Throwable, var$0, nullptr);
			int32_t var$2 = 0;
			bool return$1 = false;
			try {
				int32_t status = getter->execute();
				if (status != $XConstants::Success || getter->getData() == 0) {
					var$2 = this->savedState = $XUtilConstants::WithdrawnState;
					return$1 = true;
					goto $finally;
				}
				int64_t var$4 = getter->getActualType();
				bool var$3 = var$4 != $nc($XWM::XA_WM_STATE)->getAtom();
				if (var$3 && getter->getActualFormat() != 32) {
					var$2 = this->savedState = $XUtilConstants::WithdrawnState;
					return$1 = true;
					goto $finally;
				}
				this->savedState = (int32_t)$Native::getCard32(getter->getData());
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
			} $finally: {
				getter->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	return this->savedState;
}

void XWindow::stateChanged(int64_t time, int32_t oldState, int32_t newState) {
}

void XWindow::handlePropertyNotify($XEvent* xev) {
	$XBaseWindow::handlePropertyNotify(xev);
	$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
	int64_t var$0 = $nc(ev)->get_atom();
	$init($XWM);
	if (var$0 == $nc($XWM::XA_WM_STATE)->getAtom()) {
		this->stateChanged$ = true;
		int64_t var$1 = ev->get_time();
		int32_t var$2 = this->savedState;
		stateChanged(var$1, var$2, getWMState());
	}
}

void XWindow::reshape($Rectangle* bounds) {
	reshape($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
}

void XWindow::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (width <= 0) {
		width = 1;
	}
	if (height <= 0) {
		height = 1;
	}
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	xSetBounds(x, y, width, height);
	validateSurface();
	layout();
}

void XWindow::layout() {
}

bool XWindow::isShowing() {
	return this->visible;
}

bool XWindow::isResizable() {
	return true;
}

bool XWindow::isLocationByPlatform() {
	return false;
}

void XWindow::updateSizeHints() {
	updateSizeHints(this->x, this->y, this->width, this->height);
}

void XWindow::updateSizeHints(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = $XUtilConstants::PSize | (isLocationByPlatform() ? (int64_t)0 : ($XUtilConstants::PPosition | $XUtilConstants::USPosition));
	if (!isResizable()) {
		$init($PlatformLogger$Level);
		if ($nc(XWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindow::log)->finer("Window {0} is not resizable"_s, $$new($ObjectArray, {$of(this)}));
		}
		flags |= $XUtilConstants::PMinSize | $XUtilConstants::PMaxSize;
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindow::log)->finer("Window {0} is resizable"_s, $$new($ObjectArray, {$of(this)}));
		}
	}
	setSizeHints(flags, x, y, width, height);
}

void XWindow::updateSizeHints(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int64_t flags = isLocationByPlatform() ? (int64_t)0 : ($XUtilConstants::PPosition | $XUtilConstants::USPosition);
	if (!isResizable()) {
		$init($PlatformLogger$Level);
		if ($nc(XWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindow::log)->finer("Window {0} is not resizable"_s, $$new($ObjectArray, {$of(this)}));
		}
		flags |= ($XUtilConstants::PMinSize | $XUtilConstants::PMaxSize) | $XUtilConstants::PSize;
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindow::log)->finer("Window {0} is resizable"_s, $$new($ObjectArray, {$of(this)}));
		}
	}
	setSizeHints(flags, x, y, this->width, this->height);
}

void XWindow::validateSurface() {
	if ((this->width != this->oldWidth) || (this->height != this->oldHeight)) {
		doValidateSurface();
		this->oldWidth = this->width;
		this->oldHeight = this->height;
	}
}

void XWindow::doValidateSurface() {
	$var($SurfaceData, oldData, this->surfaceData);
	if (oldData != nullptr) {
		$set(this, surfaceData, $nc(this->graphicsConfig)->createSurfaceData(this));
		oldData->invalidate();
	}
}

$SurfaceData* XWindow::getSurfaceData() {
	return this->surfaceData;
}

void XWindow::dispose() {
	$var($SurfaceData, oldData, this->surfaceData);
	$set(this, surfaceData, nullptr);
	if (oldData != nullptr) {
		oldData->invalidate();
	}
	$XToolkit::targetDisposedPeer(this->target, this);
	destroy();
}

$Point* XWindow::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(this->target)->getTreeLock()) {
		$var($Component, comp, this->target);
		while (comp != nullptr && !($instanceOf($Window, comp))) {
			$assign(comp, $nc($($AWTAccessor::getComponentAccessor()))->getParent(comp));
		}
		if (comp == nullptr || $instanceOf($EmbeddedFrame, comp)) {
			return toGlobal(0, 0);
		}
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			$var($Point, var$2, nullptr);
			bool return$1 = false;
			try {
				$var($Object, wpeer, $XToolkit::targetToPeer(comp));
				if (wpeer == nullptr || !($instanceOf($XDecoratedPeer, wpeer)) || $nc(($cast($XDecoratedPeer, wpeer)))->configure_seen) {
					$assign(var$2, toGlobal(0, 0));
					return$1 = true;
					goto $finally;
				}
				int64_t var$3 = getContentWindow();
				$var($Point, pt, toOtherWindow(var$3, $nc(($cast($XDecoratedPeer, wpeer)))->getContentWindow(), 0, 0));
				if (pt == nullptr) {
					int32_t var$4 = $nc(($cast($XBaseWindow, wpeer)))->getAbsoluteX();
					$assign(pt, $new($Point, var$4, $nc(($cast($XBaseWindow, wpeer)))->getAbsoluteY()));
				}
				$nc(pt)->x += $nc(comp)->getX();
				pt->y += comp->getY();
				$assign(var$2, pt);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
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
	}
	$shouldNotReachHere();
}

void XWindow::setBData($KeyEvent* e, $bytes* data) {
	$init(XWindow);
	$nc($($AWTAccessor::getAWTEventAccessor()))->setBData(e, data);
}

void XWindow::postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) {
	$useLocalCurrentObjectStackCache();
	int64_t jWhen = $System::currentTimeMillis();
	int32_t modifiers = getModifiers(state, 0, keyCode);
	$var($KeyEvent, ke, $new($KeyEvent, $(getEventSource()), id, jWhen, modifiers, keyCode, (char16_t)keyChar, keyLocation));
	if (event != 0) {
		$var($bytes, data, $Native::toBytes(event, eventSize));
		setBData(ke, data);
	}
	$var($AWTAccessor$KeyEventAccessor, kea, $AWTAccessor::getKeyEventAccessor());
	$nc(kea)->setRawCode(ke, rawCode);
	kea->setPrimaryLevelUnicode(ke, (int64_t)unicodeFromPrimaryKeysym);
	kea->setExtendedKeyCode(ke, (int64_t)extendedKeyCode);
	postEventToEventQueue(ke);
}

int32_t XWindow::getAWTKeyCodeForKeySym(int32_t keysym) {
	$init(XWindow);
	int32_t $ret = 0;
	$prepareNativeStatic(XWindow, getAWTKeyCodeForKeySym, int32_t, int32_t keysym);
	$ret = $invokeNativeStatic(keysym);
	$finishNativeStatic();
	return $ret;
}

int32_t XWindow::getKeySymForAWTKeyCode(int32_t keycode) {
	$init(XWindow);
	int32_t $ret = 0;
	$prepareNativeStatic(XWindow, getKeySymForAWTKeyCode, int32_t, int32_t keycode);
	$ret = $invokeNativeStatic(keycode);
	$finishNativeStatic();
	return $ret;
}

$PropMwmHints* XWindow::getMWMHints() {
	if (this->mwm_hints == nullptr) {
		$set(this, mwm_hints, $new($PropMwmHints));
		$init($XWM);
		if (!$nc($XWM::XA_MWM_HINTS)->getAtomData(getWindow(), $nc(this->mwm_hints)->pData, $MWMConstants::PROP_MWM_HINTS_ELEMENTS)) {
			$nc(this->mwm_hints)->zero();
		}
	}
	return this->mwm_hints;
}

void XWindow::setMWMHints($PropMwmHints* hints) {
	$set(this, mwm_hints, hints);
	if (hints != nullptr) {
		$init($XWM);
		$nc($XWM::XA_MWM_HINTS)->setAtomData(getWindow(), $nc(this->mwm_hints)->pData, $MWMConstants::PROP_MWM_HINTS_ELEMENTS);
	}
}

void XWindow::initWMProtocols() {
	$nc(XWindow::wm_protocols)->setAtomListProperty(static_cast<$XBaseWindow*>(this), $(getWMProtocols()));
}

$XAtomList* XWindow::getWMProtocols() {
	return $new($XAtomList);
}

void XWindow::setFullScreenExclusiveModeState(bool state) {
	$synchronized(getStateLock()) {
		this->fullScreenExclusiveModeState = state;
	}
}

bool XWindow::isFullScreenExclusiveMode() {
	$synchronized(getStateLock()) {
		return this->fullScreenExclusiveModeState;
	}
}

int32_t XWindow::getScale() {
	return $nc(this->graphicsConfig)->getScale();
}

int32_t XWindow::scaleUp(int32_t x) {
	return $nc(this->graphicsConfig)->scaleUp(x);
}

int32_t XWindow::scaleDown(int32_t x) {
	return $nc(this->graphicsConfig)->scaleDown(x);
}

void clinit$XWindow($Class* class$) {
	$assignStatic(XWindow::TARGET, "target"_s);
	$assignStatic(XWindow::REPARENTED, "reparented"_s);
	$assignStatic(XWindow::log, $PlatformLogger::getLogger("sun.awt.X11.XWindow"_s));
	$assignStatic(XWindow::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XWindow"_s));
	$assignStatic(XWindow::eventLog, $PlatformLogger::getLogger("sun.awt.X11.event.XWindow"_s));
	$assignStatic(XWindow::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XWindow"_s));
	$assignStatic(XWindow::keyEventLog, $PlatformLogger::getLogger("sun.awt.X11.kye.XWindow"_s));
	XWindow::lastX = 0;
	XWindow::lastY = 0;
	XWindow::lastTime = 0;
	XWindow::lastButton = 0;
	$assignStatic(XWindow::lastWindowRef, nullptr);
	XWindow::clickCount = 0;
	XWindow::JAWT_LOCK_ERROR = 1;
	XWindow::JAWT_LOCK_CLIP_CHANGED = 2;
	XWindow::JAWT_LOCK_BOUNDS_CHANGED = 4;
	XWindow::JAWT_LOCK_SURFACE_CHANGED = 8;
	{
		XWindow::initIDs();
	}
}

XWindow::XWindow() {
}

$Class* XWindow::load$($String* name, bool initialize) {
	$loadClass(XWindow, name, initialize, &_XWindow_ClassInfo_, clinit$XWindow, allocate$XWindow);
	return class$;
}

$Class* XWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun