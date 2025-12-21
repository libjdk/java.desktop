#include <java/awt/Component.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTError.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/AWTException.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component$1.h>
#include <java/awt/Component$2.h>
#include <java/awt/Component$3.h>
#include <java/awt/Component$AWTTreeLock.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component$BltBufferStrategy.h>
#include <java/awt/Component$BltSubRegionBufferStrategy.h>
#include <java/awt/Component$DummyRequestFocusController.h>
#include <java/awt/Component$FlipBufferStrategy.h>
#include <java/awt/Component$FlipSubRegionBufferStrategy.h>
#include <java/awt/Component$ProxyCapabilities.h>
#include <java/awt/Component$SingleBufferStrategy.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback$PeerPaintCallback.h>
#include <java/awt/GraphicsCallback$PeerPrintCallback.h>
#include <java/awt/GraphicsCallback.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/HierarchyBoundsListener.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/im/InputContext.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/MouseInfoPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OptionalDataException.h>
#include <java/io/PrintWriter.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/Package.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/WeakHashMap.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/ConstrainableGraphics.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/EventQueueItem.h>
#include <sun/awt/RequestFocusController.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/awt/im/CompositionArea.h>
#include <sun/awt/im/InputContext.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/SunFontManager.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingAccessor$JComponentAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ABORT
#undef ACCESSIBLE_STATE_PROPERTY
#undef ACTION_EVENT
#undef ACTION_EVENT_MASK
#undef ACTION_PERFORMED
#undef ACTIVATION
#undef ADJUSTMENT_EVENT_MASK
#undef ADJUSTMENT_VALUE_CHANGED
#undef ALLBITS
#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef BOTTOM_ALIGNMENT
#undef CARET_POSITION_CHANGED
#undef CENTER_ALIGNMENT
#undef CHAR_UNDEFINED
#undef COMPONENT_EVENT_MASK
#undef COMPONENT_HIDDEN
#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef COMPONENT_SHOWN
#undef DEFAULT_CURSOR
#undef DEFAULT_OPERATION
#undef DISPLAYABILITY_CHANGED
#undef EMPTY_REGION
#undef ENABLED
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUSABLE
#undef FOCUSED
#undef FOCUS_EVENT_MASK
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef FOCUS_TRAVERSABLE_DEFAULT
#undef FOCUS_TRAVERSABLE_SET
#undef FOCUS_TRAVERSABLE_UNKNOWN
#undef FRAMEBITS
#undef GOT_FOCUS
#undef HEAVYWEIGHTS
#undef HIERARCHY_BOUNDS_EVENT_MASK
#undef HIERARCHY_CHANGED
#undef HIERARCHY_EVENT_MASK
#undef INCLUDE_DISABLED
#undef INPUT_METHODS_ENABLED_MASK
#undef INPUT_METHOD_EVENT_MASK
#undef INPUT_METHOD_TEXT_CHANGED
#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED
#undef KEY_ACTION
#undef KEY_ACTION_RELEASE
#undef KEY_EVENT_MASK
#undef KEY_PRESS
#undef KEY_PRESSED
#undef KEY_RELEASE
#undef KEY_RELEASED
#undef KEY_TYPED
#undef LEFT_ALIGNMENT
#undef LIGHTWEIGHTS
#undef LOCK
#undef LOST_FOCUS
#undef MAX_VALUE
#undef MOUSE_CLICKED
#undef MOUSE_DOWN
#undef MOUSE_DRAG
#undef MOUSE_DRAGGED
#undef MOUSE_ENTER
#undef MOUSE_ENTERED
#undef MOUSE_EVENT_MASK
#undef MOUSE_EXIT
#undef MOUSE_EXITED
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_MOVE
#undef MOUSE_MOVED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef MOUSE_UP
#undef MOUSE_WHEEL
#undef MOUSE_WHEEL_EVENT_MASK
#undef OPAQUE
#undef OTHER
#undef RESERVED_ID_MAX
#undef RESET_OPERATION
#undef RIGHT_ALIGNMENT
#undef SELECTABLE
#undef SELECTED
#undef SET_BOUNDS
#undef SET_LOCATION
#undef SET_SIZE
#undef SHOWING
#undef SHOWING_CHANGED
#undef SOMEBITS
#undef TEXT_EVENT_MASK
#undef TEXT_VALUE_CHANGED
#undef TOP_ALIGNMENT
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_KEY_LENGTH
#undef TRAVERSAL_UP
#undef UNDEFINED
#undef UNKNOWN
#undef UPDATE
#undef VISIBLE

