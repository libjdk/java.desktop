#include <sun/awt/X11/XScrollbar.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XScrollRepeater.h>
#include <sun/awt/X11/XScrollbar$1.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALIGNMENT_HORIZONTAL
#undef ALIGNMENT_VERTICAL
#undef ARROW_IND
#undef BACKGROUND_COLOR
#undef BLOCK_DECREMENT
#undef BLOCK_INCREMENT
#undef BUTTON1_MASK
#undef FINER
#undef MIN_THUMB_H
#undef MOUSE_DRAGGED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef TRACK
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XScrollRepeater = ::sun::awt::X11::XScrollRepeater;
using $XScrollbar$1 = ::sun::awt::X11::XScrollbar$1;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XScrollbar_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XScrollbar, log)},
	{"scroller", "Lsun/awt/X11/XScrollRepeater;", nullptr, $PRIVATE | $STATIC, $staticField(XScrollbar, scroller)},
	{"i_scroller", "Lsun/awt/X11/XScrollRepeater;", nullptr, $PRIVATE, $field(XScrollbar, i_scroller)},
	{"MIN_THUMB_H", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XScrollbar, MIN_THUMB_H)},
	{"ARROW_IND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XScrollbar, ARROW_IND)},
	{"sb", "Lsun/awt/X11/XScrollbarClient;", nullptr, 0, $field(XScrollbar, sb)},
	{"val", "I", nullptr, $PRIVATE, $field(XScrollbar, val)},
	{"min", "I", nullptr, $PRIVATE, $field(XScrollbar, min)},
	{"max", "I", nullptr, $PRIVATE, $field(XScrollbar, max)},
	{"vis", "I", nullptr, $PRIVATE, $field(XScrollbar, vis)},
	{"line", "I", nullptr, $PRIVATE, $field(XScrollbar, line)},
	{"page", "I", nullptr, $PRIVATE, $field(XScrollbar, page)},
	{"needsRepaint", "Z", nullptr, $PRIVATE, $field(XScrollbar, needsRepaint$)},
	{"pressed", "Z", nullptr, $PRIVATE, $field(XScrollbar, pressed)},
	{"dragging", "Z", nullptr, $PRIVATE, $field(XScrollbar, dragging)},
	{"firstArrow", "Ljava/awt/Polygon;", nullptr, 0, $field(XScrollbar, firstArrow)},
	{"secondArrow", "Ljava/awt/Polygon;", nullptr, 0, $field(XScrollbar, secondArrow)},
	{"width", "I", nullptr, 0, $field(XScrollbar, width)},
	{"height", "I", nullptr, 0, $field(XScrollbar, height)},
	{"barWidth", "I", nullptr, 0, $field(XScrollbar, barWidth)},
	{"barLength", "I", nullptr, 0, $field(XScrollbar, barLength)},
	{"arrowArea", "I", nullptr, 0, $field(XScrollbar, arrowArea)},
	{"alignment", "I", nullptr, 0, $field(XScrollbar, alignment)},
	{"ALIGNMENT_VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollbar, ALIGNMENT_VERTICAL)},
	{"ALIGNMENT_HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XScrollbar, ALIGNMENT_HORIZONTAL)},
	{"mode", "I", nullptr, 0, $field(XScrollbar, mode)},
	{"thumbOffset", "Ljava/awt/Point;", nullptr, 0, $field(XScrollbar, thumbOffset)},
	{"prevThumb", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XScrollbar, prevThumb)},
	{}
};

$MethodInfo _XScrollbar_MethodInfo_[] = {
	{"<init>", "(ILsun/awt/X11/XScrollbarClient;)V", nullptr, $PUBLIC, $method(static_cast<void(XScrollbar::*)(int32_t,$XScrollbarClient*)>(&XScrollbar::init$))},
	{"beforeThumb", "(II)Z", nullptr, $ABSTRACT},
	{"calculateArrowWidth", "()V", nullptr, 0},
	{"calculateCursorOffset", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XScrollbar::*)(int32_t,int32_t)>(&XScrollbar::calculateCursorOffset))},
	{"calculateThumbRect", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"createArrowShape", "(ZZ)Ljava/awt/Polygon;", nullptr, $PROTECTED},
	{"getArrowAreaWidth", "()I", nullptr, 0},
	{"getArrowWidth", "()I", nullptr, 0},
	{"getBlockIncrement", "()I", nullptr, 0},
	{"getMaximum", "()I", nullptr, 0},
	{"getMinimum", "()I", nullptr, 0},
	{"getScaleFactor", "()D", nullptr, $PRIVATE, $method(static_cast<double(XScrollbar::*)()>(&XScrollbar::getScaleFactor))},
	{"getThumbArea", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED | $ABSTRACT},
	{"getUnitIncrement", "()I", nullptr, 0},
	{"getValue", "()I", nullptr, 0},
	{"getVisibleAmount", "()I", nullptr, 0},
	{"handleMouseEvent", "(IIII)V", nullptr, $PUBLIC},
	{"handleTrackEvent", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(XScrollbar::*)(int32_t,int32_t,bool)>(&XScrollbar::handleTrackEvent))},
	{"isInArrow", "(II)Z", nullptr, 0},
	{"isInThumb", "(II)Z", nullptr, 0},
	{"needsRepaint", "()Z", nullptr, $PUBLIC},
	{"notifyValue", "(I)V", nullptr, 0},
	{"notifyValue", "(IZ)V", nullptr, 0},
	{"paint", "(Ljava/awt/Graphics;[Ljava/awt/Color;Z)V", nullptr, 0},
	{"paintArrows", "(Ljava/awt/Graphics2D;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, 0},
	{"rebuildArrows", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"scroll", "()V", nullptr, 0},
	{"setBlockIncrement", "(I)V", nullptr, $SYNCHRONIZED},
	{"setMaximum", "(I)V", nullptr, $SYNCHRONIZED},
	{"setMinimum", "(I)V", nullptr, $SYNCHRONIZED},
	{"setMode", "(I)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"setUnitIncrement", "(I)V", nullptr, $SYNCHRONIZED},
	{"setValue", "(I)V", nullptr, $SYNCHRONIZED},
	{"setValues", "(IIII)V", nullptr, $SYNCHRONIZED},
	{"setValues", "(IIIIII)V", nullptr, $SYNCHRONIZED},
	{"setVisibleAmount", "(I)V", nullptr, $SYNCHRONIZED},
	{"startScrolling", "()V", nullptr, 0},
	{"startScrollingInstance", "()V", nullptr, 0},
	{"stopScrollingInstance", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XScrollbar_InnerClassesInfo_[] = {
	{"sun.awt.X11.XScrollbar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XScrollbar_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XScrollbar",
	"java.lang.Object",
	nullptr,
	_XScrollbar_FieldInfo_,
	_XScrollbar_MethodInfo_,
	nullptr,
	nullptr,
	_XScrollbar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XScrollbar$1"
};

$Object* allocate$XScrollbar($Class* clazz) {
	return $of($alloc(XScrollbar));
}

$PlatformLogger* XScrollbar::log = nullptr;
$XScrollRepeater* XScrollbar::scroller = nullptr;

void XScrollbar::init$(int32_t alignment, $XScrollbarClient* sb) {
	$set(this, i_scroller, $new($XScrollRepeater, nullptr));
	this->needsRepaint$ = true;
	this->pressed = false;
	this->dragging = false;
	$set(this, sb, sb);
	this->alignment = alignment;
}

bool XScrollbar::needsRepaint() {
	return this->needsRepaint$;
}

void XScrollbar::notifyValue(int32_t v) {
	notifyValue(v, false);
}

void XScrollbar::notifyValue(int32_t v, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	if (v < this->min) {
		v = this->min;
	} else if (v > this->max - this->vis) {
		v = this->max - this->vis;
	}
	int32_t value = v;
	int32_t mode = this->mode;
	if ((this->sb != nullptr) && ((value != this->val) || (!this->pressed))) {
		$var($Object, var$0, $of($nc(this->sb)->getEventSource()));
		$SunToolkit::executeOnEventHandlerThread(var$0, $$new($XScrollbar$1, this, mode, value, isAdjusting));
	}
}

void XScrollbar::setSize(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbar::log)->finer($$str({"Setting scroll bar "_s, this, " size to "_s, $$str(width), "x"_s, $$str(height)}));
	}
	this->width = width;
	this->height = height;
}

$Polygon* XScrollbar::createArrowShape(bool vertical, bool up) {
	$var($Polygon, arrow, $new($Polygon));
	if (vertical) {
		int32_t x = this->width / 2 - getArrowWidth() / 2;
		int32_t y1 = (up ? XScrollbar::ARROW_IND : this->barLength - XScrollbar::ARROW_IND);
		int32_t y2 = (up ? getArrowWidth() : this->barLength - getArrowWidth() - XScrollbar::ARROW_IND);
		arrow->addPoint(x + getArrowWidth() / 2, y1);
		arrow->addPoint(x + getArrowWidth(), y2);
		arrow->addPoint(x, y2);
		arrow->addPoint(x + getArrowWidth() / 2, y1);
	} else {
		int32_t y = this->height / 2 - getArrowWidth() / 2;
		int32_t x1 = (up ? XScrollbar::ARROW_IND : this->barLength - XScrollbar::ARROW_IND);
		int32_t x2 = (up ? getArrowWidth() : this->barLength - getArrowWidth() - XScrollbar::ARROW_IND);
		arrow->addPoint(x1, y + getArrowWidth() / 2);
		arrow->addPoint(x2, y + getArrowWidth());
		arrow->addPoint(x2, y);
		arrow->addPoint(x1, y + getArrowWidth() / 2);
	}
	return arrow;
}

void XScrollbar::paint($Graphics* g, $ColorArray* colors, bool paintAll) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbar::log)->finer($$str({"Painting scrollbar "_s, this}));
	}
	bool useBufferedImage = false;
	$var($Graphics2D, g2, nullptr);
	$var($BufferedImage, buffer, nullptr);
	if (!($instanceOf($Graphics2D, g))) {
		$var($X11GraphicsConfig, graphicsConfig, ($cast($X11GraphicsConfig, $nc($($nc(this->sb)->getEventSource()))->getGraphicsConfiguration())));
		$assign(buffer, $nc(graphicsConfig)->createCompatibleImage(this->width, this->height));
		$assign(g2, $nc(buffer)->createGraphics());
		useBufferedImage = true;
	} else {
		$assign(g2, $cast($Graphics2D, g));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Rectangle, thumbRect, calculateThumbRect());
			$set(this, prevThumb, thumbRect);
			$var($Color, back, $nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
			int32_t var$1 = $nc(back)->getRed();
			int32_t var$2 = back->getGreen();
			$var($Color, selectColor, $new($Color, $MotifColorUtilities::calculateSelectFromBackground(var$1, var$2, back->getBlue())));
			int32_t var$3 = $nc(back)->getRed();
			int32_t var$4 = back->getGreen();
			$var($Color, darkShadow, $new($Color, $MotifColorUtilities::calculateBottomShadowFromBackground(var$3, var$4, back->getBlue())));
			int32_t var$5 = $nc(back)->getRed();
			int32_t var$6 = back->getGreen();
			$var($Color, lightShadow, $new($Color, $MotifColorUtilities::calculateTopShadowFromBackground(var$5, var$6, back->getBlue())));
			$XToolkit::awtLock();
			{
				$var($Throwable, var$7, nullptr);
				try {
					$XlibWrapper::XFlush($XToolkit::getDisplay());
				} catch ($Throwable& var$8) {
					$assign(var$7, var$8);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$7 != nullptr) {
					$throw(var$7);
				}
			}
			if (paintAll) {
				$nc(g2)->setColor(selectColor);
				if (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL) {
					g2->fillRect(0, 0, $nc(thumbRect)->x, this->height);
					g2->fillRect($nc(thumbRect)->x + thumbRect->width, 0, this->width - (thumbRect->x + thumbRect->width), this->height);
				} else {
					g2->fillRect(0, 0, this->width, $nc(thumbRect)->y);
					g2->fillRect(0, $nc(thumbRect)->y + thumbRect->height, this->width, this->height - (thumbRect->y + thumbRect->height));
				}
				g2->setColor(darkShadow);
				g2->drawLine(0, 0, this->width - 1, 0);
				g2->drawLine(0, 0, 0, this->height - 1);
				g2->setColor(lightShadow);
				g2->drawLine(1, this->height - 1, this->width - 1, this->height - 1);
				g2->drawLine(this->width - 1, 1, this->width - 1, this->height - 1);
			} else {
				$nc(g2)->setColor(selectColor);
				$var($Rectangle, thumbArea, getThumbArea());
				g2->fill(thumbArea);
			}
			if (paintAll) {
				paintArrows(g2, colors->get($XComponentPeer::BACKGROUND_COLOR), darkShadow, lightShadow);
			}
			$nc(g2)->setColor(colors->get($XComponentPeer::BACKGROUND_COLOR));
			g2->fillRect($nc(thumbRect)->x, thumbRect->y, thumbRect->width, thumbRect->height);
			g2->setColor(lightShadow);
			g2->drawLine($nc(thumbRect)->x, thumbRect->y, thumbRect->x + thumbRect->width, thumbRect->y);
			g2->drawLine($nc(thumbRect)->x, thumbRect->y, thumbRect->x, thumbRect->y + thumbRect->height);
			g2->setColor(darkShadow);
			g2->drawLine($nc(thumbRect)->x + 1, thumbRect->y + thumbRect->height, thumbRect->x + thumbRect->width, thumbRect->y + thumbRect->height);
			g2->drawLine($nc(thumbRect)->x + thumbRect->width, thumbRect->y + 1, thumbRect->x + thumbRect->width, thumbRect->y + thumbRect->height);
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
		} /*finally*/ {
			if (useBufferedImage) {
				$nc(g2)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (useBufferedImage) {
		$nc(g)->drawImage(buffer, 0, 0, nullptr);
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$10, nullptr);
		try {
			$XlibWrapper::XFlush($XToolkit::getDisplay());
		} catch ($Throwable& var$11) {
			$assign(var$10, var$11);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$10 != nullptr) {
			$throw(var$10);
		}
	}
}

void XScrollbar::paintArrows($Graphics2D* g, $Color* background, $Color* darkShadow, $Color* lightShadow) {
	$nc(g)->setColor(background);
	if (this->pressed && (this->mode == $AdjustmentEvent::UNIT_DECREMENT)) {
		g->fill(this->firstArrow);
		g->setColor(lightShadow);
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(0), $nc($nc(this->firstArrow)->ypoints)->get(0), $nc($nc(this->firstArrow)->xpoints)->get(1), $nc($nc(this->firstArrow)->ypoints)->get(1));
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(1), $nc($nc(this->firstArrow)->ypoints)->get(1), $nc($nc(this->firstArrow)->xpoints)->get(2), $nc($nc(this->firstArrow)->ypoints)->get(2));
		g->setColor(darkShadow);
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(2), $nc($nc(this->firstArrow)->ypoints)->get(2), $nc($nc(this->firstArrow)->xpoints)->get(0), $nc($nc(this->firstArrow)->ypoints)->get(0));
	} else {
		g->fill(this->firstArrow);
		g->setColor(darkShadow);
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(0), $nc($nc(this->firstArrow)->ypoints)->get(0), $nc($nc(this->firstArrow)->xpoints)->get(1), $nc($nc(this->firstArrow)->ypoints)->get(1));
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(1), $nc($nc(this->firstArrow)->ypoints)->get(1), $nc($nc(this->firstArrow)->xpoints)->get(2), $nc($nc(this->firstArrow)->ypoints)->get(2));
		g->setColor(lightShadow);
		g->drawLine($nc($nc(this->firstArrow)->xpoints)->get(2), $nc($nc(this->firstArrow)->ypoints)->get(2), $nc($nc(this->firstArrow)->xpoints)->get(0), $nc($nc(this->firstArrow)->ypoints)->get(0));
	}
	g->setColor(background);
	if (this->pressed && (this->mode == $AdjustmentEvent::UNIT_INCREMENT)) {
		g->fill(this->secondArrow);
		g->setColor(lightShadow);
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(0), $nc($nc(this->secondArrow)->ypoints)->get(0), $nc($nc(this->secondArrow)->xpoints)->get(1), $nc($nc(this->secondArrow)->ypoints)->get(1));
		g->setColor(darkShadow);
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(1), $nc($nc(this->secondArrow)->ypoints)->get(1), $nc($nc(this->secondArrow)->xpoints)->get(2), $nc($nc(this->secondArrow)->ypoints)->get(2));
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(2), $nc($nc(this->secondArrow)->ypoints)->get(2), $nc($nc(this->secondArrow)->xpoints)->get(0), $nc($nc(this->secondArrow)->ypoints)->get(0));
	} else {
		g->fill(this->secondArrow);
		g->setColor(darkShadow);
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(0), $nc($nc(this->secondArrow)->ypoints)->get(0), $nc($nc(this->secondArrow)->xpoints)->get(1), $nc($nc(this->secondArrow)->ypoints)->get(1));
		g->setColor(lightShadow);
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(1), $nc($nc(this->secondArrow)->ypoints)->get(1), $nc($nc(this->secondArrow)->xpoints)->get(2), $nc($nc(this->secondArrow)->ypoints)->get(2));
		g->drawLine($nc($nc(this->secondArrow)->xpoints)->get(2), $nc($nc(this->secondArrow)->ypoints)->get(2), $nc($nc(this->secondArrow)->xpoints)->get(0), $nc($nc(this->secondArrow)->ypoints)->get(0));
	}
}

void XScrollbar::startScrolling() {
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbar::log)->finer($$str({"Start scrolling on "_s, this}));
	}
	scroll();
	if (XScrollbar::scroller == nullptr) {
		$assignStatic(XScrollbar::scroller, $new($XScrollRepeater, this));
	} else {
		$nc(XScrollbar::scroller)->setScrollbar(this);
	}
	$nc(XScrollbar::scroller)->start();
}

void XScrollbar::startScrollingInstance() {
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbar::log)->finer($$str({"Start scrolling on "_s, this}));
	}
	scroll();
	$nc(this->i_scroller)->setScrollbar(this);
	$nc(this->i_scroller)->start();
}

void XScrollbar::stopScrollingInstance() {
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XScrollbar::log)->finer($$str({"Stop scrolling on "_s, this}));
	}
	$nc(this->i_scroller)->stop();
}

void XScrollbar::setMode(int32_t mode) {
	this->mode = mode;
}

void XScrollbar::scroll() {
	switch (this->mode) {
	case $AdjustmentEvent::UNIT_DECREMENT:
		{
			notifyValue(this->val - this->line);
			return;
		}
	case $AdjustmentEvent::UNIT_INCREMENT:
		{
			notifyValue(this->val + this->line);
			return;
		}
	case $AdjustmentEvent::BLOCK_DECREMENT:
		{
			notifyValue(this->val - this->page);
			return;
		}
	case $AdjustmentEvent::BLOCK_INCREMENT:
		{
			notifyValue(this->val + this->page);
			return;
		}
	}
	return;
}

bool XScrollbar::isInArrow(int32_t x, int32_t y) {
	int32_t coord = (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL ? x : y);
	int32_t arrAreaH = getArrowAreaWidth();
	if (coord < arrAreaH || coord > this->barLength - arrAreaH + 1) {
		return true;
	}
	return false;
}

bool XScrollbar::isInThumb(int32_t x, int32_t y) {
	$var($Rectangle, thumbRect, calculateThumbRect());
	$nc(thumbRect)->x -= 1;
	thumbRect->width += 3;
	thumbRect->height += 1;
	return thumbRect->contains(x, y);
}

void XScrollbar::handleMouseEvent(int32_t id, int32_t modifiers, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(modifiers & (uint32_t)$InputEvent::BUTTON1_MASK)) == 0) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XScrollbar::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($String, type, nullptr);
		switch (id) {
		case $MouseEvent::MOUSE_PRESSED:
			{
				$assign(type, "press"_s);
				break;
			}
		case $MouseEvent::MOUSE_RELEASED:
			{
				$assign(type, "release"_s);
				break;
			}
		case $MouseEvent::MOUSE_DRAGGED:
			{
				$assign(type, "drag"_s);
				break;
			}
		default:
			{
				$assign(type, "other"_s);
			}
		}
		$var($String, var$6, $$str({"Mouse "_s, type, " event in scroll bar "_s, this, "x = "_s, $$str(x), ", y = "_s, $$str(y), ", on arrow: "_s}));
		$var($String, var$5, $$concat(var$6, $$str(isInArrow(x, y))));
		$var($String, var$4, $$concat(var$5, ", on thumb: "_s));
		$var($String, var$3, $$concat(var$4, $$str(isInThumb(x, y))));
		$var($String, var$2, $$concat(var$3, ", before thumb: "_s));
		$var($String, var$1, $$concat(var$2, $$str(beforeThumb(x, y))));
		$var($String, var$0, $$concat(var$1, ", thumb rect"_s));
		$nc(XScrollbar::log)->finer($$concat(var$0, $(calculateThumbRect())));
	}
	{
		$var($Rectangle, pos, nullptr)
		switch (id) {
		case $MouseEvent::MOUSE_PRESSED:
			{
				if (isInArrow(x, y)) {
					this->pressed = true;
					if (beforeThumb(x, y)) {
						this->mode = $AdjustmentEvent::UNIT_DECREMENT;
					} else {
						this->mode = $AdjustmentEvent::UNIT_INCREMENT;
					}
					$nc(this->sb)->repaintScrollbarRequest(this);
					startScrolling();
					break;
				}
				if (isInThumb(x, y)) {
					this->mode = $AdjustmentEvent::TRACK;
				} else {
					if (beforeThumb(x, y)) {
						this->mode = $AdjustmentEvent::BLOCK_DECREMENT;
					} else {
						this->mode = $AdjustmentEvent::BLOCK_INCREMENT;
					}
					startScrolling();
				}
				$assign(pos, calculateThumbRect());
				$set(this, thumbOffset, $new($Point, x - $nc(pos)->x, y - pos->y));
				break;
			}
		case $MouseEvent::MOUSE_RELEASED:
			{
				this->pressed = false;
				$nc(this->sb)->repaintScrollbarRequest(this);
				$nc(XScrollbar::scroller)->stop();
				if (this->dragging) {
					handleTrackEvent(x, y, false);
					this->dragging = false;
				}
				break;
			}
		case $MouseEvent::MOUSE_DRAGGED:
			{
				this->dragging = true;
				handleTrackEvent(x, y, true);
			}
		}
	}
}

void XScrollbar::handleTrackEvent(int32_t x, int32_t y, bool isAdjusting) {
	if (this->mode == $AdjustmentEvent::TRACK) {
		notifyValue(calculateCursorOffset(x, y), isAdjusting);
	}
}

int32_t XScrollbar::calculateCursorOffset(int32_t x, int32_t y) {
	if (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL) {
		if (this->dragging) {
			int32_t var$0 = (x - ($nc(this->thumbOffset)->x + getArrowAreaWidth()));
			return $Math::max(0, $cast(int32_t, (var$0 / getScaleFactor()))) + this->min;
		} else {
			int32_t var$1 = (x - (getArrowAreaWidth()));
			return $Math::max(0, $cast(int32_t, (var$1 / getScaleFactor()))) + this->min;
		}
	} else if (this->dragging) {
		int32_t var$2 = (y - ($nc(this->thumbOffset)->y + getArrowAreaWidth()));
		return $Math::max(0, $cast(int32_t, (var$2 / getScaleFactor()))) + this->min;
	} else {
		int32_t var$3 = (y - (getArrowAreaWidth()));
		return $Math::max(0, $cast(int32_t, (var$3 / getScaleFactor()))) + this->min;
	}
}

void XScrollbar::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$synchronized(this) {
		if (maximum <= minimum) {
			maximum = minimum + 1;
		}
		if (visible > maximum - minimum) {
			visible = maximum - minimum;
		}
		if (visible < 1) {
			visible = 1;
		}
		if (value < minimum) {
			value = minimum;
		}
		if (value > maximum - visible) {
			value = maximum - visible;
		}
		this->val = value;
		this->vis = visible;
		this->min = minimum;
		this->max = maximum;
	}
}

void XScrollbar::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum, int32_t unitSize, int32_t blockSize) {
	$synchronized(this) {
		setValues(value, visible, minimum, maximum);
		setUnitIncrement(unitSize);
		setBlockIncrement(blockSize);
	}
}

int32_t XScrollbar::getValue() {
	return this->val;
}

void XScrollbar::setValue(int32_t newValue) {
	$synchronized(this) {
		setValues(newValue, this->vis, this->min, this->max);
	}
}

int32_t XScrollbar::getMinimum() {
	return this->min;
}

void XScrollbar::setMinimum(int32_t newMinimum) {
	$synchronized(this) {
		setValues(this->val, this->vis, newMinimum, this->max);
	}
}

int32_t XScrollbar::getMaximum() {
	return this->max;
}

void XScrollbar::setMaximum(int32_t newMaximum) {
	$synchronized(this) {
		setValues(this->val, this->vis, this->min, newMaximum);
	}
}

int32_t XScrollbar::getVisibleAmount() {
	return this->vis;
}

void XScrollbar::setVisibleAmount(int32_t newAmount) {
	$synchronized(this) {
		setValues(this->val, newAmount, this->min, this->max);
	}
}

void XScrollbar::setUnitIncrement(int32_t unitSize) {
	$synchronized(this) {
		this->line = unitSize;
	}
}

int32_t XScrollbar::getUnitIncrement() {
	return this->line;
}

void XScrollbar::setBlockIncrement(int32_t blockSize) {
	$synchronized(this) {
		this->page = blockSize;
	}
}

int32_t XScrollbar::getBlockIncrement() {
	return this->page;
}

int32_t XScrollbar::getArrowWidth() {
	return getArrowAreaWidth() - 2 * XScrollbar::ARROW_IND;
}

int32_t XScrollbar::getArrowAreaWidth() {
	return this->arrowArea;
}

void XScrollbar::calculateArrowWidth() {
	if (this->barLength < 2 * this->barWidth + XScrollbar::MIN_THUMB_H + 2) {
		this->arrowArea = (this->barLength - XScrollbar::MIN_THUMB_H + 2 * XScrollbar::ARROW_IND) / 2 - 1;
	} else {
		this->arrowArea = this->barWidth - 1;
	}
}

double XScrollbar::getScaleFactor() {
	double var$0 = (double)(this->barLength - 2 * getArrowAreaWidth());
	double f = var$0 / $Math::max(1, (this->max - this->min));
	return f;
}

$Rectangle* XScrollbar::calculateThumbRect() {
	float range = 0.0;
	float trueSize = 0.0;
	float factor = 0.0;
	float slideSize = 0.0;
	int32_t minSliderWidth = 0;
	int32_t minSliderHeight = 0;
	int32_t hitTheWall = 0;
	int32_t arrAreaH = getArrowAreaWidth();
	$var($Rectangle, retVal, $new($Rectangle, 0, 0, 0, 0));
	trueSize = (float)(this->barLength - 2 * arrAreaH - 1);
	if (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL) {
		minSliderWidth = XScrollbar::MIN_THUMB_H;
		minSliderHeight = this->height - 3;
	} else {
		minSliderWidth = this->width - 3;
		minSliderHeight = XScrollbar::MIN_THUMB_H;
	}
	range = (float)(this->max - this->min);
	factor = trueSize / range;
	slideSize = this->vis * factor;
	if (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL) {
		int32_t localVal = $cast(int32_t, (slideSize + 0.5));
		int32_t localMin = minSliderWidth;
		if (localVal > localMin) {
			retVal->width = localVal;
		} else {
			retVal->width = localMin;
			hitTheWall = localMin;
		}
		retVal->height = minSliderHeight;
	} else {
		retVal->width = minSliderWidth;
		int32_t localVal = $cast(int32_t, (slideSize + 0.5));
		int32_t localMin = minSliderHeight;
		if (localVal > localMin) {
			retVal->height = localVal;
		} else {
			retVal->height = localMin;
			hitTheWall = localMin;
		}
	}
	if (hitTheWall != 0) {
		trueSize -= hitTheWall;
		range -= this->vis;
		factor = trueSize / range;
	}
	if (this->alignment == XScrollbar::ALIGNMENT_HORIZONTAL) {
		retVal->x = ($cast(int32_t, (((((float)this->val) - ((float)this->min)) * factor) + 0.5))) + arrAreaH;
		retVal->y = 1;
	} else {
		retVal->x = 1;
		retVal->y = ($cast(int32_t, (((((float)this->val) - ((float)this->min)) * factor) + 0.5))) + arrAreaH;
	}
	return retVal;
}

$String* XScrollbar::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$of(this)->getClass(), "["_s, $$str(this->width), "x"_s, $$str(this->height), ","_s, $$str(this->barWidth), "x"_s, $$str(this->barLength), "]"_s});
}

void clinit$XScrollbar($Class* class$) {
	$assignStatic(XScrollbar::log, $PlatformLogger::getLogger("sun.awt.X11.XScrollbar"_s));
	$assignStatic(XScrollbar::scroller, $new($XScrollRepeater, nullptr));
}

XScrollbar::XScrollbar() {
}

$Class* XScrollbar::load$($String* name, bool initialize) {
	$loadClass(XScrollbar, name, initialize, &_XScrollbar_ClassInfo_, clinit$XScrollbar, allocate$XScrollbar);
	return class$;
}

$Class* XScrollbar::class$ = nullptr;

		} // X11
	} // awt
} // sun