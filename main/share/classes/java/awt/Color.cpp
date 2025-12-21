#include <java/awt/Color.h>

#include <java/awt/ColorPaintContext.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Paint.h>
#include <java/awt/PaintContext.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef BITMASK
#undef BLACK
#undef BLUE
#undef CYAN
#undef DARK_GRAY
#undef FACTOR
#undef GRAY
#undef GREEN
#undef LIGHT_GRAY
#undef MAGENTA
#undef OPAQUE
#undef ORANGE
#undef PINK
#undef RED
#undef TRANSLUCENT
#undef WHITE
#undef YELLOW

using $ColorPaintContext = ::java::awt::ColorPaintContext;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Paint = ::java::awt::Paint;
using $PaintContext = ::java::awt::PaintContext;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ColorModel = ::java::awt::image::ColorModel;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {

$Attribute Color_Attribute_var$1[] = {
	{'s', "red"},
	{'s', "green"},
	{'s', "blue"},
	{'s', "alpha"},
	{'-'}
};

$NamedAttribute Color_Attribute_var$0[] = {
	{"value", '[', Color_Attribute_var$1},
	{}
};

$CompoundAttribute _Color_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", Color_Attribute_var$0},
	{}
};

$FieldInfo _Color_FieldInfo_[] = {
	{"white", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, white)},
	{"WHITE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, WHITE)},
	{"lightGray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, lightGray)},
	{"LIGHT_GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, LIGHT_GRAY)},
	{"gray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, gray)},
	{"GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, GRAY)},
	{"darkGray", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, darkGray)},
	{"DARK_GRAY", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, DARK_GRAY)},
	{"black", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, black)},
	{"BLACK", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, BLACK)},
	{"red", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, red)},
	{"RED", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, RED)},
	{"pink", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, pink)},
	{"PINK", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, PINK)},
	{"orange", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, orange)},
	{"ORANGE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, ORANGE)},
	{"yellow", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, yellow)},
	{"YELLOW", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, YELLOW)},
	{"green", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, green)},
	{"GREEN", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, GREEN)},
	{"magenta", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, magenta)},
	{"MAGENTA", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, MAGENTA)},
	{"cyan", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, cyan)},
	{"CYAN", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, CYAN)},
	{"blue", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, blue)},
	{"BLUE", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Color, BLUE)},
	{"value", "I", nullptr, 0, $field(Color, value)},
	{"frgbvalue", "[F", nullptr, $PRIVATE, $field(Color, frgbvalue)},
	{"fvalue", "[F", nullptr, $PRIVATE, $field(Color, fvalue)},
	{"falpha", "F", nullptr, $PRIVATE, $field(Color, falpha)},
	{"cs", "Ljava/awt/color/ColorSpace;", nullptr, $PRIVATE, $field(Color, cs)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Color, serialVersionUID)},
	{"FACTOR", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Color, FACTOR)},
	{}
};

$MethodInfo _Color_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(int32_t,int32_t,int32_t)>(&Color::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(int32_t,int32_t,int32_t,int32_t)>(&Color::init$)), nullptr, nullptr, _Color_MethodAnnotations_init$1},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(int32_t)>(&Color::init$))},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(int32_t,bool)>(&Color::init$))},
	{"<init>", "(FFF)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(float,float,float)>(&Color::init$))},
	{"<init>", "(FFFF)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)(float,float,float,float)>(&Color::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;[FF)V", nullptr, $PUBLIC, $method(static_cast<void(Color::*)($ColorSpace*,$floats*,float)>(&Color::init$))},
	{"HSBtoRGB", "(FFF)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(float,float,float)>(&Color::HSBtoRGB))},
	{"RGBtoHSB", "(III[F)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)(int32_t,int32_t,int32_t,$floats*)>(&Color::RGBtoHSB))},
	{"brighter", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/Rectangle;Ljava/awt/geom/Rectangle2D;Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)Ljava/awt/PaintContext;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"darker", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"decode", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Color*(*)($String*)>(&Color::decode)), "java.lang.NumberFormatException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlpha", "()I", nullptr, $PUBLIC},
	{"getBlue", "()I", nullptr, $PUBLIC},
	{"getColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Color*(*)($String*)>(&Color::getColor))},
	{"getColor", "(Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Color*(*)($String*,Color*)>(&Color::getColor))},
	{"getColor", "(Ljava/lang/String;I)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Color*(*)($String*,int32_t)>(&Color::getColor))},
	{"getColorComponents", "([F)[F", nullptr, $PUBLIC},
	{"getColorComponents", "(Ljava/awt/color/ColorSpace;[F)[F", nullptr, $PUBLIC},
	{"getColorSpace", "()Ljava/awt/color/ColorSpace;", nullptr, $PUBLIC},
	{"getComponents", "([F)[F", nullptr, $PUBLIC},
	{"getComponents", "(Ljava/awt/color/ColorSpace;[F)[F", nullptr, $PUBLIC},
	{"getGreen", "()I", nullptr, $PUBLIC},
	{"getHSBColor", "(FFF)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Color*(*)(float,float,float)>(&Color::getHSBColor))},
	{"getRGB", "()I", nullptr, $PUBLIC},
	{"getRGBColorComponents", "([F)[F", nullptr, $PUBLIC},
	{"getRGBComponents", "([F)[F", nullptr, $PUBLIC},
	{"getRed", "()I", nullptr, $PUBLIC},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Color::initIDs))},
	{"testColorValueRange", "(IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t,int32_t)>(&Color::testColorValueRange))},
	{"testColorValueRange", "(FFFF)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(float,float,float,float)>(&Color::testColorValueRange))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 34

$ClassInfo _Color_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Color",
	"java.lang.Object",
	"java.awt.Paint,java.io.Serializable",
	_Color_FieldInfo_,
	_Color_MethodInfo_
};

$Object* allocate$Color($Class* clazz) {
	return $of($alloc(Color));
}

$Object* Color::clone() {
	 return this->$Paint::clone();
}

void Color::finalize() {
	this->$Paint::finalize();
}

Color* Color::white = nullptr;
Color* Color::WHITE = nullptr;
Color* Color::lightGray = nullptr;
Color* Color::LIGHT_GRAY = nullptr;
Color* Color::gray = nullptr;
Color* Color::GRAY = nullptr;
Color* Color::darkGray = nullptr;
Color* Color::DARK_GRAY = nullptr;
Color* Color::black = nullptr;
Color* Color::BLACK = nullptr;
Color* Color::red = nullptr;
Color* Color::RED = nullptr;
Color* Color::pink = nullptr;
Color* Color::PINK = nullptr;
Color* Color::orange = nullptr;
Color* Color::ORANGE = nullptr;
Color* Color::yellow = nullptr;
Color* Color::YELLOW = nullptr;
Color* Color::green = nullptr;
Color* Color::GREEN = nullptr;
Color* Color::magenta = nullptr;
Color* Color::MAGENTA = nullptr;
Color* Color::cyan = nullptr;
Color* Color::CYAN = nullptr;
Color* Color::blue = nullptr;
Color* Color::BLUE = nullptr;
double Color::FACTOR = 0.0;

void Color::initIDs() {
	$init(Color);
	$prepareNativeStatic(Color, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Color::testColorValueRange(int32_t r, int32_t g, int32_t b, int32_t a) {
	$init(Color);
	$useLocalCurrentObjectStackCache();
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	if (a < 0 || a > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Alpha"_s}));
	}
	if (r < 0 || r > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Red"_s}));
	}
	if (g < 0 || g > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Green"_s}));
	}
	if (b < 0 || b > 255) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Blue"_s}));
	}
	if (rangeError == true) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range:"_s, badComponentString}));
	}
}

void Color::testColorValueRange(float r, float g, float b, float a) {
	$init(Color);
	$useLocalCurrentObjectStackCache();
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	if (a < 0.0 || a > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Alpha"_s}));
	}
	if (r < 0.0 || r > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Red"_s}));
	}
	if (g < 0.0 || g > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Green"_s}));
	}
	if (b < 0.0 || b > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, " Blue"_s}));
	}
	if (rangeError == true) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range:"_s, badComponentString}));
	}
}

void Color::init$(int32_t r, int32_t g, int32_t b) {
	Color::init$(r, g, b, 255);
}

void Color::init$(int32_t r, int32_t g, int32_t b, int32_t a) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	this->value = (((((int32_t)(a & (uint32_t)255)) << 24) | (((int32_t)(r & (uint32_t)255)) << 16)) | (((int32_t)(g & (uint32_t)255)) << 8)) | (((int32_t)(b & (uint32_t)255)) << 0);
	testColorValueRange(r, g, b, a);
}

void Color::init$(int32_t rgb) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	this->value = (int32_t)0xFF000000 | rgb;
}

void Color::init$(int32_t rgba, bool hasalpha) {
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	if (hasalpha) {
		this->value = rgba;
	} else {
		this->value = (int32_t)0xFF000000 | rgba;
	}
}

void Color::init$(float r, float g, float b) {
	Color::init$($cast(int32_t, (r * 255 + 0.5)), $cast(int32_t, (g * 255 + 0.5)), $cast(int32_t, (b * 255 + 0.5)));
	testColorValueRange(r, g, b, 1.0f);
	$set(this, frgbvalue, $new($floats, 3));
	$nc(this->frgbvalue)->set(0, r);
	$nc(this->frgbvalue)->set(1, g);
	$nc(this->frgbvalue)->set(2, b);
	this->falpha = 1.0f;
	$set(this, fvalue, this->frgbvalue);
}

void Color::init$(float r, float g, float b, float a) {
	Color::init$($cast(int32_t, (r * 255 + 0.5)), $cast(int32_t, (g * 255 + 0.5)), $cast(int32_t, (b * 255 + 0.5)), $cast(int32_t, (a * 255 + 0.5)));
	$set(this, frgbvalue, $new($floats, 3));
	$nc(this->frgbvalue)->set(0, r);
	$nc(this->frgbvalue)->set(1, g);
	$nc(this->frgbvalue)->set(2, b);
	this->falpha = a;
	$set(this, fvalue, this->frgbvalue);
}

void Color::init$($ColorSpace* cspace, $floats* components, float alpha) {
	$useLocalCurrentObjectStackCache();
	$set(this, frgbvalue, nullptr);
	$set(this, fvalue, nullptr);
	this->falpha = 0.0f;
	$set(this, cs, nullptr);
	bool rangeError = false;
	$var($String, badComponentString, ""_s);
	int32_t n = $nc(cspace)->getNumComponents();
	$set(this, fvalue, $new($floats, n));
	for (int32_t i = 0; i < n; ++i) {
		if ($nc(components)->get(i) < 0.0 || $nc(components)->get(i) > 1.0) {
			rangeError = true;
			$assign(badComponentString, $str({badComponentString, "Component "_s, $$str(i), " "_s}));
		} else {
			$nc(this->fvalue)->set(i, components->get(i));
		}
	}
	if (alpha < 0.0 || alpha > 1.0) {
		rangeError = true;
		$assign(badComponentString, $str({badComponentString, "Alpha"_s}));
	} else {
		this->falpha = alpha;
	}
	if (rangeError) {
		$throwNew($IllegalArgumentException, $$str({"Color parameter outside of expected range: "_s, badComponentString}));
	}
	$set(this, frgbvalue, cspace->toRGB(this->fvalue));
	$set(this, cs, cspace);
	this->value = (((((int32_t)(($cast(int32_t, (this->falpha * 255))) & (uint32_t)255)) << 24) | (((int32_t)(($cast(int32_t, ($nc(this->frgbvalue)->get(0) * 255))) & (uint32_t)255)) << 16)) | (((int32_t)(($cast(int32_t, ($nc(this->frgbvalue)->get(1) * 255))) & (uint32_t)255)) << 8)) | (((int32_t)(($cast(int32_t, ($nc(this->frgbvalue)->get(2) * 255))) & (uint32_t)255)) << 0);
}

int32_t Color::getRed() {
	return (int32_t)((getRGB() >> 16) & (uint32_t)255);
}

int32_t Color::getGreen() {
	return (int32_t)((getRGB() >> 8) & (uint32_t)255);
}

int32_t Color::getBlue() {
	return (int32_t)((getRGB() >> 0) & (uint32_t)255);
}

int32_t Color::getAlpha() {
	return (int32_t)((getRGB() >> 24) & (uint32_t)255);
}

int32_t Color::getRGB() {
	return this->value;
}

Color* Color::brighter() {
	int32_t r = getRed();
	int32_t g = getGreen();
	int32_t b = getBlue();
	int32_t alpha = getAlpha();
	int32_t i = $cast(int32_t, ($div(1.0, (1.0 - Color::FACTOR))));
	if (r == 0 && g == 0 && b == 0) {
		return $new(Color, i, i, i, alpha);
	}
	if (r > 0 && r < i) {
		r = i;
	}
	if (g > 0 && g < i) {
		g = i;
	}
	if (b > 0 && b < i) {
		b = i;
	}
	int32_t var$0 = $Math::min($cast(int32_t, ($div(r, Color::FACTOR))), 255);
	int32_t var$1 = $Math::min($cast(int32_t, ($div(g, Color::FACTOR))), 255);
	return $new(Color, var$0, var$1, $Math::min($cast(int32_t, ($div(b, Color::FACTOR))), 255), alpha);
}

Color* Color::darker() {
	int32_t var$0 = $Math::max($cast(int32_t, (getRed() * Color::FACTOR)), 0);
	int32_t var$1 = $Math::max($cast(int32_t, (getGreen() * Color::FACTOR)), 0);
	int32_t var$2 = $Math::max($cast(int32_t, (getBlue() * Color::FACTOR)), 0);
	return $new(Color, var$0, var$1, var$2, getAlpha());
}

int32_t Color::hashCode() {
	return this->value;
}

bool Color::equals(Object$* obj) {
	bool var$0 = $instanceOf(Color, obj);
	if (var$0) {
		int32_t var$1 = $nc(($cast(Color, obj)))->getRGB();
		var$0 = var$1 == this->getRGB();
	}
	return var$0;
}

$String* Color::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$5, $$str({$($of(this)->getClass()->getName()), "[r="_s}));
	$var($String, var$4, $$concat(var$5, $$str(getRed())));
	$var($String, var$3, $$concat(var$4, ",g="_s));
	$var($String, var$2, $$concat(var$3, $$str(getGreen())));
	$var($String, var$1, $$concat(var$2, ",b="_s));
	$var($String, var$0, $$concat(var$1, $$str(getBlue())));
	return $concat(var$0, "]"_s);
}

Color* Color::decode($String* nm) {
	$init(Color);
	$var($Integer, intval, $Integer::decode(nm));
	int32_t i = $nc(intval)->intValue();
	return $new(Color, (int32_t)((i >> 16) & (uint32_t)255), (int32_t)((i >> 8) & (uint32_t)255), (int32_t)(i & (uint32_t)255));
}

Color* Color::getColor($String* nm) {
	$init(Color);
	return getColor(nm, (Color*)nullptr);
}

Color* Color::getColor($String* nm, Color* v) {
	$init(Color);
	$var($Integer, intval, $Integer::getInteger(nm));
	if (intval == nullptr) {
		return v;
	}
	int32_t i = $nc(intval)->intValue();
	return $new(Color, (int32_t)((i >> 16) & (uint32_t)255), (int32_t)((i >> 8) & (uint32_t)255), (int32_t)(i & (uint32_t)255));
}

Color* Color::getColor($String* nm, int32_t v) {
	$init(Color);
	$var($Integer, intval, $Integer::getInteger(nm));
	int32_t i = (intval != nullptr) ? $nc(intval)->intValue() : v;
	return $new(Color, (int32_t)((i >> 16) & (uint32_t)255), (int32_t)((i >> 8) & (uint32_t)255), (int32_t)((i >> 0) & (uint32_t)255));
}

int32_t Color::HSBtoRGB(float hue, float saturation, float brightness) {
	$init(Color);
	int32_t r = 0;
	int32_t g = 0;
	int32_t b = 0;
	if (saturation == 0) {
		r = (g = (b = $cast(int32_t, (brightness * 255.0f + 0.5f))));
	} else {
		float h = (hue - (float)$Math::floor(hue)) * 6.0f;
		float f = h - (float)$Math::floor(h);
		float p = brightness * (1.0f - saturation);
		float q = brightness * (1.0f - saturation * f);
		float t = brightness * (1.0f - (saturation * (1.0f - f)));
		switch ($cast(int32_t, h)) {
		case 0:
			{
				r = $cast(int32_t, (brightness * 255.0f + 0.5f));
				g = $cast(int32_t, (t * 255.0f + 0.5f));
				b = $cast(int32_t, (p * 255.0f + 0.5f));
				break;
			}
		case 1:
			{
				r = $cast(int32_t, (q * 255.0f + 0.5f));
				g = $cast(int32_t, (brightness * 255.0f + 0.5f));
				b = $cast(int32_t, (p * 255.0f + 0.5f));
				break;
			}
		case 2:
			{
				r = $cast(int32_t, (p * 255.0f + 0.5f));
				g = $cast(int32_t, (brightness * 255.0f + 0.5f));
				b = $cast(int32_t, (t * 255.0f + 0.5f));
				break;
			}
		case 3:
			{
				r = $cast(int32_t, (p * 255.0f + 0.5f));
				g = $cast(int32_t, (q * 255.0f + 0.5f));
				b = $cast(int32_t, (brightness * 255.0f + 0.5f));
				break;
			}
		case 4:
			{
				r = $cast(int32_t, (t * 255.0f + 0.5f));
				g = $cast(int32_t, (p * 255.0f + 0.5f));
				b = $cast(int32_t, (brightness * 255.0f + 0.5f));
				break;
			}
		case 5:
			{
				r = $cast(int32_t, (brightness * 255.0f + 0.5f));
				g = $cast(int32_t, (p * 255.0f + 0.5f));
				b = $cast(int32_t, (q * 255.0f + 0.5f));
				break;
			}
		}
	}
	return (((int32_t)0xFF000000 | (r << 16)) | (g << 8)) | (b << 0);
}

$floats* Color::RGBtoHSB(int32_t r, int32_t g, int32_t b, $floats* hsbvals$renamed) {
	$init(Color);
	$var($floats, hsbvals, hsbvals$renamed);
	float hue = 0.0;
	float saturation = 0.0;
	float brightness = 0.0;
	if (hsbvals == nullptr) {
		$assign(hsbvals, $new($floats, 3));
	}
	int32_t cmax = (r > g) ? r : g;
	if (b > cmax) {
		cmax = b;
	}
	int32_t cmin = (r < g) ? r : g;
	if (b < cmin) {
		cmin = b;
	}
	brightness = ((float)cmax) / 255.0f;
	if (cmax != 0) {
		saturation = ((float)(cmax - cmin)) / ((float)cmax);
	} else {
		saturation = (float)0;
	}
	if (saturation == 0) {
		hue = (float)0;
	} else {
		float redc = ((float)(cmax - r)) / ((float)(cmax - cmin));
		float greenc = ((float)(cmax - g)) / ((float)(cmax - cmin));
		float bluec = ((float)(cmax - b)) / ((float)(cmax - cmin));
		if (r == cmax) {
			hue = bluec - greenc;
		} else if (g == cmax) {
			hue = 2.0f + redc - bluec;
		} else {
			hue = 4.0f + greenc - redc;
		}
		hue = hue / 6.0f;
		if (hue < 0) {
			hue = hue + 1.0f;
		}
	}
	$nc(hsbvals)->set(0, hue);
	hsbvals->set(1, saturation);
	hsbvals->set(2, brightness);
	return hsbvals;
}

Color* Color::getHSBColor(float h, float s, float b) {
	$init(Color);
	return $new(Color, HSBtoRGB(h, s, b));
}

$floats* Color::getRGBComponents($floats* compArray) {
	$var($floats, f, nullptr);
	if (compArray == nullptr) {
		$assign(f, $new($floats, 4));
	} else {
		$assign(f, compArray);
	}
	if (this->frgbvalue == nullptr) {
		$nc(f)->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
		f->set(3, ((float)getAlpha()) / 255.0f);
	} else {
		$nc(f)->set(0, $nc(this->frgbvalue)->get(0));
		f->set(1, $nc(this->frgbvalue)->get(1));
		f->set(2, $nc(this->frgbvalue)->get(2));
		f->set(3, this->falpha);
	}
	return f;
}

$floats* Color::getRGBColorComponents($floats* compArray) {
	$var($floats, f, nullptr);
	if (compArray == nullptr) {
		$assign(f, $new($floats, 3));
	} else {
		$assign(f, compArray);
	}
	if (this->frgbvalue == nullptr) {
		$nc(f)->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$nc(f)->set(0, $nc(this->frgbvalue)->get(0));
		f->set(1, $nc(this->frgbvalue)->get(1));
		f->set(2, $nc(this->frgbvalue)->get(2));
	}
	return f;
}

$floats* Color::getComponents($floats* compArray) {
	if (this->fvalue == nullptr) {
		return getRGBComponents(compArray);
	}
	$var($floats, f, nullptr);
	int32_t n = $nc(this->fvalue)->length;
	if (compArray == nullptr) {
		$assign(f, $new($floats, n + 1));
	} else {
		$assign(f, compArray);
	}
	for (int32_t i = 0; i < n; ++i) {
		$nc(f)->set(i, $nc(this->fvalue)->get(i));
	}
	$nc(f)->set(n, this->falpha);
	return f;
}

$floats* Color::getColorComponents($floats* compArray) {
	if (this->fvalue == nullptr) {
		return getRGBColorComponents(compArray);
	}
	$var($floats, f, nullptr);
	int32_t n = $nc(this->fvalue)->length;
	if (compArray == nullptr) {
		$assign(f, $new($floats, n));
	} else {
		$assign(f, compArray);
	}
	for (int32_t i = 0; i < n; ++i) {
		$nc(f)->set(i, $nc(this->fvalue)->get(i));
	}
	return f;
}

$floats* Color::getComponents($ColorSpace* cspace, $floats* compArray$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($floats, compArray, compArray$renamed);
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	$var($floats, f, nullptr);
	if (this->fvalue == nullptr) {
		$assign(f, $new($floats, 3));
		f->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$assign(f, this->fvalue);
	}
	$var($floats, tmp, $nc(this->cs)->toCIEXYZ(f));
	$var($floats, tmpout, $nc(cspace)->fromCIEXYZ(tmp));
	if (compArray == nullptr) {
		$assign(compArray, $new($floats, $nc(tmpout)->length + 1));
	}
	for (int32_t i = 0; i < $nc(tmpout)->length; ++i) {
		$nc(compArray)->set(i, tmpout->get(i));
	}
	if (this->fvalue == nullptr) {
		$nc(compArray)->set($nc(tmpout)->length, ((float)getAlpha()) / 255.0f);
	} else {
		$nc(compArray)->set($nc(tmpout)->length, this->falpha);
	}
	return compArray;
}

$floats* Color::getColorComponents($ColorSpace* cspace, $floats* compArray) {
	$useLocalCurrentObjectStackCache();
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	$var($floats, f, nullptr);
	if (this->fvalue == nullptr) {
		$assign(f, $new($floats, 3));
		f->set(0, ((float)getRed()) / 255.0f);
		f->set(1, ((float)getGreen()) / 255.0f);
		f->set(2, ((float)getBlue()) / 255.0f);
	} else {
		$assign(f, this->fvalue);
	}
	$var($floats, tmp, $nc(this->cs)->toCIEXYZ(f));
	$var($floats, tmpout, $nc(cspace)->fromCIEXYZ(tmp));
	if (compArray == nullptr) {
		return tmpout;
	}
	for (int32_t i = 0; i < $nc(tmpout)->length; ++i) {
		$nc(compArray)->set(i, tmpout->get(i));
	}
	return compArray;
}

$ColorSpace* Color::getColorSpace() {
	if (this->cs == nullptr) {
		$set(this, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	}
	return this->cs;
}

$PaintContext* Color::createContext($ColorModel* cm, $Rectangle* r, $Rectangle2D* r2d, $AffineTransform* xform, $RenderingHints* hints) {
	$synchronized(this) {
		return $new($ColorPaintContext, getRGB(), cm);
	}
}

int32_t Color::getTransparency() {
	int32_t alpha = getAlpha();
	if (alpha == 255) {
		return $Transparency::OPAQUE;
	} else if (alpha == 0) {
		return $Transparency::BITMASK;
	} else {
		return $Transparency::TRANSLUCENT;
	}
}

void clinit$Color($Class* class$) {
	Color::FACTOR = 0.7;
	$assignStatic(Color::white, $new(Color, 255, 255, 255));
	$assignStatic(Color::WHITE, Color::white);
	$assignStatic(Color::lightGray, $new(Color, 192, 192, 192));
	$assignStatic(Color::LIGHT_GRAY, Color::lightGray);
	$assignStatic(Color::gray, $new(Color, 128, 128, 128));
	$assignStatic(Color::GRAY, Color::gray);
	$assignStatic(Color::darkGray, $new(Color, 64, 64, 64));
	$assignStatic(Color::DARK_GRAY, Color::darkGray);
	$assignStatic(Color::black, $new(Color, 0, 0, 0));
	$assignStatic(Color::BLACK, Color::black);
	$assignStatic(Color::red, $new(Color, 255, 0, 0));
	$assignStatic(Color::RED, Color::red);
	$assignStatic(Color::pink, $new(Color, 255, 175, 175));
	$assignStatic(Color::PINK, Color::pink);
	$assignStatic(Color::orange, $new(Color, 255, 200, 0));
	$assignStatic(Color::ORANGE, Color::orange);
	$assignStatic(Color::yellow, $new(Color, 255, 255, 0));
	$assignStatic(Color::YELLOW, Color::yellow);
	$assignStatic(Color::green, $new(Color, 0, 255, 0));
	$assignStatic(Color::GREEN, Color::green);
	$assignStatic(Color::magenta, $new(Color, 255, 0, 255));
	$assignStatic(Color::MAGENTA, Color::magenta);
	$assignStatic(Color::cyan, $new(Color, 0, 255, 255));
	$assignStatic(Color::CYAN, Color::cyan);
	$assignStatic(Color::blue, $new(Color, 0, 0, 255));
	$assignStatic(Color::BLUE, Color::blue);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Color::initIDs();
		}
	}
}

Color::Color() {
}

$Class* Color::load$($String* name, bool initialize) {
	$loadClass(Color, name, initialize, &_Color_ClassInfo_, clinit$Color, allocate$Color);
	return class$;
}

$Class* Color::class$ = nullptr;

	} // awt
} // java