using $ComponentListenerArray = $Array<::java::awt::event::ComponentListener>;
using $FocusListenerArray = $Array<::java::awt::event::FocusListener>;
using $HierarchyBoundsListenerArray = $Array<::java::awt::event::HierarchyBoundsListener>;
using $HierarchyListenerArray = $Array<::java::awt::event::HierarchyListener>;
using $InputMethodListenerArray = $Array<::java::awt::event::InputMethodListener>;
using $KeyListenerArray = $Array<::java::awt::event::KeyListener>;
using $MouseListenerArray = $Array<::java::awt::event::MouseListener>;
using $MouseMotionListenerArray = $Array<::java::awt::event::MouseMotionListener>;
using $MouseWheelListenerArray = $Array<::java::awt::event::MouseWheelListener>;
using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $SetArray = $Array<::java::util::Set>;
using $Applet = ::java::applet::Applet;
using $AWTError = ::java::awt::AWTError;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $AWTException = ::java::awt::AWTException;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component$1 = ::java::awt::Component$1;
using $Component$2 = ::java::awt::Component$2;
using $Component$3 = ::java::awt::Component$3;
using $Component$AWTTreeLock = ::java::awt::Component$AWTTreeLock;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Component$BltBufferStrategy = ::java::awt::Component$BltBufferStrategy;
using $Component$BltSubRegionBufferStrategy = ::java::awt::Component$BltSubRegionBufferStrategy;
using $Component$DummyRequestFocusController = ::java::awt::Component$DummyRequestFocusController;
using $Component$FlipBufferStrategy = ::java::awt::Component$FlipBufferStrategy;
using $Component$FlipSubRegionBufferStrategy = ::java::awt::Component$FlipSubRegionBufferStrategy;
using $Component$ProxyCapabilities = ::java::awt::Component$ProxyCapabilities;
using $Component$SingleBufferStrategy = ::java::awt::Component$SingleBufferStrategy;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $GraphicsCallback$PeerPaintCallback = ::java::awt::GraphicsCallback$PeerPaintCallback;
using $GraphicsCallback$PeerPrintCallback = ::java::awt::GraphicsCallback$PeerPrintCallback;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Menu = ::java::awt::Menu;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $PopupMenu = ::java::awt::PopupMenu;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $FocusListener = ::java::awt::event::FocusListener;
using $HierarchyBoundsListener = ::java::awt::event::HierarchyBoundsListener;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $MouseWheelListener = ::java::awt::event::MouseWheelListener;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $InputContext = ::java::awt::im::InputContext;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $MouseInfoPeer = ::java::awt::peer::MouseInfoPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OptionalDataException = ::java::io::OptionalDataException;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $Package = ::java::lang::Package;
using $SecurityException = ::java::lang::SecurityException;
using $Short = ::java::lang::Short;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JComponent = ::javax::swing::JComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $ConstrainableGraphics = ::sun::awt::ConstrainableGraphics;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $RequestFocusController = ::sun::awt::RequestFocusController;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $CompositionArea = ::sun::awt::im::CompositionArea;
using $1InputContext = ::sun::awt::im::InputContext;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $SunFontManager = ::sun::font::SunFontManager;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JComponentAccessor = ::sun::swing::SwingAccessor$JComponentAccessor;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$CompoundAttribute _Component_MethodAnnotations_action1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_bounds24[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_deliverEvent48[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_disable49[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_enable56[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_enable57[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_getBackground80[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_getFont103[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_getForeground106[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_gotFocus157[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_handleEvent158[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_hide160[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_inside164[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_isFocusTraversable179[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_isVisible197[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_keyDown199[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_keyUp200[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_layout201[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_locate209[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_location210[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_lostFocus212[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_minimumSize213[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseDown219[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseDrag220[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseEnter221[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseExit222[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseMove223[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_mouseUp224[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_move225[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_nextFocus226[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_postEvent234[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_preferredSize236[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_reshape282[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_resize284[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_resize285[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_show317[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_show318[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Component_MethodAnnotations_size319[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Component_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Component, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Component, log)},
	{"eventLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Component, eventLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Component, focusLog)},
	{"mixingLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Component, mixingLog)},
	{"peer", "Ljava/awt/peer/ComponentPeer;", nullptr, $VOLATILE | $TRANSIENT, $field(Component, peer)},
	{"parent", "Ljava/awt/Container;", nullptr, $TRANSIENT, $field(Component, parent)},
	{"appContext", "Lsun/awt/AppContext;", nullptr, $TRANSIENT, $field(Component, appContext)},
	{"x", "I", nullptr, 0, $field(Component, x)},
	{"y", "I", nullptr, 0, $field(Component, y)},
	{"width", "I", nullptr, 0, $field(Component, width)},
	{"height", "I", nullptr, 0, $field(Component, height)},
	{"foreground", "Ljava/awt/Color;", nullptr, 0, $field(Component, foreground)},
	{"background", "Ljava/awt/Color;", nullptr, 0, $field(Component, background)},
	{"font", "Ljava/awt/Font;", nullptr, $VOLATILE, $field(Component, font)},
	{"peerFont", "Ljava/awt/Font;", nullptr, 0, $field(Component, peerFont)},
	{"cursor", "Ljava/awt/Cursor;", nullptr, 0, $field(Component, cursor)},
	{"locale", "Ljava/util/Locale;", nullptr, 0, $field(Component, locale)},
	{"graphicsConfig", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Component, graphicsConfig)},
	{"bufferStrategy", "Ljava/awt/image/BufferStrategy;", nullptr, $PRIVATE | $TRANSIENT, $field(Component, bufferStrategy)},
	{"ignoreRepaint", "Z", nullptr, 0, $field(Component, ignoreRepaint)},
	{"visible", "Z", nullptr, 0, $field(Component, visible)},
	{"enabled", "Z", nullptr, 0, $field(Component, enabled)},
	{"valid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Component, valid)},
	{"dropTarget", "Ljava/awt/dnd/DropTarget;", nullptr, 0, $field(Component, dropTarget)},
	{"popups", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/PopupMenu;>;", 0, $field(Component, popups)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Component, name)},
	{"nameExplicitlySet", "Z", nullptr, $PRIVATE, $field(Component, nameExplicitlySet)},
	{"focusable", "Z", nullptr, $PRIVATE, $field(Component, focusable)},
	{"FOCUS_TRAVERSABLE_UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component, FOCUS_TRAVERSABLE_UNKNOWN)},
	{"FOCUS_TRAVERSABLE_DEFAULT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component, FOCUS_TRAVERSABLE_DEFAULT)},
	{"FOCUS_TRAVERSABLE_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component, FOCUS_TRAVERSABLE_SET)},
	{"isFocusTraversableOverridden", "I", nullptr, $PRIVATE, $field(Component, isFocusTraversableOverridden$)},
	{"focusTraversalKeys", "[Ljava/util/Set;", "[Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", 0, $field(Component, focusTraversalKeys)},
	{"focusTraversalKeyPropertyNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Component, focusTraversalKeyPropertyNames)},
	{"focusTraversalKeysEnabled", "Z", nullptr, $PRIVATE, $field(Component, focusTraversalKeysEnabled)},
	{"LOCK", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(Component, LOCK)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Component, acc)},
	{"minSize", "Ljava/awt/Dimension;", nullptr, 0, $field(Component, minSize)},
	{"minSizeSet", "Z", nullptr, 0, $field(Component, minSizeSet)},
	{"prefSize", "Ljava/awt/Dimension;", nullptr, 0, $field(Component, prefSize)},
	{"prefSizeSet", "Z", nullptr, 0, $field(Component, prefSizeSet)},
	{"maxSize", "Ljava/awt/Dimension;", nullptr, 0, $field(Component, maxSize)},
	{"maxSizeSet", "Z", nullptr, 0, $field(Component, maxSizeSet)},
	{"componentOrientation", "Ljava/awt/ComponentOrientation;", nullptr, $TRANSIENT, $field(Component, componentOrientation)},
	{"newEventsOnly", "Z", nullptr, 0, $field(Component, newEventsOnly)},
	{"componentListener", "Ljava/awt/event/ComponentListener;", nullptr, $TRANSIENT, $field(Component, componentListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $TRANSIENT, $field(Component, focusListener)},
	{"hierarchyListener", "Ljava/awt/event/HierarchyListener;", nullptr, $TRANSIENT, $field(Component, hierarchyListener)},
	{"hierarchyBoundsListener", "Ljava/awt/event/HierarchyBoundsListener;", nullptr, $TRANSIENT, $field(Component, hierarchyBoundsListener)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $TRANSIENT, $field(Component, keyListener)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $TRANSIENT, $field(Component, mouseListener)},
	{"mouseMotionListener", "Ljava/awt/event/MouseMotionListener;", nullptr, $TRANSIENT, $field(Component, mouseMotionListener)},
	{"mouseWheelListener", "Ljava/awt/event/MouseWheelListener;", nullptr, $TRANSIENT, $field(Component, mouseWheelListener)},
	{"inputMethodListener", "Ljava/awt/event/InputMethodListener;", nullptr, $TRANSIENT, $field(Component, inputMethodListener)},
	{"actionListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, actionListenerK)},
	{"adjustmentListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, adjustmentListenerK)},
	{"componentListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, componentListenerK)},
	{"containerListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, containerListenerK)},
	{"focusListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, focusListenerK)},
	{"itemListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, itemListenerK)},
	{"keyListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, keyListenerK)},
	{"mouseListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, mouseListenerK)},
	{"mouseMotionListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, mouseMotionListenerK)},
	{"mouseWheelListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, mouseWheelListenerK)},
	{"textListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, textListenerK)},
	{"ownedWindowK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, ownedWindowK)},
	{"windowListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, windowListenerK)},
	{"inputMethodListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, inputMethodListenerK)},
	{"hierarchyListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, hierarchyListenerK)},
	{"hierarchyBoundsListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, hierarchyBoundsListenerK)},
	{"windowStateListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, windowStateListenerK)},
	{"windowFocusListenerK", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Component, windowFocusListenerK)},
	{"eventMask", "J", nullptr, 0, $field(Component, eventMask)},
	{"isInc", "Z", nullptr, $STATIC, $staticField(Component, isInc)},
	{"incRate", "I", nullptr, $STATIC, $staticField(Component, incRate)},
	{"TOP_ALIGNMENT", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Component, TOP_ALIGNMENT)},
	{"CENTER_ALIGNMENT", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Component, CENTER_ALIGNMENT)},
	{"BOTTOM_ALIGNMENT", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Component, BOTTOM_ALIGNMENT)},
	{"LEFT_ALIGNMENT", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Component, LEFT_ALIGNMENT)},
	{"RIGHT_ALIGNMENT", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Component, RIGHT_ALIGNMENT)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Component, serialVersionUID)},
	{"changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(Component, changeSupport)},
	{"objectLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(Component, objectLock)},
	{"isPacked", "Z", nullptr, 0, $field(Component, isPacked)},
	{"boundsOp", "I", nullptr, $PRIVATE, $field(Component, boundsOp)},
	{"compoundShape", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE | $TRANSIENT, $field(Component, compoundShape)},
	{"mixingCutoutRegion", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE | $TRANSIENT, $field(Component, mixingCutoutRegion)},
	{"isAddNotifyComplete", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Component, isAddNotifyComplete)},
	{"backgroundEraseDisabled", "Z", nullptr, $TRANSIENT, $field(Component, backgroundEraseDisabled)},
	{"eventCache", "[Lsun/awt/EventQueueItem;", nullptr, $TRANSIENT, $field(Component, eventCache)},
	{"coalescingEnabled", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Component, coalescingEnabled)},
	{"coalesceMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Component, coalesceMap)},
	{"coalesceEventsParams", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(Component, coalesceEventsParams)},
	{"requestFocusController", "Lsun/awt/RequestFocusController;", nullptr, $PRIVATE | $STATIC, $staticField(Component, requestFocusController)},
	{"autoFocusTransferOnDisposal", "Z", nullptr, $PRIVATE, $field(Component, autoFocusTransferOnDisposal)},
	{"componentSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Component, componentSerializedDataVersion)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(Component, accessibleContext)},
	{}
};

$MethodInfo _Component_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Component::*)()>(&Component::init$))},
	{"action", "(Ljava/awt/Event;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_action1},
	{"add", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC},
	{"addComponentListener", "(Ljava/awt/event/ComponentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addHierarchyBoundsListener", "(Ljava/awt/event/HierarchyBoundsListener;)V", nullptr, $PUBLIC},
	{"addHierarchyListener", "(Ljava/awt/event/HierarchyListener;)V", nullptr, $PUBLIC},
	{"addInputMethodListener", "(Ljava/awt/event/InputMethodListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addKeyListener", "(Ljava/awt/event/KeyListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addMouseListener", "(Ljava/awt/event/MouseListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addMouseMotionListener", "(Ljava/awt/event/MouseMotionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addMouseWheelListener", "(Ljava/awt/event/MouseWheelListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"adjustListeningChildrenOnParent", "(JI)V", nullptr, 0},
	{"applyComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"applyCompoundShape", "(Lsun/java2d/pipe/Region;)V", nullptr, 0},
	{"applyCurrentShape", "()V", nullptr, 0},
	{"applyCurrentShapeBelowMe", "()V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)()>(&Component::applyCurrentShapeBelowMe))},
	{"areBoundsValid", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::areBoundsValid))},
	{"areFocusTraversalKeysSet", "(I)Z", nullptr, $PUBLIC},
	{"areInputMethodsEnabled", "()Z", nullptr, 0},
	{"autoProcessMouseWheel", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"bounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_bounds24},
	{"calculateCurrentShape", "()Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $method(static_cast<$Region*(Component::*)()>(&Component::calculateCurrentShape))},
	{"canBeFocusOwner", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::canBeFocusOwner))},
	{"canBeFocusOwnerRecursively", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::canBeFocusOwnerRecursively))},
	{"checkCoalescing", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Component::*)()>(&Component::checkCoalescing))},
	{"checkGD", "(Ljava/lang/String;)V", nullptr, 0},
	{"checkImage", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"checkImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)I", nullptr, $PUBLIC},
	{"checkTreeLock", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::checkTreeLock))},
	{"clearCurrentFocusCycleRootOnHide", "()V", nullptr, 0},
	{"clearMostRecentFocusOwnerOnHide", "()V", nullptr, 0},
	{"coalesceEvents", "(Ljava/awt/AWTEvent;Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PROTECTED},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"containsFocus", "()Z", nullptr, 0},
	{"countHierarchyMembers", "()I", nullptr, 0},
	{"createBufferStrategy", "(I)V", nullptr, 0},
	{"createBufferStrategy", "(ILjava/awt/BufferCapabilities;)V", nullptr, 0, nullptr, "java.awt.AWTException"},
	{"createHierarchyEvents", "(ILjava/awt/Component;Ljava/awt/Container;JZ)I", nullptr, 0},
	{"createImage", "(Ljava/awt/image/ImageProducer;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createVolatileImage", "(IILjava/awt/ImageCapabilities;)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"deliverEvent", "(Ljava/awt/Event;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_deliverEvent48},
	{"disable", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_disable49},
	{"disableEvents", "(J)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(Component::*)(int64_t)>(&Component::disableEvents))},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(Component::*)($AWTEvent*)>(&Component::dispatchEvent))},
	{"dispatchEventImpl", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"dispatchMouseWheelToAncestor", "(Ljava/awt/event/MouseWheelEvent;)Z", nullptr, 0},
	{"doLayout", "()V", nullptr, $PUBLIC},
	{"doSwingSerialization", "()V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)()>(&Component::doSwingSerialization))},
	{"enable", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_enable56},
	{"enable", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_enable57},
	{"enableEvents", "(J)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(Component::*)(int64_t)>(&Component::enableEvents))},
	{"enableInputMethods", "(Z)V", nullptr, $PUBLIC},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"eventTypeEnabled", "(I)Z", nullptr, 0},
	{"findUnderMouseInWindow", "(Ljava/awt/PointerInfo;)Ljava/awt/Component;", nullptr, 0},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;BB)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;CC)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;SS)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;JJ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;FF)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;DD)V", nullptr, $PUBLIC},
	{"getAccessControlContext", "()Ljava/security/AccessControlContext;", nullptr, $FINAL, $method(static_cast<$AccessControlContext*(Component::*)()>(&Component::getAccessControlContext))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, 0},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, 0},
	{"getAlignmentX", "()F", nullptr, $PUBLIC},
	{"getAlignmentY", "()F", nullptr, $PUBLIC},
	{"getAppliedShape", "()Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $method(static_cast<$Region*(Component::*)()>(&Component::getAppliedShape))},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, 0},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Component_MethodAnnotations_getBackground80},
	{"getBaseline", "(II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBoundsOp", "()I", nullptr, 0},
	{"getBufferStrategy", "()Ljava/awt/image/BufferStrategy;", nullptr, 0},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getComponentAt", "(II)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentAt", "(Ljava/awt/Point;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentFactory", "()Lsun/awt/ComponentFactory;", nullptr, $FINAL, $method(static_cast<$ComponentFactory*(Component::*)()>(&Component::getComponentFactory))},
	{"getComponentListeners", "()[Ljava/awt/event/ComponentListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getComponentOrientation", "()Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC},
	{"getContainer", "()Ljava/awt/Container;", nullptr, 0},
	{"getContainingWindow", "()Ljava/awt/Window;", nullptr, 0},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getCursor_NoClientCode", "()Ljava/awt/Cursor;", nullptr, $FINAL, $method(static_cast<$Cursor*(Component::*)()>(&Component::getCursor_NoClientCode))},
	{"getDropTarget", "()Ljava/awt/dnd/DropTarget;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFocusCycleRootAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getFocusListeners", "()[Ljava/awt/event/FocusListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getFocusTraversalKeys", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $PUBLIC},
	{"getFocusTraversalKeysEnabled", "()Z", nullptr, $PUBLIC},
	{"getFocusTraversalKeys_NoIDCheck", "(I)Ljava/util/Set;", "(I)Ljava/util/Set<Ljava/awt/AWTKeyStroke;>;", $FINAL, $method(static_cast<$Set*(Component::*)(int32_t)>(&Component::getFocusTraversalKeys_NoIDCheck))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Component_MethodAnnotations_getFont103},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFont_NoClientCode", "()Ljava/awt/Font;", nullptr, $FINAL, $method(static_cast<$Font*(Component::*)()>(&Component::getFont_NoClientCode))},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Component_MethodAnnotations_getForeground106},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration_NoClientCode", "()Ljava/awt/GraphicsConfiguration;", nullptr, $FINAL, $method(static_cast<$GraphicsConfiguration*(Component::*)()>(&Component::getGraphicsConfiguration_NoClientCode))},
	{"getGraphics_NoClientCode", "()Ljava/awt/Graphics;", nullptr, $FINAL, $method(static_cast<$Graphics*(Component::*)()>(&Component::getGraphics_NoClientCode))},
	{"getHWPeerAboveMe", "()Ljava/awt/peer/ComponentPeer;", nullptr, $FINAL, $method(static_cast<$ComponentPeer*(Component::*)()>(&Component::getHWPeerAboveMe))},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getHierarchyBoundsListeners", "()[Ljava/awt/event/HierarchyBoundsListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getHierarchyListeners", "()[Ljava/awt/event/HierarchyListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getIgnoreRepaint", "()Z", nullptr, $PUBLIC},
	{"getInputContext", "()Ljava/awt/im/InputContext;", nullptr, $PUBLIC},
	{"getInputMethodListeners", "()[Ljava/awt/event/InputMethodListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getInsets_NoClientCode", "()Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(Component::*)()>(&Component::getInsets_NoClientCode))},
	{"getKeyListeners", "()[Ljava/awt/event/KeyListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocation", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLocationOnScreen_NoTreeLock", "()Ljava/awt/Point;", nullptr, $FINAL, $method(static_cast<$Point*(Component::*)()>(&Component::getLocationOnScreen_NoTreeLock))},
	{"getLocationOnWindow", "()Ljava/awt/Point;", nullptr, 0},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMouseListeners", "()[Ljava/awt/event/MouseListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getMouseMotionListeners", "()[Ljava/awt/event/MouseMotionListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getMousePosition", "()Ljava/awt/Point;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"getMouseWheelListeners", "()[Ljava/awt/event/MouseWheelListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNativeContainer", "()Ljava/awt/Container;", nullptr, $FINAL, $method(static_cast<$Container*(Component::*)()>(&Component::getNativeContainer))},
	{"getNextFocusCandidate", "()Ljava/awt/Component;", nullptr, $FINAL, $method(static_cast<Component*(Component::*)()>(&Component::getNextFocusCandidate))},
	{"getNormalShape", "()Lsun/java2d/pipe/Region;", nullptr, $FINAL, $method(static_cast<$Region*(Component::*)()>(&Component::getNormalShape))},
	{"getObjectLock", "()Ljava/lang/Object;", nullptr, 0},
	{"getOpaqueShape", "()Lsun/java2d/pipe/Region;", nullptr, 0},
	{"getParent", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getParent_NoClientCode", "()Ljava/awt/Container;", nullptr, $FINAL, $method(static_cast<$Container*(Component::*)()>(&Component::getParent_NoClientCode))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"getRecursivelyVisibleBounds", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(Component::*)()>(&Component::getRecursivelyVisibleBounds))},
	{"getSiblingIndexAbove", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Component::*)()>(&Component::getSiblingIndexAbove))},
	{"getSiblingIndexBelow", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Component::*)()>(&Component::getSiblingIndexBelow))},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSize", "(Ljava/awt/Dimension;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC},
	{"getToolkitImpl", "()Ljava/awt/Toolkit;", nullptr, $FINAL, $method(static_cast<$Toolkit*(Component::*)()>(&Component::getToolkitImpl))},
	{"getTraversalRoot", "()Ljava/awt/Container;", nullptr, 0},
	{"getTreeLock", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(Component::*)()>(&Component::getTreeLock))},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"getX", "()I", nullptr, $PUBLIC},
	{"getY", "()I", nullptr, $PUBLIC},
	{"gotFocus", "(Ljava/awt/Event;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_gotFocus157},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_handleEvent158},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_hide160},
	{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Component::initIDs))},
	{"initializeFocusTraversalKeys", "()V", nullptr, 0},
	{"inside", "(II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_inside164},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"invalidateIfValid", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::invalidateIfValid))},
	{"invalidateParent", "()V", nullptr, 0},
	{"isAutoFocusTransferOnDisposal", "()Z", nullptr, 0},
	{"isBackgroundSet", "()Z", nullptr, $PUBLIC},
	{"isCoalesceEventsOverriden", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*)>(&Component::isCoalesceEventsOverriden))},
	{"isCoalescingEnabled", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isCoalescingEnabled))},
	{"isCursorSet", "()Z", nullptr, $PUBLIC},
	{"isDisplayable", "()Z", nullptr, $PUBLIC},
	{"isDoubleBuffered", "()Z", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isEnabledImpl", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isEnabledImpl))},
	{"isFocusCycleRoot", "(Ljava/awt/Container;)Z", nullptr, $PUBLIC},
	{"isFocusOwner", "()Z", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_isFocusTraversable179},
	{"isFocusTraversableOverridden", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isFocusTraversableOverridden))},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isFontSet", "()Z", nullptr, $PUBLIC},
	{"isForegroundSet", "()Z", nullptr, $PUBLIC},
	{"isInstanceOf", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(Object$*,$String*)>(&Component::isInstanceOf))},
	{"isLightweight", "()Z", nullptr, $PUBLIC},
	{"isMaximumSizeSet", "()Z", nullptr, $PUBLIC},
	{"isMinimumSizeSet", "()Z", nullptr, $PUBLIC},
	{"isMixingNeeded", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isMixingNeeded))},
	{"isNonOpaqueForMixing", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isNonOpaqueForMixing))},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"isPreferredSizeSet", "()Z", nullptr, $PUBLIC},
	{"isRecursivelyVisible", "()Z", nullptr, 0},
	{"isRequestFocusAccepted", "(ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Component::*)(bool,bool,$FocusEvent$Cause*)>(&Component::isRequestFocusAccepted))},
	{"isSameOrAncestorOf", "(Ljava/awt/Component;Z)Z", nullptr, 0},
	{"isShowing", "()Z", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Component_MethodAnnotations_isVisible197},
	{"isVisible_NoClientCode", "()Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)()>(&Component::isVisible_NoClientCode))},
	{"keyDown", "(Ljava/awt/Event;I)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_keyDown199},
	{"keyUp", "(Ljava/awt/Event;I)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_keyUp200},
	{"layout", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_layout201},
	{"lightweightPaint", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"lightweightPrint", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"list", "()V", nullptr, $PUBLIC},
	{"list", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"list", "(Ljava/io/PrintStream;I)V", nullptr, $PUBLIC},
	{"list", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{"list", "(Ljava/io/PrintWriter;I)V", nullptr, $PUBLIC},
	{"locate", "(II)Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_locate209},
	{"location", "()Ljava/awt/Point;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_location210},
	{"location_NoClientCode", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(Component::*)()>(&Component::location_NoClientCode))},
	{"lostFocus", "(Ljava/awt/Event;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_lostFocus212},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_minimumSize213},
	{"mixOnHiding", "(Z)V", nullptr, 0},
	{"mixOnReshaping", "()V", nullptr, 0},
	{"mixOnShowing", "()V", nullptr, 0},
	{"mixOnValidating", "()V", nullptr, 0},
	{"mixOnZOrderChanging", "(II)V", nullptr, 0},
	{"mouseDown", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseDown219},
	{"mouseDrag", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseDrag220},
	{"mouseEnter", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseEnter221},
	{"mouseExit", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseExit222},
	{"mouseMove", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseMove223},
	{"mouseUp", "(Ljava/awt/Event;II)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_mouseUp224},
	{"move", "(II)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_move225},
	{"nextFocus", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_nextFocus226},
	{"notifyNewBounds", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)(bool,bool)>(&Component::notifyNewBounds))},
	{"numListening", "(J)I", nullptr, 0},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintAll", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintHeavyweightComponents", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"pointRelativeToComponent", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, 0},
	{"postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_postEvent234},
	{"postsOldMouseEvents", "()Z", nullptr, 0},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_preferredSize236},
	{"prepareImage", "(Ljava/awt/Image;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"prepareImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printAll", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printHeavyweightComponents", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"processComponentEvent", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PROTECTED},
	{"processHierarchyBoundsEvent", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PROTECTED},
	{"processHierarchyEvent", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PROTECTED},
	{"processInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"processMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"processMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)($ObjectInputStream*)>(&Component::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"relocateComponent", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::relocateComponent))},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC},
	{"removeComponentListener", "(Ljava/awt/event/ComponentListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeHierarchyBoundsListener", "(Ljava/awt/event/HierarchyBoundsListener;)V", nullptr, $PUBLIC},
	{"removeHierarchyListener", "(Ljava/awt/event/HierarchyListener;)V", nullptr, $PUBLIC},
	{"removeInputMethodListener", "(Ljava/awt/event/InputMethodListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeKeyListener", "(Ljava/awt/event/KeyListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeMouseListener", "(Ljava/awt/event/MouseListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeMouseMotionListener", "(Ljava/awt/event/MouseMotionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeMouseWheelListener", "(Ljava/awt/event/MouseWheelListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"repaint", "(J)V", nullptr, $PUBLIC},
	{"repaint", "(IIII)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"repaintParentIfNeeded", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)(int32_t,int32_t,int32_t,int32_t)>(&Component::repaintParentIfNeeded))},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Z)Z", nullptr, $PROTECTED},
	{"requestFocus", "(ZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PROTECTED},
	{"requestFocusHelper", "(ZZ)Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)(bool,bool)>(&Component::requestFocusHelper))},
	{"requestFocusHelper", "(ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)(bool,bool,$FocusEvent$Cause*)>(&Component::requestFocusHelper))},
	{"requestFocusInWindow", "()Z", nullptr, $PUBLIC},
	{"requestFocusInWindow", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestFocusInWindow", "(Z)Z", nullptr, $PROTECTED},
	{"requestFocusInWindow", "(ZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, 0},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_reshape282},
	{"reshapeNativePeer", "(IIIII)V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&Component::reshapeNativePeer))},
	{"resize", "(II)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_resize284},
	{"resize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_resize285},
	{"revalidate", "()V", nullptr, $PUBLIC},
	{"revalidateSynchronously", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::revalidateSynchronously))},
	{"setAutoFocusTransferOnDisposal", "(Z)V", nullptr, 0},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setBoundsOp", "(I)V", nullptr, 0},
	{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC},
	{"setFocusTraversalKeysEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocusTraversalKeys_NoIDCheck", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $FINAL, $method(static_cast<void(Component::*)(int32_t,$Set*)>(&Component::setFocusTraversalKeys_NoIDCheck))},
	{"setFocusable", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, 0},
	{"setIgnoreRepaint", "(Z)V", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC},
	{"setLocation", "(II)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setMaximumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setMinimumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setMixingCutoutShape", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setRequestFocusController", "(Lsun/awt/RequestFocusController;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($RequestFocusController*)>(&Component::setRequestFocusController))},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_show317},
	{"show", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_show318},
	{"size", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Component_MethodAnnotations_size319},
	{"subtractAndApplyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $FINAL, $method(static_cast<void(Component::*)($Region*)>(&Component::subtractAndApplyShape))},
	{"subtractAndApplyShapeBelowMe", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::subtractAndApplyShapeBelowMe))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transferFocus", "()V", nullptr, $PUBLIC},
	{"transferFocus", "(Z)Z", nullptr, 0},
	{"transferFocusBackward", "()V", nullptr, $PUBLIC},
	{"transferFocusBackward", "(Z)Z", nullptr, 0},
	{"transferFocusUpCycle", "()V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"updateChildGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, 0},
	{"updateCursorImmediately", "()V", nullptr, $FINAL, $method(static_cast<void(Component::*)()>(&Component::updateCursorImmediately))},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $FINAL, $method(static_cast<bool(Component::*)($GraphicsConfiguration*)>(&Component::updateGraphicsData))},
	{"updateSelfGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Component::*)($GraphicsConfiguration*)>(&Component::updateSelfGraphicsData))},
	{"updateZOrder", "()V", nullptr, 0},
	{"validate", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Component::*)($ObjectOutputStream*)>(&Component::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 166

$InnerClassInfo _Component_InnerClassesInfo_[] = {
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.Component$DummyRequestFocusController", "java.awt.Component", "DummyRequestFocusController", $PRIVATE | $STATIC},
	{"java.awt.Component$SingleBufferStrategy", "java.awt.Component", "SingleBufferStrategy", $PRIVATE},
	{"java.awt.Component$BltSubRegionBufferStrategy", "java.awt.Component", "BltSubRegionBufferStrategy", $PRIVATE},
	{"java.awt.Component$FlipSubRegionBufferStrategy", "java.awt.Component", "FlipSubRegionBufferStrategy", $PRIVATE},
	{"java.awt.Component$BltBufferStrategy", "java.awt.Component", "BltBufferStrategy", $PROTECTED},
	{"java.awt.Component$FlipBufferStrategy", "java.awt.Component", "FlipBufferStrategy", $PROTECTED},
	{"java.awt.Component$ProxyCapabilities", "java.awt.Component", "ProxyCapabilities", $PRIVATE},
	{"java.awt.Component$BaselineResizeBehavior", "java.awt.Component", "BaselineResizeBehavior", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.awt.Component$AWTTreeLock", "java.awt.Component", "AWTTreeLock", $STATIC},
	{"java.awt.Component$3", nullptr, nullptr, 0},
	{"java.awt.Component$2", nullptr, nullptr, 0},
	{"java.awt.Component$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Component_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Component",
	"java.lang.Object",
	"java.awt.image.ImageObserver,java.awt.MenuContainer,java.io.Serializable",
	_Component_FieldInfo_,
	_Component_MethodInfo_,
	nullptr,
	nullptr,
	_Component_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Component$AccessibleAWTComponent,java.awt.Component$AccessibleAWTComponent$AccessibleAWTFocusHandler,java.awt.Component$AccessibleAWTComponent$AccessibleAWTComponentHandler,java.awt.Component$DummyRequestFocusController,java.awt.Component$SingleBufferStrategy,java.awt.Component$BltSubRegionBufferStrategy,java.awt.Component$FlipSubRegionBufferStrategy,java.awt.Component$BltBufferStrategy,java.awt.Component$FlipBufferStrategy,java.awt.Component$ProxyCapabilities,java.awt.Component$BaselineResizeBehavior,java.awt.Component$AWTTreeLock,java.awt.Component$3,java.awt.Component$2,java.awt.Component$1"
};

$Object* allocate$Component($Class* clazz) {
	return $of($alloc(Component));
}

int32_t Component::hashCode() {
	 return this->$ImageObserver::hashCode();
}

bool Component::equals(Object$* arg0) {
	 return this->$ImageObserver::equals(arg0);
}

$Object* Component::clone() {
	 return this->$ImageObserver::clone();
}

void Component::finalize() {
	this->$ImageObserver::finalize();
}

bool Component::$assertionsDisabled = false;
$PlatformLogger* Component::log = nullptr;
$PlatformLogger* Component::eventLog = nullptr;
$PlatformLogger* Component::focusLog = nullptr;
$PlatformLogger* Component::mixingLog = nullptr;
$StringArray* Component::focusTraversalKeyPropertyNames = nullptr;
$Object* Component::LOCK = nullptr;
$String* Component::actionListenerK = nullptr;
$String* Component::adjustmentListenerK = nullptr;
$String* Component::componentListenerK = nullptr;
$String* Component::containerListenerK = nullptr;
$String* Component::focusListenerK = nullptr;
$String* Component::itemListenerK = nullptr;
$String* Component::keyListenerK = nullptr;
$String* Component::mouseListenerK = nullptr;
$String* Component::mouseMotionListenerK = nullptr;
$String* Component::mouseWheelListenerK = nullptr;
$String* Component::textListenerK = nullptr;
$String* Component::ownedWindowK = nullptr;
$String* Component::windowListenerK = nullptr;
$String* Component::inputMethodListenerK = nullptr;
$String* Component::hierarchyListenerK = nullptr;
$String* Component::hierarchyBoundsListenerK = nullptr;
$String* Component::windowStateListenerK = nullptr;
$String* Component::windowFocusListenerK = nullptr;
bool Component::isInc = false;
int32_t Component::incRate = 0;
float Component::TOP_ALIGNMENT = 0.0;
float Component::CENTER_ALIGNMENT = 0.0;
float Component::BOTTOM_ALIGNMENT = 0.0;
float Component::LEFT_ALIGNMENT = 0.0;
float Component::RIGHT_ALIGNMENT = 0.0;
$Map* Component::coalesceMap = nullptr;
$ClassArray* Component::coalesceEventsParams = nullptr;
$RequestFocusController* Component::requestFocusController = nullptr;

$Object* Component::getObjectLock() {
	return $of(this->objectLock);
}

$AccessControlContext* Component::getAccessControlContext() {
	if (this->acc == nullptr) {
		$throwNew($SecurityException, "Component is missing AccessControlContext"_s);
	}
	return this->acc;
}

int32_t Component::getBoundsOp() {
	if (!Component::$assertionsDisabled && !$Thread::holdsLock($(getTreeLock()))) {
		$throwNew($AssertionError);
	}
	return this->boundsOp;
}

void Component::setBoundsOp(int32_t op) {
	if (!Component::$assertionsDisabled && !$Thread::holdsLock($(getTreeLock()))) {
		$throwNew($AssertionError);
	}
	if (op == $ComponentPeer::RESET_OPERATION) {
		this->boundsOp = $ComponentPeer::DEFAULT_OPERATION;
	} else if (this->boundsOp == $ComponentPeer::DEFAULT_OPERATION) {
		this->boundsOp = op;
	}
}

void Component::init$() {
	$set(this, bufferStrategy, nullptr);
	this->ignoreRepaint = false;
	this->visible = true;
	this->enabled = true;
	this->valid = false;
	this->nameExplicitlySet = false;
	this->focusable = true;
	this->isFocusTraversableOverridden$ = Component::FOCUS_TRAVERSABLE_UNKNOWN;
	this->focusTraversalKeysEnabled = true;
	$set(this, acc, $AccessController::getContext());
	$init($ComponentOrientation);
	$set(this, componentOrientation, $ComponentOrientation::UNKNOWN);
	this->newEventsOnly = false;
	this->eventMask = $AWTEvent::INPUT_METHODS_ENABLED_MASK;
	$set(this, objectLock, $new($Object));
	this->isPacked = false;
	this->boundsOp = $ComponentPeer::DEFAULT_OPERATION;
	$set(this, compoundShape, nullptr);
	$set(this, mixingCutoutRegion, nullptr);
	this->isAddNotifyComplete = false;
	this->coalescingEnabled = checkCoalescing();
	this->autoFocusTransferOnDisposal = true;
	this->componentSerializedDataVersion = 4;
	$set(this, accessibleContext, nullptr);
	$set(this, appContext, $AppContext::getAppContext());
}

void Component::initializeFocusTraversalKeys() {
	$set(this, focusTraversalKeys, $new($SetArray, 3));
}

$String* Component::constructComponentName() {
	return nullptr;
}

$String* Component::getName() {
	if (this->name == nullptr && !this->nameExplicitlySet) {
		$synchronized(getObjectLock()) {
			if (this->name == nullptr && !this->nameExplicitlySet) {
				$set(this, name, constructComponentName());
			}
		}
	}
	return this->name;
}

void Component::setName($String* name) {
	$var($String, oldName, nullptr);
	$synchronized(getObjectLock()) {
		$assign(oldName, this->name);
		$set(this, name, name);
		this->nameExplicitlySet = true;
	}
	firePropertyChange("name"_s, $of(oldName), $of(name));
}

$Container* Component::getParent() {
	return getParent_NoClientCode();
}

$Container* Component::getParent_NoClientCode() {
	return this->parent;
}

$Container* Component::getContainer() {
	return getParent_NoClientCode();
}

void Component::setDropTarget($DropTarget* dt) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (dt == this->dropTarget || (this->dropTarget != nullptr && $nc($of(this->dropTarget))->equals(dt))) {
			return;
		}
		$var($DropTarget, old, nullptr);
		if (($assign(old, this->dropTarget)) != nullptr) {
			$nc(this->dropTarget)->removeNotify();
			$var($DropTarget, t, this->dropTarget);
			$set(this, dropTarget, nullptr);
			try {
				$nc(t)->setComponent(nullptr);
			} catch ($IllegalArgumentException& iae) {
			}
		}
		if (($set(this, dropTarget, dt)) != nullptr) {
			try {
				$nc(this->dropTarget)->setComponent(this);
				$nc(this->dropTarget)->addNotify();
			} catch ($IllegalArgumentException& iae) {
				if (old != nullptr) {
					try {
						old->setComponent(this);
						$nc(this->dropTarget)->addNotify();
					} catch ($IllegalArgumentException& iae1) {
					}
				}
			}
		}
	}
}

$DropTarget* Component::getDropTarget() {
	$synchronized(this) {
		return this->dropTarget;
	}
}

$GraphicsConfiguration* Component::getGraphicsConfiguration() {
	return getGraphicsConfiguration_NoClientCode();
}

$GraphicsConfiguration* Component::getGraphicsConfiguration_NoClientCode() {
	return this->graphicsConfig;
}

void Component::setGraphicsConfiguration($GraphicsConfiguration* gc) {
	$synchronized(getTreeLock()) {
		if (updateGraphicsData(gc)) {
			removeNotify();
			addNotify();
		}
	}
}

bool Component::updateGraphicsData($GraphicsConfiguration* gc) {
	$var($GraphicsConfiguration, oldConfig, this->graphicsConfig);
	bool ret = updateSelfGraphicsData(gc);
	ret |= updateChildGraphicsData(gc);
	if (oldConfig != gc) {
		firePropertyChange("graphicsConfiguration"_s, $of(oldConfig), $of(gc));
	}
	return ret;
}

bool Component::updateSelfGraphicsData($GraphicsConfiguration* gc) {
	checkTreeLock();
	if (this->graphicsConfig == gc) {
		return false;
	}
	$set(this, graphicsConfig, gc);
	$var($ComponentPeer, peer, this->peer);
	if (peer != nullptr) {
		return peer->updateGraphicsData(gc);
	}
	return false;
}

bool Component::updateChildGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

void Component::checkGD($String* stringID) {
	$useLocalCurrentObjectStackCache();
	if (this->graphicsConfig != nullptr) {
		if (!$nc($($nc($($nc(this->graphicsConfig)->getDevice()))->getIDstring()))->equals(stringID)) {
			$throwNew($IllegalArgumentException, "adding a container to a container on a different GraphicsDevice"_s);
		}
	}
}

$Object* Component::getTreeLock() {
	return $of(Component::LOCK);
}

void Component::checkTreeLock() {
	if (!$Thread::holdsLock($(getTreeLock()))) {
		$throwNew($IllegalStateException, "This function should be called while holding treeLock"_s);
	}
}

$Toolkit* Component::getToolkit() {
	return getToolkitImpl();
}

$Toolkit* Component::getToolkitImpl() {
	$var($Container, parent, this->parent);
	if (parent != nullptr) {
		return parent->getToolkitImpl();
	}
	return $Toolkit::getDefaultToolkit();
}

$ComponentFactory* Component::getComponentFactory() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, getToolkit());
	if ($instanceOf($ComponentFactory, toolkit)) {
		return $cast($ComponentFactory, toolkit);
	}
	$throwNew($AWTError, $$str({"UI components are unsupported by: "_s, toolkit}));
}

bool Component::isValid() {
	return (this->peer != nullptr) && this->valid;
}

bool Component::isDisplayable() {
	return this->peer != nullptr;
}

bool Component::isVisible() {
	return isVisible_NoClientCode();
}

bool Component::isVisible_NoClientCode() {
	return this->visible;
}

bool Component::isRecursivelyVisible() {
	return this->visible && (this->parent == nullptr || $nc(this->parent)->isRecursivelyVisible());
}

$Rectangle* Component::getRecursivelyVisibleBounds() {
	$useLocalCurrentObjectStackCache();
	$var(Component, container, getContainer());
	$var($Rectangle, bounds, getBounds());
	if (container == nullptr) {
		return bounds;
	}
	$var($Rectangle, parentsBounds, $nc(container)->getRecursivelyVisibleBounds());
	$nc(parentsBounds)->setLocation(0, 0);
	return parentsBounds->intersection(bounds);
}

$Point* Component::pointRelativeToComponent($Point* absolute) {
	$var($Point, compCoords, getLocationOnScreen());
	return $new($Point, $nc(absolute)->x - $nc(compCoords)->x, absolute->y - compCoords->y);
}

Component* Component::findUnderMouseInWindow($PointerInfo* pi) {
	$useLocalCurrentObjectStackCache();
	if (!isShowing()) {
		return nullptr;
	}
	$var($Window, win, getContainingWindow());
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if (!($instanceOf($ComponentFactory, toolkit))) {
		return nullptr;
	}
	if (!$nc($($nc(($cast($ComponentFactory, toolkit)))->getMouseInfoPeer()))->isWindowUnderMouse(win)) {
		return nullptr;
	}
	bool INCLUDE_DISABLED = true;
	$var($Point, relativeToWindow, $nc(win)->pointRelativeToComponent($($nc(pi)->getLocation())));
	$var(Component, inTheSameWindow, win->findComponentAt($nc(relativeToWindow)->x, relativeToWindow->y, INCLUDE_DISABLED));
	return inTheSameWindow;
}

$Point* Component::getMousePosition() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$var($PointerInfo, pi, $cast($PointerInfo, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Component$2, this)))));
	$synchronized(getTreeLock()) {
		$var(Component, inTheSameWindow, findUnderMouseInWindow(pi));
		if (!isSameOrAncestorOf(inTheSameWindow, true)) {
			return nullptr;
		}
		return pointRelativeToComponent($($nc(pi)->getLocation()));
	}
}

bool Component::isSameOrAncestorOf(Component* comp, bool allowChildren) {
	return comp == this;
}

bool Component::isShowing() {
	if (this->visible && (this->peer != nullptr)) {
		$var($Container, parent, this->parent);
		return (parent == nullptr) || $nc(parent)->isShowing();
	}
	return false;
}

bool Component::isEnabled() {
	return isEnabledImpl();
}

bool Component::isEnabledImpl() {
	return this->enabled;
}

void Component::setEnabled(bool b) {
	enable(b);
}

void Component::enable() {
	$useLocalCurrentObjectStackCache();
	if (!this->enabled) {
		$synchronized(getTreeLock()) {
			this->enabled = true;
			$var($ComponentPeer, peer, this->peer);
			if (peer != nullptr) {
				peer->setEnabled(true);
				if (this->visible && !$nc($(getRecursivelyVisibleBounds()))->isEmpty()) {
					updateCursorImmediately();
				}
			}
		}
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ENABLED);
		}
	}
}

void Component::enable(bool b) {
	if (b) {
		enable();
	} else {
		disable();
	}
}

void Component::disable() {
	$useLocalCurrentObjectStackCache();
	if (this->enabled) {
		$KeyboardFocusManager::clearMostRecentFocusOwner(this);
		$synchronized(getTreeLock()) {
			this->enabled = false;
			bool var$1 = isFocusOwner();
			if (!var$1) {
				bool var$2 = containsFocus();
				var$1 = (var$2 && !isLightweight());
			}
			bool var$0 = (var$1);
			if (var$0 && $KeyboardFocusManager::isAutoFocusTransferEnabled()) {
				transferFocus(false);
			}
			$var($ComponentPeer, peer, this->peer);
			if (peer != nullptr) {
				peer->setEnabled(false);
				if (this->visible && !$nc($(getRecursivelyVisibleBounds()))->isEmpty()) {
					updateCursorImmediately();
				}
			}
		}
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ENABLED);
		}
	}
}

bool Component::isDoubleBuffered() {
	return false;
}

void Component::enableInputMethods(bool enable) {
	$useLocalCurrentObjectStackCache();
	if (enable) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHODS_ENABLED_MASK)) != 0) {
			return;
		}
		if (isFocusOwner()) {
			$var($InputContext, inputContext, getInputContext());
			if (inputContext != nullptr) {
				$var($FocusEvent, focusGainedEvent, $new($FocusEvent, this, $FocusEvent::FOCUS_GAINED));
				inputContext->dispatchEvent(focusGainedEvent);
			}
		}
		this->eventMask |= $AWTEvent::INPUT_METHODS_ENABLED_MASK;
	} else {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHODS_ENABLED_MASK)) != 0) {
			$var($InputContext, inputContext, getInputContext());
			if (inputContext != nullptr) {
				inputContext->endComposition();
				inputContext->removeNotify(this);
			}
		}
		this->eventMask &= (uint64_t)~$AWTEvent::INPUT_METHODS_ENABLED_MASK;
	}
}

void Component::setVisible(bool b) {
	show(b);
}

void Component::show() {
	$useLocalCurrentObjectStackCache();
	if (!this->visible) {
		$synchronized(getTreeLock()) {
			this->visible = true;
			mixOnShowing();
			$var($ComponentPeer, peer, this->peer);
			if (peer != nullptr) {
				peer->setVisible(true);
				createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, this, this->parent, $HierarchyEvent::SHOWING_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
				if ($instanceOf($LightweightPeer, peer)) {
					repaint();
				}
				updateCursorImmediately();
			}
			if (this->componentListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::COMPONENT_EVENT_MASK)) {
				$var($ComponentEvent, e, $new($ComponentEvent, this, $ComponentEvent::COMPONENT_SHOWN));
				$nc($($Toolkit::getEventQueue()))->postEvent(e);
			}
		}
		$var($Container, parent, this->parent);
		if (parent != nullptr) {
			parent->invalidate();
		}
	}
}

void Component::show(bool b) {
	if (b) {
		show();
	} else {
		hide();
	}
}

bool Component::containsFocus() {
	return isFocusOwner();
}

void Component::clearMostRecentFocusOwnerOnHide() {
	$KeyboardFocusManager::clearMostRecentFocusOwner(this);
}

void Component::clearCurrentFocusCycleRootOnHide() {
}

void Component::hide() {
	$useLocalCurrentObjectStackCache();
	this->isPacked = false;
	if (this->visible) {
		clearCurrentFocusCycleRootOnHide();
		clearMostRecentFocusOwnerOnHide();
		$synchronized(getTreeLock()) {
			this->visible = false;
			mixOnHiding(isLightweight());
			bool var$0 = containsFocus();
			if (var$0 && $KeyboardFocusManager::isAutoFocusTransferEnabled()) {
				transferFocus(true);
			}
			$var($ComponentPeer, peer, this->peer);
			if (peer != nullptr) {
				peer->setVisible(false);
				createHierarchyEvents($HierarchyEvent::HIERARCHY_CHANGED, this, this->parent, $HierarchyEvent::SHOWING_CHANGED, $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK));
				if ($instanceOf($LightweightPeer, peer)) {
					repaint();
				}
				updateCursorImmediately();
			}
			if (this->componentListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::COMPONENT_EVENT_MASK)) {
				$var($ComponentEvent, e, $new($ComponentEvent, this, $ComponentEvent::COMPONENT_HIDDEN));
				$nc($($Toolkit::getEventQueue()))->postEvent(e);
			}
		}
		$var($Container, parent, this->parent);
		if (parent != nullptr) {
			parent->invalidate();
		}
	}
}

$Color* Component::getForeground() {
	$useLocalCurrentObjectStackCache();
	$var($Color, foreground, this->foreground);
	if (foreground != nullptr) {
		return foreground;
	}
	$var($Container, parent, this->parent);
	return (parent != nullptr) ? $nc(parent)->getForeground() : ($Color*)nullptr;
}

void Component::setForeground($Color* c$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, c$renamed);
	$var($Color, oldColor, this->foreground);
	$var($ComponentPeer, peer, this->peer);
	$set(this, foreground, c);
	if (peer != nullptr) {
		$assign(c, getForeground());
		if (c != nullptr) {
			peer->setForeground(c);
		}
	}
	firePropertyChange("foreground"_s, $of(oldColor), $of(c));
}

bool Component::isForegroundSet() {
	return (this->foreground != nullptr);
}

$Color* Component::getBackground() {
	$useLocalCurrentObjectStackCache();
	$var($Color, background, this->background);
	if (background != nullptr) {
		return background;
	}
	$var($Container, parent, this->parent);
	return (parent != nullptr) ? $nc(parent)->getBackground() : ($Color*)nullptr;
}

void Component::setBackground($Color* c$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, c$renamed);
	$var($Color, oldColor, this->background);
	$var($ComponentPeer, peer, this->peer);
	$set(this, background, c);
	if (peer != nullptr) {
		$assign(c, getBackground());
		if (c != nullptr) {
			peer->setBackground(c);
		}
	}
	firePropertyChange("background"_s, $of(oldColor), $of(c));
}

bool Component::isBackgroundSet() {
	return (this->background != nullptr);
}

$Font* Component::getFont() {
	return getFont_NoClientCode();
}

$Font* Component::getFont_NoClientCode() {
	$useLocalCurrentObjectStackCache();
	$var($Font, font, this->font);
	if (font != nullptr) {
		return font;
	}
	$var($Container, parent, this->parent);
	return (parent != nullptr) ? $nc(parent)->getFont_NoClientCode() : ($Font*)nullptr;
}

void Component::setFont($Font* f$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Font, f, f$renamed);
	$var($Font, oldFont, nullptr);
	$var($Font, newFont, nullptr);
	$synchronized(getTreeLock()) {
		$assign(oldFont, this->font);
		$assign(newFont, ($set(this, font, f)));
		$var($ComponentPeer, peer, this->peer);
		if (peer != nullptr) {
			$assign(f, getFont());
			if (f != nullptr) {
				peer->setFont(f);
				$set(this, peerFont, f);
			}
		}
	}
	firePropertyChange("font"_s, $of(oldFont), $of(newFont));
	if (f != oldFont && (oldFont == nullptr || !$nc(oldFont)->equals(f))) {
		invalidateIfValid();
	}
}

bool Component::isFontSet() {
	return (this->font != nullptr);
}

$Locale* Component::getLocale() {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, this->locale);
	if (locale != nullptr) {
		return locale;
	}
	$var($Container, parent, this->parent);
	if (parent == nullptr) {
		$throwNew($IllegalComponentStateException, "This component must have a parent in order to determine its locale"_s);
	} else {
		return $nc(parent)->getLocale();
	}
}

void Component::setLocale($Locale* l) {
	$var($Locale, oldValue, this->locale);
	$set(this, locale, l);
	firePropertyChange("locale"_s, $of(oldValue), $of(l));
	invalidateIfValid();
}

$ColorModel* Component::getColorModel() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, peer, this->peer);
	if ((peer != nullptr) && !($instanceOf($LightweightPeer, peer))) {
		return peer->getColorModel();
	} else if ($GraphicsEnvironment::isHeadless()) {
		return $ColorModel::getRGBdefault();
	}
	return $nc($(getToolkit()))->getColorModel();
}

$Point* Component::getLocation() {
	return location();
}

$Point* Component::getLocationOnScreen() {
	$synchronized(getTreeLock()) {
		return getLocationOnScreen_NoTreeLock();
	}
}

$Point* Component::getLocationOnScreen_NoTreeLock() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, peer, this->peer);
	if (peer != nullptr && isShowing()) {
		if ($instanceOf($LightweightPeer, peer)) {
			$var($Container, host, getNativeContainer());
			$var($Point, pt, $nc($nc(host)->peer)->getLocationOnScreen());
			{
				$var(Component, c, this);
				for (; !$equals(c, host); $assign(c, c->getContainer())) {
					$nc(pt)->x += $nc(c)->x;
					pt->y += c->y;
				}
			}
			return pt;
		} else {
			$var($Point, pt, peer->getLocationOnScreen());
			return pt;
		}
	} else {
		$throwNew($IllegalComponentStateException, "component must be showing on the screen to determine its location"_s);
	}
}

$Point* Component::location() {
	return location_NoClientCode();
}

$Point* Component::location_NoClientCode() {
	return $new($Point, this->x, this->y);
}

void Component::setLocation(int32_t x, int32_t y) {
	move(x, y);
}

void Component::move(int32_t x, int32_t y) {
	$synchronized(getTreeLock()) {
		setBoundsOp($ComponentPeer::SET_LOCATION);
		setBounds(x, y, this->width, this->height);
	}
}

void Component::setLocation($Point* p) {
	setLocation($nc(p)->x, p->y);
}

$Dimension* Component::getSize() {
	return size();
}

$Dimension* Component::size() {
	return $new($Dimension, this->width, this->height);
}

void Component::setSize(int32_t width, int32_t height) {
	resize(width, height);
}

void Component::resize(int32_t width, int32_t height) {
	$synchronized(getTreeLock()) {
		setBoundsOp($ComponentPeer::SET_SIZE);
		setBounds(this->x, this->y, width, height);
	}
}

void Component::setSize($Dimension* d) {
	resize(d);
}

void Component::resize($Dimension* d) {
	setSize($nc(d)->width, d->height);
}

$Rectangle* Component::getBounds() {
	return bounds();
}

$Rectangle* Component::bounds() {
	return $new($Rectangle, this->x, this->y, this->width, this->height);
}

void Component::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	reshape(x, y, width, height);
}

void Component::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$synchronized(getTreeLock()) {
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				setBoundsOp($ComponentPeer::SET_BOUNDS);
				bool resized = (this->width != width) || (this->height != height);
				bool moved = (this->x != x) || (this->y != y);
				if (!resized && !moved) {
					return$1 = true;
					goto $finally;
				}
				int32_t oldX = this->x;
				int32_t oldY = this->y;
				int32_t oldWidth = this->width;
				int32_t oldHeight = this->height;
				this->x = x;
				this->y = y;
				this->width = width;
				this->height = height;
				if (resized) {
					this->isPacked = false;
				}
				bool needNotify = true;
				mixOnReshaping();
				if (this->peer != nullptr) {
					if (!($instanceOf($LightweightPeer, this->peer))) {
						reshapeNativePeer(x, y, width, height, getBoundsOp());
						resized = (oldWidth != this->width) || (oldHeight != this->height);
						moved = (oldX != this->x) || (oldY != this->y);
						if ($instanceOf($Window, this)) {
							needNotify = false;
						}
					}
					if (resized) {
						invalidate();
					}
					if (this->parent != nullptr) {
						$nc(this->parent)->invalidateIfValid();
					}
				}
				if (needNotify) {
					notifyNewBounds(resized, moved);
				}
				repaintParentIfNeeded(oldX, oldY, oldWidth, oldHeight);
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				setBoundsOp($ComponentPeer::RESET_OPERATION);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
	}
}

void Component::repaintParentIfNeeded(int32_t oldX, int32_t oldY, int32_t oldWidth, int32_t oldHeight) {
	if (this->parent != nullptr && $instanceOf($LightweightPeer, this->peer) && isShowing()) {
		$nc(this->parent)->repaint(oldX, oldY, oldWidth, oldHeight);
		repaint();
	}
}

void Component::reshapeNativePeer(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	int32_t nativeX = x;
	int32_t nativeY = y;
	{
		$var(Component, c, this->parent);
		for (; (c != nullptr) && ($instanceOf($LightweightPeer, c->peer)); $assign(c, $nc(c)->parent)) {
			nativeX += c->x;
			nativeY += c->y;
		}
	}
	$nc(this->peer)->setBounds(nativeX, nativeY, width, height, op);
}

void Component::notifyNewBounds(bool resized, bool moved) {
	$useLocalCurrentObjectStackCache();
	if (this->componentListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::COMPONENT_EVENT_MASK)) {
		if (resized) {
			$var($ComponentEvent, e, $new($ComponentEvent, this, $ComponentEvent::COMPONENT_RESIZED));
			$nc($($Toolkit::getEventQueue()))->postEvent(e);
		}
		if (moved) {
			$var($ComponentEvent, e, $new($ComponentEvent, this, $ComponentEvent::COMPONENT_MOVED));
			$nc($($Toolkit::getEventQueue()))->postEvent(e);
		}
	} else if ($instanceOf($Container, this) && $nc(($cast($Container, this)))->countComponents() > 0) {
		bool enabledOnToolkit = $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK);
		if (resized) {
			$nc(($cast($Container, this)))->createChildHierarchyEvents($HierarchyEvent::ANCESTOR_RESIZED, 0, enabledOnToolkit);
		}
		if (moved) {
			$nc(($cast($Container, this)))->createChildHierarchyEvents($HierarchyEvent::ANCESTOR_MOVED, 0, enabledOnToolkit);
		}
	}
}

void Component::setBounds($Rectangle* r) {
	setBounds($nc(r)->x, r->y, r->width, r->height);
}

int32_t Component::getX() {
	return this->x;
}

int32_t Component::getY() {
	return this->y;
}

int32_t Component::getWidth() {
	return this->width;
}

int32_t Component::getHeight() {
	return this->height;
}

$Rectangle* Component::getBounds($Rectangle* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		int32_t var$1 = getY();
		int32_t var$2 = getWidth();
		return $new($Rectangle, var$0, var$1, var$2, getHeight());
	} else {
		int32_t var$3 = getX();
		int32_t var$4 = getY();
		int32_t var$5 = getWidth();
		$nc(rv)->setBounds(var$3, var$4, var$5, getHeight());
		return rv;
	}
}

$Dimension* Component::getSize($Dimension* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getWidth();
		return $new($Dimension, var$0, getHeight());
	} else {
		int32_t var$1 = getWidth();
		$nc(rv)->setSize(var$1, getHeight());
		return rv;
	}
}

$Point* Component::getLocation($Point* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		return $new($Point, var$0, getY());
	} else {
		int32_t var$1 = getX();
		$nc(rv)->setLocation(var$1, getY());
		return rv;
	}
}

bool Component::isOpaque() {
	if (this->peer == nullptr) {
		return false;
	} else {
		return !isLightweight();
	}
}

bool Component::isLightweight() {
	return $instanceOf($LightweightPeer, this->peer);
}

void Component::setPreferredSize($Dimension* preferredSize) {
	$var($Dimension, old, nullptr);
	if (this->prefSizeSet) {
		$assign(old, this->prefSize);
	} else {
		$assign(old, nullptr);
	}
	$set(this, prefSize, preferredSize);
	this->prefSizeSet = (preferredSize != nullptr);
	firePropertyChange("preferredSize"_s, $of(old), $of(preferredSize));
}

bool Component::isPreferredSizeSet() {
	return this->prefSizeSet;
}

$Dimension* Component::getPreferredSize() {
	return preferredSize();
}

$Dimension* Component::preferredSize() {
	$var($Dimension, dim, this->prefSize);
	bool var$0 = dim == nullptr;
	if (!var$0) {
		bool var$1 = isPreferredSizeSet();
		var$0 = !(var$1 || isValid());
	}
	if (var$0) {
		$synchronized(getTreeLock()) {
			$set(this, prefSize, (this->peer != nullptr) ? $nc(this->peer)->getPreferredSize() : getMinimumSize());
			$assign(dim, this->prefSize);
		}
	}
	return $new($Dimension, dim);
}

void Component::setMinimumSize($Dimension* minimumSize) {
	$var($Dimension, old, nullptr);
	if (this->minSizeSet) {
		$assign(old, this->minSize);
	} else {
		$assign(old, nullptr);
	}
	$set(this, minSize, minimumSize);
	this->minSizeSet = (minimumSize != nullptr);
	firePropertyChange("minimumSize"_s, $of(old), $of(minimumSize));
}

bool Component::isMinimumSizeSet() {
	return this->minSizeSet;
}

$Dimension* Component::getMinimumSize() {
	return minimumSize();
}

$Dimension* Component::minimumSize() {
	$var($Dimension, dim, this->minSize);
	bool var$0 = dim == nullptr;
	if (!var$0) {
		bool var$1 = isMinimumSizeSet();
		var$0 = !(var$1 || isValid());
	}
	if (var$0) {
		$synchronized(getTreeLock()) {
			$set(this, minSize, (this->peer != nullptr) ? $nc(this->peer)->getMinimumSize() : size());
			$assign(dim, this->minSize);
		}
	}
	return $new($Dimension, dim);
}

void Component::setMaximumSize($Dimension* maximumSize) {
	$var($Dimension, old, nullptr);
	if (this->maxSizeSet) {
		$assign(old, this->maxSize);
	} else {
		$assign(old, nullptr);
	}
	$set(this, maxSize, maximumSize);
	this->maxSizeSet = (maximumSize != nullptr);
	firePropertyChange("maximumSize"_s, $of(old), $of(maximumSize));
}

bool Component::isMaximumSizeSet() {
	return this->maxSizeSet;
}

$Dimension* Component::getMaximumSize() {
	if (isMaximumSizeSet()) {
		return $new($Dimension, this->maxSize);
	}
	return $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE);
}

float Component::getAlignmentX() {
	return Component::CENTER_ALIGNMENT;
}

float Component::getAlignmentY() {
	return Component::CENTER_ALIGNMENT;
}

int32_t Component::getBaseline(int32_t width, int32_t height) {
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	return -1;
}

$Component$BaselineResizeBehavior* Component::getBaselineResizeBehavior() {
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

void Component::doLayout() {
	layout();
}

void Component::layout() {
}

void Component::validate() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($ComponentPeer, peer, this->peer);
		bool wasValid = isValid();
		if (!wasValid && peer != nullptr) {
			$var($Font, newfont, getFont());
			$var($Font, oldfont, this->peerFont);
			if (newfont != nullptr && !$Objects::equals(oldfont, newfont)) {
				peer->setFont(newfont);
				$set(this, peerFont, newfont);
			}
			peer->layout();
		}
		this->valid = true;
		if (!wasValid) {
			mixOnValidating();
		}
	}
}

void Component::invalidate() {
	$synchronized(getTreeLock()) {
		this->valid = false;
		if (!isPreferredSizeSet()) {
			$set(this, prefSize, nullptr);
		}
		if (!isMinimumSizeSet()) {
			$set(this, minSize, nullptr);
		}
		if (!isMaximumSizeSet()) {
			$set(this, maxSize, nullptr);
		}
		invalidateParent();
	}
}

void Component::invalidateParent() {
	if (this->parent != nullptr) {
		$nc(this->parent)->invalidateIfValid();
	}
}

void Component::invalidateIfValid() {
	if (isValid()) {
		invalidate();
	}
}

void Component::revalidate() {
	revalidateSynchronously();
}

void Component::revalidateSynchronously() {
	$synchronized(getTreeLock()) {
		invalidate();
		$var($Container, root, getContainer());
		if (root == nullptr) {
			validate();
		} else {
			while (!$nc(root)->isValidateRoot()) {
				if (root->getContainer() == nullptr) {
					break;
				}
				$assign(root, root->getContainer());
			}
			$nc(root)->validate();
		}
	}
}

$Graphics* Component::getGraphics() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($LightweightPeer, this->peer)) {
		if (this->parent == nullptr) {
			return nullptr;
		}
		$var($Graphics, g, $nc(this->parent)->getGraphics());
		if (g == nullptr) {
			return nullptr;
		}
		if ($instanceOf($ConstrainableGraphics, g)) {
			$nc(($cast($ConstrainableGraphics, g)))->constrain(this->x, this->y, this->width, this->height);
		} else {
			$nc(g)->translate(this->x, this->y);
			g->setClip(0, 0, this->width, this->height);
		}
		$nc(g)->setFont($(getFont()));
		return g;
	} else {
		$var($ComponentPeer, peer, this->peer);
		return (peer != nullptr) ? $nc(peer)->getGraphics() : ($Graphics*)nullptr;
	}
}

$Graphics* Component::getGraphics_NoClientCode() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, peer, this->peer);
	if ($instanceOf($LightweightPeer, peer)) {
		$var($Container, parent, this->parent);
		if (parent == nullptr) {
			return nullptr;
		}
		$var($Graphics, g, $nc(parent)->getGraphics_NoClientCode());
		if (g == nullptr) {
			return nullptr;
		}
		if ($instanceOf($ConstrainableGraphics, g)) {
			$nc(($cast($ConstrainableGraphics, g)))->constrain(this->x, this->y, this->width, this->height);
		} else {
			$nc(g)->translate(this->x, this->y);
			g->setClip(0, 0, this->width, this->height);
		}
		$nc(g)->setFont($(getFont_NoClientCode()));
		return g;
	} else {
		return (peer != nullptr) ? $nc(peer)->getGraphics() : ($Graphics*)nullptr;
	}
}

$FontMetrics* Component::getFontMetrics($Font* font) {
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	if ($instanceOf($SunFontManager, fm) && $nc(($cast($SunFontManager, fm)))->usePlatformFontMetrics()) {
		if (this->peer != nullptr && !($instanceOf($LightweightPeer, this->peer))) {
			return $nc(this->peer)->getFontMetrics(font);
		}
	}
	return $FontDesignMetrics::getMetrics(font);
}

void Component::setCursor($Cursor* cursor) {
	$set(this, cursor, cursor);
	updateCursorImmediately();
}

void Component::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($LightweightPeer, this->peer)) {
		$var($Container, nativeContainer, getNativeContainer());
		if (nativeContainer == nullptr) {
			return;
		}
		$var($ComponentPeer, cPeer, $nc(nativeContainer)->peer);
		if (cPeer != nullptr) {
			cPeer->updateCursorImmediately();
		}
	} else if (this->peer != nullptr) {
		$nc(this->peer)->updateCursorImmediately();
	}
}

$Cursor* Component::getCursor() {
	return getCursor_NoClientCode();
}

$Cursor* Component::getCursor_NoClientCode() {
	$useLocalCurrentObjectStackCache();
	$var($Cursor, cursor, this->cursor);
	if (cursor != nullptr) {
		return cursor;
	}
	$var($Container, parent, this->parent);
	if (parent != nullptr) {
		return parent->getCursor_NoClientCode();
	} else {
		return $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR);
	}
}

bool Component::isCursorSet() {
	return (this->cursor != nullptr);
}

void Component::paint($Graphics* g) {
}

void Component::update($Graphics* g) {
	paint(g);
}

void Component::paintAll($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isShowing()) {
		$var($Rectangle, var$0, $new($Rectangle, 0, 0, this->width, this->height));
		$var($Graphics, var$1, g);
		$nc($($GraphicsCallback$PeerPaintCallback::getInstance()))->runOneComponent(this, var$0, var$1, $($nc(g)->getClip()), $GraphicsCallback::LIGHTWEIGHTS | $GraphicsCallback::HEAVYWEIGHTS);
	}
}

void Component::lightweightPaint($Graphics* g) {
	paint(g);
}

void Component::paintHeavyweightComponents($Graphics* g) {
}

void Component::repaint() {
	repaint(0, 0, 0, this->width, this->height);
}

void Component::repaint(int64_t tm) {
	repaint(tm, 0, 0, this->width, this->height);
}

void Component::repaint(int32_t x, int32_t y, int32_t width, int32_t height) {
	repaint(0, x, y, width, height);
}

void Component::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($LightweightPeer, this->peer)) {
		if (this->parent != nullptr) {
			if (x < 0) {
				width += x;
				x = 0;
			}
			if (y < 0) {
				height += y;
				y = 0;
			}
			int32_t pwidth = (width > this->width) ? this->width : width;
			int32_t pheight = (height > this->height) ? this->height : height;
			if (pwidth <= 0 || pheight <= 0) {
				return;
			}
			int32_t px = this->x + x;
			int32_t py = this->y + y;
			$nc(this->parent)->repaint(tm, px, py, pwidth, pheight);
		}
	} else if (isVisible() && (this->peer != nullptr) && (width > 0) && (height > 0)) {
		$var($PaintEvent, e, $new($PaintEvent, this, $PaintEvent::UPDATE, $$new($Rectangle, x, y, width, height)));
		$SunToolkit::postEvent($($SunToolkit::targetToAppContext(this)), e);
	}
}

void Component::print($Graphics* g) {
	paint(g);
}

void Component::printAll($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isShowing()) {
		$var($Rectangle, var$0, $new($Rectangle, 0, 0, this->width, this->height));
		$var($Graphics, var$1, g);
		$nc($($GraphicsCallback$PeerPrintCallback::getInstance()))->runOneComponent(this, var$0, var$1, $($nc(g)->getClip()), $GraphicsCallback::LIGHTWEIGHTS | $GraphicsCallback::HEAVYWEIGHTS);
	}
}

void Component::lightweightPrint($Graphics* g) {
	print(g);
}

void Component::printHeavyweightComponents($Graphics* g) {
}

$Insets* Component::getInsets_NoClientCode() {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, peer, this->peer);
	if ($instanceOf($ContainerPeer, peer)) {
		return $cast($Insets, $nc($($nc(($cast($ContainerPeer, peer)))->getInsets()))->clone());
	}
	return $new($Insets, 0, 0, 0, 0);
}

bool Component::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t rate = -1;
	if (((int32_t)(infoflags & (uint32_t)($ImageObserver::FRAMEBITS | $ImageObserver::ALLBITS))) != 0) {
		rate = 0;
	} else if (((int32_t)(infoflags & (uint32_t)$ImageObserver::SOMEBITS)) != 0) {
		if (Component::isInc) {
			rate = Component::incRate;
			if (rate < 0) {
				rate = 0;
			}
		}
	}
	if (rate >= 0) {
		repaint(rate, 0, 0, this->width, this->height);
	}
	return ((int32_t)(infoflags & (uint32_t)($ImageObserver::ALLBITS | $ImageObserver::ABORT))) == 0;
}

$Image* Component::createImage($ImageProducer* producer) {
	return $nc($(getToolkit()))->createImage(producer);
}

$Image* Component::createImage(int32_t width, int32_t height) {
	$var($ComponentPeer, peer, this->peer);
	if ($instanceOf($LightweightPeer, peer)) {
		if (this->parent != nullptr) {
			return $nc(this->parent)->createImage(width, height);
		} else {
			return nullptr;
		}
	} else {
		return (peer != nullptr) ? $nc(peer)->createImage(width, height) : ($Image*)nullptr;
	}
}

$VolatileImage* Component::createVolatileImage(int32_t width, int32_t height) {
	$var($ComponentPeer, peer, this->peer);
	if ($instanceOf($LightweightPeer, peer)) {
		if (this->parent != nullptr) {
			return $nc(this->parent)->createVolatileImage(width, height);
		} else {
			return nullptr;
		}
	} else {
		return (peer != nullptr) ? $nc(peer)->createVolatileImage(width, height) : ($VolatileImage*)nullptr;
	}
}

