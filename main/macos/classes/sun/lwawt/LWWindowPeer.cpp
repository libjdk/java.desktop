#include <sun/lwawt/LWWindowPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/ExtendedKeyCodes.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/TimedWindowEvent.h>
#include <sun/awt/UngrabEvent.h>
#include <sun/java2d/NullSurfaceData.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWGraphicsConfig.h>
#include <sun/lwawt/LWKeyboardFocusManagerPeer.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer$1.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/SecurityWarningWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVATION
#undef BUTTON2
#undef CHAR_UNDEFINED
#undef DEFAULT_FONT
#undef FINE
#undef FINEST
#undef ICONIFIED
#undef MAXIMIZED_BOTH
#undef MINIMUM_HEIGHT
#undef MINIMUM_WIDTH
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EVENT
#undef MOUSE_EXITED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_WHEEL
#undef NORMAL
#undef NO_EMBEDDED_CHECK
#undef PLAIN
#undef SET_BOUNDS
#undef SET_CLIENT_SIZE
#undef SET_LOCATION
#undef SET_SIZE
#undef VIEW_EMBEDDED_FRAME
#undef WINDOW_DEICONIFIED
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_ICONIFIED
#undef WINDOW_LOST_FOCUS
#undef WINDOW_STATE_CHANGED

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $LWComponentPeerArray = $Array<::sun::lwawt::LWComponentPeer>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Composite = ::java::awt::Composite;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AppContext = ::sun::awt::AppContext;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $ExtendedKeyCodes = ::sun::awt::ExtendedKeyCodes;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $SunToolkit = ::sun::awt::SunToolkit;
using $TimedWindowEvent = ::sun::awt::TimedWindowEvent;
using $UngrabEvent = ::sun::awt::UngrabEvent;
using $NullSurfaceData = ::sun::java2d::NullSurfaceData;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWGraphicsConfig = ::sun::lwawt::LWGraphicsConfig;
using $LWKeyboardFocusManagerPeer = ::sun::lwawt::LWKeyboardFocusManagerPeer;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer$1 = ::sun::lwawt::LWWindowPeer$1;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $SecurityWarningWindow = ::sun::lwawt::SecurityWarningWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace lwawt {

$FieldInfo _LWWindowPeer_FieldInfo_[] = {
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWWindowPeer, focusLog)},
	{"platformWindow", "Lsun/lwawt/PlatformWindow;", nullptr, $PRIVATE | $FINAL, $field(LWWindowPeer, platformWindow)},
	{"MINIMUM_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWWindowPeer, MINIMUM_WIDTH)},
	{"MINIMUM_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LWWindowPeer, MINIMUM_HEIGHT)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(LWWindowPeer, insets)},
	{"maximizedBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(LWWindowPeer, maximizedBounds)},
	{"graphicsDevice", "Ljava/awt/GraphicsDevice;", nullptr, $PRIVATE, $field(LWWindowPeer, graphicsDevice)},
	{"graphicsConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $field(LWWindowPeer, graphicsConfig)},
	{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, $PRIVATE, $field(LWWindowPeer, surfaceData)},
	{"surfaceDataLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(LWWindowPeer, surfaceDataLock)},
	{"windowState", "I", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, windowState)},
	{"isMouseOver", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, isMouseOver)},
	{"lastCommonMouseEventPeer", "Lsun/lwawt/LWComponentPeer;", "Lsun/lwawt/LWComponentPeer<**>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(LWWindowPeer, lastCommonMouseEventPeer)},
	{"lastMouseEventPeer", "Lsun/lwawt/LWComponentPeer;", "Lsun/lwawt/LWComponentPeer<**>;", $PRIVATE | $VOLATILE, $field(LWWindowPeer, lastMouseEventPeer)},
	{"mouseDownTarget", "[Lsun/lwawt/LWComponentPeer;", "[Lsun/lwawt/LWComponentPeer<**>;", $PRIVATE | $STATIC | $FINAL, $staticField(LWWindowPeer, mouseDownTarget)},
	{"mouseClickButtons", "I", nullptr, $PRIVATE | $STATIC, $staticField(LWWindowPeer, mouseClickButtons)},
	{"isOpaque", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, isOpaque)},
	{"DEFAULT_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWWindowPeer, DEFAULT_FONT)},
	{"grabbingWindow", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE | $STATIC, $staticField(LWWindowPeer, grabbingWindow)},
	{"skipNextFocusChange", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, skipNextFocusChange)},
	{"nonOpaqueBackground", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWWindowPeer, nonOpaqueBackground)},
	{"textured", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, textured)},
	{"peerType", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PRIVATE | $FINAL, $field(LWWindowPeer, peerType)},
	{"warningWindow", "Lsun/lwawt/SecurityWarningWindow;", nullptr, $PRIVATE | $FINAL, $field(LWWindowPeer, warningWindow)},
	{"targetFocusable", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWWindowPeer, targetFocusable)},
	{"blocker", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE, $field(LWWindowPeer, blocker)},
	{}
};

