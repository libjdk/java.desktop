#include <javax/swing/plaf/nimbus/DerivedColor.h>

#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _DerivedColor_FieldInfo_[] = {
	{"uiDefaultParentName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, uiDefaultParentName)},
	{"hOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, hOffset)},
	{"sOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, sOffset)},
	{"bOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, bOffset)},
	{"aOffset", "I", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, aOffset)},
	{"argbValue", "I", nullptr, $PRIVATE, $field(DerivedColor, argbValue)},
	{}
};

$MethodInfo _DerivedColor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;FFFI)V", nullptr, 0, $method(static_cast<void(DerivedColor::*)($String*,float,float,float,int32_t)>(&DerivedColor::init$))},
	{"clamp", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(DerivedColor::*)(float)>(&DerivedColor::clamp))},
	{"clamp", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DerivedColor::*)(int32_t)>(&DerivedColor::clamp))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlphaOffset", "()I", nullptr, $PUBLIC},
	{"getBrightnessOffset", "()F", nullptr, $PUBLIC},
	{"getHueOffset", "()F", nullptr, $PUBLIC},
	{"getRGB", "()I", nullptr, $PUBLIC},
	{"getSaturationOffset", "()F", nullptr, $PUBLIC},
	{"getUiDefaultParentName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"rederiveColor", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DerivedColor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.DerivedColor$UIResource", "javax.swing.plaf.nimbus.DerivedColor", "UIResource", $STATIC},
	{}
};

$ClassInfo _DerivedColor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.DerivedColor",
	"java.awt.Color",
	nullptr,
	_DerivedColor_FieldInfo_,
	_DerivedColor_MethodInfo_,
	nullptr,
	nullptr,
	_DerivedColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.DerivedColor$UIResource"
};

$Object* allocate$DerivedColor($Class* clazz) {
	return $of($alloc(DerivedColor));
}

void DerivedColor::init$($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset) {
	$Color::init$(0);
	$set(this, uiDefaultParentName, uiDefaultParentName);
	this->hOffset = hOffset;
	this->sOffset = sOffset;
	this->bOffset = bOffset;
	this->aOffset = aOffset;
}

$String* DerivedColor::getUiDefaultParentName() {
	return this->uiDefaultParentName;
}

float DerivedColor::getHueOffset() {
	return this->hOffset;
}

float DerivedColor::getSaturationOffset() {
	return this->sOffset;
}

float DerivedColor::getBrightnessOffset() {
	return this->bOffset;
}

int32_t DerivedColor::getAlphaOffset() {
	return this->aOffset;
}

void DerivedColor::rederiveColor() {
	$useLocalCurrentObjectStackCache();
	$var($Color, src, $UIManager::getColor(this->uiDefaultParentName));
	if (src != nullptr) {
		int32_t var$0 = src->getRed();
		int32_t var$1 = src->getGreen();
		$var($floats, tmp, $Color::RGBtoHSB(var$0, var$1, src->getBlue(), nullptr));
		$nc(tmp)->set(0, tmp->get(0) + this->hOffset);
		tmp->set(1, clamp(tmp->get(1) + this->sOffset));
		tmp->set(2, clamp(tmp->get(2) + this->bOffset));
		int32_t alpha = clamp(src->getAlpha() + this->aOffset);
		this->argbValue = ((int32_t)($Color::HSBtoRGB(tmp->get(0), tmp->get(1), tmp->get(2)) & (uint32_t)0x00FFFFFF)) | (alpha << 24);
	} else {
		$var($floats, tmp, $new($floats, 3));
		tmp->set(0, this->hOffset);
		tmp->set(1, clamp(this->sOffset));
		tmp->set(2, clamp(this->bOffset));
		int32_t alpha = clamp(this->aOffset);
		this->argbValue = ((int32_t)($Color::HSBtoRGB(tmp->get(0), tmp->get(1), tmp->get(2)) & (uint32_t)0x00FFFFFF)) | (alpha << 24);
	}
}

int32_t DerivedColor::getRGB() {
	return this->argbValue;
}

bool DerivedColor::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(DerivedColor, o))) {
		return false;
	}
	$var(DerivedColor, that, $cast(DerivedColor, o));
	if (this->aOffset != $nc(that)->aOffset) {
		return false;
	}
	if ($Float::compare($nc(that)->bOffset, this->bOffset) != 0) {
		return false;
	}
	if ($Float::compare($nc(that)->hOffset, this->hOffset) != 0) {
		return false;
	}
	if ($Float::compare($nc(that)->sOffset, this->sOffset) != 0) {
		return false;
	}
	if (!$nc(this->uiDefaultParentName)->equals($nc(that)->uiDefaultParentName)) {
		return false;
	}
	return true;
}

int32_t DerivedColor::hashCode() {
	int32_t result = $nc(this->uiDefaultParentName)->hashCode();
	result = 31 * result + this->hOffset != +0.0f ? $Float::floatToIntBits(this->hOffset) : 0;
	result = 31 * result + this->sOffset != +0.0f ? $Float::floatToIntBits(this->sOffset) : 0;
	result = 31 * result + this->bOffset != +0.0f ? $Float::floatToIntBits(this->bOffset) : 0;
	result = 31 * result + this->aOffset;
	return result;
}

float DerivedColor::clamp(float value) {
	if (value < 0) {
		value = (float)0;
	} else if (value > 1) {
		value = (float)1;
	}
	return value;
}

int32_t DerivedColor::clamp(int32_t value) {
	if (value < 0) {
		value = 0;
	} else if (value > 255) {
		value = 255;
	}
	return value;
}

$String* DerivedColor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Color, src, $UIManager::getColor(this->uiDefaultParentName));
	$var($String, var$12, $$str({"DerivedColor(color="_s, $$str(getRed()), ","_s}));
	$var($String, var$11, $$concat(var$12, $$str(getGreen())));
	$var($String, var$10, $$concat(var$11, ","_s));
	$var($String, var$9, $$concat(var$10, $$str(getBlue())));
	$var($String, var$8, $$concat(var$9, " parent="_s));
	$var($String, var$7, $$concat(var$8, this->uiDefaultParentName));
	$var($String, var$6, $$concat(var$7, " offsets="_s));
	$var($String, var$5, $$concat(var$6, $$str(getHueOffset())));
	$var($String, var$4, $$concat(var$5, ","_s));
	$var($String, var$3, $$concat(var$4, $$str(getSaturationOffset())));
	$var($String, var$2, $$concat(var$3, ","_s));
	$var($String, var$1, $$concat(var$2, $$str(getBrightnessOffset())));
	$var($String, var$0, $$concat(var$1, ","_s));
	$var($String, s, $concat(var$0, $$str(getAlphaOffset())));
	$var($String, var$13, nullptr);
	if (src == nullptr) {
		$assign(var$13, s);
	} else {
		$var($String, var$16, $$str({s, " pColor="_s, $$str($nc(src)->getRed()), ","_s}));
		$var($String, var$15, $$concat(var$16, $$str(src->getGreen())));
		$var($String, var$14, $$concat(var$15, ","_s));
		$assign(var$13, $concat(var$14, $$str(src->getBlue())));
	}
	return var$13;
}

DerivedColor::DerivedColor() {
}

$Class* DerivedColor::load$($String* name, bool initialize) {
	$loadClass(DerivedColor, name, initialize, &_DerivedColor_ClassInfo_, allocate$DerivedColor);
	return class$;
}

$Class* DerivedColor::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax