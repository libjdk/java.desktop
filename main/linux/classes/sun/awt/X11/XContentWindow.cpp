#include <sun/awt/X11/XContentWindow.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/WindowDimensions.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XContentWindow$SavedExposeEvent.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BIT_GRAVITY
#undef COMPONENT_RESIZED
#undef EVENT_MASK
#undef FINE
#undef ICONIFIED
#undef UNITY_COMPIZ_WM

using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $WindowDimensions = ::sun::awt::X11::WindowDimensions;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XContentWindow$SavedExposeEvent = ::sun::awt::X11::XContentWindow$SavedExposeEvent;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWM = ::sun::awt::X11::XWM;
using $XWindow = ::sun::awt::X11::XWindow;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XContentWindow_FieldInfo_[] = {
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XContentWindow, insLog)},
	{"parentFrame", "Lsun/awt/X11/XDecoratedPeer;", nullptr, $PRIVATE | $FINAL, $field(XContentWindow, parentFrame)},
	{"iconifiedExposeEvents", "Ljava/util/List;", "Ljava/util/List<Lsun/awt/X11/XContentWindow$SavedExposeEvent;>;", $PRIVATE | $FINAL, $field(XContentWindow, iconifiedExposeEvents)},
	{}
};

$MethodInfo _XContentWindow_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDecoratedPeer;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(XContentWindow::*)($XDecoratedPeer*,$Rectangle*)>(&XContentWindow::init$))},
	{"createContent", "(Lsun/awt/X11/XDecoratedPeer;)Lsun/awt/X11/XContentWindow;", nullptr, $STATIC, $method(static_cast<XContentWindow*(*)($XDecoratedPeer*)>(&XContentWindow::createContent))},
	{"dispose", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"doLayout", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getGraphicsConfigurationData", "()Lsun/awt/X11/AwtGraphicsConfigData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getTargetBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWinBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleExposeEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleKeyPress", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleKeyRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleResize", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(XContentWindow::*)($Rectangle*)>(&XContentWindow::handleResize))},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isEmbedded", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isEventDisabled", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PROTECTED},
	{"isMouseAbove", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"layout", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"popup", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postEventToEventQueue", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postKeyEvent", "(IIIIIJIJII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"postPaintEvent", "(Ljava/awt/Component;IIII)V", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"purgeIconifiedExposeEvents", "()V", nullptr, 0, $method(static_cast<void(XContentWindow::*)()>(&XContentWindow::purgeIconifiedExposeEvents))},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"reshape", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setContentBounds", "(Lsun/awt/X11/WindowDimensions;)V", nullptr, 0, $method(static_cast<void(XContentWindow::*)($WindowDimensions*)>(&XContentWindow::setContentBounds))},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XContentWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.XContentWindow$SavedExposeEvent", "sun.awt.X11.XContentWindow", "SavedExposeEvent", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XContentWindow_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XContentWindow",
	"sun.awt.X11.XWindow",
	nullptr,
	_XContentWindow_FieldInfo_,
	_XContentWindow_MethodInfo_,
	nullptr,
	nullptr,
	_XContentWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XContentWindow$SavedExposeEvent"
};

$Object* allocate$XContentWindow($Class* clazz) {
	return $of($alloc(XContentWindow));
}

$PlatformLogger* XContentWindow::insLog = nullptr;

XContentWindow* XContentWindow::createContent($XDecoratedPeer* parentFrame) {
	$init(XContentWindow);
	$useLocalCurrentObjectStackCache();
	$var($WindowDimensions, dims, $nc(parentFrame)->getDimensions());
	$var($Rectangle, rec, $nc(dims)->getBounds());
	$var($Insets, ins, dims->getInsets());
	if (ins != nullptr) {
		$nc(rec)->x = -ins->left;
		rec->y = -ins->top;
	} else {
		$nc(rec)->x = 0;
		rec->y = 0;
	}
	$var(XContentWindow, cw, $new(XContentWindow, parentFrame, rec));
	cw->xSetVisible(true);
	return cw;
}

void XContentWindow::init$($XDecoratedPeer* parentFrame, $Rectangle* bounds) {
	$var($Component, var$0, $cast($Component, $nc(parentFrame)->getTarget()));
	$XWindow::init$(var$0, parentFrame->getShell(), bounds);
	$set(this, iconifiedExposeEvents, $new($ArrayList));
	$set(this, parentFrame, parentFrame);
}