$MethodInfo _LWWindowPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*beginLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Window;Lsun/lwawt/PlatformComponent;Lsun/lwawt/PlatformWindow;Lsun/lwawt/LWWindowPeer$PeerType;)V", nullptr, $PUBLIC, $method(static_cast<void(LWWindowPeer::*)($Window*,$PlatformComponent*,$PlatformWindow*,$LWWindowPeer$PeerType*)>(&LWWindowPeer::init$))},
	{"activateDisplayListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)()>(&LWWindowPeer::activateDisplayListener))},
	{"applyShapeImpl", "(Lsun/java2d/pipe/Region;)V", nullptr, $FINAL},
	{"blitSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)($SurfaceData*,$SurfaceData*)>(&LWWindowPeer::blitSurfaceData))},
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC},
	{"changeFocusedWindow", "(ZLjava/awt/Window;)V", nullptr, $PROTECTED},
	{"clearBackground", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)(int32_t,int32_t)>(&LWWindowPeer::clearBackground))},
	{"constrainBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"constrainBounds", "(IIII)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"deactivateDisplayListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)()>(&LWWindowPeer::deactivateDisplayListener))},
	{"displayChanged", "()V", nullptr, $PUBLIC | $FINAL},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"focusAllowedFor", "()Z", nullptr, $PROTECTED},
	{"generateMouseEnterExitEventsForComponents", "(JIIIIIIIZLsun/lwawt/LWComponentPeer;)V", "(JIIIIIIIZLsun/lwawt/LWComponentPeer<**>;)V", $PRIVATE, $method(static_cast<void(LWWindowPeer::*)(int64_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,bool,$LWComponentPeer*)>(&LWWindowPeer::generateMouseEnterExitEventsForComponents))},
	{"getBlocker", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDefaultMaximizedBounds", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(LWWindowPeer::*)()>(&LWWindowPeer::getDefaultMaximizedBounds))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphicsConfigScreen", "(Ljava/awt/GraphicsConfiguration;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($GraphicsConfiguration*)>(&LWWindowPeer::getGraphicsConfigScreen))},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $FINAL},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMaximizedBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getOnscreenGraphics", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Font;)Ljava/awt/Graphics;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Graphics*(LWWindowPeer::*)($Color*,$Color*,$Font*)>(&LWWindowPeer::getOnscreenGraphics))},
	{"getOwnerFrameDialog", "(Lsun/lwawt/LWWindowPeer;)Lsun/lwawt/LWWindowPeer;", nullptr, $STATIC, $method(static_cast<LWWindowPeer*(*)(LWWindowPeer*)>(&LWWindowPeer::getOwnerFrameDialog))},
	{"getPeerType", "()Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC},
	{"getPeerUnderCursor", "()Lsun/lwawt/LWComponentPeer;", "()Lsun/lwawt/LWComponentPeer<**>;", $PUBLIC | $STATIC, $method(static_cast<$LWComponentPeer*(*)()>(&LWWindowPeer::getPeerUnderCursor))},
	{"getPlatformWindow", "()Lsun/lwawt/PlatformWindow;", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getWindowPeerOrSelf", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PROTECTED},
	{"getWindowUnderCursor", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LWWindowPeer*(*)()>(&LWWindowPeer::getWindowUnderCursor))},
	{"grab", "()V", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isFocusableWindow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LWWindowPeer::*)()>(&LWWindowPeer::isFocusableWindow))},
	{"isGrabbing", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LWWindowPeer::*)()>(&LWWindowPeer::isGrabbing))},
	{"isMaximizedBoundsSet", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LWWindowPeer::*)()>(&LWWindowPeer::isMaximizedBoundsSet))},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"isOneOfOwnersOf", "(Lsun/lwawt/LWWindowPeer;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LWWindowPeer::*)(LWWindowPeer*)>(&LWWindowPeer::isOneOfOwnersOf))},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isSimpleWindow", "()Z", nullptr, $PUBLIC},
	{"isTextured", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LWWindowPeer::*)()>(&LWWindowPeer::isTextured))},
	{"isTranslucent", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"notifyActivation", "(ZLsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC},
	{"notifyExpose", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"notifyIconify", "(Z)V", nullptr, $PUBLIC},
	{"notifyKeyEvent", "(IJIICI)V", nullptr, $PUBLIC},
	{"notifyMouseEvent", "(IJIIIIIIIZ[B)V", nullptr, $PUBLIC},
	{"notifyMouseWheelEvent", "(JIIIIIIIID[B)V", nullptr, $PUBLIC},
	{"notifyNCMouseDown", "()V", nullptr, $PUBLIC},
	{"notifyReshape", "(IIII)V", nullptr, $PUBLIC},
	{"notifyUpdateCursor", "()V", nullptr, $PUBLIC},
	{"notifyZoom", "(Z)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"paletteChanged", "()V", nullptr, $PUBLIC | $FINAL},
	{"postMouseEnteredEvent", "(Ljava/awt/Component;JILjava/awt/Point;IIIZI)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)($Component*,int64_t,int32_t,$Point*,int32_t,int32_t,int32_t,bool,int32_t)>(&LWWindowPeer::postMouseEnteredEvent))},
	{"postMouseExitedEvent", "(Ljava/awt/Component;JILjava/awt/Point;IIIZI)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)($Component*,int64_t,int32_t,$Point*,int32_t,int32_t,int32_t,bool,int32_t)>(&LWWindowPeer::postMouseExitedEvent))},
	{"postWindowStateChangedEvent", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)(int32_t)>(&LWWindowPeer::postWindowStateChangedEvent))},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)()>(&LWWindowPeer::replaceSurfaceData))},
	{"replaceSurfaceData", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)(bool)>(&LWWindowPeer::replaceSurfaceData))},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setGraphicsConfig", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LWWindowPeer::*)($GraphicsConfiguration*)>(&LWWindowPeer::setGraphicsConfig))},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"setPlatformMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)($Rectangle*)>(&LWWindowPeer::setPlatformMaximizedBounds))},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC},
	{"setTextured", "(Z)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LWWindowPeer::*)(bool)>(&LWWindowPeer::setTextured))},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setVisibleImpl", "(Z)V", nullptr, $PROTECTED},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "(Z)V", nullptr, $FINAL, $method(static_cast<void(LWWindowPeer::*)(bool)>(&LWWindowPeer::ungrab))},
	{"ungrab", "()V", nullptr, 0},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateGraphicsDevice", "()Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateInsets", "(Ljava/awt/Insets;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LWWindowPeer::*)($Insets*)>(&LWWindowPeer::updateInsets))},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateOpaque", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWWindowPeer::*)()>(&LWWindowPeer::updateOpaque))},
	{"updateSecurityWarningVisibility", "()V", nullptr, $PUBLIC},
	{"updateWindow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWWindowPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWWindowPeer$PeerType", "sun.lwawt.LWWindowPeer", "PeerType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.lwawt.LWWindowPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWWindowPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.LWWindowPeer",
	"sun.lwawt.LWContainerPeer",
	"java.awt.peer.FramePeer,java.awt.peer.DialogPeer,sun.awt.FullScreenCapable,sun.awt.DisplayChangedListener,sun.lwawt.PlatformEventNotifier",
	_LWWindowPeer_FieldInfo_,
	_LWWindowPeer_MethodInfo_,
	"Lsun/lwawt/LWContainerPeer<Ljava/awt/Window;Ljavax/swing/JComponent;>;Ljava/awt/peer/FramePeer;Ljava/awt/peer/DialogPeer;Lsun/awt/FullScreenCapable;Lsun/awt/DisplayChangedListener;Lsun/lwawt/PlatformEventNotifier;",
	nullptr,
	_LWWindowPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWWindowPeer$PeerType,sun.lwawt.LWWindowPeer$1"
};

$Object* allocate$LWWindowPeer($Class* clazz) {
	return $of($alloc(LWWindowPeer));
}

void LWWindowPeer::beginValidate() {
	this->$LWContainerPeer::beginValidate();
}

void LWWindowPeer::endValidate() {
	this->$LWContainerPeer::endValidate();
}

void LWWindowPeer::beginLayout() {
	this->$LWContainerPeer::beginLayout();
}

void LWWindowPeer::endLayout() {
	this->$LWContainerPeer::endLayout();
}

void LWWindowPeer::paint($Graphics* g) {
	this->$LWContainerPeer::paint(g);
}

void LWWindowPeer::print($Graphics* g) {
	this->$LWContainerPeer::print(g);
}

$Dimension* LWWindowPeer::getPreferredSize() {
	 return this->$LWContainerPeer::getPreferredSize();
}

$Dimension* LWWindowPeer::getMinimumSize() {
	 return this->$LWContainerPeer::getMinimumSize();
}

void LWWindowPeer::dispose() {
	this->$LWContainerPeer::dispose();
}

$Graphics* LWWindowPeer::getGraphics() {
	 return this->$LWContainerPeer::getGraphics();
}

$ColorModel* LWWindowPeer::getColorModel() {
	 return this->$LWContainerPeer::getColorModel();
}

void LWWindowPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWContainerPeer::createBuffers(numBuffers, caps);
}

$Image* LWWindowPeer::getBackBuffer() {
	 return this->$LWContainerPeer::getBackBuffer();
}

void LWWindowPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWContainerPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWWindowPeer::destroyBuffers() {
	this->$LWContainerPeer::destroyBuffers();
}

void LWWindowPeer::setVisible(bool v) {
	this->$LWContainerPeer::setVisible(v);
}

void LWWindowPeer::reparent($ContainerPeer* newContainer) {
	this->$LWContainerPeer::reparent(newContainer);
}

bool LWWindowPeer::isReparentSupported() {
	 return this->$LWContainerPeer::isReparentSupported();
}

void LWWindowPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWContainerPeer::coalescePaintEvent(e);
}

void LWWindowPeer::layout() {
	this->$LWContainerPeer::layout();
}

bool LWWindowPeer::isObscured() {
	 return this->$LWContainerPeer::isObscured();
}

bool LWWindowPeer::canDetermineObscurity() {
	 return this->$LWContainerPeer::canDetermineObscurity();
}

void LWWindowPeer::updateCursorImmediately() {
	this->$LWContainerPeer::updateCursorImmediately();
}

bool LWWindowPeer::isFocusable() {
	 return this->$LWContainerPeer::isFocusable();
}

bool LWWindowPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWContainerPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWWindowPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWContainerPeer::createImage(width, height);
}

$VolatileImage* LWWindowPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWContainerPeer::createVolatileImage(w, h);
}

bool LWWindowPeer::handlesWheelScrolling() {
	 return this->$LWContainerPeer::handlesWheelScrolling();
}

void LWWindowPeer::applyShape($Region* shape) {
	this->$LWContainerPeer::applyShape(shape);
}

void LWWindowPeer::handleEvent($AWTEvent* e) {
	this->$LWContainerPeer::handleEvent(e);
}

int32_t LWWindowPeer::hashCode() {
	 return this->$LWContainerPeer::hashCode();
}

bool LWWindowPeer::equals(Object$* arg0) {
	 return this->$LWContainerPeer::equals(arg0);
}

$Object* LWWindowPeer::clone() {
	 return this->$LWContainerPeer::clone();
}

void LWWindowPeer::finalize() {
	this->$LWContainerPeer::finalize();
}

$PlatformLogger* LWWindowPeer::focusLog = nullptr;
$volatile($LWComponentPeer*) LWWindowPeer::lastCommonMouseEventPeer = nullptr;
$LWComponentPeerArray* LWWindowPeer::mouseDownTarget = nullptr;
int32_t LWWindowPeer::mouseClickButtons = 0;
$Font* LWWindowPeer::DEFAULT_FONT = nullptr;
LWWindowPeer* LWWindowPeer::grabbingWindow = nullptr;
$Color* LWWindowPeer::nonOpaqueBackground = nullptr;

void LWWindowPeer::init$($Window* target, $PlatformComponent* platformComponent, $PlatformWindow* platformWindow, $LWWindowPeer$PeerType* peerType) {
	$useLocalCurrentObjectStackCache();
	$LWContainerPeer::init$(target, platformComponent);
	$set(this, insets, $new($Insets, 0, 0, 0, 0));
	$set(this, surfaceDataLock, $new($Object));
	this->windowState = $Frame::NORMAL;
	this->isMouseOver = false;
	this->isOpaque = true;
	$set(this, platformWindow, platformWindow);
	$set(this, peerType, peerType);
	$var($Window, owner, $nc(target)->getOwner());
	$var(LWWindowPeer, ownerPeer, owner == nullptr ? (LWWindowPeer*)nullptr : $cast(LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(owner)));
	$var($PlatformWindow, ownerDelegate, (ownerPeer != nullptr) ? $nc(ownerPeer)->getPlatformWindow() : ($PlatformWindow*)nullptr);
	$var($GraphicsConfiguration, gc, $nc(($cast($Window, $(getTarget()))))->getGraphicsConfiguration());
	$synchronized(getStateLock()) {
		$set(this, graphicsConfig, gc);
	}
	if (!target->isFontSet()) {
		target->setFont(LWWindowPeer::DEFAULT_FONT);
	}
	if (!target->isBackgroundSet()) {
		$init($SystemColor);
		target->setBackground($SystemColor::window);
	} else {
	}
	if (!target->isForegroundSet()) {
		$init($SystemColor);
		target->setForeground($SystemColor::windowText);
	}
	$nc(platformWindow)->initialize(target, this, ownerDelegate);
	$var($SecurityWarningWindow, warn, nullptr);
	if (target->getWarningString() != nullptr) {
		if (!$nc($($AWTAccessor::getWindowAccessor()))->isTrayIconWindow(target)) {
			$var($LWToolkit, toolkit, $cast($LWToolkit, $Toolkit::getDefaultToolkit()));
			$assign(warn, $nc(toolkit)->createSecurityWarning(target, this));
		}
	}
	$set(this, warningWindow, warn);
}

void LWWindowPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWContainerPeer::initializeImpl();
	if ($instanceOf($Frame, $(getTarget()))) {
		$var($Frame, frame, $cast($Frame, getTarget()));
		setTitle($($nc(frame)->getTitle()));
		setState($nc(frame)->getExtendedState());
		setMaximizedBounds($($nc(frame)->getMaximizedBounds()));
	} else if ($instanceOf($Dialog, $(getTarget()))) {
		setTitle($($nc(($cast($Dialog, $(getTarget()))))->getTitle()));
	}
	updateAlwaysOnTopState();
	updateMinimumSize();
	updateFocusableWindowState();
	$var($Shape, shape, $nc(($cast($Window, $(getTarget()))))->getShape());
	if (shape != nullptr) {
		applyShape($($Region::getInstance(shape, ($AffineTransform*)nullptr)));
	}
	float opacity = $nc(($cast($Window, $(getTarget()))))->getOpacity();
	if (opacity < 1.0f) {
		setOpacity(opacity);
	}
	setOpaque($nc(($cast($Window, $(getTarget()))))->isOpaque());
	updateInsets($($nc(this->platformWindow)->getInsets()));
	if (getSurfaceData() == nullptr) {
		replaceSurfaceData(false);
	}
	activateDisplayListener();
}

$PlatformWindow* LWWindowPeer::getPlatformWindow() {
	return this->platformWindow;
}

LWWindowPeer* LWWindowPeer::getWindowPeerOrSelf() {
	return this;
}

void LWWindowPeer::disposeImpl() {
	deactivateDisplayListener();
	$var($SurfaceData, oldData, getSurfaceData());
	$synchronized(this->surfaceDataLock) {
		$set(this, surfaceData, nullptr);
	}
	if (oldData != nullptr) {
		oldData->invalidate();
	}
	if (isGrabbing()) {
		ungrab();
	}
	if (this->warningWindow != nullptr) {
		$nc(this->warningWindow)->dispose();
	}
	$nc(this->platformWindow)->dispose();
	$LWContainerPeer::disposeImpl();
}

void LWWindowPeer::setVisibleImpl(bool visible) {
	$useLocalCurrentObjectStackCache();
	if (!visible && this->warningWindow != nullptr) {
		$nc(this->warningWindow)->setVisible(false, false);
	}
	updateFocusableWindowState();
	$LWContainerPeer::setVisibleImpl(visible);
	$nc(this->platformWindow)->setVisible(visible);
	if (isSimpleWindow()) {
		$var($KeyboardFocusManagerPeer, kfmPeer, $LWKeyboardFocusManagerPeer::getInstance());
		if (visible) {
			if (!$nc(($cast($Window, $(getTarget()))))->isAutoRequestFocus()) {
				return;
			} else {
				$init($FocusEvent$Cause);
				requestWindowFocus($FocusEvent$Cause::ACTIVATION);
			}
		} else if ($equals($nc(kfmPeer)->getCurrentFocusedWindow(), getTarget())) {
			$var(LWWindowPeer, owner, getOwnerFrameDialog(this));
			if (owner != nullptr) {
				$init($FocusEvent$Cause);
				owner->requestWindowFocus($FocusEvent$Cause::ACTIVATION);
			}
		}
	}
}

$GraphicsConfiguration* LWWindowPeer::getGraphicsConfiguration() {
	$synchronized(getStateLock()) {
		return this->graphicsConfig;
	}
}

bool LWWindowPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	setGraphicsConfig(gc);
	return false;
}

$Graphics* LWWindowPeer::getOnscreenGraphics($Color* fg$renamed, $Color* bg$renamed, $Font* f$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Color, fg, fg$renamed);
	$var($Color, bg, bg$renamed);
	$var($Font, f, f$renamed);
	$var($SurfaceData, surfaceData, getSurfaceData());
	if (surfaceData == nullptr) {
		return nullptr;
	}
	if (fg == nullptr) {
		$init($SystemColor);
		$assign(fg, $SystemColor::windowText);
	}
	if (bg == nullptr) {
		$init($SystemColor);
		$assign(bg, $SystemColor::window);
	}
	if (f == nullptr) {
		$assign(f, LWWindowPeer::DEFAULT_FONT);
	}
	return $new($SunGraphics2D, surfaceData, fg, bg, f);
}

void LWWindowPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	$useLocalCurrentObjectStackCache();
	$init($LWWindowPeer$PeerType);
	if (((int32_t)(op & (uint32_t)$ComponentPeer::NO_EMBEDDED_CHECK)) == 0 && getPeerType() == $LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME) {
		return;
	}
	if (((int32_t)(op & (uint32_t)$ComponentPeer::SET_CLIENT_SIZE)) != 0) {
		op &= (uint32_t)~$ComponentPeer::SET_CLIENT_SIZE;
		op |= $ComponentPeer::SET_SIZE;
	}
	$var($Rectangle, cb, constrainBounds(x, y, w, h));
	$var($Rectangle, newBounds, $new($Rectangle, $(getBounds())));
	if (((int32_t)(op & (uint32_t)($ComponentPeer::SET_LOCATION | $ComponentPeer::SET_BOUNDS))) != 0) {
		newBounds->x = $nc(cb)->x;
		newBounds->y = cb->y;
	}
	if (((int32_t)(op & (uint32_t)($ComponentPeer::SET_SIZE | $ComponentPeer::SET_BOUNDS))) != 0) {
		newBounds->width = $nc(cb)->width;
		newBounds->height = cb->height;
	}
	$nc(this->platformWindow)->setBounds(newBounds->x, newBounds->y, newBounds->width, newBounds->height);
}

$Rectangle* LWWindowPeer::constrainBounds($Rectangle* bounds) {
	return constrainBounds($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
}

$Rectangle* LWWindowPeer::constrainBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w < LWWindowPeer::MINIMUM_WIDTH) {
		w = LWWindowPeer::MINIMUM_WIDTH;
	}
	if (h < LWWindowPeer::MINIMUM_HEIGHT) {
		h = LWWindowPeer::MINIMUM_HEIGHT;
	}
	int32_t maxW = $nc($(getLWGC()))->getMaxTextureWidth();
	int32_t maxH = $nc($(getLWGC()))->getMaxTextureHeight();
	if (w > maxW) {
		w = maxW;
	}
	if (h > maxH) {
		h = maxH;
	}
	return $new($Rectangle, x, y, w, h);
}

$Point* LWWindowPeer::getLocationOnScreen() {
	return $nc(this->platformWindow)->getLocationOnScreen();
}

$Insets* LWWindowPeer::getInsets() {
	$synchronized(getStateLock()) {
		return this->insets;
	}
}

$FontMetrics* LWWindowPeer::getFontMetrics($Font* f) {
	return $nc(this->platformWindow)->getFontMetrics(f);
}

void LWWindowPeer::toFront() {
	$nc(this->platformWindow)->toFront();
}

void LWWindowPeer::toBack() {
	$nc(this->platformWindow)->toBack();
}

void LWWindowPeer::setZOrder($ComponentPeer* above) {
	$throwNew($RuntimeException, "not implemented"_s);
}

void LWWindowPeer::updateAlwaysOnTopState() {
	$nc(this->platformWindow)->setAlwaysOnTop($nc(($cast($Window, $(getTarget()))))->isAlwaysOnTop());
}

void LWWindowPeer::updateFocusableWindowState() {
	this->targetFocusable = $nc(($cast($Window, $(getTarget()))))->isFocusableWindow();
	$nc(this->platformWindow)->updateFocusableWindowState();
}

void LWWindowPeer::setModalBlocked($Dialog* blocker, bool blocked) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getPeerTreeLock()) {
		$var($ComponentPeer, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(blocker));
		if (blocked && ($instanceOf(LWWindowPeer, peer))) {
			$set(this, blocker, $cast(LWWindowPeer, peer));
		} else {
			$set(this, blocker, nullptr);
		}
	}
	$nc(this->platformWindow)->setModalBlocked(blocked);
}

void LWWindowPeer::updateMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, min, nullptr);
	if ($nc(($cast($Window, $(getTarget()))))->isMinimumSizeSet()) {
		$assign(min, $nc(($cast($Window, $(getTarget()))))->getMinimumSize());
		$nc(min)->width = $Math::max(min->width, LWWindowPeer::MINIMUM_WIDTH);
		min->height = $Math::max(min->height, LWWindowPeer::MINIMUM_HEIGHT);
	} else {
		$assign(min, $new($Dimension, LWWindowPeer::MINIMUM_WIDTH, LWWindowPeer::MINIMUM_HEIGHT));
	}
	$var($Dimension, max, nullptr);
	if ($nc(($cast($Window, $(getTarget()))))->isMaximumSizeSet()) {
		$assign(max, $nc(($cast($Window, $(getTarget()))))->getMaximumSize());
		$nc(max)->width = $Math::min(max->width, $nc($(getLWGC()))->getMaxTextureWidth());
		max->height = $Math::min(max->height, $nc($(getLWGC()))->getMaxTextureHeight());
	} else {
		int32_t var$0 = $nc($(getLWGC()))->getMaxTextureWidth();
		$assign(max, $new($Dimension, var$0, $nc($(getLWGC()))->getMaxTextureHeight()));
	}
	$nc(this->platformWindow)->setSizeConstraints($nc(min)->width, min->height, $nc(max)->width, max->height);
}

void LWWindowPeer::updateIconImages() {
	$nc($(getPlatformWindow()))->updateIconImages();
}

void LWWindowPeer::setOpacity(float opacity) {
	$nc($(getPlatformWindow()))->setOpacity(opacity);
	repaintPeer();
}

void LWWindowPeer::setOpaque(bool isOpaque) {
	if (this->isOpaque != isOpaque) {
		this->isOpaque = isOpaque;
		updateOpaque();
	}
}

void LWWindowPeer::updateOpaque() {
	$nc($(getPlatformWindow()))->setOpaque(!isTranslucent());
	replaceSurfaceData(false);
	repaintPeer();
}

void LWWindowPeer::updateWindow() {
}

bool LWWindowPeer::isTextured() {
	return this->textured;
}

void LWWindowPeer::setTextured(bool isTextured) {
	this->textured = isTextured;
}

bool LWWindowPeer::isTranslucent() {
	$synchronized(getStateLock()) {
		bool var$0 = !this->isOpaque || isShaped();
		return var$0 || isTextured();
	}
}

void LWWindowPeer::applyShapeImpl($Region* shape) {
	$LWContainerPeer::applyShapeImpl(shape);
	updateOpaque();
}

void LWWindowPeer::repositionSecurityWarning() {
	$useLocalCurrentObjectStackCache();
	if (this->warningWindow != nullptr) {
		$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
		$var($Window, target, $cast($Window, getTarget()));
		int32_t x = $nc(compAccessor)->getX(target);
		int32_t y = compAccessor->getY(target);
		int32_t width = compAccessor->getWidth(target);
		int32_t height = compAccessor->getHeight(target);
		$nc(this->warningWindow)->reposition(x, y, width, height);
	}
}

void LWWindowPeer::setTitle($String* title) {
	$nc(this->platformWindow)->setTitle(title == nullptr ? ""_s : title);
}

void LWWindowPeer::setMenuBar($MenuBar* mb) {
	$nc(this->platformWindow)->setMenuBar(mb);
}

void LWWindowPeer::setResizable(bool resizable) {
	$nc(this->platformWindow)->setResizable(resizable);
}

void LWWindowPeer::setState(int32_t state) {
	$nc(this->platformWindow)->setWindowState(state);
}

int32_t LWWindowPeer::getState() {
	return this->windowState;
}

bool LWWindowPeer::isMaximizedBoundsSet() {
	$synchronized(getStateLock()) {
		return this->maximizedBounds != nullptr;
	}
}

$Rectangle* LWWindowPeer::getDefaultMaximizedBounds() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, config, getGraphicsConfiguration());
	$var($Insets, screenInsets, $nc(($cast($CGraphicsDevice, $($nc(config)->getDevice()))))->getScreenInsets());
	$var($Rectangle, gcBounds, config->getBounds());
	return $new($Rectangle, $nc(gcBounds)->x + $nc(screenInsets)->left, gcBounds->y + screenInsets->top, gcBounds->width - screenInsets->left - screenInsets->right, gcBounds->height - screenInsets->top - screenInsets->bottom);
}

void LWWindowPeer::setMaximizedBounds($Rectangle* bounds) {
	bool isMaximizedBoundsSet = false;
	$synchronized(getStateLock()) {
		$set(this, maximizedBounds, (isMaximizedBoundsSet = (bounds != nullptr)) ? constrainBounds(bounds) : ($Rectangle*)nullptr);
	}
	setPlatformMaximizedBounds(isMaximizedBoundsSet ? this->maximizedBounds : $(getDefaultMaximizedBounds()));
}

$Rectangle* LWWindowPeer::getMaximizedBounds() {
	$synchronized(getStateLock()) {
		return (this->maximizedBounds == nullptr) ? getDefaultMaximizedBounds() : this->maximizedBounds;
	}
}

void LWWindowPeer::setPlatformMaximizedBounds($Rectangle* bounds) {
	$nc(this->platformWindow)->setMaximizedBounds($nc(bounds)->x, bounds->y, bounds->width, bounds->height);
}

void LWWindowPeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS | $ComponentPeer::NO_EMBEDDED_CHECK);
}

$Rectangle* LWWindowPeer::getBoundsPrivate() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

void LWWindowPeer::blockWindows($List* windows) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(windows)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Window, w, $cast($Window, i$->next()));
			{
				$var($WindowPeer, wp, $cast($WindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
				if (wp != nullptr) {
					wp->setModalBlocked($cast($Dialog, $(getTarget())), true);
				}
			}
		}
	}
}

void LWWindowPeer::notifyIconify(bool iconify) {
	$useLocalCurrentObjectStackCache();
	$var($WindowEvent, iconifyEvent, $new($WindowEvent, $cast($Window, $(getTarget())), iconify ? $WindowEvent::WINDOW_ICONIFIED : $WindowEvent::WINDOW_DEICONIFIED));
	postEvent(iconifyEvent);
	int32_t newWindowState = iconify ? $Frame::ICONIFIED : $Frame::NORMAL;
	postWindowStateChangedEvent(newWindowState);
	if (!iconify) {
		repaintPeer();
	}
}

void LWWindowPeer::notifyZoom(bool isZoomed) {
	int32_t newWindowState = isZoomed ? $Frame::MAXIMIZED_BOTH : $Frame::NORMAL;
	postWindowStateChangedEvent(newWindowState);
}

void LWWindowPeer::notifyExpose($Rectangle* r) {
	repaintPeer(r);
}

void LWWindowPeer::notifyReshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, pBounds, getBounds());
	bool invalid = updateInsets($($nc(this->platformWindow)->getInsets()));
	bool pMoved = (x != $nc(pBounds)->x) || (y != $nc(pBounds)->y);
	bool pResized = (w != pBounds->width) || (h != pBounds->height);
	$var($AWTAccessor$ComponentAccessor, accessor, $AWTAccessor::getComponentAccessor());
	$var($Rectangle, tBounds, $nc(accessor)->getBounds($(getTarget())));
	bool tMoved = (x != $nc(tBounds)->x) || (y != $nc(tBounds)->y);
	bool tResized = (w != tBounds->width) || (h != tBounds->height);
	if (!tMoved && !tResized && !pMoved && !pResized && !invalid) {
		return;
	}
	setBounds(x, y, w, h, $ComponentPeer::SET_BOUNDS, false, false);
	bool isNewDevice = updateGraphicsDevice();
	if (isNewDevice && !isMaximizedBoundsSet()) {
		setPlatformMaximizedBounds($(getDefaultMaximizedBounds()));
	}
	if (pResized || isNewDevice || invalid) {
		replaceSurfaceData();
		updateMinimumSize();
	}
	if (tMoved || pMoved || invalid) {
		handleMove(x, y, true);
	}
	if (tResized || pResized || invalid || isNewDevice) {
		handleResize(w, h, true);
		repaintPeer();
	}
	repositionSecurityWarning();
}

void LWWindowPeer::clearBackground(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Color, var$0, getForeground());
	$var($Color, var$1, getBackground());
	$var($Graphics, g, getOnscreenGraphics(var$0, var$1, $(getFont())));
	if (g != nullptr) {
		{
			$var($Throwable, var$2, nullptr);
			try {
				if ($instanceOf($Graphics2D, g)) {
					$init($AlphaComposite);
					$nc(($cast($Graphics2D, g)))->setComposite($AlphaComposite::Src);
				}
				if (isTranslucent()) {
					g->setColor(LWWindowPeer::nonOpaqueBackground);
					g->fillRect(0, 0, w, h);
				}
				if (!isTextured()) {
					if ($instanceOf($SunGraphics2D, g)) {
						$nc(($cast($SunGraphics2D, g)))->constrain(0, 0, w, h, $(getRegion()));
					}
					g->setColor($(getBackground()));
					g->fillRect(0, 0, w, h);
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

void LWWindowPeer::notifyUpdateCursor() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($(getLWToolkit()))->getCursorManager()))->updateCursorLater(this);
}

void LWWindowPeer::notifyActivation(bool activation, LWWindowPeer* opposite) {
	$var($Window, oppositeWindow, (opposite == nullptr) ? ($Window*)nullptr : $cast($Window, $nc(opposite)->getTarget()));
	changeFocusedWindow(activation, oppositeWindow);
}

void LWWindowPeer::notifyNCMouseDown() {
	if (LWWindowPeer::grabbingWindow != nullptr && !$nc(LWWindowPeer::grabbingWindow)->isOneOfOwnersOf(this)) {
		$nc(LWWindowPeer::grabbingWindow)->ungrab();
	}
}

void LWWindowPeer::notifyMouseEvent(int32_t id, int64_t when, int32_t button, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t clickCount, bool popupTrigger, $bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, getBounds());
	$var($LWComponentPeer, targetPeer, findPeerAt($nc(r)->x + x, r->y + y));
	if (id == $MouseEvent::MOUSE_EXITED) {
		this->isMouseOver = false;
		if (this->lastMouseEventPeer != nullptr) {
			if ($nc(this->lastMouseEventPeer)->isEnabled()) {
				$var($Point, lp, $nc(this->lastMouseEventPeer)->windowToLocal(x, y, this));
				$var($Component, target, $nc(this->lastMouseEventPeer)->getTarget());
				postMouseExitedEvent(target, when, modifiers, lp, absX, absY, clickCount, popupTrigger, button);
			}
			if (LWWindowPeer::lastCommonMouseEventPeer != nullptr && $nc(LWWindowPeer::lastCommonMouseEventPeer)->getWindowPeerOrSelf() == this) {
				$assignStatic(LWWindowPeer::lastCommonMouseEventPeer, nullptr);
			}
			$set(this, lastMouseEventPeer, nullptr);
		}
	} else if (id == $MouseEvent::MOUSE_ENTERED) {
		this->isMouseOver = true;
		if (targetPeer != nullptr) {
			if (targetPeer->isEnabled()) {
				$var($Point, lp, targetPeer->windowToLocal(x, y, this));
				$var($Component, target, targetPeer->getTarget());
				postMouseEnteredEvent(target, when, modifiers, lp, absX, absY, clickCount, popupTrigger, button);
			}
			$assignStatic(LWWindowPeer::lastCommonMouseEventPeer, targetPeer);
			$set(this, lastMouseEventPeer, targetPeer);
		}
	} else {
		$var($PlatformWindow, topmostPlatformWindow, $nc($($LWToolkit::getLWToolkit()))->getPlatformWindowUnderMouse());
		$var(LWWindowPeer, topmostWindowPeer, topmostPlatformWindow != nullptr ? $nc(topmostPlatformWindow)->getPeer() : (LWWindowPeer*)nullptr);
		if (topmostWindowPeer == this || topmostWindowPeer == nullptr) {
			generateMouseEnterExitEventsForComponents(when, button, x, y, absX, absY, modifiers, clickCount, popupTrigger, targetPeer);
		} else {
			$var($LWComponentPeer, topmostTargetPeer, $nc(topmostWindowPeer)->findPeerAt($nc(r)->x + x, r->y + y));
			topmostWindowPeer->generateMouseEnterExitEventsForComponents(when, button, x, y, absX, absY, modifiers, clickCount, popupTrigger, topmostTargetPeer);
		}
		int32_t eventButtonMask = (button > 0) ? $MouseEvent::getMaskForButton(button) : 0;
		int32_t otherButtonsPressed = (int32_t)(modifiers & (uint32_t)~eventButtonMask);
		int32_t targetIdx = (button > 3) ? $MouseEvent::BUTTON2 - 1 : button - 1;
		if (id == $MouseEvent::MOUSE_PRESSED) {
			bool var$0 = !isGrabbing() && LWWindowPeer::grabbingWindow != nullptr;
			if (var$0 && !$nc(LWWindowPeer::grabbingWindow)->isOneOfOwnersOf(this)) {
				$nc(LWWindowPeer::grabbingWindow)->ungrab();
			}
			if (otherButtonsPressed == 0) {
				LWWindowPeer::mouseClickButtons = eventButtonMask;
			} else {
				LWWindowPeer::mouseClickButtons |= eventButtonMask;
			}
			$init($FocusEvent$Cause);
			requestWindowFocus($FocusEvent$Cause::MOUSE_EVENT);
			$nc(LWWindowPeer::mouseDownTarget)->set(targetIdx, targetPeer);
		} else if (id == $MouseEvent::MOUSE_DRAGGED) {
			$assign(targetPeer, $nc(LWWindowPeer::mouseDownTarget)->get(targetIdx));
			LWWindowPeer::mouseClickButtons &= (uint32_t)~modifiers;
		} else if (id == $MouseEvent::MOUSE_RELEASED) {
			$assign(targetPeer, $nc(LWWindowPeer::mouseDownTarget)->get(targetIdx));
			if (((int32_t)(modifiers & (uint32_t)eventButtonMask)) == 0) {
				$nc(LWWindowPeer::mouseDownTarget)->set(targetIdx, nullptr);
			}
		}
		if (targetPeer == nullptr) {
			$assign(targetPeer, this);
		}
		$var($Point, lp, $nc(targetPeer)->windowToLocal(x, y, this));
		if (targetPeer->isEnabled()) {
			$var($MouseEvent, event, $new($MouseEvent, $(targetPeer->getTarget()), id, when, modifiers, $nc(lp)->x, lp->y, absX, absY, clickCount, popupTrigger, button));
			postEvent(event);
		}
		if (id == $MouseEvent::MOUSE_RELEASED) {
			if (((int32_t)(LWWindowPeer::mouseClickButtons & (uint32_t)eventButtonMask)) != 0 && targetPeer->isEnabled()) {
				postEvent($$new($MouseEvent, $(targetPeer->getTarget()), $MouseEvent::MOUSE_CLICKED, when, modifiers, $nc(lp)->x, lp->y, absX, absY, clickCount, popupTrigger, button));
			}
			LWWindowPeer::mouseClickButtons &= (uint32_t)~eventButtonMask;
		}
	}
	notifyUpdateCursor();
}

