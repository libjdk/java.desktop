#include <sun/print/ProxyGraphics.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/image/ImageObserver.h>
#include <java/text/AttributedCharacterIterator.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;

namespace sun {
	namespace print {

$CompoundAttribute _ProxyGraphics_MethodAnnotations_getClipRect37[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ProxyGraphics_FieldInfo_[] = {
	{"g", "Ljava/awt/Graphics;", nullptr, $PRIVATE, $field(ProxyGraphics, g)},
	{}
};

$MethodInfo _ProxyGraphics_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $method(static_cast<void(ProxyGraphics::*)($Graphics*)>(&ProxyGraphics::init$))},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"create", "(IIII)Ljava/awt/Graphics;", nullptr, $PUBLIC},
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
	{"drawPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC},
	{"drawRect", "(IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC},
	{"fill3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC},
	{"fillPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PUBLIC},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClipBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClipRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ProxyGraphics_MethodAnnotations_getClipRect37},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, 0},
	{"hitClip", "(IIII)Z", nullptr, $PUBLIC},
	{"setClip", "(IIII)V", nullptr, $PUBLIC},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setPaintMode", "()V", nullptr, $PUBLIC},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ProxyGraphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.ProxyGraphics",
	"java.awt.Graphics",
	nullptr,
	_ProxyGraphics_FieldInfo_,
	_ProxyGraphics_MethodInfo_
};

$Object* allocate$ProxyGraphics($Class* clazz) {
	return $of($alloc(ProxyGraphics));
}

void ProxyGraphics::init$($Graphics* graphics) {
	$Graphics::init$();
	$set(this, g, graphics);
}

$Graphics* ProxyGraphics::getGraphics() {
	return this->g;
}

$Graphics* ProxyGraphics::create() {
	return $new(ProxyGraphics, $($nc(this->g)->create()));
}

$Graphics* ProxyGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height) {
	return $new(ProxyGraphics, $($nc(this->g)->create(x, y, width, height)));
}

void ProxyGraphics::translate(int32_t x, int32_t y) {
	$nc(this->g)->translate(x, y);
}

$Color* ProxyGraphics::getColor() {
	return $nc(this->g)->getColor();
}

void ProxyGraphics::setColor($Color* c) {
	$nc(this->g)->setColor(c);
}

void ProxyGraphics::setPaintMode() {
	$nc(this->g)->setPaintMode();
}

void ProxyGraphics::setXORMode($Color* c1) {
	$nc(this->g)->setXORMode(c1);
}

$Font* ProxyGraphics::getFont() {
	return $nc(this->g)->getFont();
}

void ProxyGraphics::setFont($Font* font) {
	$nc(this->g)->setFont(font);
}

$FontMetrics* ProxyGraphics::getFontMetrics() {
	return $nc(this->g)->getFontMetrics();
}

$FontMetrics* ProxyGraphics::getFontMetrics($Font* f) {
	return $nc(this->g)->getFontMetrics(f);
}

$Rectangle* ProxyGraphics::getClipBounds() {
	return $nc(this->g)->getClipBounds();
}

void ProxyGraphics::clipRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->clipRect(x, y, width, height);
}

void ProxyGraphics::setClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->setClip(x, y, width, height);
}

$Shape* ProxyGraphics::getClip() {
	return $nc(this->g)->getClip();
}

void ProxyGraphics::setClip($Shape* clip) {
	$nc(this->g)->setClip(clip);
}

void ProxyGraphics::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) {
	$nc(this->g)->copyArea(x, y, width, height, dx, dy);
}

void ProxyGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	$nc(this->g)->drawLine(x1, y1, x2, y2);
}

void ProxyGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->fillRect(x, y, width, height);
}

void ProxyGraphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->drawRect(x, y, width, height);
}

void ProxyGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->clearRect(x, y, width, height);
}

void ProxyGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc(this->g)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void ProxyGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) {
	$nc(this->g)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void ProxyGraphics::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$nc(this->g)->draw3DRect(x, y, width, height, raised);
}

void ProxyGraphics::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$nc(this->g)->fill3DRect(x, y, width, height, raised);
}

void ProxyGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->drawOval(x, y, width, height);
}

void ProxyGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->g)->fillOval(x, y, width, height);
}

void ProxyGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc(this->g)->drawArc(x, y, width, height, startAngle, arcAngle);
}

void ProxyGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) {
	$nc(this->g)->fillArc(x, y, width, height, startAngle, arcAngle);
}

void ProxyGraphics::drawPolyline($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->g)->drawPolyline(xPoints, yPoints, nPoints);
}

void ProxyGraphics::drawPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->g)->drawPolygon(xPoints, yPoints, nPoints);
}

void ProxyGraphics::drawPolygon($Polygon* p) {
	$nc(this->g)->drawPolygon(p);
}

void ProxyGraphics::fillPolygon($ints* xPoints, $ints* yPoints, int32_t nPoints) {
	$nc(this->g)->fillPolygon(xPoints, yPoints, nPoints);
}

void ProxyGraphics::fillPolygon($Polygon* p) {
	$nc(this->g)->fillPolygon(p);
}

void ProxyGraphics::drawString($String* str, int32_t x, int32_t y) {
	$nc(this->g)->drawString(str, x, y);
}

void ProxyGraphics::drawString($AttributedCharacterIterator* iterator, int32_t x, int32_t y) {
	$nc(this->g)->drawString(iterator, x, y);
}

void ProxyGraphics::drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$nc(this->g)->drawChars(data, offset, length, x, y);
}

void ProxyGraphics::drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	$nc(this->g)->drawBytes(data, offset, length, x, y);
}

bool ProxyGraphics::drawImage($Image* img, int32_t x, int32_t y, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, x, y, observer);
}

bool ProxyGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, x, y, width, height, observer);
}

bool ProxyGraphics::drawImage($Image* img, int32_t x, int32_t y, $Color* bgcolor, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, x, y, bgcolor, observer);
}

bool ProxyGraphics::drawImage($Image* img, int32_t x, int32_t y, int32_t width, int32_t height, $Color* bgcolor, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, x, y, width, height, bgcolor, observer);
}

bool ProxyGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
}

bool ProxyGraphics::drawImage($Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, $Color* bgcolor, $ImageObserver* observer) {
	return $nc(this->g)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
}

void ProxyGraphics::dispose() {
	$nc(this->g)->dispose();
}

void ProxyGraphics::finalize() {
}

$String* ProxyGraphics::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), "[font="_s}));
	$var($String, var$2, $$concat(var$3, $(getFont())));
	$var($String, var$1, $$concat(var$2, ",color="_s));
	$var($String, var$0, $$concat(var$1, $(getColor())));
	return $concat(var$0, "]"_s);
}

$Rectangle* ProxyGraphics::getClipRect() {
	return $nc(this->g)->getClipRect();
}

bool ProxyGraphics::hitClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	return $nc(this->g)->hitClip(x, y, width, height);
}

$Rectangle* ProxyGraphics::getClipBounds($Rectangle* r) {
	return $nc(this->g)->getClipBounds(r);
}

ProxyGraphics::ProxyGraphics() {
}

$Class* ProxyGraphics::load$($String* name, bool initialize) {
	$loadClass(ProxyGraphics, name, initialize, &_ProxyGraphics_ClassInfo_, allocate$ProxyGraphics);
	return class$;
}

$Class* ProxyGraphics::class$ = nullptr;

	} // print
} // sun