#include <sun/awt/X11/XComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/util/Collection.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/RepaintArea.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XGlobalCursorManager.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XRepaintArea.h>
#include <sun/awt/X11/XSetWindowAttributes.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/event/IgnorePaintEvent.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef AWT_UNOBSCURED
#undef BACKGROUND_COLOR
#undef DEFAULT_OPERATION
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef FOREGROUND_COLOR
#undef HIGHLIGHT_COLOR
#undef KEY_PRESSED
#undef MOUSE_EVENT
#undef MOUSE_PRESSED
#undef PAINT
#undef RESET_OPERATION
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_SIZE
#undef SHADOW_COLOR
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED
#undef UPDATE
#undef VK_F10
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_LOST_FOCUS

using $ColorArray = $Array<::java::awt::Color>;
using $ComponentArray = $Array<::java::awt::Component>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$SequencedEventAccessor = ::sun::awt::AWTAccessor$SequencedEventAccessor;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $SunToolkit = ::sun::awt::SunToolkit;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XGlobalCursorManager = ::sun::awt::X11::XGlobalCursorManager;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XMenuBarPeer = ::sun::awt::X11::XMenuBarPeer;
using $XRepaintArea = ::sun::awt::X11::XRepaintArea;
using $XSetWindowAttributes = ::sun::awt::X11::XSetWindowAttributes;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $IgnorePaintEvent = ::sun::awt::event::IgnorePaintEvent;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XComponentPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, log)},
	{"buffersLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, buffersLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, focusLog)},
	{"fontLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, fontLog)},
	{"enableLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, enableLog)},
	{"shapeLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XComponentPeer, shapeLog)},
	{"paintPending", "Z", nullptr, 0, $field(XComponentPeer, paintPending)},
	{"isLayouting", "Z", nullptr, 0, $field(XComponentPeer, isLayouting)},
	{"enabled", "Z", nullptr, $PRIVATE, $field(XComponentPeer, enabled)},
	{"boundsOperation", "I", nullptr, $PROTECTED, $field(XComponentPeer, boundsOperation)},
	{"foreground", "Ljava/awt/Color;", nullptr, 0, $field(XComponentPeer, foreground)},
	{"background", "Ljava/awt/Color;", nullptr, 0, $field(XComponentPeer, background)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, 0, $field(XComponentPeer, darkShadow)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, 0, $field(XComponentPeer, lightShadow)},
	{"selectColor", "Ljava/awt/Color;", nullptr, 0, $field(XComponentPeer, selectColor)},
	{"font", "Ljava/awt/Font;", nullptr, 0, $field(XComponentPeer, font)},
	{"backBuffer", "J", nullptr, $PRIVATE, $field(XComponentPeer, backBuffer)},
	{"xBackBuffer", "Ljava/awt/image/VolatileImage;", nullptr, $PRIVATE, $field(XComponentPeer, xBackBuffer)},
	{"systemColors", "[Ljava/awt/Color;", nullptr, $STATIC, $staticField(XComponentPeer, systemColors)},
	{"bHasFocus", "Z", nullptr, 0, $field(XComponentPeer, bHasFocus)},
	{"BACKGROUND_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(XComponentPeer, BACKGROUND_COLOR)},
	{"HIGHLIGHT_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(XComponentPeer, HIGHLIGHT_COLOR)},
	{"SHADOW_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(XComponentPeer, SHADOW_COLOR)},
	{"FOREGROUND_COLOR", "I", nullptr, $STATIC | $FINAL, $constField(XComponentPeer, FOREGROUND_COLOR)},
	{"backBufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(XComponentPeer, backBufferCaps)},
	{}
};

$MethodInfo _XComponentPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XComponentPeer::*)()>(&XComponentPeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XComponentPeer::*)($XCreateWindowParams*)>(&XComponentPeer::init$))},
	{"<init>", "(Ljava/awt/Component;JLjava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(XComponentPeer::*)($Component*,int64_t,$Rectangle*)>(&XComponentPeer::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(XComponentPeer::*)($Component*)>(&XComponentPeer::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"addTree", "(Ljava/util/Collection;Ljava/util/Set;Ljava/awt/Container;)V", "(Ljava/util/Collection<Ljava/lang/Long;>;Ljava/util/Set<Ljava/lang/Long;>;Ljava/awt/Container;)V", $PRIVATE, $method(static_cast<void(XComponentPeer::*)($Collection*,$Set*,$Container*)>(&XComponentPeer::addTree))},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginLayout", "()V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"destroyBuffers", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"doLayout", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"draw3DOval", "(Ljava/awt/Graphics;[Ljava/awt/Color;IIIIZ)V", nullptr, $PUBLIC},
	{"draw3DOval", "(Ljava/awt/Graphics;Ljava/awt/Color;IIIIZ)V", nullptr, 0},
	{"draw3DRect", "(Ljava/awt/Graphics;[Ljava/awt/Color;IIIIZ)V", nullptr, $PUBLIC},
	{"draw3DRect", "(Ljava/awt/Graphics;Ljava/awt/Color;IIIIZ)V", nullptr, 0},
	{"drawMotif3DRect", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PUBLIC},
	{"drawScrollbar", "(Ljava/awt/Graphics;Ljava/awt/Color;IIIIIIZ)V", nullptr, 0},
	{"endLayout", "()V", nullptr, $PUBLIC},
	{"endValidate", "()V", nullptr, $PUBLIC},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getBackBufferCaps", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGUIcolors", "()[Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphicsConfigurationData", "()Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getParentTopLevel", "()Lsun/awt/X11/XWindowPeer;", nullptr, 0},
	{"getPeerBackground", "()Ljava/awt/Color;", nullptr, 0},
	{"getPeerFont", "()Ljava/awt/Font;", nullptr, 0},
	{"getPeerForeground", "()Ljava/awt/Color;", nullptr, 0},
	{"getPeerSize", "()Ljava/awt/Dimension;", nullptr, 0},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRGBvals", "(Ljava/awt/Color;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Color*)>(&XComponentPeer::getRGBvals))},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSystemColors", "()[Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$ColorArray*(*)()>(&XComponentPeer::getSystemColors))},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTargetBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getWinBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleF10JavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaFocusEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"handleJavaInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, 0},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"handleJavaMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"handleJavaWindowFocusEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"hasFocus", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XComponentPeer::*)()>(&XComponentPeer::hasFocus))},
	{"hide", "()V", nullptr, $PUBLIC},
	{"isEmbedded", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XComponentPeer::*)()>(&XComponentPeer::isEnabled))},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isInitialReshape", "()Z", nullptr, $PROTECTED},
	{"isMouseAbove", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isObscured", "()Z", nullptr, $PUBLIC},
	{"isPaintPending", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"notifyTextComponentChange", "(Z)V", nullptr, $PUBLIC},
	{"operationToString", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&XComponentPeer::operationToString))},
	{"pSetCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XComponentPeer::*)($Cursor*)>(&XComponentPeer::pSetCursor))},
	{"pSetCursor", "(Ljava/awt/Cursor;Z)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"popup", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postEventToEventQueue", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"postKeyEvent", "(IIIIIJIJII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postPaintEvent", "(Ljava/awt/Component;IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"rejectFocusRequestHelper", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XComponentPeer::*)($String*)>(&XComponentPeer::rejectFocusRequestHelper))},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"reshape", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsOperation", "(I)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateMotifColors", "(Ljava/awt/Color;)V", nullptr, 0},
	{"wrapInSequenced", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $STATIC | $FINAL, $method(static_cast<$AWTEvent*(*)($AWTEvent*)>(&XComponentPeer::wrapInSequenced))},
	{}
};

$ClassInfo _XComponentPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XComponentPeer",
	"sun.awt.X11.XWindow",
	"java.awt.peer.ComponentPeer,java.awt.dnd.peer.DropTargetPeer,sun.java2d.BackBufferCapsProvider",
	_XComponentPeer_FieldInfo_,
	_XComponentPeer_MethodInfo_
};

$Object* allocate$XComponentPeer($Class* clazz) {
	return $of($alloc(XComponentPeer));
}

$String* XComponentPeer::toString() {
	 return this->$XWindow::toString();
}

int32_t XComponentPeer::hashCode() {
	 return this->$XWindow::hashCode();
}

bool XComponentPeer::equals(Object$* arg0) {
	 return this->$XWindow::equals(arg0);
}

$Object* XComponentPeer::clone() {
	 return this->$XWindow::clone();
}

void XComponentPeer::finalize() {
	this->$XWindow::finalize();
}

$PlatformLogger* XComponentPeer::log = nullptr;
$PlatformLogger* XComponentPeer::buffersLog = nullptr;
$PlatformLogger* XComponentPeer::focusLog = nullptr;
$PlatformLogger* XComponentPeer::fontLog = nullptr;
$PlatformLogger* XComponentPeer::enableLog = nullptr;
$PlatformLogger* XComponentPeer::shapeLog = nullptr;
$ColorArray* XComponentPeer::systemColors = nullptr;

void XComponentPeer::init$() {
	$XWindow::init$();
	this->paintPending = false;
	this->isLayouting = false;
	this->backBuffer = 0;
	$set(this, xBackBuffer, nullptr);
	this->bHasFocus = false;
}

void XComponentPeer::init$($XCreateWindowParams* params) {
	$XWindow::init$(params);
	this->paintPending = false;
	this->isLayouting = false;
	this->backBuffer = 0;
	$set(this, xBackBuffer, nullptr);
	this->bHasFocus = false;
}

void XComponentPeer::init$($Component* target, int64_t parentWindow, $Rectangle* bounds) {
	$XWindow::init$(target, parentWindow, bounds);
	this->paintPending = false;
	this->isLayouting = false;
	this->backBuffer = 0;
	$set(this, xBackBuffer, nullptr);
	this->bHasFocus = false;
}

void XComponentPeer::init$($Component* target) {
	$XWindow::init$(target);
	this->paintPending = false;
	this->isLayouting = false;
	this->backBuffer = 0;
	$set(this, xBackBuffer, nullptr);
	this->bHasFocus = false;
}

void XComponentPeer::preInit($XCreateWindowParams* params) {
	$XWindow::preInit(params);
	this->boundsOperation = $ComponentPeer::DEFAULT_OPERATION;
}

void XComponentPeer::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XWindow::postInit(params);
	pSetCursor($($nc(this->target)->getCursor()));
	$set(this, foreground, $nc(this->target)->getForeground());
	$set(this, background, $nc(this->target)->getBackground());
	$set(this, font, $nc(this->target)->getFont());
	if (isInitialReshape()) {
		$var($Rectangle, r, $nc(this->target)->getBounds());
		reshape($nc(r)->x, r->y, r->width, r->height);
	}
	setEnabled($nc(this->target)->isEnabled());
	if ($nc(this->target)->isVisible()) {
		setVisible(true);
	}
}

bool XComponentPeer::isInitialReshape() {
	return true;
}

void XComponentPeer::reparent($ContainerPeer* newNativeParent) {
	$useLocalCurrentObjectStackCache();
	$var(XComponentPeer, newPeer, $cast(XComponentPeer, newNativeParent));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			int64_t var$2 = getWindow();
			int64_t var$3 = $nc(newPeer)->getContentWindow();
			int32_t var$4 = scaleUp(this->x);
			$XlibWrapper::XReparentWindow(var$1, var$2, var$3, var$4, scaleUp(this->y));
			$set(this, parentWindow, newPeer);
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XComponentPeer::isReparentSupported() {
	return $nc($($System::getProperty("sun.awt.X11.XComponentPeer.reparentNotSupported"_s, "false"_s)))->equals("false"_s);
}

bool XComponentPeer::isObscured() {
	$useLocalCurrentObjectStackCache();
	$var($Container, container, ($instanceOf($Container, this->target)) ? $cast($Container, this->target) : $nc(this->target)->getParent());
	if (container == nullptr) {
		return true;
	}
	$var($Container, parent, nullptr);
	while (($assign(parent, $nc(container)->getParent())) != nullptr) {
		$assign(container, parent);
	}
	if ($instanceOf($Window, container)) {
		$var($XWindowPeer, wpeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(container)));
		if (wpeer != nullptr) {
			$init($XWindowAttributesData);
			return ($nc(wpeer->winAttr)->visibilityState != $XWindowAttributesData::AWT_UNOBSCURED);
		}
	}
	return true;
}

bool XComponentPeer::canDetermineObscurity() {
	return true;
}

bool XComponentPeer::hasFocus() {
	return this->bHasFocus;
}

void XComponentPeer::focusGained($FocusEvent* e) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::focusLog)->fine("{0}"_s, $$new($ObjectArray, {$of(e)}));
	}
	this->bHasFocus = true;
}

void XComponentPeer::focusLost($FocusEvent* e) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::focusLog)->fine("{0}"_s, $$new($ObjectArray, {$of(e)}));
	}
	this->bHasFocus = false;
}

bool XComponentPeer::isFocusable() {
	return false;
}

$AWTEvent* XComponentPeer::wrapInSequenced($AWTEvent* event) {
	$init(XComponentPeer);
	return $nc($($AWTAccessor::getSequencedEventAccessor()))->create(event);
}

