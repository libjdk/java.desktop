#include <java/awt/PageAttributes.h>

#include <java/awt/PageAttributes$ColorType.h>
#include <java/awt/PageAttributes$MediaType.h>
#include <java/awt/PageAttributes$OrientationRequestedType.h>
#include <java/awt/PageAttributes$OriginType.h>
#include <java/awt/PageAttributes$PrintQualityType.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef CANADA
#undef DRAFT
#undef HIGH
#undef ISO_A4
#undef LANDSCAPE
#undef MONOCHROME
#undef NA_LETTER
#undef NORMAL
#undef PHYSICAL
#undef PORTRAIT
#undef US

using $PageAttributes$ColorType = ::java::awt::PageAttributes$ColorType;
using $PageAttributes$MediaType = ::java::awt::PageAttributes$MediaType;
using $PageAttributes$OrientationRequestedType = ::java::awt::PageAttributes$OrientationRequestedType;
using $PageAttributes$OriginType = ::java::awt::PageAttributes$OriginType;
using $PageAttributes$PrintQualityType = ::java::awt::PageAttributes$PrintQualityType;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {

$FieldInfo _PageAttributes_FieldInfo_[] = {
	{"color", "Ljava/awt/PageAttributes$ColorType;", nullptr, $PRIVATE, $field(PageAttributes, color)},
	{"media", "Ljava/awt/PageAttributes$MediaType;", nullptr, $PRIVATE, $field(PageAttributes, media)},
	{"orientationRequested", "Ljava/awt/PageAttributes$OrientationRequestedType;", nullptr, $PRIVATE, $field(PageAttributes, orientationRequested)},
	{"origin", "Ljava/awt/PageAttributes$OriginType;", nullptr, $PRIVATE, $field(PageAttributes, origin)},
	{"printQuality", "Ljava/awt/PageAttributes$PrintQualityType;", nullptr, $PRIVATE, $field(PageAttributes, printQuality)},
	{"printerResolution", "[I", nullptr, $PRIVATE, $field(PageAttributes, printerResolution)},
	{}
};

$MethodInfo _PageAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)()>(&PageAttributes::init$))},
	{"<init>", "(Ljava/awt/PageAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)(PageAttributes*)>(&PageAttributes::init$))},
	{"<init>", "(Ljava/awt/PageAttributes$ColorType;Ljava/awt/PageAttributes$MediaType;Ljava/awt/PageAttributes$OrientationRequestedType;Ljava/awt/PageAttributes$OriginType;Ljava/awt/PageAttributes$PrintQualityType;[I)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$ColorType*,$PageAttributes$MediaType*,$PageAttributes$OrientationRequestedType*,$PageAttributes$OriginType*,$PageAttributes$PrintQualityType*,$ints*)>(&PageAttributes::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getColor", "()Ljava/awt/PageAttributes$ColorType;", nullptr, $PUBLIC, $method(static_cast<$PageAttributes$ColorType*(PageAttributes::*)()>(&PageAttributes::getColor))},
	{"getMedia", "()Ljava/awt/PageAttributes$MediaType;", nullptr, $PUBLIC, $method(static_cast<$PageAttributes$MediaType*(PageAttributes::*)()>(&PageAttributes::getMedia))},
	{"getOrientationRequested", "()Ljava/awt/PageAttributes$OrientationRequestedType;", nullptr, $PUBLIC, $method(static_cast<$PageAttributes$OrientationRequestedType*(PageAttributes::*)()>(&PageAttributes::getOrientationRequested))},
	{"getOrigin", "()Ljava/awt/PageAttributes$OriginType;", nullptr, $PUBLIC, $method(static_cast<$PageAttributes$OriginType*(PageAttributes::*)()>(&PageAttributes::getOrigin))},
	{"getPrintQuality", "()Ljava/awt/PageAttributes$PrintQualityType;", nullptr, $PUBLIC, $method(static_cast<$PageAttributes$PrintQualityType*(PageAttributes::*)()>(&PageAttributes::getPrintQuality))},
	{"getPrinterResolution", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(PageAttributes::*)()>(&PageAttributes::getPrinterResolution))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"set", "(Ljava/awt/PageAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)(PageAttributes*)>(&PageAttributes::set))},
	{"setColor", "(Ljava/awt/PageAttributes$ColorType;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$ColorType*)>(&PageAttributes::setColor))},
	{"setMedia", "(Ljava/awt/PageAttributes$MediaType;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$MediaType*)>(&PageAttributes::setMedia))},
	{"setMediaToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)()>(&PageAttributes::setMediaToDefault))},
	{"setOrientationRequested", "(Ljava/awt/PageAttributes$OrientationRequestedType;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$OrientationRequestedType*)>(&PageAttributes::setOrientationRequested))},
	{"setOrientationRequested", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)(int32_t)>(&PageAttributes::setOrientationRequested))},
	{"setOrientationRequestedToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)()>(&PageAttributes::setOrientationRequestedToDefault))},
	{"setOrigin", "(Ljava/awt/PageAttributes$OriginType;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$OriginType*)>(&PageAttributes::setOrigin))},
	{"setPrintQuality", "(Ljava/awt/PageAttributes$PrintQualityType;)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($PageAttributes$PrintQualityType*)>(&PageAttributes::setPrintQuality))},
	{"setPrintQuality", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)(int32_t)>(&PageAttributes::setPrintQuality))},
	{"setPrintQualityToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)()>(&PageAttributes::setPrintQualityToDefault))},
	{"setPrinterResolution", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)($ints*)>(&PageAttributes::setPrinterResolution))},
	{"setPrinterResolution", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)(int32_t)>(&PageAttributes::setPrinterResolution))},
	{"setPrinterResolutionToDefault", "()V", nullptr, $PUBLIC, $method(static_cast<void(PageAttributes::*)()>(&PageAttributes::setPrinterResolutionToDefault))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PageAttributes_InnerClassesInfo_[] = {
	{"java.awt.PageAttributes$PrintQualityType", "java.awt.PageAttributes", "PrintQualityType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.PageAttributes$OriginType", "java.awt.PageAttributes", "OriginType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.PageAttributes$OrientationRequestedType", "java.awt.PageAttributes", "OrientationRequestedType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.PageAttributes$MediaType", "java.awt.PageAttributes", "MediaType", $PUBLIC | $STATIC | $FINAL},
	{"java.awt.PageAttributes$ColorType", "java.awt.PageAttributes", "ColorType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PageAttributes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.PageAttributes",
	"java.lang.Object",
	"java.lang.Cloneable",
	_PageAttributes_FieldInfo_,
	_PageAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_PageAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.PageAttributes$PrintQualityType,java.awt.PageAttributes$OriginType,java.awt.PageAttributes$OrientationRequestedType,java.awt.PageAttributes$MediaType,java.awt.PageAttributes$ColorType"
};

$Object* allocate$PageAttributes($Class* clazz) {
	return $of($alloc(PageAttributes));
}

void PageAttributes::init$() {
	$init($PageAttributes$ColorType);
	setColor($PageAttributes$ColorType::MONOCHROME);
	setMediaToDefault();
	setOrientationRequestedToDefault();
	$init($PageAttributes$OriginType);
	setOrigin($PageAttributes$OriginType::PHYSICAL);
	setPrintQualityToDefault();
	setPrinterResolutionToDefault();
}

void PageAttributes::init$(PageAttributes* obj) {
	set(obj);
}

void PageAttributes::init$($PageAttributes$ColorType* color, $PageAttributes$MediaType* media, $PageAttributes$OrientationRequestedType* orientationRequested, $PageAttributes$OriginType* origin, $PageAttributes$PrintQualityType* printQuality, $ints* printerResolution) {
	setColor(color);
	setMedia(media);
	setOrientationRequested(orientationRequested);
	setOrigin(origin);
	setPrintQuality(printQuality);
	setPrinterResolution(printerResolution);
}

$Object* PageAttributes::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void PageAttributes::set(PageAttributes* obj) {
	$set(this, color, $nc(obj)->color);
	$set(this, media, obj->media);
	$set(this, orientationRequested, obj->orientationRequested);
	$set(this, origin, obj->origin);
	$set(this, printQuality, obj->printQuality);
	$set(this, printerResolution, obj->printerResolution);
}

$PageAttributes$ColorType* PageAttributes::getColor() {
	return this->color;
}

void PageAttributes::setColor($PageAttributes$ColorType* color) {
	if (color == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute color"_s);
	}
	$set(this, color, color);
}

$PageAttributes$MediaType* PageAttributes::getMedia() {
	return this->media;
}

void PageAttributes::setMedia($PageAttributes$MediaType* media) {
	if (media == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute media"_s);
	}
	$set(this, media, media);
}

void PageAttributes::setMediaToDefault() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultCountry, $nc($($Locale::getDefault()))->getCountry());
	bool var$0 = defaultCountry != nullptr;
	if (var$0) {
		bool var$1 = defaultCountry->equals($($nc($Locale::US)->getCountry()));
		var$0 = (var$1 || defaultCountry->equals($($nc($Locale::CANADA)->getCountry())));
	}
	if (var$0) {
		$init($PageAttributes$MediaType);
		setMedia($PageAttributes$MediaType::NA_LETTER);
	} else {
		$init($PageAttributes$MediaType);
		setMedia($PageAttributes$MediaType::ISO_A4);
	}
}

$PageAttributes$OrientationRequestedType* PageAttributes::getOrientationRequested() {
	return this->orientationRequested;
}

void PageAttributes::setOrientationRequested($PageAttributes$OrientationRequestedType* orientationRequested) {
	if (orientationRequested == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute orientationRequested"_s);
	}
	$set(this, orientationRequested, orientationRequested);
}

void PageAttributes::setOrientationRequested(int32_t orientationRequested) {
	switch (orientationRequested) {
	case 3:
		{
			$init($PageAttributes$OrientationRequestedType);
			setOrientationRequested($PageAttributes$OrientationRequestedType::PORTRAIT);
			break;
		}
	case 4:
		{
			$init($PageAttributes$OrientationRequestedType);
			setOrientationRequested($PageAttributes$OrientationRequestedType::LANDSCAPE);
			break;
		}
	default:
		{
			setOrientationRequested(($PageAttributes$OrientationRequestedType*)nullptr);
			break;
		}
	}
}

void PageAttributes::setOrientationRequestedToDefault() {
	$init($PageAttributes$OrientationRequestedType);
	setOrientationRequested($PageAttributes$OrientationRequestedType::PORTRAIT);
}

$PageAttributes$OriginType* PageAttributes::getOrigin() {
	return this->origin;
}

void PageAttributes::setOrigin($PageAttributes$OriginType* origin) {
	if (origin == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute origin"_s);
	}
	$set(this, origin, origin);
}

$PageAttributes$PrintQualityType* PageAttributes::getPrintQuality() {
	return this->printQuality;
}

void PageAttributes::setPrintQuality($PageAttributes$PrintQualityType* printQuality) {
	if (printQuality == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute printQuality"_s);
	}
	$set(this, printQuality, printQuality);
}

void PageAttributes::setPrintQuality(int32_t printQuality) {
	switch (printQuality) {
	case 3:
		{
			$init($PageAttributes$PrintQualityType);
			setPrintQuality($PageAttributes$PrintQualityType::DRAFT);
			break;
		}
	case 4:
		{
			$init($PageAttributes$PrintQualityType);
			setPrintQuality($PageAttributes$PrintQualityType::NORMAL);
			break;
		}
	case 5:
		{
			$init($PageAttributes$PrintQualityType);
			setPrintQuality($PageAttributes$PrintQualityType::HIGH);
			break;
		}
	default:
		{
			setPrintQuality(($PageAttributes$PrintQualityType*)nullptr);
			break;
		}
	}
}

void PageAttributes::setPrintQualityToDefault() {
	$init($PageAttributes$PrintQualityType);
	setPrintQuality($PageAttributes$PrintQualityType::NORMAL);
}

$ints* PageAttributes::getPrinterResolution() {
	$var($ints, copy, $new($ints, 3));
	copy->set(0, $nc(this->printerResolution)->get(0));
	copy->set(1, $nc(this->printerResolution)->get(1));
	copy->set(2, $nc(this->printerResolution)->get(2));
	return copy;
}

void PageAttributes::setPrinterResolution($ints* printerResolution) {
	if (printerResolution == nullptr || $nc(printerResolution)->length != 3 || $nc(printerResolution)->get(0) <= 0 || $nc(printerResolution)->get(1) <= 0 || ($nc(printerResolution)->get(2) != 3 && printerResolution->get(2) != 4)) {
		$throwNew($IllegalArgumentException, "Invalid value for attribute printerResolution"_s);
	}
	$var($ints, copy, $new($ints, 3));
	copy->set(0, $nc(printerResolution)->get(0));
	copy->set(1, printerResolution->get(1));
	copy->set(2, printerResolution->get(2));
	$set(this, printerResolution, copy);
}

void PageAttributes::setPrinterResolution(int32_t printerResolution) {
	setPrinterResolution($$new($ints, {
		printerResolution,
		printerResolution,
		3
	}));
}

void PageAttributes::setPrinterResolutionToDefault() {
	setPrinterResolution(72);
}

bool PageAttributes::equals(Object$* obj) {
	if (!($instanceOf(PageAttributes, obj))) {
		return false;
	}
	$var(PageAttributes, rhs, $cast(PageAttributes, obj));
	return (this->color == $nc(rhs)->color && this->media == rhs->media && this->orientationRequested == rhs->orientationRequested && this->origin == rhs->origin && this->printQuality == rhs->printQuality && $nc(this->printerResolution)->get(0) == $nc(rhs->printerResolution)->get(0) && $nc(this->printerResolution)->get(1) == $nc(rhs->printerResolution)->get(1) && $nc(this->printerResolution)->get(2) == $nc(rhs->printerResolution)->get(2));
}

int32_t PageAttributes::hashCode() {
	int32_t var$3 = $nc(this->color)->hashCode() << 31;
	int32_t var$2 = var$3 ^ ($nc(this->media)->hashCode() << 24);
	int32_t var$1 = var$2 ^ ($nc(this->orientationRequested)->hashCode() << 23);
	int32_t var$0 = var$1 ^ ($nc(this->origin)->hashCode() << 22);
	return ((((var$0 ^ ($nc(this->printQuality)->hashCode() << 20)) ^ (($nc(this->printerResolution)->get(2) >> 2) << 19)) ^ ($nc(this->printerResolution)->get(1) << 10)) ^ $nc(this->printerResolution)->get(0));
}

$String* PageAttributes::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$13, $$str({"color="_s, $(getColor()), ",media="_s}));
	$var($String, var$12, $$concat(var$13, $(getMedia())));
	$var($String, var$11, $$concat(var$12, ",orientation-requested="_s));
	$var($String, var$10, $$concat(var$11, $(getOrientationRequested())));
	$var($String, var$9, $$concat(var$10, ",origin="_s));
	$var($String, var$8, $$concat(var$9, $(getOrigin())));
	$var($String, var$7, $$concat(var$8, ",print-quality="_s));
	$var($String, var$6, $$concat(var$7, $(getPrintQuality())));
	$var($String, var$5, $$concat(var$6, ",printer-resolution=["_s));
	$var($String, var$4, $$concat(var$5, $$str($nc(this->printerResolution)->get(0))));
	$var($String, var$3, $$concat(var$4, ","_s));
	$var($String, var$2, $$concat(var$3, $$str($nc(this->printerResolution)->get(1))));
	$var($String, var$1, $$concat(var$2, ","_s));
	$var($String, var$0, $$concat(var$1, $$str($nc(this->printerResolution)->get(2))));
	return $concat(var$0, "]"_s);
}

PageAttributes::PageAttributes() {
}

$Class* PageAttributes::load$($String* name, bool initialize) {
	$loadClass(PageAttributes, name, initialize, &_PageAttributes_ClassInfo_, allocate$PageAttributes);
	return class$;
}

$Class* PageAttributes::class$ = nullptr;

	} // awt
} // java