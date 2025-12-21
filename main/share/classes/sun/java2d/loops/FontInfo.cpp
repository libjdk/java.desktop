#include <sun/java2d/loops/FontInfo.h>

#include <java/awt/Font.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrike.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _FontInfo_FieldInfo_[] = {
	{"font", "Ljava/awt/Font;", nullptr, $PUBLIC, $field(FontInfo, font)},
	{"font2D", "Lsun/font/Font2D;", nullptr, $PUBLIC, $field(FontInfo, font2D)},
	{"fontStrike", "Lsun/font/FontStrike;", nullptr, $PUBLIC, $field(FontInfo, fontStrike)},
	{"devTx", "[D", nullptr, $PUBLIC, $field(FontInfo, devTx)},
	{"glyphTx", "[D", nullptr, $PUBLIC, $field(FontInfo, glyphTx)},
	{"nonInvertibleTx", "Z", nullptr, $PUBLIC, $field(FontInfo, nonInvertibleTx)},
	{"pixelHeight", "I", nullptr, $PUBLIC, $field(FontInfo, pixelHeight)},
	{"originX", "F", nullptr, $PUBLIC, $field(FontInfo, originX)},
	{"originY", "F", nullptr, $PUBLIC, $field(FontInfo, originY)},
	{"aaHint", "I", nullptr, $PUBLIC, $field(FontInfo, aaHint)},
	{"lcdRGBOrder", "Z", nullptr, $PUBLIC, $field(FontInfo, lcdRGBOrder)},
	{"lcdSubPixPos", "Z", nullptr, $PUBLIC, $field(FontInfo, lcdSubPixPos)},
	{}
};

$MethodInfo _FontInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontInfo::*)()>(&FontInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"mtx", "([D)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.FontInfo",
	"java.lang.Object",
	"java.lang.Cloneable",
	_FontInfo_FieldInfo_,
	_FontInfo_MethodInfo_
};

$Object* allocate$FontInfo($Class* clazz) {
	return $of($alloc(FontInfo));
}

void FontInfo::init$() {
}

$String* FontInfo::mtx($doubles* matrix) {
	$useLocalCurrentObjectStackCache();
	return ($str({"["_s, $$str($nc(matrix)->get(0)), ", "_s, $$str(matrix->get(1)), ", "_s, $$str(matrix->get(2)), ", "_s, $$str(matrix->get(3)), "]"_s}));
}

$Object* FontInfo::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* FontInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$15, $$str({"FontInfo[font="_s, this->font, ", devTx="_s}));
	$var($String, var$14, $$concat(var$15, $(mtx(this->devTx))));
	$var($String, var$13, $$concat(var$14, ", glyphTx="_s));
	$var($String, var$12, $$concat(var$13, $(mtx(this->glyphTx))));
	$var($String, var$11, $$concat(var$12, ", pixelHeight="_s));
	$var($String, var$10, $$concat(var$11, $$str(this->pixelHeight)));
	$var($String, var$9, $$concat(var$10, ", origin=("_s));
	$var($String, var$8, $$concat(var$9, $$str(this->originX)));
	$var($String, var$7, $$concat(var$8, ","_s));
	$var($String, var$6, $$concat(var$7, $$str(this->originY)));
	$var($String, var$5, $$concat(var$6, "), aaHint="_s));
	$var($String, var$4, $$concat(var$5, $$str(this->aaHint)));
	$var($String, var$3, $$concat(var$4, ", lcdRGBOrder="_s));
	$var($String, var$2, $$concat(var$3, (this->lcdRGBOrder ? "RGB"_s : "BGR"_s)));
	$var($String, var$1, $$concat(var$2, "lcdSubPixPos="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->lcdSubPixPos)));
	return ($concat(var$0, "]"_s));
}

FontInfo::FontInfo() {
}

$Class* FontInfo::load$($String* name, bool initialize) {
	$loadClass(FontInfo, name, initialize, &_FontInfo_ClassInfo_, allocate$FontInfo);
	return class$;
}

$Class* FontInfo::class$ = nullptr;

		} // loops
	} // java2d
} // sun