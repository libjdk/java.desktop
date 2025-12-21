#include <java/awt/DisplayMode.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

#undef BIT_DEPTH_MULTI
#undef REFRESH_RATE_UNKNOWN

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _DisplayMode_FieldInfo_[] = {
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(DisplayMode, size)},
	{"bitDepth", "I", nullptr, $PRIVATE, $field(DisplayMode, bitDepth)},
	{"refreshRate", "I", nullptr, $PRIVATE, $field(DisplayMode, refreshRate)},
	{"BIT_DEPTH_MULTI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DisplayMode, BIT_DEPTH_MULTI)},
	{"REFRESH_RATE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DisplayMode, REFRESH_RATE_UNKNOWN)},
	{}
};

$MethodInfo _DisplayMode_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(DisplayMode::*)(int32_t,int32_t,int32_t,int32_t)>(&DisplayMode::init$))},
	{"equals", "(Ljava/awt/DisplayMode;)Z", nullptr, $PUBLIC, $method(static_cast<bool(DisplayMode::*)(DisplayMode*)>(&DisplayMode::equals))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBitDepth", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DisplayMode::*)()>(&DisplayMode::getBitDepth))},
	{"getHeight", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DisplayMode::*)()>(&DisplayMode::getHeight))},
	{"getRefreshRate", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DisplayMode::*)()>(&DisplayMode::getRefreshRate))},
	{"getWidth", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DisplayMode::*)()>(&DisplayMode::getWidth))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DisplayMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.DisplayMode",
	"java.lang.Object",
	nullptr,
	_DisplayMode_FieldInfo_,
	_DisplayMode_MethodInfo_
};

$Object* allocate$DisplayMode($Class* clazz) {
	return $of($alloc(DisplayMode));
}

void DisplayMode::init$(int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate) {
	$set(this, size, $new($Dimension, width, height));
	this->bitDepth = bitDepth;
	this->refreshRate = refreshRate;
}

int32_t DisplayMode::getHeight() {
	return $nc(this->size)->height;
}

int32_t DisplayMode::getWidth() {
	return $nc(this->size)->width;
}

int32_t DisplayMode::getBitDepth() {
	return this->bitDepth;
}

int32_t DisplayMode::getRefreshRate() {
	return this->refreshRate;
}

bool DisplayMode::equals(DisplayMode* dm) {
	if (dm == nullptr) {
		return false;
	}
	int32_t var$3 = getHeight();
	bool var$2 = var$3 == $nc(dm)->getHeight();
	if (var$2) {
		int32_t var$4 = getWidth();
		var$2 = var$4 == dm->getWidth();
	}
	bool var$1 = var$2;
	if (var$1) {
		int32_t var$5 = getBitDepth();
		var$1 = var$5 == dm->getBitDepth();
	}
	bool var$0 = var$1;
	if (var$0) {
		int32_t var$6 = getRefreshRate();
		var$0 = var$6 == dm->getRefreshRate();
	}
	return (var$0);
}

bool DisplayMode::equals(Object$* dm) {
	if ($instanceOf(DisplayMode, dm)) {
		return equals($cast(DisplayMode, dm));
	} else {
		return false;
	}
}

int32_t DisplayMode::hashCode() {
	int32_t var$2 = getWidth();
	int32_t var$1 = var$2 + getHeight();
	int32_t var$0 = var$1 + getBitDepth() * 7;
	return var$0 + getRefreshRate() * 13;
}

$String* DisplayMode::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$4, $$str({$$str(getWidth()), "x"_s}));
	$var($String, var$3, $$concat(var$4, $$str(getHeight())));
	$var($String, var$2, $$concat(var$3, "x"_s));
	$var($String, var$1, $$concat(var$2, (getBitDepth() > 0 ? $$str({$$str(getBitDepth()), "bpp"_s}) : "[Multi depth]"_s)));
	$var($String, var$0, $$concat(var$1, "@"_s));
	return $concat(var$0, (getRefreshRate() > 0 ? $$str({$$str(getRefreshRate()), "Hz"_s}) : "[Unknown refresh rate]"_s));
}

DisplayMode::DisplayMode() {
}

$Class* DisplayMode::load$($String* name, bool initialize) {
	$loadClass(DisplayMode, name, initialize, &_DisplayMode_ClassInfo_, allocate$DisplayMode);
	return class$;
}

$Class* DisplayMode::class$ = nullptr;

	} // awt
} // java