void XContentWindow::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XWindow::preInit(params);
	$init($XBaseWindow);
	$nc(params)->putIfNull($of($XBaseWindow::BIT_GRAVITY), $($of($Integer::valueOf($XConstants::NorthWestGravity))));
	$var($Long, eventMask, $cast($Long, params->get($XBaseWindow::EVENT_MASK)));
	if (eventMask != nullptr) {
		$assign(eventMask, $Long::valueOf((int64_t)(eventMask->longValue() & (uint64_t)~($XConstants::StructureNotifyMask))));
		params->put($XBaseWindow::EVENT_MASK, eventMask);
	}
}

$String* XContentWindow::getWMName() {
	return "Content window"_s;
}

bool XContentWindow::isEventDisabled($XEvent* e) {
	switch ($nc(e)->get_type()) {
	case $XConstants::EnterNotify:
		{}
	case $XConstants::LeaveNotify:
		{
			return false;
		}
	case $XConstants::ConfigureNotify:
		{
			return true;
		}
	case $XConstants::MapNotify:
		{}
	case $XConstants::UnmapNotify:
		{
			return true;
		}
	default:
		{
			bool var$0 = $XWindow::isEventDisabled(e);
			return var$0 || $nc(this->parentFrame)->isEventDisabled(e);
		}
	}
}

void XContentWindow::setContentBounds($WindowDimensions* dims) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Rectangle, newBounds, $nc(dims)->getBounds());
			$var($Insets, in, dims->getInsets());
			if (in != nullptr) {
				$nc(newBounds)->setLocation(-in->left, -in->top);
			}
			$init($PlatformLogger$Level);
			if ($nc(XContentWindow::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XContentWindow::insLog)->fine("Setting content bounds {0}, old bounds {1}"_s, $$new($ObjectArray, {
					$of(newBounds),
					$($of(getBounds()))
				}));
			}
			bool needHandleResize = !($nc(newBounds)->equals($(getBounds())));
			bool needPaint = this->width <= 0 || this->height <= 0;
			reshape(newBounds);
			if (needHandleResize) {
				$nc(XContentWindow::insLog)->fine("Sending RESIZED"_s);
				handleResize(newBounds);
			}
			if (needPaint) {
				postPaintEvent(this->target, 0, 0, newBounds->width, newBounds->height);
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

void XContentWindow::handleExposeEvent($XEvent* xev) {
	bool var$0 = $nc(this->parentFrame)->isTargetUndecorated();
	if (var$0 && $XWM::getWMID() != $XWM::UNITY_COMPIZ_WM && this->width <= 0 && this->height <= 0) {
		setContentBounds($($nc(this->parentFrame)->getDimensions()));
	}
	if (this->width <= 0 || this->height <= 0) {
		return;
	}
	$XWindow::handleExposeEvent(xev);
}

void XContentWindow::handleResize($Rectangle* bounds) {
	$useLocalCurrentObjectStackCache();
	$nc($($AWTAccessor::getComponentAccessor()))->setSize(this->target, $nc(bounds)->width, bounds->height);
	postEvent($$new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_RESIZED));
}

void XContentWindow::postPaintEvent($Component* target, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($instanceOf($XFramePeer, this->parentFrame) && ((int32_t)($nc(($cast($XFramePeer, this->parentFrame)))->getState() & (uint32_t)$Frame::ICONIFIED)) != 0) {
		$nc(this->iconifiedExposeEvents)->add($$new($XContentWindow$SavedExposeEvent, target, x, y, w, h));
	} else {
		$XWindow::postPaintEvent(target, x, y, w, h);
	}
}

void XContentWindow::purgeIconifiedExposeEvents() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->iconifiedExposeEvents)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XContentWindow$SavedExposeEvent, evt, $cast($XContentWindow$SavedExposeEvent, i$->next()));
			{
				$XWindow::postPaintEvent($nc(evt)->target, evt->x, evt->y, evt->w, evt->h);
			}
		}
	}
	$nc(this->iconifiedExposeEvents)->clear();
}

$String* XContentWindow::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "["_s}));
	$var($String, var$0, $$concat(var$1, $(getBounds())));
	return $concat(var$0, "]"_s);
}

void XContentWindow::setFullScreenExclusiveModeState(bool state) {
	$XWindow::setFullScreenExclusiveModeState(state);
}

void XContentWindow::setMWMHints($PropMwmHints* hints) {
	$XWindow::setMWMHints(hints);
}

$PropMwmHints* XContentWindow::getMWMHints() {
	return $XWindow::getMWMHints();
}