$VolatileImage* Component::createVolatileImage(int32_t width, int32_t height, $ImageCapabilities* caps) {
	return createVolatileImage(width, height);
}

bool Component::prepareImage($Image* image, $ImageObserver* observer) {
	return prepareImage(image, -1, -1, observer);
}

bool Component::prepareImage($Image* image, int32_t width, int32_t height, $ImageObserver* observer) {
	return $nc($(getToolkit()))->prepareImage(image, width, height, observer);
}

int32_t Component::checkImage($Image* image, $ImageObserver* observer) {
	return checkImage(image, -1, -1, observer);
}

int32_t Component::checkImage($Image* image, int32_t width, int32_t height, $ImageObserver* observer) {
	return $nc($(getToolkit()))->checkImage(image, width, height, observer);
}

void Component::createBufferStrategy(int32_t numBuffers) {
	$useLocalCurrentObjectStackCache();
	$var($BufferCapabilities, bufferCaps, nullptr);
	if (numBuffers > 1) {
		$var($ImageCapabilities, var$0, $new($ImageCapabilities, true));
		$init($BufferCapabilities$FlipContents);
		$assign(bufferCaps, $new($BufferCapabilities, var$0, $$new($ImageCapabilities, true), $BufferCapabilities$FlipContents::UNDEFINED));
		try {
			createBufferStrategy(numBuffers, bufferCaps);
			return;
		} catch ($AWTException& e) {
		}
	}
	$var($ImageCapabilities, var$1, $new($ImageCapabilities, true));
	$assign(bufferCaps, $new($BufferCapabilities, var$1, $$new($ImageCapabilities, true), nullptr));
	try {
		createBufferStrategy(numBuffers, bufferCaps);
		return;
	} catch ($AWTException& e) {
	}
	$var($ImageCapabilities, var$2, $new($ImageCapabilities, false));
	$assign(bufferCaps, $new($BufferCapabilities, var$2, $$new($ImageCapabilities, false), nullptr));
	try {
		createBufferStrategy(numBuffers, bufferCaps);
		return;
	} catch ($AWTException& e) {
		$throwNew($InternalError, "Could not create a buffer strategy"_s, e);
	}
}

void Component::createBufferStrategy(int32_t numBuffers, $BufferCapabilities* caps$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferCapabilities, caps, caps$renamed);
	if (numBuffers < 1) {
		$throwNew($IllegalArgumentException, "Number of buffers must be at least 1"_s);
	}
	if (caps == nullptr) {
		$throwNew($IllegalArgumentException, "No capabilities specified"_s);
	}
	if (this->bufferStrategy != nullptr) {
		$nc(this->bufferStrategy)->dispose();
	}
	if (numBuffers == 1) {
		$set(this, bufferStrategy, $new($Component$SingleBufferStrategy, this, caps));
	} else {
		$var($SunGraphicsEnvironment, sge, $cast($SunGraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
		bool var$0 = !$nc(caps)->isPageFlipping();
		if (var$0 && $nc(sge)->isFlipStrategyPreferred(this->peer)) {
			$assign(caps, $new($Component$ProxyCapabilities, this, caps));
		}
		if ($nc(caps)->isPageFlipping()) {
			$set(this, bufferStrategy, $new($Component$FlipSubRegionBufferStrategy, this, numBuffers, caps));
		} else {
			$set(this, bufferStrategy, $new($Component$BltSubRegionBufferStrategy, this, numBuffers, caps));
		}
	}
}

$BufferStrategy* Component::getBufferStrategy() {
	return this->bufferStrategy;
}

$Image* Component::getBackBuffer() {
	$useLocalCurrentObjectStackCache();
	if (this->bufferStrategy != nullptr) {
		if ($instanceOf($Component$BltBufferStrategy, this->bufferStrategy)) {
			$var($Component$BltBufferStrategy, bltBS, $cast($Component$BltBufferStrategy, this->bufferStrategy));
			return $nc(bltBS)->getBackBuffer();
		} else if ($instanceOf($Component$FlipBufferStrategy, this->bufferStrategy)) {
			$var($Component$FlipBufferStrategy, flipBS, $cast($Component$FlipBufferStrategy, this->bufferStrategy));
			return $nc(flipBS)->getBackBuffer();
		}
	}
	return nullptr;
}

void Component::setIgnoreRepaint(bool ignoreRepaint) {
	this->ignoreRepaint = ignoreRepaint;
}

bool Component::getIgnoreRepaint() {
	return this->ignoreRepaint;
}

bool Component::contains(int32_t x, int32_t y) {
	return inside(x, y);
}

bool Component::inside(int32_t x, int32_t y) {
	return (x >= 0) && (x < this->width) && (y >= 0) && (y < this->height);
}

bool Component::contains($Point* p) {
	return contains($nc(p)->x, p->y);
}

Component* Component::getComponentAt(int32_t x, int32_t y) {
	return locate(x, y);
}

Component* Component::locate(int32_t x, int32_t y) {
	return contains(x, y) ? this : (Component*)nullptr;
}

Component* Component::getComponentAt($Point* p) {
	return getComponentAt($nc(p)->x, p->y);
}

void Component::deliverEvent($Event* e) {
	postEvent(e);
}

void Component::dispatchEvent($AWTEvent* e) {
	dispatchEventImpl(e);
}

void Component::dispatchEventImpl($AWTEvent* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEvent, e, e$renamed);
	int32_t id = $nc(e)->getID();
	$var($AppContext, compContext, this->appContext);
	if (compContext != nullptr && !$of(compContext)->equals($($AppContext::getAppContext()))) {
		$init($PlatformLogger$Level);
		if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::eventLog)->fine($$str({"Event "_s, e, " is being dispatched on the wrong AppContext"_s}));
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(Component::eventLog)->finest("{0}"_s, $$new($ObjectArray, {$of(e)}));
	}
	if (!($instanceOf($KeyEvent, e))) {
		$EventQueue::setCurrentEventAndMostRecentTime(e);
	}
	if ($instanceOf($SunDropTargetEvent, e)) {
		$nc(($cast($SunDropTargetEvent, e)))->dispatch();
		return;
	}
	if (!e->focusManagerIsDispatching) {
		if (e->isPosted) {
			$assign(e, $KeyboardFocusManager::retargetFocusEvent(e));
			$nc(e)->isPosted = true;
		}
		if ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->dispatchEvent(e)) {
			return;
		}
	}
	if (($instanceOf($FocusEvent, e)) && $nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(Component::focusLog)->finest($$str({""_s, e}));
	}
	bool var$1 = id == $MouseEvent::MOUSE_WHEEL && (!eventTypeEnabled(id));
	bool var$0 = var$1 && (this->peer != nullptr && !$nc(this->peer)->handlesWheelScrolling());
	if (var$0 && (dispatchMouseWheelToAncestor($cast($MouseWheelEvent, e)))) {
		return;
	}
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$nc(toolkit)->notifyAWTEventListeners(e);
	if (!e->isConsumed()) {
		if ($instanceOf($KeyEvent, e)) {
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->processKeyEvent(this, $cast($KeyEvent, e));
			if (e->isConsumed()) {
				return;
			}
		}
	}
	if (areInputMethodsEnabled()) {
		if ((($instanceOf($InputMethodEvent, e)) && !($instanceOf($CompositionArea, this))) || ($instanceOf($InputEvent, e)) || ($instanceOf($FocusEvent, e))) {
			$var($InputContext, inputContext, getInputContext());
			if (inputContext != nullptr) {
				inputContext->dispatchEvent(e);
				if (e->isConsumed()) {
					if (($instanceOf($FocusEvent, e)) && $nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(Component::focusLog)->finest($$str({"3579: Skipping "_s, e}));
					}
					return;
				}
			}
		}
	} else if (id == $FocusEvent::FOCUS_GAINED) {
		$var($InputContext, inputContext, getInputContext());
		if (inputContext != nullptr && $instanceOf($1InputContext, inputContext)) {
			$nc(($cast($1InputContext, inputContext)))->disableNativeIM();
		}
	}
	{
		$var($Container, p, nullptr)
		switch (id) {
		case $KeyEvent::KEY_PRESSED:
			{}
		case $KeyEvent::KEY_RELEASED:
			{
				$assign(p, ($cast($Container, (($instanceOf($Container, this)) ? this : static_cast<Component*>(this->parent)))));
				if (p != nullptr) {
					p->preProcessKeyEvent($cast($KeyEvent, e));
					if (e->isConsumed()) {
						if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
							$nc(Component::focusLog)->finest("Pre-process consumed event"_s);
						}
						return;
					}
				}
				break;
			}
		default:
			{
				break;
			}
		}
	}
	if (this->newEventsOnly) {
		if (eventEnabled(e)) {
			processEvent(e);
		}
	} else if (id == $MouseEvent::MOUSE_WHEEL) {
		autoProcessMouseWheel($cast($MouseWheelEvent, e));
	} else if (!($instanceOf($MouseEvent, e) && !postsOldMouseEvents())) {
		$var($Event, olde, e->convertToOld());
		if (olde != nullptr) {
			int32_t key = olde->key;
			int32_t modifiers = olde->modifiers;
			postEvent(olde);
			if (olde->isConsumed()) {
				e->consume();
			}
			switch (olde->id) {
			case $Event::KEY_PRESS:
				{}
			case $Event::KEY_RELEASE:
				{}
			case $Event::KEY_ACTION:
				{}
			case $Event::KEY_ACTION_RELEASE:
				{
					if (olde->key != key) {
						$nc(($cast($KeyEvent, e)))->setKeyChar(olde->getKeyEventChar());
					}
					if (olde->modifiers != modifiers) {
						$nc(($cast($KeyEvent, e)))->setModifiers(olde->modifiers);
					}
					break;
				}
			default:
				{
					break;
				}
			}
		}
	}
	if (!($instanceOf($KeyEvent, e))) {
		$var($ComponentPeer, tpeer, this->peer);
		if ($instanceOf($FocusEvent, e) && (tpeer == nullptr || $instanceOf($LightweightPeer, tpeer))) {
			$var(Component, source, $cast(Component, e->getSource()));
			if (source != nullptr) {
				$var($Container, target, source->getNativeContainer());
				if (target != nullptr) {
					$assign(tpeer, target->peer);
				}
			}
		}
		if (tpeer != nullptr) {
			tpeer->handleEvent(e);
		}
	}
	if ($SunToolkit::isTouchKeyboardAutoShowEnabled() && ($instanceOf($SunToolkit, toolkit)) && (($instanceOf($MouseEvent, e)) || ($instanceOf($FocusEvent, e)))) {
		$nc(($cast($SunToolkit, toolkit)))->showOrHideTouchKeyboard(this, e);
	}
}

void Component::autoProcessMouseWheel($MouseWheelEvent* e) {
}

bool Component::dispatchMouseWheelToAncestor($MouseWheelEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t newX = 0;
	int32_t newY = 0;
	int32_t var$0 = $nc(e)->getX();
	newX = var$0 + getX();
	int32_t var$1 = e->getY();
	newY = var$1 + getY();
	$var($MouseWheelEvent, newMWE, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(Component::eventLog)->finest("dispatchMouseWheelToAncestor"_s);
		$nc(Component::eventLog)->finest($$str({"orig event src is of "_s, $nc($of($(e->getSource())))->getClass()}));
	}
	$synchronized(getTreeLock()) {
		$var($Container, anc, getParent());
		while (anc != nullptr && !anc->eventEnabled(e)) {
			newX += anc->getX();
			newY += anc->getY();
			if (!($instanceOf($Window, anc))) {
				$assign(anc, anc->getParent());
			} else {
				break;
			}
		}
		if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::eventLog)->finest($$str({"new event src is "_s, $nc($of(anc))->getClass()}));
		}
		if (anc != nullptr && anc->eventEnabled(e)) {
			$var(Component, var$2, static_cast<Component*>(anc));
			int32_t var$3 = e->getID();
			int64_t var$4 = e->getWhen();
			int32_t var$5 = e->getModifiers();
			int32_t var$6 = newX;
			int32_t var$7 = newY;
			int32_t var$8 = e->getXOnScreen();
			int32_t var$9 = e->getYOnScreen();
			int32_t var$10 = e->getClickCount();
			bool var$11 = e->isPopupTrigger();
			int32_t var$12 = e->getScrollType();
			int32_t var$13 = e->getScrollAmount();
			int32_t var$14 = e->getWheelRotation();
			$assign(newMWE, $new($MouseWheelEvent, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, var$14, e->getPreciseWheelRotation()));
			$nc((static_cast<$AWTEvent*>(e)))->copyPrivateDataInto(newMWE);
			anc->dispatchEventToSelf(newMWE);
			if (newMWE->isConsumed()) {
				e->consume();
			}
			return true;
		}
	}
	return false;
}

bool Component::areInputMethodsEnabled() {
	return (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHODS_ENABLED_MASK)) != 0) && (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::KEY_EVENT_MASK)) != 0 || this->keyListener != nullptr);
}

bool Component::eventEnabled($AWTEvent* e) {
	return eventTypeEnabled($nc(e)->id);
}

bool Component::eventTypeEnabled(int32_t type) {
	switch (type) {
	case $ComponentEvent::COMPONENT_MOVED:
		{}
	case $ComponentEvent::COMPONENT_RESIZED:
		{}
	case $ComponentEvent::COMPONENT_SHOWN:
		{}
	case $ComponentEvent::COMPONENT_HIDDEN:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::COMPONENT_EVENT_MASK)) != 0 || this->componentListener != nullptr) {
				return true;
			}
			break;
		}
	case $FocusEvent::FOCUS_GAINED:
		{}
	case $FocusEvent::FOCUS_LOST:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::FOCUS_EVENT_MASK)) != 0 || this->focusListener != nullptr) {
				return true;
			}
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		{}
	case $KeyEvent::KEY_RELEASED:
		{}
	case $KeyEvent::KEY_TYPED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::KEY_EVENT_MASK)) != 0 || this->keyListener != nullptr) {
				return true;
			}
			break;
		}
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_CLICKED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0 || this->mouseListener != nullptr) {
				return true;
			}
			break;
		}
	case $MouseEvent::MOUSE_MOVED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_MOTION_EVENT_MASK)) != 0 || this->mouseMotionListener != nullptr) {
				return true;
			}
			break;
		}
	case $MouseEvent::MOUSE_WHEEL:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_WHEEL_EVENT_MASK)) != 0 || this->mouseWheelListener != nullptr) {
				return true;
			}
			break;
		}
	case $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED:
		{}
	case $InputMethodEvent::CARET_POSITION_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHOD_EVENT_MASK)) != 0 || this->inputMethodListener != nullptr) {
				return true;
			}
			break;
		}
	case $HierarchyEvent::HIERARCHY_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 || this->hierarchyListener != nullptr) {
				return true;
			}
			break;
		}
	case $HierarchyEvent::ANCESTOR_MOVED:
		{}
	case $HierarchyEvent::ANCESTOR_RESIZED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 || this->hierarchyBoundsListener != nullptr) {
				return true;
			}
			break;
		}
	case $ActionEvent::ACTION_PERFORMED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0) {
				return true;
			}
			break;
		}
	case $TextEvent::TEXT_VALUE_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::TEXT_EVENT_MASK)) != 0) {
				return true;
			}
			break;
		}
	case $ItemEvent::ITEM_STATE_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0) {
				return true;
			}
			break;
		}
	case $AdjustmentEvent::ADJUSTMENT_VALUE_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ADJUSTMENT_EVENT_MASK)) != 0) {
				return true;
			}
			break;
		}
	default:
		{
			break;
		}
	}
	if (type > $AWTEvent::RESERVED_ID_MAX) {
		return true;
	}
	return false;
}

bool Component::postEvent($Event* e) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentPeer, peer, this->peer);
	if (handleEvent(e)) {
		$nc(e)->consume();
		return true;
	}
	$var(Component, parent, this->parent);
	int32_t eventx = $nc(e)->x;
	int32_t eventy = e->y;
	if (parent != nullptr) {
		e->translate(this->x, this->y);
		if (parent->postEvent(e)) {
			e->consume();
			return true;
		}
		e->x = eventx;
		e->y = eventy;
	}
	return false;
}

void Component::addComponentListener($ComponentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, componentListener, $AWTEventMulticaster::add(this->componentListener, l));
		this->newEventsOnly = true;
	}
}

void Component::removeComponentListener($ComponentListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, componentListener, $AWTEventMulticaster::remove(this->componentListener, l));
	}
}

$ComponentListenerArray* Component::getComponentListeners() {
	$synchronized(this) {
		$load($ComponentListener);
		return $fcast($ComponentListenerArray, getListeners($ComponentListener::class$));
	}
}

void Component::addFocusListener($FocusListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, focusListener, $AWTEventMulticaster::add(this->focusListener, l));
		this->newEventsOnly = true;
		if ($instanceOf($LightweightPeer, this->peer)) {
			$nc(this->parent)->proxyEnableEvents($AWTEvent::FOCUS_EVENT_MASK);
		}
	}
}

void Component::removeFocusListener($FocusListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, focusListener, $AWTEventMulticaster::remove(this->focusListener, l));
	}
}

$FocusListenerArray* Component::getFocusListeners() {
	$synchronized(this) {
		$load($FocusListener);
		return $fcast($FocusListenerArray, getListeners($FocusListener::class$));
	}
}

void Component::addHierarchyListener($HierarchyListener* l) {
	if (l == nullptr) {
		return;
	}
	bool notifyAncestors = false;
	$synchronized(this) {
		notifyAncestors = (this->hierarchyListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) == 0);
		$set(this, hierarchyListener, $AWTEventMulticaster::add(this->hierarchyListener, l));
		notifyAncestors = (notifyAncestors && this->hierarchyListener != nullptr);
		this->newEventsOnly = true;
	}
	if (notifyAncestors) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent($AWTEvent::HIERARCHY_EVENT_MASK, 1);
		}
	}
}

void Component::removeHierarchyListener($HierarchyListener* l) {
	if (l == nullptr) {
		return;
	}
	bool notifyAncestors = false;
	$synchronized(this) {
		notifyAncestors = (this->hierarchyListener != nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) == 0);
		$set(this, hierarchyListener, $AWTEventMulticaster::remove(this->hierarchyListener, l));
		notifyAncestors = (notifyAncestors && this->hierarchyListener == nullptr);
	}
	if (notifyAncestors) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent($AWTEvent::HIERARCHY_EVENT_MASK, -1);
		}
	}
}

$HierarchyListenerArray* Component::getHierarchyListeners() {
	$synchronized(this) {
		$load($HierarchyListener);
		return $fcast($HierarchyListenerArray, getListeners($HierarchyListener::class$));
	}
}

void Component::addHierarchyBoundsListener($HierarchyBoundsListener* l) {
	if (l == nullptr) {
		return;
	}
	bool notifyAncestors = false;
	$synchronized(this) {
		notifyAncestors = (this->hierarchyBoundsListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) == 0);
		$set(this, hierarchyBoundsListener, $AWTEventMulticaster::add(this->hierarchyBoundsListener, l));
		notifyAncestors = (notifyAncestors && this->hierarchyBoundsListener != nullptr);
		this->newEventsOnly = true;
	}
	if (notifyAncestors) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, 1);
		}
	}
}

void Component::removeHierarchyBoundsListener($HierarchyBoundsListener* l) {
	if (l == nullptr) {
		return;
	}
	bool notifyAncestors = false;
	$synchronized(this) {
		notifyAncestors = (this->hierarchyBoundsListener != nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) == 0);
		$set(this, hierarchyBoundsListener, $AWTEventMulticaster::remove(this->hierarchyBoundsListener, l));
		notifyAncestors = (notifyAncestors && this->hierarchyBoundsListener == nullptr);
	}
	if (notifyAncestors) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent($AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK, -1);
		}
	}
}

int32_t Component::numListening(int64_t mask) {
	$init($PlatformLogger$Level);
	if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
		if ((mask != $AWTEvent::HIERARCHY_EVENT_MASK) && (mask != $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) {
			$nc(Component::eventLog)->fine("Assertion failed"_s);
		}
	}
	if ((mask == $AWTEvent::HIERARCHY_EVENT_MASK && (this->hierarchyListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0)) || (mask == $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK && (this->hierarchyBoundsListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0))) {
		return 1;
	} else {
		return 0;
	}
}

int32_t Component::countHierarchyMembers() {
	return 1;
}

int32_t Component::createHierarchyEvents(int32_t id, Component* changed, $Container* changedParent, int64_t changeFlags, bool enabledOnToolkit) {
	$useLocalCurrentObjectStackCache();
	switch (id) {
	case $HierarchyEvent::HIERARCHY_CHANGED:
		{
			if (this->hierarchyListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 || enabledOnToolkit) {
				$var($HierarchyEvent, e, $new($HierarchyEvent, this, id, changed, changedParent, changeFlags));
				dispatchEvent(e);
				return 1;
			}
			break;
		}
	case $HierarchyEvent::ANCESTOR_MOVED:
		{}
	case $HierarchyEvent::ANCESTOR_RESIZED:
		{
			$init($PlatformLogger$Level);
			if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
				if (changeFlags != 0) {
					$nc(Component::eventLog)->fine("Assertion (changeFlags == 0) failed"_s);
				}
			}
			if (this->hierarchyBoundsListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 || enabledOnToolkit) {
				$var($HierarchyEvent, e, $new($HierarchyEvent, this, id, changed, changedParent));
				dispatchEvent(e);
				return 1;
			}
			break;
		}
	default:
		{
			$init($PlatformLogger$Level);
			if ($nc(Component::eventLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(Component::eventLog)->fine("This code must never be reached"_s);
			}
			break;
		}
	}
	return 0;
}

$HierarchyBoundsListenerArray* Component::getHierarchyBoundsListeners() {
	$synchronized(this) {
		$load($HierarchyBoundsListener);
		return $fcast($HierarchyBoundsListenerArray, getListeners($HierarchyBoundsListener::class$));
	}
}

void Component::adjustListeningChildrenOnParent(int64_t mask, int32_t num) {
	if (this->parent != nullptr) {
		$nc(this->parent)->adjustListeningChildren(mask, num);
	}
}

void Component::addKeyListener($KeyListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, keyListener, $AWTEventMulticaster::add(this->keyListener, l));
		this->newEventsOnly = true;
		if ($instanceOf($LightweightPeer, this->peer)) {
			$nc(this->parent)->proxyEnableEvents($AWTEvent::KEY_EVENT_MASK);
		}
	}
}

void Component::removeKeyListener($KeyListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, keyListener, $AWTEventMulticaster::remove(this->keyListener, l));
	}
}

$KeyListenerArray* Component::getKeyListeners() {
	$synchronized(this) {
		$load($KeyListener);
		return $fcast($KeyListenerArray, getListeners($KeyListener::class$));
	}
}

void Component::addMouseListener($MouseListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseListener, $AWTEventMulticaster::add(this->mouseListener, l));
		this->newEventsOnly = true;
		if ($instanceOf($LightweightPeer, this->peer)) {
			$nc(this->parent)->proxyEnableEvents($AWTEvent::MOUSE_EVENT_MASK);
		}
	}
}

void Component::removeMouseListener($MouseListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseListener, $AWTEventMulticaster::remove(this->mouseListener, l));
	}
}

$MouseListenerArray* Component::getMouseListeners() {
	$synchronized(this) {
		$load($MouseListener);
		return $fcast($MouseListenerArray, getListeners($MouseListener::class$));
	}
}

void Component::addMouseMotionListener($MouseMotionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseMotionListener, $AWTEventMulticaster::add(this->mouseMotionListener, l));
		this->newEventsOnly = true;
		if ($instanceOf($LightweightPeer, this->peer)) {
			$nc(this->parent)->proxyEnableEvents($AWTEvent::MOUSE_MOTION_EVENT_MASK);
		}
	}
}

void Component::removeMouseMotionListener($MouseMotionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseMotionListener, $AWTEventMulticaster::remove(this->mouseMotionListener, l));
	}
}

$MouseMotionListenerArray* Component::getMouseMotionListeners() {
	$synchronized(this) {
		$load($MouseMotionListener);
		return $fcast($MouseMotionListenerArray, getListeners($MouseMotionListener::class$));
	}
}

void Component::addMouseWheelListener($MouseWheelListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseWheelListener, $AWTEventMulticaster::add(this->mouseWheelListener, l));
		this->newEventsOnly = true;
		if ($instanceOf($LightweightPeer, this->peer)) {
			$nc(this->parent)->proxyEnableEvents($AWTEvent::MOUSE_WHEEL_EVENT_MASK);
		}
	}
}

void Component::removeMouseWheelListener($MouseWheelListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, mouseWheelListener, $AWTEventMulticaster::remove(this->mouseWheelListener, l));
	}
}

$MouseWheelListenerArray* Component::getMouseWheelListeners() {
	$synchronized(this) {
		$load($MouseWheelListener);
		return $fcast($MouseWheelListenerArray, getListeners($MouseWheelListener::class$));
	}
}

void Component::addInputMethodListener($InputMethodListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, inputMethodListener, $AWTEventMulticaster::add(this->inputMethodListener, l));
		this->newEventsOnly = true;
	}
}

void Component::removeInputMethodListener($InputMethodListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, inputMethodListener, $AWTEventMulticaster::remove(this->inputMethodListener, l));
	}
}

$InputMethodListenerArray* Component::getInputMethodListeners() {
	$synchronized(this) {
		$load($InputMethodListener);
		return $fcast($InputMethodListenerArray, getListeners($InputMethodListener::class$));
	}
}

$EventListenerArray* Component::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ComponentListener);
	if (listenerType == $ComponentListener::class$) {
		$assign(l, this->componentListener);
	} else {
		$load($FocusListener);
		if (listenerType == $FocusListener::class$) {
			$assign(l, this->focusListener);
		} else {
			$load($HierarchyListener);
			if (listenerType == $HierarchyListener::class$) {
				$assign(l, this->hierarchyListener);
			} else {
				$load($HierarchyBoundsListener);
				if (listenerType == $HierarchyBoundsListener::class$) {
					$assign(l, this->hierarchyBoundsListener);
				} else {
					$load($KeyListener);
					if (listenerType == $KeyListener::class$) {
						$assign(l, this->keyListener);
					} else {
						$load($MouseListener);
						if (listenerType == $MouseListener::class$) {
							$assign(l, this->mouseListener);
						} else {
							$load($MouseMotionListener);
							if (listenerType == $MouseMotionListener::class$) {
								$assign(l, this->mouseMotionListener);
							} else {
								$load($MouseWheelListener);
								if (listenerType == $MouseWheelListener::class$) {
									$assign(l, this->mouseWheelListener);
								} else {
									$load($InputMethodListener);
									if (listenerType == $InputMethodListener::class$) {
										$assign(l, this->inputMethodListener);
									} else {
										$load($PropertyChangeListener);
										if (listenerType == $PropertyChangeListener::class$) {
											return $fcast($EventListenerArray, getPropertyChangeListeners());
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

$InputMethodRequests* Component::getInputMethodRequests() {
	return nullptr;
}

$InputContext* Component::getInputContext() {
	$var($Container, parent, this->parent);
	if (parent == nullptr) {
		return nullptr;
	} else {
		return $nc(parent)->getInputContext();
	}
}

void Component::enableEvents(int64_t eventsToEnable) {
	int64_t notifyAncestors = 0;
	$synchronized(this) {
		if (((int64_t)(eventsToEnable & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 && this->hierarchyListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) == 0) {
			notifyAncestors |= $AWTEvent::HIERARCHY_EVENT_MASK;
		}
		if (((int64_t)(eventsToEnable & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 && this->hierarchyBoundsListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) == 0) {
			notifyAncestors |= $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK;
		}
		this->eventMask |= eventsToEnable;
		this->newEventsOnly = true;
	}
	if ($instanceOf($LightweightPeer, this->peer)) {
		$nc(this->parent)->proxyEnableEvents(this->eventMask);
	}
	if (notifyAncestors != 0) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent(notifyAncestors, 1);
		}
	}
}

void Component::disableEvents(int64_t eventsToDisable) {
	int64_t notifyAncestors = 0;
	$synchronized(this) {
		if (((int64_t)(eventsToDisable & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 && this->hierarchyListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0) {
			notifyAncestors |= $AWTEvent::HIERARCHY_EVENT_MASK;
		}
		if (((int64_t)(eventsToDisable & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0 && this->hierarchyBoundsListener == nullptr && ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK)) != 0) {
			notifyAncestors |= $AWTEvent::HIERARCHY_BOUNDS_EVENT_MASK;
		}
		this->eventMask &= (uint64_t)~eventsToDisable;
	}
	if (notifyAncestors != 0) {
		$synchronized(getTreeLock()) {
			adjustListeningChildrenOnParent(notifyAncestors, -1);
		}
	}
}

bool Component::checkCoalescing() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($of(this)->getClass()->getClassLoader() == nullptr) {
		return false;
	}
	$Class* clazz = $of(this)->getClass();
	$synchronized(Component::coalesceMap) {
		$var($Boolean, value, $cast($Boolean, $nc(Component::coalesceMap)->get(clazz)));
		if (value != nullptr) {
			return value->booleanValue();
		}
		$var($Boolean, enabled, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Component$3, this, clazz)))));
		$nc(Component::coalesceMap)->put(clazz, enabled);
		return $nc(enabled)->booleanValue();
	}
}

bool Component::isCoalesceEventsOverriden($Class* clazz) {
	$init(Component);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!Component::$assertionsDisabled && !$Thread::holdsLock(Component::coalesceMap)) {
		$throwNew($AssertionError);
	}
	$Class* superclass = $nc(clazz)->getSuperclass();
	if (superclass == nullptr) {
		return false;
	}
	if ($nc(superclass)->getClassLoader() != nullptr) {
		$var($Boolean, value, $cast($Boolean, $nc(Component::coalesceMap)->get(superclass)));
		if (value == nullptr) {
			if (isCoalesceEventsOverriden(superclass)) {
				$nc(Component::coalesceMap)->put(superclass, $($Boolean::valueOf(true)));
				return true;
			}
		} else if ($nc((value))->booleanValue()) {
			return true;
		}
	}
	try {
		clazz->getDeclaredMethod("coalesceEvents"_s, Component::coalesceEventsParams);
		return true;
	} catch ($NoSuchMethodException& e) {
		return false;
	}
	$shouldNotReachHere();
}

bool Component::isCoalescingEnabled() {
	return this->coalescingEnabled;
}

$AWTEvent* Component::coalesceEvents($AWTEvent* existingEvent, $AWTEvent* newEvent) {
	return nullptr;
}

void Component::processEvent($AWTEvent* e) {
	if ($instanceOf($FocusEvent, e)) {
		processFocusEvent($cast($FocusEvent, e));
	} else if ($instanceOf($MouseEvent, e)) {
		switch ($nc(e)->getID()) {
		case $MouseEvent::MOUSE_PRESSED:
			{}
		case $MouseEvent::MOUSE_RELEASED:
			{}
		case $MouseEvent::MOUSE_CLICKED:
			{}
		case $MouseEvent::MOUSE_ENTERED:
			{}
		case $MouseEvent::MOUSE_EXITED:
			{
				processMouseEvent($cast($MouseEvent, e));
				break;
			}
		case $MouseEvent::MOUSE_MOVED:
			{}
		case $MouseEvent::MOUSE_DRAGGED:
			{
				processMouseMotionEvent($cast($MouseEvent, e));
				break;
			}
		case $MouseEvent::MOUSE_WHEEL:
			{
				processMouseWheelEvent($cast($MouseWheelEvent, e));
				break;
			}
		}
	} else if ($instanceOf($KeyEvent, e)) {
		processKeyEvent($cast($KeyEvent, e));
	} else if ($instanceOf($ComponentEvent, e)) {
		processComponentEvent($cast($ComponentEvent, e));
	} else if ($instanceOf($InputMethodEvent, e)) {
		processInputMethodEvent($cast($InputMethodEvent, e));
	} else if ($instanceOf($HierarchyEvent, e)) {
		switch ($nc(e)->getID()) {
		case $HierarchyEvent::HIERARCHY_CHANGED:
			{
				processHierarchyEvent($cast($HierarchyEvent, e));
				break;
			}
		case $HierarchyEvent::ANCESTOR_MOVED:
			{}
		case $HierarchyEvent::ANCESTOR_RESIZED:
			{
				processHierarchyBoundsEvent($cast($HierarchyEvent, e));
				break;
			}
		}
	}
}

void Component::processComponentEvent($ComponentEvent* e) {
	$var($ComponentListener, listener, this->componentListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $ComponentEvent::COMPONENT_RESIZED:
			{
				listener->componentResized(e);
				break;
			}
		case $ComponentEvent::COMPONENT_MOVED:
			{
				listener->componentMoved(e);
				break;
			}
		case $ComponentEvent::COMPONENT_SHOWN:
			{
				listener->componentShown(e);
				break;
			}
		case $ComponentEvent::COMPONENT_HIDDEN:
			{
				listener->componentHidden(e);
				break;
			}
		}
	}
}

void Component::processFocusEvent($FocusEvent* e) {
	$var($FocusListener, listener, this->focusListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $FocusEvent::FOCUS_GAINED:
			{
				listener->focusGained(e);
				break;
			}
		case $FocusEvent::FOCUS_LOST:
			{
				listener->focusLost(e);
				break;
			}
		}
	}
}

void Component::processKeyEvent($KeyEvent* e) {
	$var($KeyListener, listener, this->keyListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $KeyEvent::KEY_TYPED:
			{
				listener->keyTyped(e);
				break;
			}
		case $KeyEvent::KEY_PRESSED:
			{
				listener->keyPressed(e);
				break;
			}
		case $KeyEvent::KEY_RELEASED:
			{
				listener->keyReleased(e);
				break;
			}
		}
	}
}

void Component::processMouseEvent($MouseEvent* e) {
	$var($MouseListener, listener, this->mouseListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $MouseEvent::MOUSE_PRESSED:
			{
				listener->mousePressed(e);
				break;
			}
		case $MouseEvent::MOUSE_RELEASED:
			{
				listener->mouseReleased(e);
				break;
			}
		case $MouseEvent::MOUSE_CLICKED:
			{
				listener->mouseClicked(e);
				break;
			}
		case $MouseEvent::MOUSE_EXITED:
			{
				listener->mouseExited(e);
				break;
			}
		case $MouseEvent::MOUSE_ENTERED:
			{
				listener->mouseEntered(e);
				break;
			}
		}
	}
}

void Component::processMouseMotionEvent($MouseEvent* e) {
	$var($MouseMotionListener, listener, this->mouseMotionListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $MouseEvent::MOUSE_MOVED:
			{
				listener->mouseMoved(e);
				break;
			}
		case $MouseEvent::MOUSE_DRAGGED:
			{
				listener->mouseDragged(e);
				break;
			}
		}
	}
}

void Component::processMouseWheelEvent($MouseWheelEvent* e) {
	$var($MouseWheelListener, listener, this->mouseWheelListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $MouseEvent::MOUSE_WHEEL:
			{
				listener->mouseWheelMoved(e);
				break;
			}
		}
	}
}

bool Component::postsOldMouseEvents() {
	return false;
}

void Component::processInputMethodEvent($InputMethodEvent* e) {
	$var($InputMethodListener, listener, this->inputMethodListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $InputMethodEvent::INPUT_METHOD_TEXT_CHANGED:
			{
				listener->inputMethodTextChanged(e);
				break;
			}
		case $InputMethodEvent::CARET_POSITION_CHANGED:
			{
				listener->caretPositionChanged(e);
				break;
			}
		}
	}
}

void Component::processHierarchyEvent($HierarchyEvent* e) {
	$var($HierarchyListener, listener, this->hierarchyListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $HierarchyEvent::HIERARCHY_CHANGED:
			{
				listener->hierarchyChanged(e);
				break;
			}
		}
	}
}

void Component::processHierarchyBoundsEvent($HierarchyEvent* e) {
	$var($HierarchyBoundsListener, listener, this->hierarchyBoundsListener);
	if (listener != nullptr) {
		int32_t id = $nc(e)->getID();
		switch (id) {
		case $HierarchyEvent::ANCESTOR_MOVED:
			{
				listener->ancestorMoved(e);
				break;
			}
		case $HierarchyEvent::ANCESTOR_RESIZED:
			{
				listener->ancestorResized(e);
				break;
			}
		}
	}
}

bool Component::handleEvent($Event* evt) {
	switch ($nc(evt)->id) {
	case $Event::MOUSE_ENTER:
		{
			return mouseEnter(evt, evt->x, evt->y);
		}
	case $Event::MOUSE_EXIT:
		{
			return mouseExit(evt, evt->x, evt->y);
		}
	case $Event::MOUSE_MOVE:
		{
			return mouseMove(evt, evt->x, evt->y);
		}
	case $Event::MOUSE_DOWN:
		{
			return mouseDown(evt, evt->x, evt->y);
		}
	case $Event::MOUSE_DRAG:
		{
			return mouseDrag(evt, evt->x, evt->y);
		}
	case $Event::MOUSE_UP:
		{
			return mouseUp(evt, evt->x, evt->y);
		}
	case $Event::KEY_PRESS:
		{}
	case $Event::KEY_ACTION:
		{
			return keyDown(evt, evt->key);
		}
	case $Event::KEY_RELEASE:
		{}
	case $Event::KEY_ACTION_RELEASE:
		{
			return keyUp(evt, evt->key);
		}
	case $Event::ACTION_EVENT:
		{
			return action(evt, evt->arg);
		}
	case $Event::GOT_FOCUS:
		{
			return gotFocus(evt, evt->arg);
		}
	case $Event::LOST_FOCUS:
		{
			return lostFocus(evt, evt->arg);
		}
	}
	return false;
}

bool Component::mouseDown($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::mouseDrag($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::mouseUp($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::mouseMove($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::mouseEnter($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::mouseExit($Event* evt, int32_t x, int32_t y) {
	return false;
}

bool Component::keyDown($Event* evt, int32_t key) {
	return false;
}

bool Component::keyUp($Event* evt, int32_t key) {
	return false;
}

bool Component::action($Event* evt, Object$* what) {
	return false;
}

void Component::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($ComponentPeer, peer, this->peer);
		if (peer == nullptr || $instanceOf($LightweightPeer, peer)) {
			if (peer == nullptr) {
				$set(this, peer, ($assign(peer, $nc($(getComponentFactory()))->createComponent(this))));
			}
			if (this->parent != nullptr) {
				int64_t mask = 0;
				if ((this->mouseListener != nullptr) || (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0)) {
					mask |= $AWTEvent::MOUSE_EVENT_MASK;
				}
				if ((this->mouseMotionListener != nullptr) || (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_MOTION_EVENT_MASK)) != 0)) {
					mask |= $AWTEvent::MOUSE_MOTION_EVENT_MASK;
				}
				if ((this->mouseWheelListener != nullptr) || (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::MOUSE_WHEEL_EVENT_MASK)) != 0)) {
					mask |= $AWTEvent::MOUSE_WHEEL_EVENT_MASK;
				}
				if (this->focusListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::FOCUS_EVENT_MASK)) != 0) {
					mask |= $AWTEvent::FOCUS_EVENT_MASK;
				}
				if (this->keyListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::KEY_EVENT_MASK)) != 0) {
					mask |= $AWTEvent::KEY_EVENT_MASK;
				}
				if (mask != 0) {
					$nc(this->parent)->proxyEnableEvents(mask);
				}
			}
		} else {
			$var($Container, parent, getContainer());
			if (parent != nullptr && parent->isLightweight()) {
				relocateComponent();
				if (!parent->isRecursivelyVisibleUpToHeavyweightContainer()) {
					$nc(peer)->setVisible(false);
				}
			}
		}
		invalidate();
		int32_t npopups = (this->popups != nullptr ? $nc(this->popups)->size() : 0);
		for (int32_t i = 0; i < npopups; ++i) {
			$var($PopupMenu, popup, $cast($PopupMenu, $nc(this->popups)->elementAt(i)));
			$nc(popup)->addNotify();
		}
		if (this->dropTarget != nullptr) {
			$nc(this->dropTarget)->addNotify();
		}
		$set(this, peerFont, getFont());
		if (getContainer() != nullptr && !this->isAddNotifyComplete) {
			$nc($(getContainer()))->increaseComponentCount(this);
		}
		updateZOrder();
		if (!this->isAddNotifyComplete) {
			mixOnShowing();
		}
		this->isAddNotifyComplete = true;
		if (this->hierarchyListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK)) {
			$var($HierarchyEvent, e, $new($HierarchyEvent, this, $HierarchyEvent::HIERARCHY_CHANGED, this, this->parent, $HierarchyEvent::DISPLAYABILITY_CHANGED | ((isRecursivelyVisible()) ? $HierarchyEvent::SHOWING_CHANGED : 0)));
			dispatchEvent(e);
		}
	}
}

void Component::removeNotify() {
	$useLocalCurrentObjectStackCache();
	$KeyboardFocusManager::clearMostRecentFocusOwner(this);
	if ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getPermanentFocusOwner() == this) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setGlobalPermanentFocusOwner(nullptr);
	}
	$synchronized(getTreeLock()) {
		bool var$0 = isFocusOwner();
		if (var$0 && $KeyboardFocusManager::isAutoFocusTransferEnabledFor(this)) {
			transferFocus(true);
		}
		if (getContainer() != nullptr && this->isAddNotifyComplete) {
			$nc($(getContainer()))->decreaseComponentCount(this);
		}
		int32_t npopups = (this->popups != nullptr ? $nc(this->popups)->size() : 0);
		for (int32_t i = 0; i < npopups; ++i) {
			$var($PopupMenu, popup, $cast($PopupMenu, $nc(this->popups)->elementAt(i)));
			$nc(popup)->removeNotify();
		}
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::INPUT_METHODS_ENABLED_MASK)) != 0) {
			$var($InputContext, inputContext, getInputContext());
			if (inputContext != nullptr) {
				inputContext->removeNotify(this);
			}
		}
		$var($ComponentPeer, p, this->peer);
		if (p != nullptr) {
			bool isLightweight = this->isLightweight();
			if ($instanceOf($Component$FlipBufferStrategy, this->bufferStrategy)) {
				$nc(($cast($Component$FlipBufferStrategy, this->bufferStrategy)))->invalidate();
			}
			if (this->dropTarget != nullptr) {
				$nc(this->dropTarget)->removeNotify();
			}
			if (this->visible) {
				p->setVisible(false);
			}
			$set(this, peer, nullptr);
			$set(this, peerFont, nullptr);
			$nc($($Toolkit::getEventQueue()))->removeSourceEvents(this, false);
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->discardKeyEvents(this);
			p->dispose();
			mixOnHiding(isLightweight);
			this->isAddNotifyComplete = false;
			$set(this, compoundShape, nullptr);
		}
		if (this->hierarchyListener != nullptr || ((int64_t)(this->eventMask & (uint64_t)$AWTEvent::HIERARCHY_EVENT_MASK)) != 0 || $Toolkit::enabledOnToolkit($AWTEvent::HIERARCHY_EVENT_MASK)) {
			$var($HierarchyEvent, e, $new($HierarchyEvent, this, $HierarchyEvent::HIERARCHY_CHANGED, this, this->parent, $HierarchyEvent::DISPLAYABILITY_CHANGED | ((isRecursivelyVisible()) ? $HierarchyEvent::SHOWING_CHANGED : 0)));
			dispatchEvent(e);
		}
	}
}

bool Component::gotFocus($Event* evt, Object$* what) {
	return false;
}

bool Component::lostFocus($Event* evt, Object$* what) {
	return false;
}

bool Component::isFocusTraversable() {
	if (this->isFocusTraversableOverridden$ == Component::FOCUS_TRAVERSABLE_UNKNOWN) {
		this->isFocusTraversableOverridden$ = Component::FOCUS_TRAVERSABLE_DEFAULT;
	}
	return this->focusable;
}

bool Component::isFocusable() {
	return isFocusTraversable();
}

void Component::setFocusable(bool focusable) {
	bool oldFocusable = false;
	$synchronized(this) {
		oldFocusable = this->focusable;
		this->focusable = focusable;
	}
	this->isFocusTraversableOverridden$ = Component::FOCUS_TRAVERSABLE_SET;
	firePropertyChange("focusable"_s, oldFocusable, focusable);
	if (oldFocusable && !focusable) {
		bool var$0 = isFocusOwner();
		if (var$0 && $KeyboardFocusManager::isAutoFocusTransferEnabled()) {
			transferFocus(true);
		}
		$KeyboardFocusManager::clearMostRecentFocusOwner(this);
	}
}

bool Component::isFocusTraversableOverridden() {
	return (this->isFocusTraversableOverridden$ != Component::FOCUS_TRAVERSABLE_DEFAULT);
}

void Component::setFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH - 1) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	setFocusTraversalKeys_NoIDCheck(id, keystrokes);
}

$Set* Component::getFocusTraversalKeys(int32_t id) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH - 1) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	return getFocusTraversalKeys_NoIDCheck(id);
}

void Component::setFocusTraversalKeys_NoIDCheck(int32_t id, $Set* keystrokes) {
	$useLocalCurrentObjectStackCache();
	$var($Set, oldKeys, nullptr);
	$synchronized(this) {
		if (this->focusTraversalKeys == nullptr) {
			initializeFocusTraversalKeys();
		}
		if (keystrokes != nullptr) {
			{
				$var($Iterator, i$, keystrokes->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($AWTKeyStroke, keystroke, $cast($AWTKeyStroke, i$->next()));
					{
						if (keystroke == nullptr) {
							$throwNew($IllegalArgumentException, "cannot set null focus traversal key"_s);
						}
						if ($nc(keystroke)->getKeyChar() != $KeyEvent::CHAR_UNDEFINED) {
							$throwNew($IllegalArgumentException, "focus traversal keys cannot map to KEY_TYPED events"_s);
						}
						for (int32_t i = 0; i < $nc(this->focusTraversalKeys)->length; ++i) {
							if (i == id) {
								continue;
							}
							if ($nc($(getFocusTraversalKeys_NoIDCheck(i)))->contains(keystroke)) {
								$throwNew($IllegalArgumentException, "focus traversal keys must be unique for a Component"_s);
							}
						}
					}
				}
			}
		}
		$assign(oldKeys, $nc(this->focusTraversalKeys)->get(id));
		$nc(this->focusTraversalKeys)->set(id, (keystrokes != nullptr) ? $($Collections::unmodifiableSet($$new($HashSet, static_cast<$Collection*>(keystrokes)))) : ($Set*)nullptr);
	}
	firePropertyChange($nc(Component::focusTraversalKeyPropertyNames)->get(id), $of(oldKeys), $of(keystrokes));
}

$Set* Component::getFocusTraversalKeys_NoIDCheck(int32_t id) {
	$useLocalCurrentObjectStackCache();
	$var($Set, keystrokes, (this->focusTraversalKeys != nullptr) ? $nc(this->focusTraversalKeys)->get(id) : ($Set*)nullptr);
	if (keystrokes != nullptr) {
		return keystrokes;
	} else {
		$var($Container, parent, this->parent);
		if (parent != nullptr) {
			return parent->getFocusTraversalKeys(id);
		} else {
			return $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getDefaultFocusTraversalKeys(id);
		}
	}
}

bool Component::areFocusTraversalKeysSet(int32_t id) {
	if (id < 0 || id >= $KeyboardFocusManager::TRAVERSAL_KEY_LENGTH - 1) {
		$throwNew($IllegalArgumentException, "invalid focus traversal key identifier"_s);
	}
	return (this->focusTraversalKeys != nullptr && $nc(this->focusTraversalKeys)->get(id) != nullptr);
}

void Component::setFocusTraversalKeysEnabled(bool focusTraversalKeysEnabled) {
	bool oldFocusTraversalKeysEnabled = false;
	$synchronized(this) {
		oldFocusTraversalKeysEnabled = this->focusTraversalKeysEnabled;
		this->focusTraversalKeysEnabled = focusTraversalKeysEnabled;
	}
	firePropertyChange("focusTraversalKeysEnabled"_s, oldFocusTraversalKeysEnabled, focusTraversalKeysEnabled);
}

bool Component::getFocusTraversalKeysEnabled() {
	return this->focusTraversalKeysEnabled;
}

void Component::requestFocus() {
	requestFocusHelper(false, true);
}

void Component::requestFocus($FocusEvent$Cause* cause) {
	requestFocusHelper(false, true, cause);
}

bool Component::requestFocus(bool temporary) {
	return requestFocusHelper(temporary, true);
}

bool Component::requestFocus(bool temporary, $FocusEvent$Cause* cause) {
	return requestFocusHelper(temporary, true, cause);
}

bool Component::requestFocusInWindow() {
	return requestFocusHelper(false, false);
}

bool Component::requestFocusInWindow($FocusEvent$Cause* cause) {
	return requestFocusHelper(false, false, cause);
}

bool Component::requestFocusInWindow(bool temporary) {
	return requestFocusHelper(temporary, false);
}

bool Component::requestFocusInWindow(bool temporary, $FocusEvent$Cause* cause) {
	return requestFocusHelper(temporary, false, cause);
}

bool Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed) {
	$init($FocusEvent$Cause);
	return requestFocusHelper(temporary, focusedWindowChangeAllowed, $FocusEvent$Cause::UNKNOWN);
}

bool Component::requestFocusHelper(bool temporary, bool focusedWindowChangeAllowed, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($MouseEvent, currentEvent) && $SunToolkit::isSystemGenerated(currentEvent)) {
		$var(Component, source, $nc(($cast($MouseEvent, currentEvent)))->getComponent());
		bool var$0 = source == nullptr;
		if (!var$0) {
			var$0 = $nc(source)->getContainingWindow() == getContainingWindow();
		}
		if (var$0) {
			$nc(Component::focusLog)->finest("requesting focus by mouse event \"in window\""_s);
			focusedWindowChangeAllowed = false;
		}
	}
	if (!isRequestFocusAccepted(temporary, focusedWindowChangeAllowed, cause)) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("requestFocus is not accepted"_s);
		}
		return false;
	}
	$KeyboardFocusManager::setMostRecentFocusOwner(this);
	$var(Component, window, this);
	while ((window != nullptr) && !($instanceOf($Window, window))) {
		if (!window->isVisible()) {
			$init($PlatformLogger$Level);
			if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(Component::focusLog)->finest("component is recursively invisible"_s);
			}
			return false;
		}
		$assign(window, window->parent);
	}
	$var($ComponentPeer, peer, this->peer);
	$var(Component, heavyweight, ($instanceOf($LightweightPeer, peer)) ? static_cast<Component*>(getNativeContainer()) : this);
	if (heavyweight == nullptr || !$nc(heavyweight)->isVisible()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("Component is not a part of visible hierarchy"_s);
		}
		return false;
	}
	$assign(peer, $nc(heavyweight)->peer);
	if (peer == nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("Peer is null"_s);
		}
		return false;
	}
	int64_t time = 0;
	if ($EventQueue::isDispatchThread()) {
		time = $nc($($Toolkit::getEventQueue()))->getMostRecentKeyEventTime();
	} else {
		time = $System::currentTimeMillis();
	}
	bool success = $nc(peer)->requestFocus(this, temporary, focusedWindowChangeAllowed, time, cause);
	if (!success) {
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager(this->appContext)))->dequeueKeyEvents(time, this);
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("Peer request failed"_s);
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest($$str({"Pass for "_s, this}));
		}
	}
	return success;
}

bool Component::isRequestFocusAccepted(bool temporary, bool focusedWindowChangeAllowed, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !isFocusable();
	if (var$0 || !isVisible()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("Not focusable or not visible"_s);
		}
		return false;
	}
	$var($ComponentPeer, peer, this->peer);
	if (peer == nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("peer is null"_s);
		}
		return false;
	}
	$var($Window, window, getContainingWindow());
	if (window == nullptr || !$nc(window)->isFocusableWindow()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("Component doesn\'t have toplevel"_s);
		}
		return false;
	}
	$var(Component, focusOwner, $KeyboardFocusManager::getMostRecentFocusOwner(window));
	if (focusOwner == nullptr) {
		$assign(focusOwner, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
		if (focusOwner != nullptr && focusOwner->getContainingWindow() != window) {
			$assign(focusOwner, nullptr);
		}
	}
	if (focusOwner == this || focusOwner == nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("focus owner is null or this"_s);
		}
		return true;
	}
	$init($FocusEvent$Cause);
	if ($FocusEvent$Cause::ACTIVATION == cause) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::focusLog)->finest("cause is activation"_s);
		}
		return true;
	}
	bool ret = $nc(Component::requestFocusController)->acceptRequestFocus(focusOwner, this, temporary, focusedWindowChangeAllowed, cause);
	$init($PlatformLogger$Level);
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(Component::focusLog)->finest("RequestFocusController returns {0}"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(ret)))}));
	}
	return ret;
}

void Component::setRequestFocusController($RequestFocusController* requestController) {
	$load(Component);
	$synchronized(class$) {
		$init(Component);
		if (requestController == nullptr) {
			$assignStatic(Component::requestFocusController, $new($Component$DummyRequestFocusController));
		} else {
			$assignStatic(Component::requestFocusController, requestController);
		}
	}
}

$Container* Component::getFocusCycleRootAncestor() {
	$var($Container, rootAncestor, this->parent);
	while (rootAncestor != nullptr && !rootAncestor->isFocusCycleRoot()) {
		$assign(rootAncestor, rootAncestor->parent);
	}
	return rootAncestor;
}

bool Component::isFocusCycleRoot($Container* container) {
	$var($Container, rootAncestor, getFocusCycleRootAncestor());
	return (rootAncestor == container);
}

$Container* Component::getTraversalRoot() {
	return getFocusCycleRootAncestor();
}

void Component::transferFocus() {
	nextFocus();
}

void Component::nextFocus() {
	transferFocus(false);
}

bool Component::transferFocus(bool clearOnFailure) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(Component::focusLog)->finer($$str({"clearOnFailure = "_s, $$str(clearOnFailure)}));
	}
	$var(Component, toFocus, getNextFocusCandidate());
	bool res = false;
	if (toFocus != nullptr && !toFocus->isFocusOwner() && toFocus != this) {
		$init($FocusEvent$Cause);
		res = toFocus->requestFocusInWindow($FocusEvent$Cause::TRAVERSAL_FORWARD);
	}
	if (clearOnFailure && !res) {
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(Component::focusLog)->finer("clear global focus owner"_s);
		}
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->clearGlobalFocusOwnerPriv();
	}
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(Component::focusLog)->finer($$str({"returning result: "_s, $$str(res)}));
	}
	return res;
}

Component* Component::getNextFocusCandidate() {
	$useLocalCurrentObjectStackCache();
	$var($Container, rootAncestor, getTraversalRoot());
	$var(Component, comp, this);
	while (true) {
		bool var$0 = rootAncestor != nullptr;
		if (var$0) {
			bool var$1 = rootAncestor->isShowing();
			var$0 = !(var$1 && rootAncestor->canBeFocusOwner());
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(comp, rootAncestor);
			$assign(rootAncestor, comp->getFocusCycleRootAncestor());
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(Component::focusLog)->finer($$str({"comp = "_s, comp, ", root = "_s, rootAncestor}));
	}
	$var(Component, candidate, nullptr);
	if (rootAncestor != nullptr) {
		$var($FocusTraversalPolicy, policy, rootAncestor->getFocusTraversalPolicy());
		$var(Component, toFocus, $nc(policy)->getComponentAfter(rootAncestor, comp));
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(Component::focusLog)->finer($$str({"component after is "_s, toFocus}));
		}
		if (toFocus == nullptr) {
			$assign(toFocus, policy->getDefaultComponent(rootAncestor));
			if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(Component::focusLog)->finer($$str({"default component is "_s, toFocus}));
			}
		}
		if (toFocus == nullptr) {
			$var($Applet, applet, $EmbeddedFrame::getAppletIfAncestorOf(this));
			if (applet != nullptr) {
				$assign(toFocus, applet);
			}
		}
		$assign(candidate, toFocus);
	}
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(Component::focusLog)->finer($$str({"Focus transfer candidate: "_s, candidate}));
	}
	return candidate;
}

void Component::transferFocusBackward() {
	transferFocusBackward(false);
}

bool Component::transferFocusBackward(bool clearOnFailure) {
	$useLocalCurrentObjectStackCache();
	$var($Container, rootAncestor, getTraversalRoot());
	$var(Component, comp, this);
	while (true) {
		bool var$0 = rootAncestor != nullptr;
		if (var$0) {
			bool var$1 = rootAncestor->isShowing();
			var$0 = !(var$1 && rootAncestor->canBeFocusOwner());
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(comp, rootAncestor);
			$assign(rootAncestor, comp->getFocusCycleRootAncestor());
		}
	}
	bool res = false;
	if (rootAncestor != nullptr) {
		$var($FocusTraversalPolicy, policy, rootAncestor->getFocusTraversalPolicy());
		$var(Component, toFocus, $nc(policy)->getComponentBefore(rootAncestor, comp));
		if (toFocus == nullptr) {
			$assign(toFocus, policy->getDefaultComponent(rootAncestor));
		}
		if (toFocus != nullptr) {
			$init($FocusEvent$Cause);
			res = toFocus->requestFocusInWindow($FocusEvent$Cause::TRAVERSAL_BACKWARD);
		}
	}
	if (clearOnFailure && !res) {
		$init($PlatformLogger$Level);
		if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(Component::focusLog)->finer("clear global focus owner"_s);
		}
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->clearGlobalFocusOwnerPriv();
	}
	$init($PlatformLogger$Level);
	if ($nc(Component::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(Component::focusLog)->finer($$str({"returning result: "_s, $$str(res)}));
	}
	return res;
}

void Component::transferFocusUpCycle() {
	$useLocalCurrentObjectStackCache();
	$var($Container, rootAncestor, nullptr);
	{
		$assign(rootAncestor, getFocusCycleRootAncestor());
		for (;; $assign(rootAncestor, $nc(rootAncestor)->getFocusCycleRootAncestor())) {
			bool var$0 = rootAncestor != nullptr;
			if (var$0) {
				bool var$2 = rootAncestor->isShowing();
				bool var$1 = var$2 && rootAncestor->isFocusable();
				var$0 = !(var$1 && rootAncestor->isEnabled());
			}
			if (!(var$0)) {
				break;
			}
			{
			}
		}
	}
	if (rootAncestor != nullptr) {
		$var($Container, rootAncestorRootAncestor, rootAncestor->getFocusCycleRootAncestor());
		$var($Container, fcr, (rootAncestorRootAncestor != nullptr) ? rootAncestorRootAncestor : rootAncestor);
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setGlobalCurrentFocusCycleRootPriv(fcr);
		$init($FocusEvent$Cause);
		rootAncestor->requestFocus($FocusEvent$Cause::TRAVERSAL_UP);
	} else {
		$var($Window, window, getContainingWindow());
		if (window != nullptr) {
			$var(Component, toFocus, $nc($(window->getFocusTraversalPolicy()))->getDefaultComponent(window));
			if (toFocus != nullptr) {
				$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setGlobalCurrentFocusCycleRootPriv(window);
				$init($FocusEvent$Cause);
				toFocus->requestFocus($FocusEvent$Cause::TRAVERSAL_UP);
			}
		}
	}
}

bool Component::hasFocus() {
	return ($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner() == this);
}

bool Component::isFocusOwner() {
	return hasFocus();
}

void Component::setAutoFocusTransferOnDisposal(bool value) {
	this->autoFocusTransferOnDisposal = value;
}

bool Component::isAutoFocusTransferOnDisposal() {
	return this->autoFocusTransferOnDisposal;
}

void Component::add($PopupMenu* popup) {
	$synchronized(getTreeLock()) {
		if ($nc(popup)->parent != nullptr) {
			$nc(popup->parent)->remove(popup);
		}
		if (this->popups == nullptr) {
			$set(this, popups, $new($Vector));
		}
		$nc(this->popups)->addElement(popup);
		$set($nc(popup), parent, this);
		if (this->peer != nullptr) {
			if (popup->peer == nullptr) {
				popup->addNotify();
			}
		}
	}
}

void Component::remove($MenuComponent* popup) {
	$synchronized(getTreeLock()) {
		if (this->popups == nullptr) {
			return;
		}
		int32_t index = $nc(this->popups)->indexOf(popup);
		if (index >= 0) {
			$var($PopupMenu, pmenu, $cast($PopupMenu, popup));
			if ($nc(pmenu)->peer != nullptr) {
				pmenu->removeNotify();
			}
			$set($nc(pmenu), parent, nullptr);
			$nc(this->popups)->removeElementAt(index);
			if ($nc(this->popups)->size() == 0) {
				$set(this, popups, nullptr);
			}
		}
	}
}

$String* Component::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, thisName, $Objects::toString($(getName()), ""_s));
	$var($String, invalid, isValid() ? ""_s : ",invalid"_s);
	$var($String, hidden, this->visible ? ""_s : ",hidden"_s);
	$var($String, disabled, this->enabled ? ""_s : ",disabled"_s);
	return $str({thisName, $$str(u','), $$str(this->x), $$str(u','), $$str(this->y), $$str(u','), $$str(this->width), $$str(u'x'), $$str(this->height), invalid, hidden, disabled});
}

$String* Component::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), $$str(u'[')}));
	$var($String, var$0, $$concat(var$1, $(paramString())));
	return $concat(var$0, $$str(u']'));
}

void Component::list() {
	list($System::out, 0);
}

void Component::list($PrintStream* out) {
	list(out, 0);
}

void Component::list($PrintStream* out, int32_t indent) {
	for (int32_t i = 0; i < indent; ++i) {
		$nc(out)->print(" "_s);
	}
	$nc(out)->println($of(this));
}

void Component::list($PrintWriter* out) {
	list(out, 0);
}

void Component::list($PrintWriter* out, int32_t indent) {
	for (int32_t i = 0; i < indent; ++i) {
		$nc(out)->print(" "_s);
	}
	$nc(out)->println($of(this));
}

$Container* Component::getNativeContainer() {
	$var($Container, p, getContainer());
	while (p != nullptr && $instanceOf($LightweightPeer, p->peer)) {
		$assign(p, p->getContainer());
	}
	return p;
}

void Component::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(getObjectLock()) {
		if (listener == nullptr) {
			return;
		}
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($PropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void Component::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(getObjectLock()) {
		if (listener == nullptr || this->changeSupport == nullptr) {
			return;
		}
		$nc(this->changeSupport)->removePropertyChangeListener(listener);
	}
}

$PropertyChangeListenerArray* Component::getPropertyChangeListeners() {
	$synchronized(getObjectLock()) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

void Component::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(getObjectLock()) {
		if (listener == nullptr) {
			return;
		}
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($PropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(propertyName, listener);
	}
}

void Component::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(getObjectLock()) {
		if (listener == nullptr || this->changeSupport == nullptr) {
			return;
		}
		$nc(this->changeSupport)->removePropertyChangeListener(propertyName, listener);
	}
}

$PropertyChangeListenerArray* Component::getPropertyChangeListeners($String* propertyName) {
	$synchronized(getObjectLock()) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners(propertyName);
	}
}

void Component::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	$var($PropertyChangeSupport, changeSupport, nullptr);
	$synchronized(getObjectLock()) {
		$assign(changeSupport, this->changeSupport);
	}
	if (changeSupport == nullptr || (oldValue != nullptr && newValue != nullptr && $of(oldValue)->equals(newValue))) {
		return;
	}
	$nc(changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
}

void Component::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$var($PropertyChangeSupport, changeSupport, this->changeSupport);
	if (changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$nc(changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
}

void Component::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$var($PropertyChangeSupport, changeSupport, this->changeSupport);
	if (changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$nc(changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
}

void Component::firePropertyChange($String* propertyName, int8_t oldValue, int8_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Byte::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Byte::valueOf(newValue))));
}

void Component::firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Character::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Character::valueOf(newValue))));
}

void Component::firePropertyChange($String* propertyName, int16_t oldValue, int16_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Short::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Short::valueOf(newValue))));
}

void Component::firePropertyChange($String* propertyName, int64_t oldValue, int64_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Long::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Long::valueOf(newValue))));
}

void Component::firePropertyChange($String* propertyName, float oldValue, float newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Float::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Float::valueOf(newValue))));
}

void Component::firePropertyChange($String* propertyName, double oldValue, double newValue) {
	$useLocalCurrentObjectStackCache();
	if (this->changeSupport == nullptr || oldValue == newValue) {
		return;
	}
	$var($String, var$0, propertyName);
	$var($Object, var$1, $of($Double::valueOf(oldValue)));
	firePropertyChange(var$0, var$1, $($of($Double::valueOf(newValue))));
}

void Component::doSwingSerialization() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!($instanceOf($JComponent, this))) {
		return;
	}
	$var($Package, swingPackage, $Package::getPackage("javax.swing"_s));
	{
		$Class* klass = $of(this)->getClass();
		for (; klass != nullptr; klass = $nc(klass)->getSuperclass()) {
			bool var$0 = klass->getPackage() == swingPackage;
			if (var$0 && klass->getClassLoader() == nullptr) {
				$nc($($SwingAccessor::getJComponentAccessor()))->compWriteObjectNotify($cast($JComponent, this));
				return;
			}
		}
	}
}

void Component::writeObject($ObjectOutputStream* s) {
	doSwingSerialization();
	$nc(s)->defaultWriteObject();
	$AWTEventMulticaster::save(s, Component::componentListenerK, this->componentListener);
	$AWTEventMulticaster::save(s, Component::focusListenerK, this->focusListener);
	$AWTEventMulticaster::save(s, Component::keyListenerK, this->keyListener);
	$AWTEventMulticaster::save(s, Component::mouseListenerK, this->mouseListener);
	$AWTEventMulticaster::save(s, Component::mouseMotionListenerK, this->mouseMotionListener);
	$AWTEventMulticaster::save(s, Component::inputMethodListenerK, this->inputMethodListener);
	s->writeObject(nullptr);
	s->writeObject(this->componentOrientation);
	$AWTEventMulticaster::save(s, Component::hierarchyListenerK, this->hierarchyListener);
	$AWTEventMulticaster::save(s, Component::hierarchyBoundsListenerK, this->hierarchyBoundsListener);
	s->writeObject(nullptr);
	$AWTEventMulticaster::save(s, Component::mouseWheelListenerK, this->mouseWheelListener);
	s->writeObject(nullptr);
}

void Component::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, objectLock, $new($Object));
	$set(this, acc, $AccessController::getContext());
	$nc(s)->defaultReadObject();
	$set(this, appContext, $AppContext::getAppContext());
	this->coalescingEnabled = checkCoalescing();
	if (this->componentSerializedDataVersion < 4) {
		this->focusable = true;
		this->isFocusTraversableOverridden$ = Component::FOCUS_TRAVERSABLE_UNKNOWN;
		initializeFocusTraversalKeys();
		this->focusTraversalKeysEnabled = true;
	}
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		if (Component::componentListenerK == key) {
			addComponentListener(($cast($ComponentListener, $(s->readObject()))));
		} else if (Component::focusListenerK == key) {
			addFocusListener(($cast($FocusListener, $(s->readObject()))));
		} else if (Component::keyListenerK == key) {
			addKeyListener(($cast($KeyListener, $(s->readObject()))));
		} else if (Component::mouseListenerK == key) {
			addMouseListener(($cast($MouseListener, $(s->readObject()))));
		} else if (Component::mouseMotionListenerK == key) {
			addMouseMotionListener(($cast($MouseMotionListener, $(s->readObject()))));
		} else if (Component::inputMethodListenerK == key) {
			addInputMethodListener(($cast($InputMethodListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
	$var($Object, orient, nullptr);
	try {
		$assign(orient, s->readObject());
	} catch ($OptionalDataException& e) {
		if (!e->eof) {
			$throw(e);
		}
	}
	if (orient != nullptr) {
		$set(this, componentOrientation, $cast($ComponentOrientation, orient));
	} else {
		$init($ComponentOrientation);
		$set(this, componentOrientation, $ComponentOrientation::UNKNOWN);
	}
	try {
		while (nullptr != ($assign(keyOrNull, s->readObject()))) {
			$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
			if (Component::hierarchyListenerK == key) {
				addHierarchyListener(($cast($HierarchyListener, $(s->readObject()))));
			} else if (Component::hierarchyBoundsListenerK == key) {
				addHierarchyBoundsListener(($cast($HierarchyBoundsListener, $(s->readObject()))));
			} else {
				s->readObject();
			}
		}
	} catch ($OptionalDataException& e) {
		if (!e->eof) {
			$throw(e);
		}
	}
	try {
		while (nullptr != ($assign(keyOrNull, s->readObject()))) {
			$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
			if (Component::mouseWheelListenerK == key) {
				addMouseWheelListener(($cast($MouseWheelListener, $(s->readObject()))));
			} else {
				s->readObject();
			}
		}
	} catch ($OptionalDataException& e) {
		if (!e->eof) {
			$throw(e);
		}
	}
	if (this->popups != nullptr) {
		int32_t npopups = $nc(this->popups)->size();
		for (int32_t i = 0; i < npopups; ++i) {
			$var($PopupMenu, popup, $cast($PopupMenu, $nc(this->popups)->elementAt(i)));
			$set($nc(popup), parent, this);
		}
	}
}

void Component::setComponentOrientation($ComponentOrientation* o) {
	$var($ComponentOrientation, oldValue, this->componentOrientation);
	$set(this, componentOrientation, o);
	firePropertyChange("componentOrientation"_s, $of(oldValue), $of(o));
	invalidateIfValid();
}

$ComponentOrientation* Component::getComponentOrientation() {
	return this->componentOrientation;
}

void Component::applyComponentOrientation($ComponentOrientation* orientation) {
	if (orientation == nullptr) {
		$throwNew($NullPointerException);
	}
	setComponentOrientation(orientation);
}

bool Component::canBeFocusOwner() {
	bool var$2 = isEnabled();
	bool var$1 = var$2 && isDisplayable();
	bool var$0 = var$1 && isVisible();
	if (var$0 && isFocusable()) {
		return true;
	}
	return false;
}

bool Component::canBeFocusOwnerRecursively() {
	if (!canBeFocusOwner()) {
		return false;
	}
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr) {
			return $nc(this->parent)->canContainFocusOwner(this);
		}
	}
	return true;
}

void Component::relocateComponent() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			return;
		}
		int32_t nativeX = this->x;
		int32_t nativeY = this->y;
		{
			$var(Component, cont, getContainer());
			for (; cont != nullptr && cont->isLightweight(); $assign(cont, $nc(cont)->getContainer())) {
				nativeX += cont->x;
				nativeY += cont->y;
			}
		}
		$nc(this->peer)->setBounds(nativeX, nativeY, this->width, this->height, $ComponentPeer::SET_LOCATION);
	}
}

$Window* Component::getContainingWindow() {
	return $SunToolkit::getContainingWindow(this);
}

void Component::initIDs() {
	$init(Component);
	$prepareNativeStatic(Component, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* Component::getAccessibleContext() {
	return this->accessibleContext;
}

int32_t Component::getAccessibleIndexInParent() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($AccessibleContext, accContext, getAccessibleContext());
		if (accContext == nullptr) {
			return -1;
		}
		$var($Accessible, parent, $nc(accContext)->getAccessibleParent());
		if (parent == nullptr) {
			return -1;
		}
		$assign(accContext, $nc(parent)->getAccessibleContext());
		for (int32_t i = 0; i < accContext->getAccessibleChildrenCount(); ++i) {
			if ($of(this)->equals($(accContext->getAccessibleChild(i)))) {
				return i;
			}
		}
		return -1;
	}
}

$AccessibleStateSet* Component::getAccessibleStateSet() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$var($AccessibleStateSet, states, $new($AccessibleStateSet));
		if (this->isEnabled()) {
			$init($AccessibleState);
			states->add($AccessibleState::ENABLED);
		}
		if (this->isFocusTraversable()) {
			$init($AccessibleState);
			states->add($AccessibleState::FOCUSABLE);
		}
		if (this->isVisible()) {
			$init($AccessibleState);
			states->add($AccessibleState::VISIBLE);
		}
		if (this->isShowing()) {
			$init($AccessibleState);
			states->add($AccessibleState::SHOWING);
		}
		if (this->isFocusOwner()) {
			$init($AccessibleState);
			states->add($AccessibleState::FOCUSED);
		}
		if ($instanceOf($Accessible, this)) {
			$var($AccessibleContext, ac, $nc(($cast($Accessible, this)))->getAccessibleContext());
			if (ac != nullptr) {
				$var($Accessible, ap, ac->getAccessibleParent());
				if (ap != nullptr) {
					$var($AccessibleContext, pac, ap->getAccessibleContext());
					if (pac != nullptr) {
						$var($AccessibleSelection, as, pac->getAccessibleSelection());
						if (as != nullptr) {
							$init($AccessibleState);
							states->add($AccessibleState::SELECTABLE);
							int32_t i = ac->getAccessibleIndexInParent();
							if (i >= 0) {
								if (as->isAccessibleChildSelected(i)) {
									states->add($AccessibleState::SELECTED);
								}
							}
						}
					}
				}
			}
		}
		if (Component::isInstanceOf(this, "javax.swing.JComponent"_s)) {
			if ($nc(($cast($JComponent, this)))->isOpaque()) {
				$init($AccessibleState);
				states->add($AccessibleState::OPAQUE);
			}
		}
		return states;
	}
}

bool Component::isInstanceOf(Object$* obj, $String* className) {
	$init(Component);
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr) {
		return false;
	}
	if (className == nullptr) {
		return false;
	}
	$Class* cls = $nc($of(obj))->getClass();
	while (cls != nullptr) {
		if ($nc($(cls->getName()))->equals(className)) {
			return true;
		}
		cls = cls->getSuperclass();
	}
	return false;
}

bool Component::areBoundsValid() {
	$var($Container, cont, getContainer());
	bool var$0 = cont == nullptr || $nc(cont)->isValid();
	return var$0 || $nc(cont)->getLayout() == nullptr;
}

void Component::applyCompoundShape($Region* shape$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Region, shape, shape$renamed);
	checkTreeLock();
	if (!areBoundsValid()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$var($String, var$0, $$str({"this = "_s, this, "; areBoundsValid = "_s}));
			$nc(Component::mixingLog)->fine($$concat(var$0, $$str(areBoundsValid())));
		}
		return;
	}
	if (!isLightweight()) {
		$var($ComponentPeer, peer, this->peer);
		if (peer != nullptr) {
			if ($nc(shape)->isEmpty()) {
				$init($Region);
				$assign(shape, $Region::EMPTY_REGION);
			}
			if ($nc(shape)->equals($(getNormalShape()))) {
				if (this->compoundShape == nullptr) {
					return;
				}
				$set(this, compoundShape, nullptr);
				peer->applyShape(nullptr);
			} else {
				if (shape->equals($(getAppliedShape()))) {
					return;
				}
				$set(this, compoundShape, shape);
				$var($Point, compAbsolute, getLocationOnWindow());
				$init($PlatformLogger$Level);
				if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; compAbsolute="_s, compAbsolute, "; shape="_s, shape}));
				}
				peer->applyShape($(shape->getTranslatedRegion(-$nc(compAbsolute)->x, -compAbsolute->y)));
			}
		}
	}
}

$Region* Component::getAppliedShape() {
	checkTreeLock();
	return (this->compoundShape == nullptr || isLightweight()) ? getNormalShape() : this->compoundShape;
}

$Point* Component::getLocationOnWindow() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$var($Point, curLocation, getLocation());
	{
		$var($Container, parent, getContainer());
		for (; parent != nullptr && !($instanceOf($Window, parent)); $assign(parent, $nc(parent)->getContainer())) {
			$nc(curLocation)->x += parent->getX();
			curLocation->y += parent->getY();
		}
	}
	return curLocation;
}

$Region* Component::getNormalShape() {
	checkTreeLock();
	$var($Point, compAbsolute, getLocationOnWindow());
	int32_t var$0 = $nc(compAbsolute)->x;
	int32_t var$1 = compAbsolute->y;
	int32_t var$2 = getWidth();
	return $Region::getInstanceXYWH(var$0, var$1, var$2, getHeight());
}

$Region* Component::getOpaqueShape() {
	checkTreeLock();
	if (this->mixingCutoutRegion != nullptr) {
		return this->mixingCutoutRegion;
	} else {
		return getNormalShape();
	}
}

int32_t Component::getSiblingIndexAbove() {
	checkTreeLock();
	$var($Container, parent, getContainer());
	if (parent == nullptr) {
		return -1;
	}
	int32_t nextAbove = $nc(parent)->getComponentZOrder(this) - 1;
	return nextAbove < 0 ? -1 : nextAbove;
}

$ComponentPeer* Component::getHWPeerAboveMe() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$var($Container, cont, getContainer());
	int32_t indexAbove = getSiblingIndexAbove();
	while (cont != nullptr) {
		for (int32_t i = indexAbove; i > -1; --i) {
			$var(Component, comp, cont->getComponent(i));
			bool var$0 = comp != nullptr && comp->isDisplayable();
			if (var$0 && !comp->isLightweight()) {
				return comp->peer;
			}
		}
		if (!cont->isLightweight()) {
			break;
		}
		indexAbove = cont->getSiblingIndexAbove();
		$assign(cont, cont->getContainer());
	}
	return nullptr;
}

int32_t Component::getSiblingIndexBelow() {
	checkTreeLock();
	$var($Container, parent, getContainer());
	if (parent == nullptr) {
		return -1;
	}
	int32_t nextBelow = $nc(parent)->getComponentZOrder(this) + 1;
	return nextBelow >= parent->getComponentCount() ? -1 : nextBelow;
}

bool Component::isNonOpaqueForMixing() {
	return this->mixingCutoutRegion != nullptr && $nc(this->mixingCutoutRegion)->isEmpty();
}

$Region* Component::calculateCurrentShape() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$var($Region, s, getNormalShape());
	$init($PlatformLogger$Level);
	if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; normalShape="_s, s}));
	}
	if (getContainer() != nullptr) {
		$var(Component, comp, this);
		$var($Container, cont, comp->getContainer());
		while (cont != nullptr) {
			for (int32_t index = $nc(comp)->getSiblingIndexAbove(); index != -1; --index) {
				$var(Component, c, cont->getComponent(index));
				bool var$0 = $nc(c)->isLightweight();
				if (var$0 && c->isShowing()) {
					$assign(s, $nc(s)->getDifference($(c->getOpaqueShape())));
				}
			}
			if (cont->isLightweight()) {
				$assign(s, $nc(s)->getIntersection($(cont->getNormalShape())));
			} else {
				break;
			}
			$assign(comp, cont);
			$assign(cont, cont->getContainer());
		}
	}
	if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Component::mixingLog)->fine($$str({"currentShape="_s, s}));
	}
	return s;
}

void Component::applyCurrentShape() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	if (!areBoundsValid()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$var($String, var$0, $$str({"this = "_s, this, "; areBoundsValid = "_s}));
			$nc(Component::mixingLog)->fine($$concat(var$0, $$str(areBoundsValid())));
		}
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Component::mixingLog)->fine($$str({"this = "_s, this}));
	}
	applyCompoundShape($(calculateCurrentShape()));
}

void Component::subtractAndApplyShape($Region* s) {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$init($PlatformLogger$Level);
	if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; s="_s, s}));
	}
	applyCompoundShape($($nc($(getAppliedShape()))->getDifference(s)));
}

void Component::applyCurrentShapeBelowMe() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$var($Container, parent, getContainer());
	if (parent != nullptr && parent->isShowing()) {
		parent->recursiveApplyCurrentShape(getSiblingIndexBelow());
		$var($Container, parent2, parent->getContainer());
		while (!$nc(parent)->isOpaque() && parent2 != nullptr) {
			parent2->recursiveApplyCurrentShape(parent->getSiblingIndexBelow());
			$assign(parent, parent2);
			$assign(parent2, parent->getContainer());
		}
	}
}

void Component::subtractAndApplyShapeBelowMe() {
	$useLocalCurrentObjectStackCache();
	checkTreeLock();
	$var($Container, parent, getContainer());
	if (parent != nullptr && isShowing()) {
		$var($Region, opaqueShape, getOpaqueShape());
		parent->recursiveSubtractAndApplyShape(opaqueShape, getSiblingIndexBelow());
		$var($Container, parent2, parent->getContainer());
		while (!$nc(parent)->isOpaque() && parent2 != nullptr) {
			parent2->recursiveSubtractAndApplyShape(opaqueShape, parent->getSiblingIndexBelow());
			$assign(parent, parent2);
			$assign(parent2, parent->getContainer());
		}
	}
}

void Component::mixOnShowing() {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::mixingLog)->fine($$str({"this = "_s, this}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (isLightweight()) {
			subtractAndApplyShapeBelowMe();
		} else {
			applyCurrentShape();
		}
	}
}

void Component::mixOnHiding(bool isLightweight) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; isLightweight = "_s, $$str(isLightweight)}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (isLightweight) {
			applyCurrentShapeBelowMe();
		}
	}
}

void Component::mixOnReshaping() {
	$synchronized(getTreeLock()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::mixingLog)->fine($$str({"this = "_s, this}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (isLightweight()) {
			applyCurrentShapeBelowMe();
		} else {
			applyCurrentShape();
		}
	}
}

void Component::mixOnZOrderChanging(int32_t oldZorder, int32_t newZorder) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		bool becameHigher = newZorder < oldZorder;
		$var($Container, parent, getContainer());
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; oldZorder="_s, $$str(oldZorder), "; newZorder="_s, $$str(newZorder), "; parent="_s, parent}));
		}
		if (!isMixingNeeded()) {
			return;
		}
		if (isLightweight()) {
			if (becameHigher) {
				if (parent != nullptr && isShowing()) {
					$var($Region, var$0, getOpaqueShape());
					parent->recursiveSubtractAndApplyShape(var$0, getSiblingIndexBelow(), oldZorder);
				}
			} else if (parent != nullptr) {
				parent->recursiveApplyCurrentShape(oldZorder, newZorder);
			}
		} else if (becameHigher) {
			applyCurrentShape();
		} else if (parent != nullptr) {
			$var($Region, shape, getAppliedShape());
			for (int32_t index = oldZorder; index < newZorder; ++index) {
				$var(Component, c, parent->getComponent(index));
				bool var$1 = $nc(c)->isLightweight();
				if (var$1 && c->isShowing()) {
					$assign(shape, $nc(shape)->getDifference($(c->getOpaqueShape())));
				}
			}
			applyCompoundShape(shape);
		}
	}
}

void Component::mixOnValidating() {
}

bool Component::isMixingNeeded() {
	$useLocalCurrentObjectStackCache();
	if ($SunToolkit::getSunAwtDisableMixing()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(Component::mixingLog)->finest($$str({"this = "_s, this, "; Mixing disabled via sun.awt.disableMixing"_s}));
		}
		return false;
	}
	if (!areBoundsValid()) {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$var($String, var$0, $$str({"this = "_s, this, "; areBoundsValid = "_s}));
			$nc(Component::mixingLog)->fine($$concat(var$0, $$str(areBoundsValid())));
		}
		return false;
	}
	$var($Window, window, getContainingWindow());
	if (window != nullptr) {
		bool var$2 = !window->hasHeavyweightDescendants();
		bool var$1 = var$2 || !window->hasLightweightDescendants();
		if (var$1 || window->isDisposing()) {
			$init($PlatformLogger$Level);
			if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$var($String, var$7, $$str({"containing window = "_s, window, "; has h/w descendants = "_s}));
				$var($String, var$6, $$concat(var$7, $$str(window->hasHeavyweightDescendants())));
				$var($String, var$5, $$concat(var$6, "; has l/w descendants = "_s));
				$var($String, var$4, $$concat(var$5, $$str(window->hasLightweightDescendants())));
				$var($String, var$3, $$concat(var$4, "; disposing = "_s));
				$nc(Component::mixingLog)->fine($$concat(var$3, $$str(window->isDisposing())));
			}
			return false;
		}
	} else {
		$init($PlatformLogger$Level);
		if ($nc(Component::mixingLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(Component::mixingLog)->fine($$str({"this = "_s, this, "; containing window is null"_s}));
		}
		return false;
	}
	return true;
}

void Component::setMixingCutoutShape($Shape* shape) {
	$var($Region, region, shape == nullptr ? ($Region*)nullptr : $Region::getInstance(shape, ($AffineTransform*)nullptr));
	$synchronized(getTreeLock()) {
		bool needShowing = false;
		bool needHiding = false;
		if (!isNonOpaqueForMixing()) {
			needHiding = true;
		}
		$set(this, mixingCutoutRegion, region);
		if (!isNonOpaqueForMixing()) {
			needShowing = true;
		}
		if (isMixingNeeded()) {
			if (needHiding) {
				mixOnHiding(isLightweight());
			}
			if (needShowing) {
				mixOnShowing();
			}
		}
	}
}

void Component::updateZOrder() {
	$nc(this->peer)->setZOrder($(getHWPeerAboveMe()));
}

void clinit$Component($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Component::actionListenerK, "actionL"_s);
	$assignStatic(Component::adjustmentListenerK, "adjustmentL"_s);
	$assignStatic(Component::componentListenerK, "componentL"_s);
	$assignStatic(Component::containerListenerK, "containerL"_s);
	$assignStatic(Component::focusListenerK, "focusL"_s);
	$assignStatic(Component::itemListenerK, "itemL"_s);
	$assignStatic(Component::keyListenerK, "keyL"_s);
	$assignStatic(Component::mouseListenerK, "mouseL"_s);
	$assignStatic(Component::mouseMotionListenerK, "mouseMotionL"_s);
	$assignStatic(Component::mouseWheelListenerK, "mouseWheelL"_s);
	$assignStatic(Component::textListenerK, "textL"_s);
	$assignStatic(Component::ownedWindowK, "ownedL"_s);
	$assignStatic(Component::windowListenerK, "windowL"_s);
	$assignStatic(Component::inputMethodListenerK, "inputMethodL"_s);
	$assignStatic(Component::hierarchyListenerK, "hierarchyL"_s);
	$assignStatic(Component::hierarchyBoundsListenerK, "hierarchyBoundsL"_s);
	$assignStatic(Component::windowStateListenerK, "windowStateL"_s);
	$assignStatic(Component::windowFocusListenerK, "windowFocusL"_s);
	Component::TOP_ALIGNMENT = 0.0f;
	Component::CENTER_ALIGNMENT = 0.5f;
	Component::BOTTOM_ALIGNMENT = 1.0f;
	Component::LEFT_ALIGNMENT = 0.0f;
	Component::RIGHT_ALIGNMENT = 1.0f;
	$beforeCallerSensitive();
	Component::$assertionsDisabled = !Component::class$->desiredAssertionStatus();
	$assignStatic(Component::log, $PlatformLogger::getLogger("java.awt.Component"_s));
	$assignStatic(Component::eventLog, $PlatformLogger::getLogger("java.awt.event.Component"_s));
	$assignStatic(Component::focusLog, $PlatformLogger::getLogger("java.awt.focus.Component"_s));
	$assignStatic(Component::mixingLog, $PlatformLogger::getLogger("java.awt.mixing.Component"_s));
	$assignStatic(Component::focusTraversalKeyPropertyNames, $new($StringArray, {
		"forwardFocusTraversalKeys"_s,
		"backwardFocusTraversalKeys"_s,
		"upCycleFocusTraversalKeys"_s,
		"downCycleFocusTraversalKeys"_s
	}));
	$assignStatic(Component::LOCK, $new($Component$AWTTreeLock));
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Component::initIDs();
		}
		$var($String, s, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.image.incrementaldraw"_s)))));
		Component::isInc = (s == nullptr || $nc(s)->equals("true"_s));
		$var($String, s2, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "awt.image.redrawrate"_s)))));
		Component::incRate = (s2 != nullptr) ? $Integer::parseInt(s2) : 100;
	}
	{
		$AWTAccessor::setComponentAccessor($$new($Component$1));
	}
	$assignStatic(Component::coalesceMap, $new($WeakHashMap));
	$load($AWTEvent);
	$assignStatic(Component::coalesceEventsParams, $new($ClassArray, {
		$AWTEvent::class$,
		$AWTEvent::class$
	}));
	$assignStatic(Component::requestFocusController, $new($Component$DummyRequestFocusController));
}

Component::Component() {
}

$Class* Component::load$($String* name, bool initialize) {
	$loadClass(Component, name, initialize, &_Component_ClassInfo_, clinit$Component, allocate$Component);
	return class$;
}

$Class* Component::class$ = nullptr;

	} // awt
} // java