void LWWindowPeer::generateMouseEnterExitEventsForComponents(int64_t when, int32_t button, int32_t x, int32_t y, int32_t screenX, int32_t screenY, int32_t modifiers, int32_t clickCount, bool popupTrigger, $LWComponentPeer* targetPeer) {
	$useLocalCurrentObjectStackCache();
	if (!this->isMouseOver || targetPeer == this->lastMouseEventPeer) {
		return;
	}
	if (this->lastMouseEventPeer != nullptr && $nc(this->lastMouseEventPeer)->isEnabled()) {
		$var($Point, oldp, $nc(this->lastMouseEventPeer)->windowToLocal(x, y, this));
		$var($Component, target, $nc(this->lastMouseEventPeer)->getTarget());
		postMouseExitedEvent(target, when, modifiers, oldp, screenX, screenY, clickCount, popupTrigger, button);
	}
	$assignStatic(LWWindowPeer::lastCommonMouseEventPeer, targetPeer);
	$set(this, lastMouseEventPeer, targetPeer);
	if (targetPeer != nullptr && targetPeer->isEnabled()) {
		$var($Point, newp, targetPeer->windowToLocal(x, y, this));
		$var($Component, target, targetPeer->getTarget());
		postMouseEnteredEvent(target, when, modifiers, newp, screenX, screenY, clickCount, popupTrigger, button);
	}
}

void LWWindowPeer::postMouseEnteredEvent($Component* target, int64_t when, int32_t modifiers, $Point* loc, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button) {
	updateSecurityWarningVisibility();
	postEvent($$new($MouseEvent, target, $MouseEvent::MOUSE_ENTERED, when, modifiers, $nc(loc)->x, loc->y, xAbs, yAbs, clickCount, popupTrigger, button));
}

void LWWindowPeer::postMouseExitedEvent($Component* target, int64_t when, int32_t modifiers, $Point* loc, int32_t xAbs, int32_t yAbs, int32_t clickCount, bool popupTrigger, int32_t button) {
	updateSecurityWarningVisibility();
	postEvent($$new($MouseEvent, target, $MouseEvent::MOUSE_EXITED, when, modifiers, $nc(loc)->x, loc->y, xAbs, yAbs, clickCount, popupTrigger, button));
}

void LWWindowPeer::notifyMouseWheelEvent(int64_t when, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation, $bytes* bdata) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, getBounds());
	$var($LWComponentPeer, targetPeer, findPeerAt($nc(r)->x + x, r->y + y));
	if (targetPeer == nullptr || !$nc(targetPeer)->isEnabled()) {
		return;
	}
	$var($Point, lp, $nc(targetPeer)->windowToLocal(x, y, this));
	postEvent($$new($MouseWheelEvent, $(targetPeer->getTarget()), $MouseEvent::MOUSE_WHEEL, when, modifiers, $nc(lp)->x, lp->y, absX, absY, 0, false, scrollType, scrollAmount, wheelRotation, preciseWheelRotation));
}

void LWWindowPeer::notifyKeyEvent(int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation) {
	$useLocalCurrentObjectStackCache();
	$var($LWKeyboardFocusManagerPeer, kfmPeer, $LWKeyboardFocusManagerPeer::getInstance());
	$var($Component, focusOwner, $nc(kfmPeer)->getCurrentFocusOwner());
	if (focusOwner == nullptr) {
		$assign(focusOwner, kfmPeer->getCurrentFocusedWindow());
		if (focusOwner == nullptr) {
			$assign(focusOwner, this->getTarget());
		}
	}
	$var($KeyEvent, keyEvent, $new($KeyEvent, focusOwner, id, when, modifiers, keyCode, keyChar, keyLocation));
	$nc($($AWTAccessor::getKeyEventAccessor()))->setExtendedKeyCode(keyEvent, (keyChar == $KeyEvent::CHAR_UNDEFINED) ? keyCode : $ExtendedKeyCodes::getExtendedKeyCodeForChar(keyChar));
	postEvent(keyEvent);
}

void LWWindowPeer::activateDisplayListener() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$nc(($cast($SunGraphicsEnvironment, ge)))->addDisplayChangedListener(this);
}

void LWWindowPeer::deactivateDisplayListener() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$nc(($cast($SunGraphicsEnvironment, ge)))->removeDisplayChangedListener(this);
}

void LWWindowPeer::postWindowStateChangedEvent(int32_t newWindowState) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Frame, $(getTarget()))) {
		$nc($($AWTAccessor::getFrameAccessor()))->setExtendedState($cast($Frame, $(getTarget())), newWindowState);
	}
	$var($WindowEvent, stateChangedEvent, $new($WindowEvent, $cast($Window, $(getTarget())), $WindowEvent::WINDOW_STATE_CHANGED, this->windowState, newWindowState));
	postEvent(stateChangedEvent);
	this->windowState = newWindowState;
	updateSecurityWarningVisibility();
}

int32_t LWWindowPeer::getGraphicsConfigScreen($GraphicsConfiguration* gc) {
	$init(LWWindowPeer);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDevice, gd, $nc(gc)->getDevice());
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gds, $nc(ge)->getScreenDevices());
	for (int32_t i = 0; i < $nc(gds)->length; ++i) {
		if (gds->get(i) == gd) {
			return i;
		}
	}
	return 0;
}

bool LWWindowPeer::setGraphicsConfig($GraphicsConfiguration* gc) {
	$synchronized(getStateLock()) {
		if (this->graphicsConfig == gc) {
			return false;
		}
		$set(this, graphicsConfig, gc);
	}
	return true;
}

bool LWWindowPeer::updateGraphicsDevice() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDevice, newGraphicsDevice, $nc(this->platformWindow)->getGraphicsDevice());
	$synchronized(getStateLock()) {
		if (this->graphicsDevice == newGraphicsDevice) {
			return false;
		}
		$set(this, graphicsDevice, newGraphicsDevice);
	}
	$var($GraphicsConfiguration, newGC, $nc(newGraphicsDevice)->getDefaultConfiguration());
	if (!setGraphicsConfig(newGC)) {
		return false;
	}
	$var($Object, var$0, $of(getTarget()));
	$SunToolkit::executeOnEventHandlerThread(var$0, $$new($LWWindowPeer$1, this, newGC));
	return true;
}

void LWWindowPeer::displayChanged() {
	if (updateGraphicsDevice()) {
		updateMinimumSize();
		if (!isMaximizedBoundsSet()) {
			setPlatformMaximizedBounds($(getDefaultMaximizedBounds()));
		}
	}
	replaceSurfaceData();
	repaintPeer();
}

void LWWindowPeer::paletteChanged() {
}

$SurfaceData* LWWindowPeer::getSurfaceData() {
	$synchronized(this->surfaceDataLock) {
		return this->surfaceData;
	}
}

void LWWindowPeer::replaceSurfaceData() {
	replaceSurfaceData(true);
}

void LWWindowPeer::replaceSurfaceData(bool blit) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->surfaceDataLock) {
		$var($SurfaceData, oldData, getSurfaceData());
		$set(this, surfaceData, $nc(this->platformWindow)->replaceSurfaceData());
		$var($Rectangle, size, getSize());
		bool var$0 = getSurfaceData() != nullptr;
		if (var$0 && oldData != getSurfaceData()) {
			clearBackground($nc(size)->width, size->height);
		}
		if (blit) {
			blitSurfaceData(oldData, $(getSurfaceData()));
		}
		if (oldData != nullptr && oldData != getSurfaceData()) {
			oldData->flush();
		}
	}
	flushOnscreenGraphics();
}

void LWWindowPeer::blitSurfaceData($SurfaceData* src, $SurfaceData* dst) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = src != dst && src != nullptr && dst != nullptr && !($instanceOf($NullSurfaceData, dst)) && !($instanceOf($NullSurfaceData, src)) && $nc($(src->getSurfaceType()))->equals($(dst->getSurfaceType()));
	if (var$1) {
		double var$2 = src->getDefaultScaleX();
		var$1 = var$2 == dst->getDefaultScaleX();
	}
	bool var$0 = var$1;
	if (var$0) {
		double var$3 = src->getDefaultScaleY();
		var$0 = var$3 == dst->getDefaultScaleY();
	}
	if (var$0) {
		$var($Rectangle, size, src->getBounds());
		$var($SurfaceType, var$4, src->getSurfaceType());
		$init($CompositeType);
		$var($CompositeType, var$5, $CompositeType::Src);
		$var($Blit, blit, $Blit::locate(var$4, var$5, $(dst->getSurfaceType())));
		if (blit != nullptr) {
			$init($AlphaComposite);
			blit->Blit$(src, dst, $AlphaComposite::Src, nullptr, 0, 0, 0, 0, $nc(size)->width, size->height);
		}
	}
}

bool LWWindowPeer::updateInsets($Insets* newInsets) {
	$synchronized(getStateLock()) {
		if ($nc(this->insets)->equals(newInsets)) {
			return false;
		}
		$set(this, insets, newInsets);
	}
	return true;
}

LWWindowPeer* LWWindowPeer::getWindowUnderCursor() {
	$init(LWWindowPeer);
	return LWWindowPeer::lastCommonMouseEventPeer != nullptr ? $nc(LWWindowPeer::lastCommonMouseEventPeer)->getWindowPeerOrSelf() : (LWWindowPeer*)nullptr;
}

$LWComponentPeer* LWWindowPeer::getPeerUnderCursor() {
	$init(LWWindowPeer);
	return LWWindowPeer::lastCommonMouseEventPeer;
}

bool LWWindowPeer::requestWindowFocus($FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(LWWindowPeer::focusLog)->fine($$str({"requesting native focus to "_s, this}));
	}
	if (!focusAllowedFor()) {
		$nc(LWWindowPeer::focusLog)->fine("focus is not allowed"_s);
		return false;
	}
	if ($nc(this->platformWindow)->rejectFocusRequest(cause)) {
		return false;
	}
	$var($AppContext, targetAppContext, $nc($($AWTAccessor::getComponentAccessor()))->getAppContext($(getTarget())));
	$var($KeyboardFocusManager, kfm, $nc($($AWTAccessor::getKeyboardFocusManagerAccessor()))->getCurrentKeyboardFocusManager(targetAppContext));
	$var($Window, currentActive, $nc(kfm)->getActiveWindow());
	$var($Window, opposite, $nc($($LWKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	if (isSimpleWindow()) {
		$var(LWWindowPeer, owner, getOwnerFrameDialog(this));
		if (owner != nullptr && !$nc(owner->platformWindow)->isActive()) {
			if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(LWWindowPeer::focusLog)->fine($$str({"requesting native focus to the owner "_s, owner}));
			}
			$var(LWWindowPeer, currentActivePeer, currentActive == nullptr ? (LWWindowPeer*)nullptr : $cast(LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(currentActive)));
			if (currentActivePeer != nullptr && $nc(currentActivePeer->platformWindow)->isActive()) {
				if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(LWWindowPeer::focusLog)->fine($$str({"the opposite is "_s, currentActivePeer}));
				}
				currentActivePeer->skipNextFocusChange = true;
			}
			owner->skipNextFocusChange = true;
			$nc(owner->platformWindow)->requestWindowFocus();
		}
		changeFocusedWindow(true, opposite);
		return true;
	} else {
		bool var$1 = $equals(getTarget(), currentActive);
		if (var$1 && !$nc(($cast($Window, $(getTarget()))))->hasFocus()) {
			changeFocusedWindow(true, opposite);
			return true;
		}
	}
	return $nc(this->platformWindow)->requestWindowFocus();
}

bool LWWindowPeer::focusAllowedFor() {
	$var($Window, window, $cast($Window, getTarget()));
	bool var$1 = $nc(window)->isVisible();
	bool var$0 = var$1 && window->isEnabled();
	return var$0 && isFocusableWindow();
}

bool LWWindowPeer::isFocusableWindow() {
	bool focusable = this->targetFocusable;
	if (isSimpleWindow()) {
		$var(LWWindowPeer, ownerPeer, getOwnerFrameDialog(this));
		if (ownerPeer == nullptr) {
			return false;
		}
		return focusable && $nc(ownerPeer)->targetFocusable;
	}
	return focusable;
}

bool LWWindowPeer::isSimpleWindow() {
	$var($Window, window, $cast($Window, getTarget()));
	return !($instanceOf($Dialog, window) || $instanceOf($Frame, window));
}

void LWWindowPeer::emulateActivation(bool activate) {
	changeFocusedWindow(activate, nullptr);
}

bool LWWindowPeer::isOneOfOwnersOf(LWWindowPeer* peer) {
	$useLocalCurrentObjectStackCache();
	$var($Window, owner, peer != nullptr ? $nc(($cast($Window, $($nc(peer)->getTarget()))))->getOwner() : ($Window*)nullptr);
	while (owner != nullptr) {
		$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
		if ($equals($nc(acc)->getPeer(owner), this)) {
			return true;
		}
		$assign(owner, owner->getOwner());
	}
	return false;
}

void LWWindowPeer::changeFocusedWindow(bool becomesFocused, $Window* opposite) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(LWWindowPeer::focusLog)->fine($$str({(becomesFocused ? "gaining"_s : "loosing"_s), " focus window: "_s, this}));
	}
	if (this->skipNextFocusChange) {
		$nc(LWWindowPeer::focusLog)->fine("skipping focus change"_s);
		this->skipNextFocusChange = false;
		return;
	}
	if (!isFocusableWindow() && becomesFocused) {
		$nc(LWWindowPeer::focusLog)->fine("the window is not focusable"_s);
		return;
	}
	if (becomesFocused) {
		$synchronized(getPeerTreeLock()) {
			if (this->blocker != nullptr) {
				if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(LWWindowPeer::focusLog)->finest($$str({"the window is blocked by "_s, this->blocker}));
				}
				return;
			}
		}
	}
	bool var$0 = !becomesFocused;
	if (var$0) {
		bool var$1 = isGrabbing();
		var$0 = (var$1 || this->isOneOfOwnersOf(LWWindowPeer::grabbingWindow));
	}
	if (var$0) {
		if ($nc(LWWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(LWWindowPeer::focusLog)->fine($$str({"ungrabbing on "_s, LWWindowPeer::grabbingWindow}));
		}
		$nc(LWWindowPeer::grabbingWindow)->ungrab();
	}
	$var($KeyboardFocusManagerPeer, kfmPeer, $LWKeyboardFocusManagerPeer::getInstance());
	bool var$2 = !becomesFocused;
	if (var$2) {
		var$2 = !$equals($nc(kfmPeer)->getCurrentFocusedWindow(), getTarget());
	}
	if (var$2) {
		return;
	}
	$nc(kfmPeer)->setCurrentFocusedWindow(becomesFocused ? $cast($Window, $(getTarget())) : ($Window*)nullptr);
	int32_t eventID = becomesFocused ? $WindowEvent::WINDOW_GAINED_FOCUS : $WindowEvent::WINDOW_LOST_FOCUS;
	$var($Window, var$3, $cast($Window, getTarget()));
	int32_t var$4 = eventID;
	$var($Window, var$5, opposite);
	$var($WindowEvent, windowEvent, $new($TimedWindowEvent, var$3, var$4, var$5, $System::currentTimeMillis()));
	postEvent(windowEvent);
}

LWWindowPeer* LWWindowPeer::getOwnerFrameDialog(LWWindowPeer* peer) {
	$init(LWWindowPeer);
	$useLocalCurrentObjectStackCache();
	$var($Window, owner, peer != nullptr ? $nc(($cast($Window, $($nc(peer)->getTarget()))))->getOwner() : ($Window*)nullptr);
	while (owner != nullptr && !($instanceOf($Frame, owner) || $instanceOf($Dialog, owner))) {
		$assign(owner, $nc(owner)->getOwner());
	}
	return owner == nullptr ? (LWWindowPeer*)nullptr : $cast(LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(owner));
}

LWWindowPeer* LWWindowPeer::getBlocker() {
	$synchronized(getPeerTreeLock()) {
		$var(LWWindowPeer, blocker, this->blocker);
		if (blocker == nullptr) {
			return nullptr;
		}
		while ($nc(blocker)->blocker != nullptr) {
			$assign(blocker, blocker->blocker);
		}
		return blocker;
	}
}

void LWWindowPeer::enterFullScreenMode() {
	$nc(this->platformWindow)->enterFullScreenMode();
	updateSecurityWarningVisibility();
}

void LWWindowPeer::exitFullScreenMode() {
	$nc(this->platformWindow)->exitFullScreenMode();
	updateSecurityWarningVisibility();
}

int64_t LWWindowPeer::getLayerPtr() {
	return $nc($(getPlatformWindow()))->getLayerPtr();
}

void LWWindowPeer::grab() {
	if (LWWindowPeer::grabbingWindow != nullptr && !isGrabbing()) {
		$nc(LWWindowPeer::grabbingWindow)->ungrab();
	}
	$assignStatic(LWWindowPeer::grabbingWindow, this);
}

void LWWindowPeer::ungrab(bool doPost) {
	$useLocalCurrentObjectStackCache();
	if (isGrabbing()) {
		$assignStatic(LWWindowPeer::grabbingWindow, nullptr);
		if (doPost) {
			postEvent($$new($UngrabEvent, $(getTarget())));
		}
	}
}

void LWWindowPeer::ungrab() {
	ungrab(true);
}

bool LWWindowPeer::isGrabbing() {
	return this == LWWindowPeer::grabbingWindow;
}

$LWWindowPeer$PeerType* LWWindowPeer::getPeerType() {
	return this->peerType;
}

void LWWindowPeer::updateSecurityWarningVisibility() {
	if (this->warningWindow == nullptr) {
		return;
	}
	if (!isVisible()) {
		return;
	}
	bool show = false;
	if (!$nc(this->platformWindow)->isFullScreenMode()) {
		if (isVisible()) {
			if ($equals($nc($($LWKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow(), getTarget())) {
				show = true;
			}
			bool var$0 = $nc(this->platformWindow)->isUnderMouse();
			if (var$0 || $nc(this->warningWindow)->isUnderMouse()) {
				show = true;
			}
		}
	}
	$nc(this->warningWindow)->setVisible(show, true);
}

$String* LWWindowPeer::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($LWContainerPeer::toString()), " [target is "_s}));
	$var($String, var$0, $$concat(var$1, $(getTarget())));
	return $concat(var$0, "]"_s);
}

void LWWindowPeer::setFont($Font* f) {
	$LWContainerPeer::setFont(f);
}

void LWWindowPeer::setForeground($Color* c) {
	$LWContainerPeer::setForeground(c);
}

void LWWindowPeer::setBackground($Color* c) {
	$LWContainerPeer::setBackground(c);
}

void LWWindowPeer::setEnabled(bool e) {
	$LWContainerPeer::setEnabled(e);
}

void clinit$LWWindowPeer($Class* class$) {
	$assignStatic(LWWindowPeer::focusLog, $PlatformLogger::getLogger("sun.lwawt.focus.LWWindowPeer"_s));
	$assignStatic(LWWindowPeer::mouseDownTarget, $new($LWComponentPeerArray, 3));
	LWWindowPeer::mouseClickButtons = 0;
	$assignStatic(LWWindowPeer::DEFAULT_FONT, $new($Font, "Lucida Grande"_s, $Font::PLAIN, 13));
	$assignStatic(LWWindowPeer::nonOpaqueBackground, $new($Color, 0, 0, 0, 0));
}

LWWindowPeer::LWWindowPeer() {
}

$Class* LWWindowPeer::load$($String* name, bool initialize) {
	$loadClass(LWWindowPeer, name, initialize, &_LWWindowPeer_ClassInfo_, clinit$LWWindowPeer, allocate$LWWindowPeer);
	return class$;
}

$Class* LWWindowPeer::class$ = nullptr;

	} // lwawt
} // sun