bool XComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	if ($XKeyboardFocusManagerPeer::processSynchronousLightweightTransfer(this->target, lightweightChild, temporary, focusedWindowChangeAllowed, time)) {
		return true;
	}
	int32_t result = $XKeyboardFocusManagerPeer::shouldNativelyFocusHeavyweight(this->target, lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
	{
		$var($Window, parentWindow, nullptr)
		$var($XWindowPeer, wpeer, nullptr)
		bool res = false;
		switch (result) {
		case $XKeyboardFocusManagerPeer::SNFH_FAILURE:
			{
				return false;
			}
		case $XKeyboardFocusManagerPeer::SNFH_SUCCESS_PROCEED:
			{
				$init($PlatformLogger$Level);
				if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XComponentPeer::focusLog)->finer($$str({"Proceeding with request to "_s, lightweightChild, " in "_s, this->target}));
				}
				$assign(parentWindow, $SunToolkit::getContainingWindow(this->target));
				if (parentWindow == nullptr) {
					return rejectFocusRequestHelper("WARNING: Parent window is null"_s);
				}
				$assign(wpeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(parentWindow)));
				if (wpeer == nullptr) {
					return rejectFocusRequestHelper("WARNING: Parent window\'s peer is null"_s);
				}
				res = $nc(wpeer)->requestWindowFocus(nullptr);
				$init($PlatformLogger$Level);
				if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XComponentPeer::focusLog)->finer($$str({"Requested window focus: "_s, $$str(res)}));
				}
				if (!(res && $nc(parentWindow)->isFocused())) {
					return rejectFocusRequestHelper("Waiting for asynchronous processing of the request"_s);
				}
				return $XKeyboardFocusManagerPeer::deliverFocus(lightweightChild, this->target, temporary, focusedWindowChangeAllowed, time, cause);
			}
		case $XKeyboardFocusManagerPeer::SNFH_SUCCESS_HANDLED:
			{
				return true;
			}
		}
	}
	return false;
}

bool XComponentPeer::rejectFocusRequestHelper($String* logMsg) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XComponentPeer::focusLog)->finer(logMsg);
	}
	$XKeyboardFocusManagerPeer::removeLastFocusRequest(this->target);
	return false;
}

void XComponentPeer::handleJavaFocusEvent($AWTEvent* e) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XComponentPeer::focusLog)->finer($($nc(e)->toString()));
	}
	if ($nc(e)->getID() == $FocusEvent::FOCUS_GAINED) {
		focusGained($cast($FocusEvent, e));
	} else {
		focusLost($cast($FocusEvent, e));
	}
}

void XComponentPeer::handleJavaWindowFocusEvent($AWTEvent* e) {
}

void XComponentPeer::setVisible(bool b) {
	xSetVisible(b);
}

void XComponentPeer::hide() {
	setVisible(false);
}

void XComponentPeer::setEnabled(bool value) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::enableLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::enableLog)->fine("{0}ing {1}"_s, $$new($ObjectArray, {
			(value ? $of("Enabl"_s) : $of("Disabl"_s)),
			$of(this)
		}));
	}
	bool status = value;
	$var($Container, cp, $SunToolkit::getNativeContainer(this->target));
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	if (cp != nullptr) {
		status &= $nc(($cast(XComponentPeer, $($nc(acc)->getPeer(cp)))))->isEnabled();
	}
	$synchronized(getStateLock()) {
		if (this->enabled == status) {
			return;
		}
		this->enabled = status;
	}
	if ($instanceOf($Container, this->target)) {
		$var($ComponentArray, list, $nc(($cast($Container, this->target)))->getComponents());
		{
			$var($ComponentArray, arr$, list);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					$var($ComponentPeer, p, $nc(acc)->getPeer(child));
					if (p != nullptr) {
						p->setEnabled(status && $nc(child)->isEnabled());
					}
				}
			}
		}
	}
	repaint();
}

bool XComponentPeer::isEnabled() {
	$synchronized(getStateLock()) {
		return this->enabled;
	}
}

void XComponentPeer::paint($Graphics* g) {
	$XWindow::paint(g);
	$nc(this->target)->paint(g);
}

$Graphics* XComponentPeer::getGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, var$0, this->surfaceData);
	$var($Color, var$1, getPeerForeground());
	$var($Color, var$2, getPeerBackground());
	return getGraphics(var$0, var$1, var$2, $(getPeerFont()));
}

void XComponentPeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($nc(this->target)->getBackground()));
	int32_t var$0 = $nc(this->target)->getWidth();
	g->fillRect(0, 0, var$0, $nc(this->target)->getHeight());
	g->setColor($($nc(this->target)->getForeground()));
	paintPeer(g);
	$nc(this->target)->print(g);
}

void XComponentPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	xSetBounds(x, y, width, height);
	validateSurface();
	layout();
}

void XComponentPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS);
}

void XComponentPeer::coalescePaintEvent($PaintEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(e)->getUpdateRect());
	if (!($instanceOf($IgnorePaintEvent, e))) {
		$nc(this->paintArea)->add(r, e->getID());
	}
	{
		switch (e->getID()) {
		case $PaintEvent::UPDATE:
			{
				$init($PlatformLogger$Level);
				if ($nc(XComponentPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XComponentPeer::log)->finer($$str({"XCP coalescePaintEvent : UPDATE : add : x = "_s, $$str($nc(r)->x), ", y = "_s, $$str(r->y), ", width = "_s, $$str(r->width), ",height = "_s, $$str(r->height)}));
				}
				return;
			}
		case $PaintEvent::PAINT:
			{
				$init($PlatformLogger$Level);
				if ($nc(XComponentPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XComponentPeer::log)->finer($$str({"XCP coalescePaintEvent : PAINT : add : x = "_s, $$str($nc(r)->x), ", y = "_s, $$str(r->y), ", width = "_s, $$str(r->width), ",height = "_s, $$str(r->height)}));
				}
				return;
			}
		}
	}
}

$XWindowPeer* XComponentPeer::getParentTopLevel() {
	$useLocalCurrentObjectStackCache();
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	$var($Container, parent, ($instanceOf($Container, this->target)) ? ($cast($Container, this->target)) : ($nc(compAccessor)->getParent(this->target)));
	while (parent != nullptr && !($instanceOf($Window, parent))) {
		$assign(parent, compAccessor->getParent(parent));
	}
	if (parent != nullptr) {
		return $cast($XWindowPeer, compAccessor->getPeer(parent));
	} else {
		return nullptr;
	}
}

void XComponentPeer::handleJavaMouseEvent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			bool var$1 = $equals(this->target, e->getSource());
			bool var$0 = var$1 && !$nc(this->target)->isFocusOwner();
			if (var$0 && $XKeyboardFocusManagerPeer::shouldFocusOnClick(this->target)) {
				$var($XWindowPeer, parentXWindow, getParentTopLevel());
				$var($Window, parentWindow, $cast($Window, $nc(parentXWindow)->getTarget()));
				$init($FocusEvent$Cause);
				$XKeyboardFocusManagerPeer::requestFocusFor(this->target, $FocusEvent$Cause::MOUSE_EVENT);
			}
			break;
		}
	}
}

void XComponentPeer::handleJavaKeyEvent($KeyEvent* e) {
}

void XComponentPeer::handleJavaMouseWheelEvent($MouseWheelEvent* e) {
}

void XComponentPeer::handleJavaInputMethodEvent($InputMethodEvent* e) {
}

void XComponentPeer::handleF10JavaKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(e)->getID() == $KeyEvent::KEY_PRESSED;
	if (var$0 && e->getKeyCode() == $KeyEvent::VK_F10) {
		$var($XWindowPeer, winPeer, this->getToplevelXWindow());
		if ($instanceOf($XFramePeer, winPeer)) {
			$var($XMenuBarPeer, mPeer, $nc(($cast($XFramePeer, winPeer)))->getMenubarPeer());
			if (mPeer != nullptr) {
				mPeer->handleF10KeyPress(e);
			}
		}
	}
}

void XComponentPeer::handleEvent($AWTEvent* e) {
	bool var$0 = ($instanceOf($InputEvent, e)) && !$nc(($cast($InputEvent, e)))->isConsumed();
	if (var$0 && $nc(this->target)->isEnabled()) {
		if ($instanceOf($MouseEvent, e)) {
			if ($instanceOf($MouseWheelEvent, e)) {
				handleJavaMouseWheelEvent($cast($MouseWheelEvent, e));
			} else {
				handleJavaMouseEvent($cast($MouseEvent, e));
			}
		} else if ($instanceOf($KeyEvent, e)) {
			handleF10JavaKeyEvent($cast($KeyEvent, e));
			handleJavaKeyEvent($cast($KeyEvent, e));
		}
	} else if ($instanceOf($KeyEvent, e) && !($cast($InputEvent, e))->isConsumed()) {
		handleF10JavaKeyEvent($cast($KeyEvent, e));
	} else if ($instanceOf($InputMethodEvent, e)) {
		handleJavaInputMethodEvent($cast($InputMethodEvent, e));
	}
	int32_t id = $nc(e)->getID();
	switch (id) {
	case $PaintEvent::PAINT:
		{
			this->paintPending = false;
		}
	case $PaintEvent::UPDATE:
		{
			if (!this->isLayouting && !this->paintPending) {
				$nc(this->paintArea)->paint(this->target, false);
			}
			return;
		}
	case $FocusEvent::FOCUS_LOST:
		{}
	case $FocusEvent::FOCUS_GAINED:
		{
			handleJavaFocusEvent(e);
			break;
		}
	case $WindowEvent::WINDOW_LOST_FOCUS:
		{}
	case $WindowEvent::WINDOW_GAINED_FOCUS:
		{
			handleJavaWindowFocusEvent(e);
			break;
		}
	default:
		{
			break;
		}
	}
}

$Dimension* XComponentPeer::getMinimumSize() {
	return $nc(this->target)->getSize();
}

$Dimension* XComponentPeer::getPreferredSize() {
	return getMinimumSize();
}

void XComponentPeer::layout() {
}

void XComponentPeer::updateMotifColors($Color* bg) {
	int32_t red = $nc(bg)->getRed();
	int32_t green = bg->getGreen();
	int32_t blue = bg->getBlue();
	$set(this, darkShadow, $new($Color, $MotifColorUtilities::calculateBottomShadowFromBackground(red, green, blue)));
	$set(this, lightShadow, $new($Color, $MotifColorUtilities::calculateTopShadowFromBackground(red, green, blue)));
	$set(this, selectColor, $new($Color, $MotifColorUtilities::calculateSelectFromBackground(red, green, blue)));
}

void XComponentPeer::drawMotif3DRect($Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool topShadow) {
	$nc(g)->setColor(topShadow ? this->darkShadow : this->lightShadow);
	g->drawLine(x, y, x + width, y);
	g->drawLine(x, y + height, x, y);
	g->setColor(topShadow ? this->lightShadow : this->darkShadow);
	g->drawLine(x + 1, y + height, x + width, y + height);
	g->drawLine(x + width, y + height, x + width, y + 1);
}

void XComponentPeer::setBackground($Color* c) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::log)->fine($$str({"Set background to "_s, c}));
	}
	$synchronized(getStateLock()) {
		if ($Objects::equals(this->background, c)) {
			return;
		}
		$set(this, background, c);
	}
	$XWindow::setBackground(c);
	repaint();
}

void XComponentPeer::setForeground($Color* c) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::log)->fine($$str({"Set foreground to "_s, c}));
	}
	$synchronized(getStateLock()) {
		if ($Objects::equals(this->foreground, c)) {
			return;
		}
		$set(this, foreground, c);
	}
	repaint();
}

$FontMetrics* XComponentPeer::getFontMetrics($Font* font) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::fontLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::fontLog)->fine($$str({"Getting font metrics for "_s, font}));
	}
	return $FontDesignMetrics::getMetrics(font);
}

void XComponentPeer::setFont($Font* f$renamed) {
	$var($Font, f, f$renamed);
	if (f == nullptr) {
		$assign(f, $XWindow::getDefaultFont());
	}
	$synchronized(getStateLock()) {
		if ($nc(f)->equals(this->font)) {
			return;
		}
		$set(this, font, f);
	}
	repaint();
}

$Font* XComponentPeer::getFont() {
	return this->font;
}

void XComponentPeer::updateCursorImmediately() {
	$nc($($XGlobalCursorManager::getCursorManager()))->updateCursorImmediately();
}

void XComponentPeer::pSetCursor($Cursor* cursor) {
	this->pSetCursor(cursor, true);
}

void XComponentPeer::pSetCursor($Cursor* cursor, bool ignoreSubComponents) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t xcursor = $XGlobalCursorManager::getCursor(cursor);
			$var($XSetWindowAttributes, xwa, $new($XSetWindowAttributes));
			xwa->set_cursor(xcursor);
			int64_t valuemask = $XConstants::CWCursor;
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XChangeWindowAttributes(var$1, getWindow(), valuemask, xwa->pData);
			$XlibWrapper::XFlush($XToolkit::getDisplay());
			xwa->dispose();
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

$Image* XComponentPeer::createImage(int32_t width, int32_t height) {
	return $nc(this->graphicsConfig)->createAcceleratedImage(this->target, width, height);
}