void XContentWindow::postKeyEvent(int32_t id, int32_t keyCode, int32_t keyChar, int32_t keyLocation, int32_t state, int64_t event, int32_t eventSize, int64_t rawCode, int32_t unicodeFromPrimaryKeysym, int32_t extendedKeyCode) {
	$XWindow::postKeyEvent(id, keyCode, keyChar, keyLocation, state, event, eventSize, rawCode, unicodeFromPrimaryKeysym, extendedKeyCode);
}

$Point* XContentWindow::getLocationOnScreen() {
	return $XWindow::getLocationOnScreen();
}

void XContentWindow::dispose() {
	$XWindow::dispose();
}

$SurfaceData* XContentWindow::getSurfaceData() {
	return $XWindow::getSurfaceData();
}

void XContentWindow::layout() {
	$XWindow::layout();
}

void XContentWindow::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::reshape(x, y, width, height);
}

void XContentWindow::reshape($Rectangle* bounds) {
	$XWindow::reshape(bounds);
}

void XContentWindow::handlePropertyNotify($XEvent* xev) {
	$XWindow::handlePropertyNotify(xev);
}

void XContentWindow::handleKeyRelease($XEvent* xev) {
	$XWindow::handleKeyRelease(xev);
}

void XContentWindow::handleKeyPress($XEvent* xev) {
	$XWindow::handleKeyPress(xev);
}

void XContentWindow::handleUnmapNotifyEvent($XEvent* xev) {
	$XWindow::handleUnmapNotifyEvent(xev);
}

void XContentWindow::handleMapNotifyEvent($XEvent* xev) {
	$XWindow::handleMapNotifyEvent(xev);
}

void XContentWindow::handleConfigureNotifyEvent($XEvent* xev) {
	$XWindow::handleConfigureNotifyEvent(xev);
}

void XContentWindow::doLayout(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::doLayout(x, y, width, height);
}

void XContentWindow::handleXCrossingEvent($XEvent* xev) {
	$XWindow::handleXCrossingEvent(xev);
}

bool XContentWindow::isMouseAbove() {
	return $XWindow::isMouseAbove();
}

void XContentWindow::handleMotionNotify($XEvent* xev) {
	$XWindow::handleMotionNotify(xev);
}

void XContentWindow::handleButtonPressRelease($XEvent* xev) {
	$XWindow::handleButtonPressRelease(xev);
}

void XContentWindow::popup(int32_t x, int32_t y, int32_t width, int32_t height) {
	$XWindow::popup(x, y, width, height);
}

void XContentWindow::paint($Graphics* g) {
	$XWindow::paint(g);
}

bool XContentWindow::isEmbedded() {
	return $XWindow::isEmbedded();
}

$Color* XContentWindow::getWinBackground() {
	return $XWindow::getWinBackground();
}

void XContentWindow::setBackground($Color* c) {
	$XWindow::setBackground(c);
}

void XContentWindow::postEventToEventQueue($AWTEvent* event) {
	$XWindow::postEventToEventQueue(event);
}

$Rectangle* XContentWindow::getTargetBounds() {
	return $XWindow::getTargetBounds();
}

$FontMetrics* XContentWindow::getFontMetrics($Font* font) {
	return $XWindow::getFontMetrics(font);
}

$Graphics* XContentWindow::getGraphics() {
	return $XWindow::getGraphics();
}

$ColorModel* XContentWindow::getColorModel() {
	return $XWindow::getColorModel();
}

$ColorModel* XContentWindow::getColorModel(int32_t transparency) {
	return $XWindow::getColorModel(transparency);
}

$Component* XContentWindow::getEventSource() {
	return $XWindow::getEventSource();
}

$Object* XContentWindow::getTarget() {
	return $of($XWindow::getTarget());
}

$AwtGraphicsConfigData* XContentWindow::getGraphicsConfigurationData() {
	return $XWindow::getGraphicsConfigurationData();
}

$GraphicsConfiguration* XContentWindow::getGraphicsConfiguration() {
	return $XWindow::getGraphicsConfiguration();
}

void clinit$XContentWindow($Class* class$) {
	$assignStatic(XContentWindow::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XContentWindow"_s));
}

XContentWindow::XContentWindow() {
}

$Class* XContentWindow::load$($String* name, bool initialize) {
	$loadClass(XContentWindow, name, initialize, &_XContentWindow_ClassInfo_, clinit$XContentWindow, allocate$XContentWindow);
	return class$;
}

$Class* XContentWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun