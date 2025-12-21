#include <javax/swing/DebugGraphics.h>

#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/util/Hashtable.h>
#include <javax/swing/DebugGraphicsFilter.h>
#include <javax/swing/DebugGraphicsInfo.h>
#include <javax/swing/DebugGraphicsObserver.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUFFERED_OPTION
#undef DEBUG_GRAPHICS_LOADED
#undef FLASH_OPTION
#undef LOG_OPTION
#undef NONE_OPTION

using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $Hashtable = ::java::util::Hashtable;
using $DebugGraphicsFilter = ::javax::swing::DebugGraphicsFilter;
using $DebugGraphicsInfo = ::javax::swing::DebugGraphicsInfo;
using $DebugGraphicsObserver = ::javax::swing::DebugGraphicsObserver;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _DebugGraphics_FieldInfo_[] = {
	{"graphics", "Ljava/awt/Graphics;", nullptr, 0, $field(DebugGraphics, graphics)},
	{"buffer", "Ljava/awt/Image;", nullptr, 0, $field(DebugGraphics, buffer)},
	{"debugOptions", "I", nullptr, 0, $field(DebugGraphics, debugOptions)},
	{"graphicsID", "I", nullptr, 0, $field(DebugGraphics, graphicsID)},
	{"xOffset", "I", nullptr, 0, $field(DebugGraphics, xOffset)},
	{"yOffset", "I", nullptr, 0, $field(DebugGraphics, yOffset)},
	{"graphicsCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(DebugGraphics, graphicsCount)},
	{"imageLoadingIcon", "Ljavax/swing/ImageIcon;", nullptr, $PRIVATE | $STATIC, $staticField(DebugGraphics, imageLoadingIcon)},
	{"LOG_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DebugGraphics, LOG_OPTION)},
	{"FLASH_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DebugGraphics, FLASH_OPTION)},
	{"BUFFERED_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DebugGraphics, BUFFERED_OPTION)},
	{"NONE_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DebugGraphics, NONE_OPTION)},
	{"debugGraphicsInfoKey", "Ljava/lang/Class;", "Ljava/lang/Class<Ljavax/swing/DebugGraphicsInfo;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DebugGraphics, debugGraphicsInfoKey)},
	{}
};

$MethodInfo _DebugGraphics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DebugGraphics::*)()>(&DebugGraphics::init$))},
	{"<init>", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(DebugGraphics::*)($Graphics*,$JComponent*)>(&DebugGraphics::init$))},
	{"<init>", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $method(static_cast<void(DebugGraphics::*)($Graphics*)>(&DebugGraphics::init$))},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"create", "(IIII)Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"debugBuffered", "()Z", nullptr, 0},
	{"debugComponentCount", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&DebugGraphics::debugComponentCount))},
	{"debugFlash", "()Z", nullptr, 0},
	{"debugGraphics", "()Ljava/awt/Graphics;", nullptr, $PRIVATE, $method(static_cast<$Graphics*(DebugGraphics::*)()>(&DebugGraphics::debugGraphics))},
	{"debugLog", "()Z", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"draw3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawBytes", "([BIIII)V", nullptr, $PUBLIC},
	{"drawChars", "([CIIII)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC},
	{"fill3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"flashColor", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Color*(*)()>(&DebugGraphics::flashColor))},
	{"flashCount", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DebugGraphics::flashCount))},
	{"flashTime", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DebugGraphics::flashTime))},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDebugOptions", "()I", nullptr, $PUBLIC},
	{"getDebugOptions", "(Ljavax/swing/JComponent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JComponent*)>(&DebugGraphics::getDebugOptions))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"info", "()Ljavax/swing/DebugGraphicsInfo;", nullptr, $STATIC, $method(static_cast<$DebugGraphicsInfo*(*)()>(&DebugGraphics::info))},
	{"isDrawingBuffer", "()Z", nullptr, $PUBLIC},
	{"loadImage", "(Ljava/awt/Image;)V", nullptr, $STATIC, $method(static_cast<void(*)($Image*)>(&DebugGraphics::loadImage))},
	{"logStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintStream*(*)()>(&DebugGraphics::logStream))},
	{"pointToString", "(II)Ljava/lang/String;", nullptr, 0},
	{"setClip", "(IIII)V", nullptr, $PUBLIC},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setDebugOptions", "(I)V", nullptr, $PUBLIC},
	{"setDebugOptions", "(Ljavax/swing/JComponent;I)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,int32_t)>(&DebugGraphics::setDebugOptions))},
	{"setFlashColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Color*)>(&DebugGraphics::setFlashColor))},
	{"setFlashCount", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&DebugGraphics::setFlashCount))},
	{"setFlashTime", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&DebugGraphics::setFlashTime))},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setLogStream", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintStream*)>(&DebugGraphics::setLogStream))},
	{"setPaintMode", "()V", nullptr, $PUBLIC},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"shouldComponentDebug", "(Ljavax/swing/JComponent;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JComponent*)>(&DebugGraphics::shouldComponentDebug))},
	{"sleep", "(I)V", nullptr, $FINAL, $method(static_cast<void(DebugGraphics::*)(int32_t)>(&DebugGraphics::sleep))},
	{"toShortString", "()Ljava/lang/String;", nullptr, 0},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DebugGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DebugGraphics",
	"java.awt.Graphics",
	nullptr,
	_DebugGraphics_FieldInfo_,
	_DebugGraphics_MethodInfo_
};

$Object* allocate$DebugGraphics($Class* clazz) {
	return $of($alloc(DebugGraphics));
}

int32_t DebugGraphics::graphicsCount = 0;
$ImageIcon* DebugGraphics::imageLoadingIcon = nullptr;
$Class* DebugGraphics::debugGraphicsInfoKey = nullptr;

void DebugGraphics::init$() {
	$Graphics::init$();
	this->graphicsID = DebugGraphics::graphicsCount++;
	$set(this, buffer, nullptr);
	this->xOffset = (this->yOffset = 0);
}

void DebugGraphics::init$($Graphics* graphics, $JComponent* component) {
	DebugGraphics::init$(graphics);
	setDebugOptions($nc(component)->shouldDebugGraphics());
}

void DebugGraphics::init$($Graphics* graphics) {
	DebugGraphics::init$();
	$set(this, graphics, graphics);
}

$Graphics* DebugGraphics::create() {
	$var(DebugGraphics, debugGraphics, nullptr);
	$assign(debugGraphics, $new(DebugGraphics));
	$set(debugGraphics, graphics, $nc(this->graphics)->create());
	debugGraphics->debugOptions = this->debugOptions;
	$set(debugGraphics, buffer, this->buffer);
	return debugGraphics;
}

$Graphics* DebugGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var(DebugGraphics, debugGraphics, nullptr);
	$assign(debugGraphics, $new(DebugGraphics));
	$set(debugGraphics, graphics, $nc(this->graphics)->create(x, y, width, height));
	debugGraphics->debugOptions = this->debugOptions;
	$set(debugGraphics, buffer, this->buffer);
	debugGraphics->xOffset = this->xOffset + x;
	debugGraphics->yOffset = this->yOffset + y;
	return debugGraphics;
}

void DebugGraphics::setFlashColor($Color* flashColor) {
	$init(DebugGraphics);
	$set($nc($(info())), flashColor, flashColor);
}

$Color* DebugGraphics::flashColor() {
	$init(DebugGraphics);
	return $nc($(info()))->flashColor;
}

void DebugGraphics::setFlashTime(int32_t flashTime) {
	$init(DebugGraphics);
	$nc($(info()))->flashTime = flashTime;
}

int32_t DebugGraphics::flashTime() {
	$init(DebugGraphics);
	return $nc($(info()))->flashTime;
}

void DebugGraphics::setFlashCount(int32_t flashCount) {
	$init(DebugGraphics);
	$nc($(info()))->flashCount = flashCount;
}

int32_t DebugGraphics::flashCount() {
	$init(DebugGraphics);
	return $nc($(info()))->flashCount;
}

void DebugGraphics::setLogStream($PrintStream* stream) {
	$init(DebugGraphics);
	$set($nc($(info())), stream, stream);
}

$PrintStream* DebugGraphics::logStream() {
	$init(DebugGraphics);
	return $nc($(info()))->stream;
}

void DebugGraphics::setFont($Font* aFont) {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$nc($(info()))->log($$str({$(toShortString()), " Setting font: "_s, aFont}));
	}
	$nc(this->graphics)->setFont(aFont);
}

$Font* DebugGraphics::getFont() {
	return $nc(this->graphics)->getFont();
}

void DebugGraphics::setColor($Color* aColor) {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$nc($(info()))->log($$str({$(toShortString()), " Setting color: "_s, aColor}));
	}
	$nc(this->graphics)->setColor(aColor);
}

$Color* DebugGraphics::getColor() {
	return $nc(this->graphics)->getColor();
}

$FontMetrics* DebugGraphics::getFontMetrics() {
	return $nc(this->graphics)->getFontMetrics();
}

$FontMetrics* DebugGraphics::getFontMetrics($Font* f) {
	return $nc(this->graphics)->getFontMetrics(f);
}

void DebugGraphics::translate(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Translating by: "_s}));
		$nc($(info()))->log($$concat(var$0, $($new($Point, x, y))));
	}
	this->xOffset += x;
	this->yOffset += y;
	$nc(this->graphics)->translate(x, y);
}

void DebugGraphics::setPaintMode() {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$nc($(info()))->log($$str({$(toShortString()), " Setting paint mode"_s}));
	}
	$nc(this->graphics)->setPaintMode();
}

void DebugGraphics::setXORMode($Color* aColor) {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$nc($(info()))->log($$str({$(toShortString()), " Setting XOR mode: "_s, aColor}));
	}
	$nc(this->graphics)->setXORMode(aColor);
}

$Rectangle* DebugGraphics::getClipBounds() {
	return $nc(this->graphics)->getClipBounds();
}

void DebugGraphics::clipRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$nc(this->graphics)->clipRect(x, y, width, height);
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Setting clipRect: "_s}));
		$var($String, var$1, $$concat(var$2, $(($new($Rectangle, x, y, width, height)))));
		$var($String, var$0, $$concat(var$1, " New clipRect: "_s));
		$nc($(info()))->log($$concat(var$0, $($nc(this->graphics)->getClip())));
	}
}

void DebugGraphics::setClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$nc(this->graphics)->setClip(x, y, width, height);
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Setting new clipRect: "_s}));
		$nc($(info()))->log($$concat(var$0, $($nc(this->graphics)->getClip())));
	}
}

$Shape* DebugGraphics::getClip() {
	return $nc(this->graphics)->getClip();
}

void DebugGraphics::setClip($Shape* clip) {
	$useLocalCurrentObjectStackCache();
	$nc(this->graphics)->setClip(clip);
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Setting new clipRect: "_s}));
		$nc($(info()))->log($$concat(var$0, $($nc(this->graphics)->getClip())));
	}
}

void DebugGraphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing rect: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawRect(x, y, width, height);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawRect(x, y, width, height);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawRect(x, y, width, height);
}

void DebugGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Filling rect: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fillRect(x, y, width, height);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fillRect(x, y, width, height);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fillRect(x, y, width, height);
}

void DebugGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Clearing rect: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->clearRect(x, y, width, height);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->clearRect(x, y, width, height);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->clearRect(x, y, width, height);
}

void DebugGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$4, $$str({$(toShortString()), " Drawing round rect: "_s}));
		$var($String, var$3, $$concat(var$4, $($new($Rectangle, x, y, width, height))));
		$var($String, var$2, $$concat(var$3, " arcWidth: "_s));
		$var($String, var$1, $$concat(var$2, $$str(arcWidth)));
		$var($String, var$0, $$concat(var$1, " archHeight: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(arcHeight)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void DebugGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$4, $$str({$(toShortString()), " Filling round rect: "_s}));
		$var($String, var$3, $$concat(var$4, $($new($Rectangle, x, y, width, height))));
		$var($String, var$2, $$concat(var$3, " arcWidth: "_s));
		$var($String, var$1, $$concat(var$2, $$str(arcWidth)));
		$var($String, var$0, $$concat(var$1, " archHeight: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(arcHeight)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void DebugGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Drawing line: from "_s}));
		$var($String, var$1, $$concat(var$2, $(pointToString(x1, y1))));
		$var($String, var$0, $$concat(var$1, " to "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $(pointToString(x2, y2))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawLine(x1, y1, x2, y2);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawLine(x1, y1, x2, y2);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawLine(x1, y1, x2, y2);
}

void DebugGraphics::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Drawing 3D rect: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, x, y, width, height))));
		$var($String, var$0, $$concat(var$1, " Raised bezel: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(raised)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->draw3DRect(x, y, width, height, raised);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->draw3DRect(x, y, width, height, raised);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->draw3DRect(x, y, width, height, raised);
}

void DebugGraphics::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Filling 3D rect: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, x, y, width, height))));
		$var($String, var$0, $$concat(var$1, " Raised bezel: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(raised)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fill3DRect(x, y, width, height, raised);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fill3DRect(x, y, width, height, raised);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fill3DRect(x, y, width, height, raised);
}

void DebugGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing oval: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawOval(x, y, width, height);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawOval(x, y, width, height);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawOval(x, y, width, height);
}

void DebugGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Filling oval: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fillOval(x, y, width, height);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fillOval(x, y, width, height);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fillOval(x, y, width, height);
}

void DebugGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$4, $$str({$(toShortString()), " Drawing arc: "_s}));
		$var($String, var$3, $$concat(var$4, $($new($Rectangle, x, y, width, height))));
		$var($String, var$2, $$concat(var$3, " startAngle: "_s));
		$var($String, var$1, $$concat(var$2, $$str(startAngle)));
		$var($String, var$0, $$concat(var$1, " arcAngle: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(arcAngle)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawArc(x, y, width, height, startAngle, arcAngle);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawArc(x, y, width, height, startAngle, arcAngle);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawArc(x, y, width, height, startAngle, arcAngle);
}

void DebugGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$4, $$str({$(toShortString()), " Filling arc: "_s}));
		$var($String, var$3, $$concat(var$4, $($new($Rectangle, x, y, width, height))));
		$var($String, var$2, $$concat(var$3, " startAngle: "_s));
		$var($String, var$1, $$concat(var$2, $$str(startAngle)));
		$var($String, var$0, $$concat(var$1, " arcAngle: "_s));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $$str(arcAngle)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fillArc(x, y, width, height, startAngle, arcAngle);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fillArc(x, y, width, height, startAngle, arcAngle);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fillArc(x, y, width, height, startAngle, arcAngle);
}

void DebugGraphics::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$nc($(DebugGraphics::info()))->log($$str({$(toShortString()), " Drawing polyline:  nPoints: "_s, $$str(nPoints), " X\'s: "_s, xPoints, " Y\'s: "_s, yPoints}));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawPolyline(xPoints, yPoints, nPoints);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawPolyline(xPoints, yPoints, nPoints);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawPolyline(xPoints, yPoints, nPoints);
}

void DebugGraphics::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$nc($(DebugGraphics::info()))->log($$str({$(toShortString()), " Drawing polygon:  nPoints: "_s, $$str(nPoints), " X\'s: "_s, xPoints, " Y\'s: "_s, yPoints}));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawPolygon(xPoints, yPoints, nPoints);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawPolygon(xPoints, yPoints, nPoints);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawPolygon(xPoints, yPoints, nPoints);
}

void DebugGraphics::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$nc($(DebugGraphics::info()))->log($$str({$(toShortString()), " Filling polygon:  nPoints: "_s, $$str(nPoints), " X\'s: "_s, xPoints, " Y\'s: "_s, yPoints}));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->fillPolygon(xPoints, yPoints, nPoints);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->fillPolygon(xPoints, yPoints, nPoints);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->fillPolygon(xPoints, yPoints, nPoints);
}

void DebugGraphics::drawString($String* aString, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing string: \""_s, aString, "\" at: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Point, x, y))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawString(aString, x, y);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawString(aString, x, y);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawString(aString, x, y);
}

void DebugGraphics::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing text: \""_s, iterator, "\" at: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Point, x, y))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawString(iterator, x, y);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawString(iterator, x, y);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawString(iterator, x, y);
}

void DebugGraphics::drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	$var($Font, font, $nc(this->graphics)->getFont());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing bytes at: "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Point, x, y))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawBytes(data, offset, length, x, y);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawBytes(data, offset, length, x, y);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawBytes(data, offset, length, x, y);
}

void DebugGraphics::drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	$var($Font, font, $nc(this->graphics)->getFont());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing chars at "_s}));
		$nc($(DebugGraphics::info()))->log($$concat(var$0, $($new($Point, x, y))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawChars(data, offset, length, x, y);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		$var($Color, oldColor, getColor());
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		for (i = 0; i < count; ++i) {
			$nc(this->graphics)->setColor((i % 2) == 0 ? info->flashColor : oldColor);
			$nc(this->graphics)->drawChars(data, offset, length, x, y);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
		$nc(this->graphics)->setColor(oldColor);
	}
	$nc(this->graphics)->drawChars(data, offset, length, x, y);
}

bool DebugGraphics::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing image: "_s, img, " at: "_s}));
		$nc(info)->log($$concat(var$0, $($new($Point, x, y))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, x, y, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, x, y, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, x, y, observer);
}

bool DebugGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$0, $$str({$(toShortString()), " Drawing image: "_s, img, " at: "_s}));
		$nc(info)->log($$concat(var$0, $($new($Rectangle, x, y, width, height))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, x, y, width, height, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, x, y, width, height, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, x, y, width, height, observer);
}

bool DebugGraphics::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Drawing image: "_s, img, " at: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Point, x, y))));
		$var($String, var$0, $$concat(var$1, ", bgcolor: "_s));
		$nc(info)->log($$concat(var$0, $(bgcolor)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, x, y, bgcolor, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, x, y, bgcolor, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, x, y, bgcolor, observer);
}

bool DebugGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Drawing image: "_s, img, " at: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, x, y, width, height))));
		$var($String, var$0, $$concat(var$1, ", bgcolor: "_s));
		$nc(info)->log($$concat(var$0, $(bgcolor)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, x, y, width, height, bgcolor, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, x, y, width, height, bgcolor, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, x, y, width, height, bgcolor, observer);
}

bool DebugGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Drawing image: "_s, img, " destination: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, dx1, dy1, dx2, dy2))));
		$var($String, var$0, $$concat(var$1, " source: "_s));
		$nc(info)->log($$concat(var$0, $($new($Rectangle, sx1, sy1, sx2, sy2))));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
}

bool DebugGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (debugLog()) {
		$var($String, var$4, $$str({$(toShortString()), " Drawing image: "_s, img, " destination: "_s}));
		$var($String, var$3, $$concat(var$4, $($new($Rectangle, dx1, dy1, dx2, dy2))));
		$var($String, var$2, $$concat(var$3, " source: "_s));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, sx1, sy1, sx2, sy2))));
		$var($String, var$0, $$concat(var$1, ", bgcolor: "_s));
		$nc(info)->log($$concat(var$0, $(bgcolor)));
	}
	if (isDrawingBuffer()) {
		if (debugBuffered()) {
			$var($Graphics, debugGraphics, this->debugGraphics());
			$nc(debugGraphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
			debugGraphics->dispose();
		}
	} else if (debugFlash()) {
		int32_t i = 0;
		int32_t count = ($nc(info)->flashCount * 2) - 1;
		$var($ImageProducer, oldProducer, $nc(img)->getSource());
		$var($ImageProducer, newProducer, $new($FilteredImageSource, oldProducer, $$new($DebugGraphicsFilter, info->flashColor)));
		$var($Image, newImage, $nc($($Toolkit::getDefaultToolkit()))->createImage(newProducer));
		$var($DebugGraphicsObserver, imageObserver, $new($DebugGraphicsObserver));
		$var($Image, imageToDraw, nullptr);
		for (i = 0; i < count; ++i) {
			$assign(imageToDraw, (i % 2) == 0 ? newImage : img);
			loadImage(imageToDraw);
			$nc(this->graphics)->drawImage(imageToDraw, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, imageObserver);
			$nc($($Toolkit::getDefaultToolkit()))->sync();
			sleep(info->flashTime);
		}
	}
	return $nc(this->graphics)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
}

void DebugGraphics::loadImage($Image* img) {
	$init(DebugGraphics);
	$nc(DebugGraphics::imageLoadingIcon)->loadImage(img);
}

void DebugGraphics::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t destX, int32_t destY) {
	$useLocalCurrentObjectStackCache();
	if (debugLog()) {
		$var($String, var$2, $$str({$(toShortString()), " Copying area from: "_s}));
		$var($String, var$1, $$concat(var$2, $($new($Rectangle, x, y, width, height))));
		$var($String, var$0, $$concat(var$1, " to: "_s));
		$nc($(info()))->log($$concat(var$0, $($new($Point, destX, destY))));
	}
	$nc(this->graphics)->copyArea(x, y, width, height, destX, destY);
}

void DebugGraphics::sleep(int32_t mSecs) {
	try {
		$Thread::sleep(mSecs);
	} catch ($Exception& e) {
	}
}

void DebugGraphics::dispose() {
	$nc(this->graphics)->dispose();
	$set(this, graphics, nullptr);
}

bool DebugGraphics::isDrawingBuffer() {
	return this->buffer != nullptr;
}

$String* DebugGraphics::toShortString() {
	$useLocalCurrentObjectStackCache();
	return $str({"Graphics"_s, (isDrawingBuffer() ? "<B>"_s : ""_s), "("_s, $$str(this->graphicsID), "-"_s, $$str(this->debugOptions), ")"_s});
}

$String* DebugGraphics::pointToString(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	return $str({"("_s, $$str(x), ", "_s, $$str(y), ")"_s});
}

void DebugGraphics::setDebugOptions(int32_t options) {
	$useLocalCurrentObjectStackCache();
	if (options != 0) {
		if (options == DebugGraphics::NONE_OPTION) {
			if (this->debugOptions != 0) {
				$nc($System::err)->println($$str({$(toShortString()), " Disabling debug"_s}));
				this->debugOptions = 0;
			}
		} else if (this->debugOptions != options) {
			this->debugOptions |= options;
			if (debugLog()) {
				$nc($System::err)->println($$str({$(toShortString()), " Enabling debug"_s}));
			}
		}
	}
}

int32_t DebugGraphics::getDebugOptions() {
	return this->debugOptions;
}

void DebugGraphics::setDebugOptions($JComponent* component, int32_t options) {
	$init(DebugGraphics);
	$nc($(info()))->setDebugOptions(component, options);
}

int32_t DebugGraphics::getDebugOptions($JComponent* component) {
	$init(DebugGraphics);
	$var($DebugGraphicsInfo, debugGraphicsInfo, info());
	if (debugGraphicsInfo == nullptr) {
		return 0;
	} else {
		return $nc(debugGraphicsInfo)->getDebugOptions(component);
	}
}

int32_t DebugGraphics::shouldComponentDebug($JComponent* component) {
	$init(DebugGraphics);
	$useLocalCurrentObjectStackCache();
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	if (info == nullptr) {
		return 0;
	} else {
		$var($Container, container, static_cast<$Container*>(component));
		int32_t debugOptions = 0;
		while (container != nullptr && ($instanceOf($JComponent, container))) {
			debugOptions |= $nc(info)->getDebugOptions($cast($JComponent, container));
			$assign(container, container->getParent());
		}
		return debugOptions;
	}
}

int32_t DebugGraphics::debugComponentCount() {
	$init(DebugGraphics);
	$var($DebugGraphicsInfo, debugGraphicsInfo, info());
	if (debugGraphicsInfo != nullptr && debugGraphicsInfo->componentToDebug != nullptr) {
		return $nc(debugGraphicsInfo->componentToDebug)->size();
	} else {
		return 0;
	}
}

bool DebugGraphics::debugLog() {
	return ((int32_t)(this->debugOptions & (uint32_t)DebugGraphics::LOG_OPTION)) == DebugGraphics::LOG_OPTION;
}

bool DebugGraphics::debugFlash() {
	return ((int32_t)(this->debugOptions & (uint32_t)DebugGraphics::FLASH_OPTION)) == DebugGraphics::FLASH_OPTION;
}

bool DebugGraphics::debugBuffered() {
	return ((int32_t)(this->debugOptions & (uint32_t)DebugGraphics::BUFFERED_OPTION)) == DebugGraphics::BUFFERED_OPTION;
}

$Graphics* DebugGraphics::debugGraphics() {
	$useLocalCurrentObjectStackCache();
	$var(DebugGraphics, debugGraphics, nullptr);
	$var($DebugGraphicsInfo, info, DebugGraphics::info());
	$var($JFrame, debugFrame, nullptr);
	if ($nc(info)->debugFrame == nullptr) {
		$set(info, debugFrame, $new($JFrame));
		$nc(info->debugFrame)->setSize(500, 500);
	}
	$assign(debugFrame, $nc(info)->debugFrame);
	$nc(debugFrame)->show();
	$assign(debugGraphics, $new(DebugGraphics, $(debugFrame->getGraphics())));
	debugGraphics->setFont($(getFont()));
	debugGraphics->setColor($(getColor()));
	debugGraphics->translate(this->xOffset, this->yOffset);
	debugGraphics->setClip($(getClipBounds()));
	if (debugFlash()) {
		debugGraphics->setDebugOptions(DebugGraphics::FLASH_OPTION);
	}
	return debugGraphics;
}

$DebugGraphicsInfo* DebugGraphics::info() {
	$init(DebugGraphics);
	$var($DebugGraphicsInfo, debugGraphicsInfo, $cast($DebugGraphicsInfo, $SwingUtilities::appContextGet(DebugGraphics::debugGraphicsInfoKey)));
	if (debugGraphicsInfo == nullptr) {
		$assign(debugGraphicsInfo, $new($DebugGraphicsInfo));
		$SwingUtilities::appContextPut(DebugGraphics::debugGraphicsInfoKey, debugGraphicsInfo);
	}
	return debugGraphicsInfo;
}

void clinit$DebugGraphics($Class* class$) {
	DebugGraphics::graphicsCount = 0;
	$assignStatic(DebugGraphics::imageLoadingIcon, $new($ImageIcon));
	{
		$init($JComponent);
		$JComponent::DEBUG_GRAPHICS_LOADED = true;
	}
	$load($DebugGraphicsInfo);
	$assignStatic(DebugGraphics::debugGraphicsInfoKey, $DebugGraphicsInfo::class$);
}

DebugGraphics::DebugGraphics() {
}

$Class* DebugGraphics::load$($String* name, bool initialize) {
	$loadClass(DebugGraphics, name, initialize, &_DebugGraphics_ClassInfo_, clinit$DebugGraphics, allocate$DebugGraphics);
	return class$;
}

$Class* DebugGraphics::class$ = nullptr;

	} // swing
} // javax