$VolatileImage* XComponentPeer::createVolatileImage(int32_t width, int32_t height) {
	return $new($SunVolatileImage, this->target, width, height);
}

$Insets* XComponentPeer::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void XComponentPeer::beginValidate() {
}

void XComponentPeer::endValidate() {
}

bool XComponentPeer::isPaintPending() {
	return this->paintPending && this->isLayouting;
}

bool XComponentPeer::handlesWheelScrolling() {
	return false;
}

void XComponentPeer::beginLayout() {
	this->isLayouting = true;
}

void XComponentPeer::endLayout() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !this->paintPending && !$nc(this->paintArea)->isEmpty();
	if (var$0 && !$nc($($AWTAccessor::getComponentAccessor()))->getIgnoreRepaint(this->target)) {
		postEvent($$new($PaintEvent, this->target, $PaintEvent::PAINT, $$new($Rectangle)));
	}
	this->isLayouting = false;
}

$Color* XComponentPeer::getWinBackground() {
	return getPeerBackground();
}

$ints* XComponentPeer::getRGBvals($Color* c) {
	$init(XComponentPeer);
	$var($ints, rgbvals, $new($ints, 3));
	rgbvals->set(0, $nc(c)->getRed());
	rgbvals->set(1, c->getGreen());
	rgbvals->set(2, c->getBlue());
	return rgbvals;
}

$ColorArray* XComponentPeer::getGUIcolors() {
	$useLocalCurrentObjectStackCache();
	$var($ColorArray, c, $new($ColorArray, 4));
	float backb = 0.0;
	float highb = 0.0;
	float shadowb = 0.0;
	float hue = 0.0;
	float saturation = 0.0;
	c->set(XComponentPeer::BACKGROUND_COLOR, $(getWinBackground()));
	if (c->get(XComponentPeer::BACKGROUND_COLOR) == nullptr) {
		c->set(XComponentPeer::BACKGROUND_COLOR, $($XWindow::getWinBackground()));
	}
	if (c->get(XComponentPeer::BACKGROUND_COLOR) == nullptr) {
		$init($Color);
		c->set(XComponentPeer::BACKGROUND_COLOR, $Color::lightGray);
	}
	$var($ints, rgb, getRGBvals(c->get(XComponentPeer::BACKGROUND_COLOR)));
	$var($floats, hsb, $Color::RGBtoHSB($nc(rgb)->get(0), rgb->get(1), rgb->get(2), nullptr));
	hue = $nc(hsb)->get(0);
	saturation = hsb->get(1);
	backb = hsb->get(2);
	highb = backb + 0.2f;
	shadowb = backb - 0.4f;
	if (highb > 1.0) {
		if ((1.0 - backb) < 0.05) {
			highb = shadowb + 0.25f;
		} else {
			highb = 1.0f;
		}
	} else if (shadowb < 0.0) {
		if ((backb - 0.0) < 0.25) {
			highb = backb + 0.75f;
			shadowb = highb - 0.2f;
		} else {
			shadowb = 0.0f;
		}
	}
	c->set(XComponentPeer::HIGHLIGHT_COLOR, $($Color::getHSBColor(hue, saturation, highb)));
	c->set(XComponentPeer::SHADOW_COLOR, $($Color::getHSBColor(hue, saturation, shadowb)));
	c->set(XComponentPeer::FOREGROUND_COLOR, $(getPeerForeground()));
	if (c->get(XComponentPeer::FOREGROUND_COLOR) == nullptr) {
		c->set(XComponentPeer::FOREGROUND_COLOR, $Color::black);
	}
	if (!isEnabled()) {
		c->set(XComponentPeer::BACKGROUND_COLOR, $($nc(c->get(XComponentPeer::BACKGROUND_COLOR))->darker()));
		$var($Color, tc, c->get(XComponentPeer::BACKGROUND_COLOR));
		int32_t var$1 = $nc(tc)->getRed() * 30;
		int32_t var$0 = var$1 + tc->getGreen() * 59;
		int32_t bg = var$0 + tc->getBlue() * 11;
		$assign(tc, c->get(XComponentPeer::FOREGROUND_COLOR));
		int32_t var$3 = tc->getRed() * 30;
		int32_t var$2 = var$3 + tc->getGreen() * 59;
		int32_t fg = var$2 + tc->getBlue() * 11;
		float ave = (float)((fg + bg) / 51000.0);
		int32_t var$4 = $cast(int32_t, (tc->getRed() * ave));
		int32_t var$5 = $cast(int32_t, (tc->getGreen() * ave));
		$var($Color, newForeground, $new($Color, var$4, var$5, $cast(int32_t, (tc->getBlue() * ave))));
		if (newForeground->equals(c->get(XComponentPeer::FOREGROUND_COLOR))) {
			$assign(newForeground, $new($Color, ave, ave, ave));
		}
		c->set(XComponentPeer::FOREGROUND_COLOR, newForeground);
	}
	return c;
}

$ColorArray* XComponentPeer::getSystemColors() {
	$init(XComponentPeer);
	if (XComponentPeer::systemColors == nullptr) {
		$assignStatic(XComponentPeer::systemColors, $new($ColorArray, 4));
		$init($SystemColor);
		$nc(XComponentPeer::systemColors)->set(XComponentPeer::BACKGROUND_COLOR, $SystemColor::window);
		$nc(XComponentPeer::systemColors)->set(XComponentPeer::HIGHLIGHT_COLOR, $SystemColor::controlLtHighlight);
		$nc(XComponentPeer::systemColors)->set(XComponentPeer::SHADOW_COLOR, $SystemColor::controlShadow);
		$nc(XComponentPeer::systemColors)->set(XComponentPeer::FOREGROUND_COLOR, $SystemColor::windowText);
	}
	return XComponentPeer::systemColors;
}

void XComponentPeer::draw3DOval($Graphics* g, $ColorArray* colors, int32_t x, int32_t y, int32_t w, int32_t h, bool raised) {
	$var($Color, c, $nc(g)->getColor());
	g->setColor(raised ? $nc(colors)->get(XComponentPeer::HIGHLIGHT_COLOR) : colors->get(XComponentPeer::SHADOW_COLOR));
	g->drawArc(x, y, w, h, 45, 180);
	g->setColor(raised ? $nc(colors)->get(XComponentPeer::SHADOW_COLOR) : colors->get(XComponentPeer::HIGHLIGHT_COLOR));
	g->drawArc(x, y, w, h, 225, 180);
	g->setColor(c);
}

