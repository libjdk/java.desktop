#include <java/awt/Graphics.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Image.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ImageObserver.h>
#include <java/text/AttributedCharacterIterator.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $FontMetrics = ::java::awt::FontMetrics;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {

$NamedAttribute Graphics_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Graphics_MethodAnnotations_finalize33[] = {
	{"Ljava/lang/Deprecated;", Graphics_Attribute_var$0},
	{}
};

$CompoundAttribute _Graphics_MethodAnnotations_getClipRect37[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _Graphics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Graphics::*)()>(&Graphics::init$))},
	{"clearRect", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clipRect", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"copyArea", "(IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"create", "(IIII)Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"draw3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"drawArc", "(IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawBytes", "([BIIII)V", nullptr, $PUBLIC},
	{"drawChars", "([CIIII)V", nullptr, $PUBLIC},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;IILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;IIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawImage", "(Ljava/awt/Image;IIIIIIIILjava/awt/Color;Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawOval", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawPolygon", "([I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"drawPolyline", "([I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawRect", "(IIII)V", nullptr, $PUBLIC},
	{"drawRoundRect", "(IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawString", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fill3DRect", "(IIIIZ)V", nullptr, $PUBLIC},
	{"fillArc", "(IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillOval", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillPolygon", "([I[II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillPolygon", "(Ljava/awt/Polygon;)V", nullptr, $PUBLIC},
	{"fillRect", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fillRoundRect", "(IIIIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Graphics_MethodAnnotations_finalize33},
	{"getClip", "()Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClipBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClipBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClipRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Graphics_MethodAnnotations_getClipRect37},
	{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"hitClip", "(IIII)Z", nullptr, $PUBLIC},
	{"setClip", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPaintMode", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setXORMode", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Graphics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.Graphics",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Graphics_MethodInfo_
};

$Object* allocate$Graphics($Class* clazz) {
	return $of($alloc(Graphics));
}

void Graphics::init$() {
}

Graphics* Graphics::create(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var(Graphics, g, create());
	if (g == nullptr) {
		return nullptr;
	}
	$nc(g)->translate(x, y);
	g->clipRect(0, 0, width, height);
	return g;
}

$FontMetrics* Graphics::getFontMetrics() {
	return getFontMetrics($(getFont()));
}

void Graphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height) {
	if ((width < 0) || (height < 0)) {
		return;
	}
	if (height == 0 || width == 0) {
		drawLine(x, y, x + width, y + height);
	} else {
		drawLine(x, y, x + width - 1, y);
		drawLine(x + width, y, x + width, y + height - 1);
		drawLine(x + width, y + height, x + 1, y + height);
		drawLine(x, y + height, x, y + 1);
	}
}

void Graphics::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	setColor(raised ? brighter : darker);
	drawLine(x, y, x, y + height);
	drawLine(x + 1, y, x + width - 1, y);
	setColor(raised ? darker : brighter);
	drawLine(x + 1, y + height, x + width, y + height);
	drawLine(x + width, y, x + width, y + height - 1);
	setColor(c);
}

void Graphics::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) {
	$useLocalCurrentObjectStackCache();
	$var($Color, c, getColor());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	if (!raised) {
		setColor(darker);
	}
	fillRect(x + 1, y + 1, width - 2, height - 2);
	setColor(raised ? brighter : darker);
	drawLine(x, y, x, y + height - 1);
	drawLine(x + 1, y, x + width - 2, y);
	setColor(raised ? darker : brighter);
	drawLine(x + 1, y + height - 1, x + width - 1, y + height - 1);
	drawLine(x + width - 1, y, x + width - 1, y + height - 2);
	setColor(c);
}

void Graphics::drawPolygon($Polygon* p) {
	drawPolygon($nc(p)->xpoints, p->ypoints, p->npoints);
}

void Graphics::fillPolygon($Polygon* p) {
	fillPolygon($nc(p)->xpoints, p->ypoints, p->npoints);
}

void Graphics::drawChars($chars* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	drawString($$new($String, data, offset, length), x, y);
}

void Graphics::drawBytes($bytes* data, int32_t offset, int32_t length, int32_t x, int32_t y) {
	drawString($$new($String, data, 0, offset, length), x, y);
}

void Graphics::finalize() {
	dispose();
}

$String* Graphics::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($of(this)->getClass()->getName()), "[font="_s}));
	$var($String, var$2, $$concat(var$3, $(getFont())));
	$var($String, var$1, $$concat(var$2, ",color="_s));
	$var($String, var$0, $$concat(var$1, $(getColor())));
	return $concat(var$0, "]"_s);
}

$Rectangle* Graphics::getClipRect() {
	return getClipBounds();
}

bool Graphics::hitClip(int32_t x, int32_t y, int32_t width, int32_t height) {
	$var($Rectangle, clipRect, getClipBounds());
	if (clipRect == nullptr) {
		return true;
	}
	return $nc(clipRect)->intersects((double)x, (double)y, (double)width, (double)height);
}

$Rectangle* Graphics::getClipBounds($Rectangle* r) {
	$var($Rectangle, clipRect, getClipBounds());
	if (clipRect != nullptr) {
		$nc(r)->x = clipRect->x;
		r->y = clipRect->y;
		r->width = clipRect->width;
		r->height = clipRect->height;
	} else if (r == nullptr) {
		$throwNew($NullPointerException, "null rectangle parameter"_s);
	}
	return r;
}

Graphics::Graphics() {
}

$Class* Graphics::load$($String* name, bool initialize) {
	$loadClass(Graphics, name, initialize, &_Graphics_ClassInfo_, allocate$Graphics);
	return class$;
}

$Class* Graphics::class$ = nullptr;

	} // awt
} // java