void XComponentPeer::draw3DRect($Graphics* g, $ColorArray* colors, int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$var($Color, c, $nc(g)->getColor());
	g->setColor(raised ? $nc(colors)->get(XComponentPeer::HIGHLIGHT_COLOR) : colors->get(XComponentPeer::SHADOW_COLOR));
	g->drawLine(x, y, x, y + height);
	g->drawLine(x + 1, y, x + width - 1, y);
	g->setColor(raised ? $nc(colors)->get(XComponentPeer::SHADOW_COLOR) : colors->get(XComponentPeer::HIGHLIGHT_COLOR));
	g->drawLine(x + 1, y + height, x + width, y + height);
	g->drawLine(x + width, y, x + width, y + height - 1);
	g->setColor(c);
}

void XComponentPeer::draw3DOval($Graphics* g, $Color* bg, int32_t x, int32_t y, int32_t w, int32_t h, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, $nc(g)->getColor());
	$var($Color, shadow, $nc(bg)->darker());
	$var($Color, highlight, bg->brighter());
	g->setColor(raised ? highlight : shadow);
	g->drawArc(x, y, w, h, 45, 180);
	g->setColor(raised ? shadow : highlight);
	g->drawArc(x, y, w, h, 225, 180);
	g->setColor(c);
}

void XComponentPeer::draw3DRect($Graphics* g, $Color* bg, int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, $nc(g)->getColor());
	$var($Color, shadow, $nc(bg)->darker());
	$var($Color, highlight, bg->brighter());
	g->setColor(raised ? highlight : shadow);
	g->drawLine(x, y, x, y + height);
	g->drawLine(x + 1, y, x + width - 1, y);
	g->setColor(raised ? shadow : highlight);
	g->drawLine(x + 1, y + height, x + width, y + height);
	g->drawLine(x + width, y, x + width, y + height - 1);
	g->setColor(c);
}

void XComponentPeer::drawScrollbar($Graphics* g, $Color* bg, int32_t thickness, int32_t length, int32_t min, int32_t max, int32_t val, int32_t vis, bool horizontal) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, $nc(g)->getColor());
	double f = (double)(length - 2 * (thickness - 1)) / $Math::max(1, ((max - min) + vis));
	int32_t v1 = thickness + $cast(int32_t, (f * (val - min)));
	int32_t v2 = $cast(int32_t, (f * vis));
	int32_t w2 = thickness - 4;
	$var($ints, tpts_x, $new($ints, 3));
	$var($ints, tpts_y, $new($ints, 3));
	if (length < 3 * w2) {
		v1 = (v2 = 0);
		if (length < 2 * w2 + 2) {
			w2 = (length - 2) / 2;
		}
	} else if (v2 < 7) {
		v1 = $Math::max(0, v1 - ((7 - v2) >> 1));
		v2 = 7;
	}
	int32_t ctr = thickness / 2;
	int32_t sbmin = ctr - w2 / 2;
	int32_t sbmax = ctr + w2 / 2;
	{
		int32_t var$0 = $cast(int32_t, ($nc(bg)->getRed() * 0.85));
		int32_t var$1 = $cast(int32_t, (bg->getGreen() * 0.85));
		$var($Color, d, $new($Color, var$0, var$1, $cast(int32_t, (bg->getBlue() * 0.85))));
		g->setColor(d);
		if (horizontal) {
			g->fillRect(0, 0, length, thickness);
		} else {
			g->fillRect(0, 0, thickness, length);
		}
	}
	g->setColor(bg);
	if (v1 > 0) {
		if (horizontal) {
			g->fillRect(v1, 3, v2, thickness - 3);
		} else {
			g->fillRect(3, v1, thickness - 3, v2);
		}
	}
	tpts_x->set(0, ctr);
	tpts_y->set(0, 2);
	tpts_x->set(1, sbmin);
	tpts_y->set(1, w2);
	tpts_x->set(2, sbmax);
	tpts_y->set(2, w2);
	if (horizontal) {
		g->fillPolygon(tpts_y, tpts_x, 3);
	} else {
		g->fillPolygon(tpts_x, tpts_y, 3);
	}
	tpts_y->set(0, length - 2);
	tpts_y->set(1, length - w2);
	tpts_y->set(2, length - w2);
	if (horizontal) {
		g->fillPolygon(tpts_y, tpts_x, 3);
	} else {
		g->fillPolygon(tpts_x, tpts_y, 3);
	}
	$var($Color, highlight, $nc(bg)->brighter());
	g->setColor(highlight);
	if (horizontal) {
		g->drawLine(1, thickness, length - 1, thickness);
		g->drawLine(length - 1, 1, length - 1, thickness);
		g->drawLine(1, ctr, w2, sbmin);
		g->drawLine(length - w2, sbmin, length - w2, sbmax);
		g->drawLine(length - w2, sbmin, length - 2, ctr);
	} else {
		g->drawLine(thickness, 1, thickness, length - 1);
		g->drawLine(1, length - 1, thickness, length - 1);
		g->drawLine(ctr, 1, sbmin, w2);
		g->drawLine(sbmin, length - w2, sbmax, length - w2);
		g->drawLine(sbmin, length - w2, ctr, length - 2);
	}
	if (v1 > 0) {
		if (horizontal) {
			g->drawLine(v1, 2, v1 + v2, 2);
			g->drawLine(v1, 2, v1, thickness - 3);
		} else {
			g->drawLine(2, v1, 2, v1 + v2);
			g->drawLine(2, v1, thickness - 3, v1);
		}
	}
	$var($Color, shadow, bg->darker());
	g->setColor(shadow);
	if (horizontal) {
		g->drawLine(0, 0, 0, thickness);
		g->drawLine(0, 0, length - 1, 0);
		g->drawLine(w2, sbmin, w2, sbmax);
		g->drawLine(w2, sbmax, 1, ctr);
		g->drawLine(length - 2, ctr, length - w2, sbmax);
	} else {
		g->drawLine(0, 0, thickness, 0);
		g->drawLine(0, 0, 0, length - 1);
		g->drawLine(sbmin, w2, sbmax, w2);
		g->drawLine(sbmax, w2, ctr, 1);
		g->drawLine(ctr, length - 2, sbmax, length - w2);
	}
	if (v1 > 0) {
		if (horizontal) {
			g->drawLine(v1 + v2, 2, v1 + v2, thickness - 2);
			g->drawLine(v1, thickness - 2, v1 + v2, thickness - 2);
		} else {
			g->drawLine(2, v1 + v2, thickness - 2, v1 + v2);
			g->drawLine(thickness - 2, v1, thickness - 2, v1 + v2);
		}
	}
	g->setColor(c);
}

void XComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::buffersLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::buffersLog)->fine($$str({"createBuffers("_s, $$str(numBuffers), ", "_s, caps, ")"_s}));
	}
	$set(this, backBufferCaps, caps);
	this->backBuffer = $nc(this->graphicsConfig)->createBackBuffer(this, numBuffers, caps);
	$set(this, xBackBuffer, $nc(this->graphicsConfig)->createBackBufferImage(this->target, this->backBuffer));
}

$BufferCapabilities* XComponentPeer::getBackBufferCaps() {
	return this->backBufferCaps;
}

void XComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::buffersLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::buffersLog)->fine($$str({"flip("_s, flipAction, ")"_s}));
	}
	if (this->backBuffer == 0) {
		$throwNew($IllegalStateException, "Buffers have not been created"_s);
	}
	$nc(this->graphicsConfig)->flip(this, this->target, this->xBackBuffer, x1, y1, x2, y2, flipAction);
}

$Image* XComponentPeer::getBackBuffer() {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::buffersLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::buffersLog)->fine("getBackBuffer()"_s);
	}
	if (this->backBuffer == 0) {
		$throwNew($IllegalStateException, "Buffers have not been created"_s);
	}
	return this->xBackBuffer;
}

void XComponentPeer::destroyBuffers() {
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::buffersLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XComponentPeer::buffersLog)->fine("destroyBuffers()"_s);
	}
	$nc(this->graphicsConfig)->destroyBackBuffer(this->backBuffer);
	this->backBuffer = 0;
	$set(this, xBackBuffer, nullptr);
}

void XComponentPeer::notifyTextComponentChange(bool add) {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $nc($($AWTAccessor::getComponentAccessor()))->getParent(this->target));
	while (!(parent == nullptr || $instanceOf($Frame, parent) || $instanceOf($Dialog, parent))) {
		$assign(parent, $nc($($AWTAccessor::getComponentAccessor()))->getParent(parent));
	}
}

bool XComponentPeer::isEventDisabled($XEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XComponentPeer::enableLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XComponentPeer::enableLog)->finest("Component is {1}, checking for disabled event {0}"_s, $$new($ObjectArray, {
			$of(e),
			(isEnabled() ? $of("enabled"_s) : $of("disable"_s))
		}));
	}
	if (!isEnabled()) {
		switch ($nc(e)->get_type()) {
		case $XConstants::ButtonPress:
			{}
		case $XConstants::ButtonRelease:
			{}
		case $XConstants::KeyPress:
			{}
		case $XConstants::KeyRelease:
			{}
		case $XConstants::EnterNotify:
			{}
		case $XConstants::LeaveNotify:
			{}
		case $XConstants::MotionNotify:
			{
				if ($nc(XComponentPeer::enableLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XComponentPeer::enableLog)->finer("Event {0} is disable"_s, $$new($ObjectArray, {$of(e)}));
				}
				return true;
			}
		}
	}
	switch ($nc(e)->get_type()) {
	case $XConstants::MapNotify:
		{}
	case $XConstants::UnmapNotify:
		{
			return true;
		}
	}
	return $XWindow::isEventDisabled(e);
}

$Color* XComponentPeer::getPeerBackground() {
	return this->background;
}

$Color* XComponentPeer::getPeerForeground() {
	return this->foreground;
}

$Font* XComponentPeer::getPeerFont() {
	return this->font;
}

$Dimension* XComponentPeer::getPeerSize() {
	return $new($Dimension, this->width, this->height);
}

void XComponentPeer::setBoundsOperation(int32_t operation) {
	$synchronized(getStateLock()) {
		if (this->boundsOperation == $ComponentPeer::DEFAULT_OPERATION) {
			this->boundsOperation = operation;
		} else if (operation == $ComponentPeer::RESET_OPERATION) {
			this->boundsOperation = $ComponentPeer::DEFAULT_OPERATION;
		}
	}
}

$String* XComponentPeer::operationToString(int32_t operation) {
	$init(XComponentPeer);
	switch (operation) {
	case $ComponentPeer::SET_LOCATION:
		{
			return "SET_LOCATION"_s;
		}
	case $ComponentPeer::SET_SIZE:
		{
			return "SET_SIZE"_s;
		}
	case $ComponentPeer::SET_CLIENT_SIZE:
		{
			return "SET_CLIENT_SIZE"_s;
		}
	default:
		{}
	case $ComponentPeer::SET_BOUNDS:
		{
			return "SET_BOUNDS"_s;
		}
	}
}

void XComponentPeer::setZOrder($ComponentPeer* above) {
	int64_t aboveWindow = (above != nullptr) ? $nc(($cast(XComponentPeer, above)))->getWindow() : (int64_t)0;
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::SetZOrder(var$1, getWindow(), aboveWindow);
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

void XComponentPeer::addTree($Collection* order, $Set* set, $Container* cont) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
		$var($Component, comp, cont->getComponent(i));
		$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(comp));
		if ($instanceOf(XComponentPeer, peer)) {
			$var($Long, window, $Long::valueOf($nc(($cast(XComponentPeer, peer)))->getWindow()));
			if (!$nc(set)->contains(window)) {
				set->add(window);
				$nc(order)->add(window);
			}
		} else if ($instanceOf($Container, comp)) {
			addTree(order, set, $cast($Container, comp));
		}
	}
}

void XComponentPeer::addDropTarget($DropTarget* dt) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, this->target);
	while (!(comp == nullptr || $instanceOf($Window, comp))) {
		$assign(comp, $nc(comp)->getParent());
	}
	if ($instanceOf($Window, comp)) {
		$var($XWindowPeer, wpeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(comp)));
		if (wpeer != nullptr) {
			wpeer->addDropTarget();
		}
	}
}

void XComponentPeer::removeDropTarget($DropTarget* dt) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, this->target);
	while (!(comp == nullptr || $instanceOf($Window, comp))) {
		$assign(comp, $nc(comp)->getParent());
	}
	if ($instanceOf($Window, comp)) {
		$var($XWindowPeer, wpeer, $cast($XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(comp)));
		if (wpeer != nullptr) {
			wpeer->removeDropTarget();
		}
	}
}

void XComponentPeer::applyShape($Region* shape$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Region, shape, shape$renamed);
	if ($XlibUtil::isShapingSupported()) {
		$init($PlatformLogger$Level);
		if ($nc(XComponentPeer::shapeLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$var($String, var$4, $$str({"*** INFO: Setting shape: PEER: "_s, this, "; WINDOW: "_s}));
			$var($String, var$3, $$concat(var$4, $$str(getWindow())));
			$var($String, var$2, $$concat(var$3, "; TARGET: "_s));
			$var($String, var$1, $$concat(var$2, this->target));
			$var($String, var$0, $$concat(var$1, "; SHAPE: "_s));
			$nc(XComponentPeer::shapeLog)->finer($$concat(var$0, $(shape)));
		}
		$XToolkit::awtLock();
		{
			$var($Throwable, var$5, nullptr);
			try {
				if (shape != nullptr) {
					int32_t scale = getScale();
					if (scale != 1) {
						$assign(shape, shape->getScaledRegion((double)scale, (double)scale));
					}
					int64_t var$6 = $XToolkit::getDisplay();
					int64_t var$7 = getWindow();
					int32_t var$8 = shape->getLoX();
					int32_t var$9 = shape->getLoY();
					int32_t var$10 = shape->getHiX();
					int32_t var$11 = shape->getHiY();
					$XlibWrapper::SetRectangularShape(var$6, var$7, var$8, var$9, var$10, var$11, (shape->isRectangular() ? ($Region*)nullptr : shape));
				} else {
					int64_t var$12 = $XToolkit::getDisplay();
					$XlibWrapper::SetRectangularShape(var$12, getWindow(), 0, 0, 0, 0, nullptr);
				}
			} catch ($Throwable& var$13) {
				$assign(var$5, var$13);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$5 != nullptr) {
				$throw(var$5);
			}
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc(XComponentPeer::shapeLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XComponentPeer::shapeLog)->finer("*** WARNING: Shaping is NOT supported!"_s);
		}
	}
}

bool XComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	int32_t oldVisual = -1;
	int32_t newVisual = -1;
	if (this->graphicsConfig != nullptr) {
		oldVisual = $nc(this->graphicsConfig)->getVisual();
	}
	if (gc != nullptr && $instanceOf($X11GraphicsConfig, gc)) {
		newVisual = $nc(($cast($X11GraphicsConfig, gc)))->getVisual();
	}
	if (oldVisual != -1 && oldVisual != newVisual) {
		return true;
	}
	initGraphicsConfiguration();
	doValidateSurface();
	return false;
}

void XComponentPeer::setFullScreenExclusiveModeState(bool state) {
	$XWindow::setFullScreenExclusiveModeState(state);
}

void XComponentPeer::setMWMHints($PropMwmHints* hints) {
	$XWindow::setMWMHints(hints);
}

$PropMwmHints* XComponentPeer::getMWMHints() {
	return $XWindow::getMWMHints();
}

void XComponentPeer::postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) {
	$XWindow::postKeyEvent(id, keyCode, keyChar, keyLocation, state, event, eventSize, rawCode, unicodeFromPrimaryKeysym, extendedKeyCode);
}

$Point* XComponentPeer::getLocationOnScreen() {
	return $XWindow::getLocationOnScreen();
}

void XComponentPeer::dispose() {
	$XWindow::dispose();
}

$SurfaceData* XComponentPeer::getSurfaceData() {
	return $XWindow::getSurfaceData();
}

void XComponentPeer::reshape($Rectangle* bounds) {
	$XWindow::reshape(bounds);
}

void XComponentPeer::handlePropertyNotify($XEvent* xev) {
	$XWindow::handlePropertyNotify(xev);
}

void XComponentPeer::handleKeyRelease($XEvent* xev) {
	$XWindow::handleKeyRelease(xev);
}

void XComponentPeer::handleKeyPress($XEvent* xev) {
	$XWindow::handleKeyPress(xev);
}

void XComponentPeer::handleUnmapNotifyEvent($XEvent* xev) {
	$XWindow::handleUnmapNotifyEvent(xev);
}

void XComponentPeer::handleMapNotifyEvent($XEvent* xev) {
	$XWindow::handleMapNotifyEvent(xev);
}

void XComponentPeer::handleConfigureNotifyEvent($XEvent* xev) {
	$XWindow::handleConfigureNotifyEvent(xev);
}

void XComponentPeer::doLayout(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::doLayout(x, y, width, height);
}

void XComponentPeer::handleXCrossingEvent($XEvent* xev) {
	$XWindow::handleXCrossingEvent(xev);
}

bool XComponentPeer::isMouseAbove() {
	return $XWindow::isMouseAbove();
}

void XComponentPeer::handleMotionNotify($XEvent* xev) {
	$XWindow::handleMotionNotify(xev);
}

void XComponentPeer::handleButtonPressRelease($XEvent* xev) {
	$XWindow::handleButtonPressRelease(xev);
}

void XComponentPeer::postPaintEvent($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	$XWindow::postPaintEvent(target, x, y, w, h);
}

void XComponentPeer::handleExposeEvent($XEvent* xev) {
	$XWindow::handleExposeEvent(xev);
}

void XComponentPeer::popup(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::popup(x, y, width, height);
}

bool XComponentPeer::isEmbedded() {
	return $XWindow::isEmbedded();
}

void XComponentPeer::postEventToEventQueue($AWTEvent* event) {
	$XWindow::postEventToEventQueue(event);
}

$Rectangle* XComponentPeer::getTargetBounds() {
	return $XWindow::getTargetBounds();
}

$ColorModel* XComponentPeer::getColorModel() {
	return $XWindow::getColorModel();
}

$ColorModel* XComponentPeer::getColorModel(int32_t transparency) {
	return $XWindow::getColorModel(transparency);
}

$Component* XComponentPeer::getEventSource() {
	return $XWindow::getEventSource();
}

$Object* XComponentPeer::getTarget() {
	return $of($XWindow::getTarget());
}

$AwtGraphicsConfigData* XComponentPeer::getGraphicsConfigurationData() {
	return $XWindow::getGraphicsConfigurationData();
}

$GraphicsConfiguration* XComponentPeer::getGraphicsConfiguration() {
	return $XWindow::getGraphicsConfiguration();
}

void clinit$XComponentPeer($Class* class$) {
	$assignStatic(XComponentPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XComponentPeer"_s));
	$assignStatic(XComponentPeer::buffersLog, $PlatformLogger::getLogger("sun.awt.X11.XComponentPeer.multibuffer"_s));
	$assignStatic(XComponentPeer::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XComponentPeer"_s));
	$assignStatic(XComponentPeer::fontLog, $PlatformLogger::getLogger("sun.awt.X11.font.XComponentPeer"_s));
	$assignStatic(XComponentPeer::enableLog, $PlatformLogger::getLogger("sun.awt.X11.enable.XComponentPeer"_s));
	$assignStatic(XComponentPeer::shapeLog, $PlatformLogger::getLogger("sun.awt.X11.shape.XComponentPeer"_s));
}

XComponentPeer::XComponentPeer() {
}

$Class* XComponentPeer::load$($String* name, bool initialize) {
	$loadClass(XComponentPeer, name, initialize, &_XComponentPeer_ClassInfo_, clinit$XComponentPeer, allocate$XComponentPeer);
	return class$;
}

$Class* XComponentPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun