#include <java/awt/image/DirectColorModel.h>

#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef OPAQUE
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _DirectColorModel_FieldInfo_[] = {
	{"red_mask", "I", nullptr, $PRIVATE, $field(DirectColorModel, red_mask)},
	{"green_mask", "I", nullptr, $PRIVATE, $field(DirectColorModel, green_mask)},
	{"blue_mask", "I", nullptr, $PRIVATE, $field(DirectColorModel, blue_mask)},
	{"alpha_mask", "I", nullptr, $PRIVATE, $field(DirectColorModel, alpha_mask)},
	{"red_offset", "I", nullptr, $PRIVATE, $field(DirectColorModel, red_offset)},
	{"green_offset", "I", nullptr, $PRIVATE, $field(DirectColorModel, green_offset)},
	{"blue_offset", "I", nullptr, $PRIVATE, $field(DirectColorModel, blue_offset)},
	{"alpha_offset", "I", nullptr, $PRIVATE, $field(DirectColorModel, alpha_offset)},
	{"red_scale", "I", nullptr, $PRIVATE, $field(DirectColorModel, red_scale)},
	{"green_scale", "I", nullptr, $PRIVATE, $field(DirectColorModel, green_scale)},
	{"blue_scale", "I", nullptr, $PRIVATE, $field(DirectColorModel, blue_scale)},
	{"alpha_scale", "I", nullptr, $PRIVATE, $field(DirectColorModel, alpha_scale)},
	{"is_LinearRGB", "Z", nullptr, $PRIVATE, $field(DirectColorModel, is_LinearRGB)},
	{"lRGBprecision", "I", nullptr, $PRIVATE, $field(DirectColorModel, lRGBprecision)},
	{"tosRGB8LUT", "[B", nullptr, $PRIVATE, $field(DirectColorModel, tosRGB8LUT)},
	{"fromsRGB8LUT8", "[B", nullptr, $PRIVATE, $field(DirectColorModel, fromsRGB8LUT8)},
	{"fromsRGB8LUT16", "[S", nullptr, $PRIVATE, $field(DirectColorModel, fromsRGB8LUT16)},
	{}
};

$MethodInfo _DirectColorModel_MethodInfo_[] = {
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(DirectColorModel::*)(int32_t,int32_t,int32_t,int32_t)>(&DirectColorModel::init$))},
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(DirectColorModel::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&DirectColorModel::init$))},
	{"<init>", "(Ljava/awt/color/ColorSpace;IIIIIZI)V", nullptr, $PUBLIC, $method(static_cast<void(DirectColorModel::*)($ColorSpace*,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t)>(&DirectColorModel::init$))},
	{"coerceData", "(Ljava/awt/image/WritableRaster;Z)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $FINAL},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"getAlpha", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getAlpha", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getAlphaMask", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DirectColorModel::*)()>(&DirectColorModel::getAlphaMask))},
	{"getBlue", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getBlue", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getBlueMask", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DirectColorModel::*)()>(&DirectColorModel::getBlueMask))},
	{"getComponents", "(I[II)[I", nullptr, $PUBLIC | $FINAL},
	{"getComponents", "(Ljava/lang/Object;[II)[I", nullptr, $PUBLIC | $FINAL},
	{"getDataElement", "([II)I", nullptr, $PUBLIC},
	{"getDataElements", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "([IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDefaultRGBComponents", "(I)[F", nullptr, $PRIVATE, $method(static_cast<$floats*(DirectColorModel::*)(int32_t)>(&DirectColorModel::getDefaultRGBComponents))},
	{"getGreen", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getGreen", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getGreenMask", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DirectColorModel::*)()>(&DirectColorModel::getGreenMask))},
	{"getRGB", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getRGB", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getRed", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getRed", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"getRedMask", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DirectColorModel::*)()>(&DirectColorModel::getRedMask))},
	{"getsRGBComponentFromLinearRGB", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DirectColorModel::*)(int32_t,int32_t)>(&DirectColorModel::getsRGBComponentFromLinearRGB))},
	{"getsRGBComponentFromsRGB", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DirectColorModel::*)(int32_t,int32_t)>(&DirectColorModel::getsRGBComponentFromsRGB))},
	{"isCompatibleRaster", "(Ljava/awt/image/Raster;)Z", nullptr, $PUBLIC},
	{"setFields", "()V", nullptr, $PRIVATE, $method(static_cast<void(DirectColorModel::*)()>(&DirectColorModel::setFields))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectColorModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.DirectColorModel",
	"java.awt.image.PackedColorModel",
	nullptr,
	_DirectColorModel_FieldInfo_,
	_DirectColorModel_MethodInfo_
};

$Object* allocate$DirectColorModel($Class* clazz) {
	return $of($alloc(DirectColorModel));
}

void DirectColorModel::init$(int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask) {
	DirectColorModel::init$(bits, rmask, gmask, bmask, 0);
}

void DirectColorModel::init$(int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask) {
	$var($ColorSpace, var$0, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	int32_t var$1 = bits;
	int32_t var$2 = rmask;
	int32_t var$3 = gmask;
	int32_t var$4 = bmask;
	int32_t var$5 = amask;
	int32_t var$6 = amask == 0 ? $Transparency::OPAQUE : $Transparency::TRANSLUCENT;
	$PackedColorModel::init$(var$0, var$1, var$2, var$3, var$4, var$5, false, var$6, $ColorModel::getDefaultTransferType(bits));
	setFields();
}

void DirectColorModel::init$($ColorSpace* space, int32_t bits, int32_t rmask, int32_t gmask, int32_t bmask, int32_t amask, bool isAlphaPremultiplied, int32_t transferType) {
	$PackedColorModel::init$(space, bits, rmask, gmask, bmask, amask, isAlphaPremultiplied, amask == 0 ? $Transparency::OPAQUE : $Transparency::TRANSLUCENT, transferType);
	if ($ColorModel::isLinearRGBspace(this->colorSpace)) {
		this->is_LinearRGB = true;
		if (this->maxBits <= 8) {
			this->lRGBprecision = 8;
			$set(this, tosRGB8LUT, $ColorModel::getLinearRGB8TosRGB8LUT());
			$set(this, fromsRGB8LUT8, $ColorModel::getsRGB8ToLinearRGB8LUT());
		} else {
			this->lRGBprecision = 16;
			$set(this, tosRGB8LUT, $ColorModel::getLinearRGB16TosRGB8LUT());
			$set(this, fromsRGB8LUT16, $ColorModel::getsRGB8ToLinearRGB16LUT());
		}
	} else if (!this->is_sRGB) {
		for (int32_t i = 0; i < 3; ++i) {
			bool var$0 = ($nc(space)->getMinValue(i) != 0.0f);
			if (var$0 || ($nc(space)->getMaxValue(i) != 1.0f)) {
				$throwNew($IllegalArgumentException, "Illegal min/max RGB component value"_s);
			}
		}
	}
	setFields();
}

int32_t DirectColorModel::getRedMask() {
	return $nc(this->maskArray)->get(0);
}

int32_t DirectColorModel::getGreenMask() {
	return $nc(this->maskArray)->get(1);
}

int32_t DirectColorModel::getBlueMask() {
	return $nc(this->maskArray)->get(2);
}

int32_t DirectColorModel::getAlphaMask() {
	if (this->supportsAlpha) {
		return $nc(this->maskArray)->get(3);
	} else {
		return 0;
	}
}

$floats* DirectColorModel::getDefaultRGBComponents(int32_t pixel) {
	$useLocalCurrentObjectStackCache();
	$var($ints, components, getComponents(pixel, ($ints*)nullptr, 0));
	$var($floats, norm, getNormalizedComponents(components, 0, nullptr, 0));
	return $nc(this->colorSpace)->toRGB(norm);
}

int32_t DirectColorModel::getsRGBComponentFromsRGB(int32_t pixel, int32_t idx) {
	int32_t c = ($usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(idx)), $nc(this->maskOffsets)->get(idx)));
	if (this->isAlphaPremultiplied$) {
		int32_t a = ($usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(3)), $nc(this->maskOffsets)->get(3)));
		c = (a == 0) ? 0 : $cast(int32_t, (((c * $nc(this->scaleFactors)->get(idx)) * 255.0f / (a * $nc(this->scaleFactors)->get(3))) + 0.5f));
	} else if ($nc(this->scaleFactors)->get(idx) != 1.0f) {
		c = $cast(int32_t, ((c * $nc(this->scaleFactors)->get(idx)) + 0.5f));
	}
	return c;
}

int32_t DirectColorModel::getsRGBComponentFromLinearRGB(int32_t pixel, int32_t idx) {
	int32_t c = ($usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(idx)), $nc(this->maskOffsets)->get(idx)));
	if (this->isAlphaPremultiplied$) {
		float factor = (float)(($sl(1, this->lRGBprecision)) - 1);
		int32_t a = ($usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(3)), $nc(this->maskOffsets)->get(3)));
		c = (a == 0) ? 0 : $cast(int32_t, (((c * $nc(this->scaleFactors)->get(idx)) * factor / (a * $nc(this->scaleFactors)->get(3))) + 0.5f));
	} else if ($nc(this->nBits)->get(idx) != this->lRGBprecision) {
		if (this->lRGBprecision == 16) {
			c = $cast(int32_t, ((c * $nc(this->scaleFactors)->get(idx) * 257.0f) + 0.5f));
		} else {
			c = $cast(int32_t, ((c * $nc(this->scaleFactors)->get(idx)) + 0.5f));
		}
	}
	return (int32_t)($nc(this->tosRGB8LUT)->get(c) & (uint32_t)255);
}

int32_t DirectColorModel::getRed(int32_t pixel) {
	if (this->is_sRGB) {
		return getsRGBComponentFromsRGB(pixel, 0);
	} else if (this->is_LinearRGB) {
		return getsRGBComponentFromLinearRGB(pixel, 0);
	}
	$var($floats, rgb, getDefaultRGBComponents(pixel));
	return $cast(int32_t, ($nc(rgb)->get(0) * 255.0f + 0.5f));
}

int32_t DirectColorModel::getGreen(int32_t pixel) {
	if (this->is_sRGB) {
		return getsRGBComponentFromsRGB(pixel, 1);
	} else if (this->is_LinearRGB) {
		return getsRGBComponentFromLinearRGB(pixel, 1);
	}
	$var($floats, rgb, getDefaultRGBComponents(pixel));
	return $cast(int32_t, ($nc(rgb)->get(1) * 255.0f + 0.5f));
}

int32_t DirectColorModel::getBlue(int32_t pixel) {
	if (this->is_sRGB) {
		return getsRGBComponentFromsRGB(pixel, 2);
	} else if (this->is_LinearRGB) {
		return getsRGBComponentFromLinearRGB(pixel, 2);
	}
	$var($floats, rgb, getDefaultRGBComponents(pixel));
	return $cast(int32_t, ($nc(rgb)->get(2) * 255.0f + 0.5f));
}

int32_t DirectColorModel::getAlpha(int32_t pixel) {
	if (!this->supportsAlpha) {
		return 255;
	}
	int32_t a = ($usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(3)), $nc(this->maskOffsets)->get(3)));
	if ($nc(this->scaleFactors)->get(3) != 1.0f) {
		a = $cast(int32_t, (a * $nc(this->scaleFactors)->get(3) + 0.5f));
	}
	return a;
}

int32_t DirectColorModel::getRGB(int32_t pixel) {
	if (this->is_sRGB || this->is_LinearRGB) {
		int32_t var$2 = (getAlpha(pixel) << 24);
		int32_t var$1 = var$2 | (getRed(pixel) << 16);
		int32_t var$0 = var$1 | (getGreen(pixel) << 8);
		return var$0 | (getBlue(pixel) << 0);
	}
	$var($floats, rgb, getDefaultRGBComponents(pixel));
	return (((getAlpha(pixel) << 24) | (($cast(int32_t, ($nc(rgb)->get(0) * 255.0f + 0.5f))) << 16)) | (($cast(int32_t, (rgb->get(1) * 255.0f + 0.5f))) << 8)) | (($cast(int32_t, (rgb->get(2) * 255.0f + 0.5f))) << 0);
}

int32_t DirectColorModel::getRed(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getRed(pixel);
}

int32_t DirectColorModel::getGreen(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getGreen(pixel);
}

int32_t DirectColorModel::getBlue(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getBlue(pixel);
}

int32_t DirectColorModel::getAlpha(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getAlpha(pixel);
}

int32_t DirectColorModel::getRGB(Object$* inData) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, inData));
				pixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, inData));
				pixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, inData));
				pixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getRGB(pixel);
}

$Object* DirectColorModel::getDataElements(int32_t rgb, Object$* pixel) {
	$useLocalCurrentObjectStackCache();
	$var($ints, intpixel, nullptr);
	if (this->transferType == $DataBuffer::TYPE_INT && pixel != nullptr) {
		$assign(intpixel, $cast($ints, pixel));
		intpixel->set(0, 0);
	} else {
		$assign(intpixel, $new($ints, 1));
	}
	$var($ColorModel, defaultCM, $ColorModel::getRGBdefault());
	if ($equals(this, defaultCM) || equals(defaultCM)) {
		$nc(intpixel)->set(0, rgb);
		return $of(intpixel);
	}
	int32_t red = 0;
	int32_t grn = 0;
	int32_t blu = 0;
	int32_t alp = 0;
	red = (int32_t)((rgb >> 16) & (uint32_t)255);
	grn = (int32_t)((rgb >> 8) & (uint32_t)255);
	blu = (int32_t)(rgb & (uint32_t)255);
	if (this->is_sRGB || this->is_LinearRGB) {
		int32_t precision = 0;
		float factor = 0.0;
		if (this->is_LinearRGB) {
			if (this->lRGBprecision == 8) {
				red = (int32_t)($nc(this->fromsRGB8LUT8)->get(red) & (uint32_t)255);
				grn = (int32_t)($nc(this->fromsRGB8LUT8)->get(grn) & (uint32_t)255);
				blu = (int32_t)($nc(this->fromsRGB8LUT8)->get(blu) & (uint32_t)255);
				precision = 8;
				factor = 1.0f / 255.0f;
			} else {
				red = (int32_t)($nc(this->fromsRGB8LUT16)->get(red) & (uint32_t)0x0000FFFF);
				grn = (int32_t)($nc(this->fromsRGB8LUT16)->get(grn) & (uint32_t)0x0000FFFF);
				blu = (int32_t)($nc(this->fromsRGB8LUT16)->get(blu) & (uint32_t)0x0000FFFF);
				precision = 16;
				factor = 1.0f / 65535.0f;
			}
		} else {
			precision = 8;
			factor = 1.0f / 255.0f;
		}
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if (this->isAlphaPremultiplied$) {
				factor *= (alp * (1.0f / 255.0f));
				precision = -1;
			}
			if ($nc(this->nBits)->get(3) != 8) {
				alp = $cast(int32_t, ((alp * (1.0f / 255.0f) * (($sl(1, $nc(this->nBits)->get(3))) - 1)) + 0.5f));
				if (alp > (($sl(1, $nc(this->nBits)->get(3))) - 1)) {
					alp = ($sl(1, $nc(this->nBits)->get(3))) - 1;
				}
			}
			$nc(intpixel)->set(0, $sl(alp, $nc(this->maskOffsets)->get(3)));
		}
		if ($nc(this->nBits)->get(0) != precision) {
			red = $cast(int32_t, ((red * factor * (($sl(1, $nc(this->nBits)->get(0))) - 1)) + 0.5f));
		}
		if ($nc(this->nBits)->get(1) != precision) {
			grn = $cast(int32_t, ((grn * factor * (($sl(1, $nc(this->nBits)->get(1))) - 1)) + 0.5f));
		}
		if ($nc(this->nBits)->get(2) != precision) {
			blu = $cast(int32_t, ((blu * factor * (($sl(1, $nc(this->nBits)->get(2))) - 1)) + 0.5f));
		}
	} else {
		$var($floats, norm, $new($floats, 3));
		float factor = 1.0f / 255.0f;
		norm->set(0, red * factor);
		norm->set(1, grn * factor);
		norm->set(2, blu * factor);
		$assign(norm, $nc(this->colorSpace)->fromRGB(norm));
		if (this->supportsAlpha) {
			alp = (int32_t)((rgb >> 24) & (uint32_t)255);
			if (this->isAlphaPremultiplied$) {
				factor *= alp;
				for (int32_t i = 0; i < 3; ++i) {
					(*$nc(norm))[i] *= factor;
				}
			}
			if ($nc(this->nBits)->get(3) != 8) {
				alp = $cast(int32_t, ((alp * (1.0f / 255.0f) * (($sl(1, $nc(this->nBits)->get(3))) - 1)) + 0.5f));
				if (alp > (($sl(1, $nc(this->nBits)->get(3))) - 1)) {
					alp = ($sl(1, $nc(this->nBits)->get(3))) - 1;
				}
			}
			$nc(intpixel)->set(0, $sl(alp, $nc(this->maskOffsets)->get(3)));
		}
		red = $cast(int32_t, (($nc(norm)->get(0) * (($sl(1, $nc(this->nBits)->get(0))) - 1)) + 0.5f));
		grn = $cast(int32_t, ((norm->get(1) * (($sl(1, $nc(this->nBits)->get(1))) - 1)) + 0.5f));
		blu = $cast(int32_t, ((norm->get(2) * (($sl(1, $nc(this->nBits)->get(2))) - 1)) + 0.5f));
	}
	if (this->maxBits > 23) {
		if (red > (($sl(1, $nc(this->nBits)->get(0))) - 1)) {
			red = ($sl(1, $nc(this->nBits)->get(0))) - 1;
		}
		if (grn > (($sl(1, $nc(this->nBits)->get(1))) - 1)) {
			grn = ($sl(1, $nc(this->nBits)->get(1))) - 1;
		}
		if (blu > (($sl(1, $nc(this->nBits)->get(2))) - 1)) {
			blu = ($sl(1, $nc(this->nBits)->get(2))) - 1;
		}
	}
	(*$nc(intpixel))[0] |= (($sl(red, $nc(this->maskOffsets)->get(0))) | ($sl(grn, $nc(this->maskOffsets)->get(1)))) | ($sl(blu, $nc(this->maskOffsets)->get(2)));
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			{
				$var($bytes, bdata, nullptr);
				if (pixel == nullptr) {
					$assign(bdata, $new($bytes, 1));
				} else {
					$assign(bdata, $cast($bytes, pixel));
				}
				$nc(bdata)->set(0, (int8_t)((int32_t)(255 & (uint32_t)intpixel->get(0))));
				return $of(bdata);
			}
		}
	case $DataBuffer::TYPE_USHORT:
		{
			{
				$var($shorts, sdata, nullptr);
				if (pixel == nullptr) {
					$assign(sdata, $new($shorts, 1));
				} else {
					$assign(sdata, $cast($shorts, pixel));
				}
				$nc(sdata)->set(0, (int16_t)((int32_t)(intpixel->get(0) & (uint32_t)0x0000FFFF)));
				return $of(sdata);
			}
		}
	case $DataBuffer::TYPE_INT:
		{
			return $of(intpixel);
		}
	}
	$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
}

$ints* DirectColorModel::getComponents(int32_t pixel, $ints* components$renamed, int32_t offset) {
	$var($ints, components, components$renamed);
	if (components == nullptr) {
		$assign(components, $new($ints, offset + this->numComponents));
	}
	for (int32_t i = 0; i < this->numComponents; ++i) {
		$nc(components)->set(offset + i, $usr((int32_t)(pixel & (uint32_t)$nc(this->maskArray)->get(i)), $nc(this->maskOffsets)->get(i)));
	}
	return components;
}

$ints* DirectColorModel::getComponents(Object$* pixel, $ints* components, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	int32_t intpixel = 0;
	{
		$var($bytes, bdata, nullptr)
		$var($shorts, sdata, nullptr)
		$var($ints, idata, nullptr)
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bdata, $cast($bytes, pixel));
				intpixel = (int32_t)($nc(bdata)->get(0) & (uint32_t)255);
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(sdata, $cast($shorts, pixel));
				intpixel = (int32_t)($nc(sdata)->get(0) & (uint32_t)0x0000FFFF);
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(idata, $cast($ints, pixel));
				intpixel = $nc(idata)->get(0);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return getComponents(intpixel, components, offset);
}

$WritableRaster* DirectColorModel::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ((w <= 0) || (h <= 0)) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") cannot be <= 0"_s}));
	}
	$var($ints, bandmasks, nullptr);
	if (this->supportsAlpha) {
		$assign(bandmasks, $new($ints, 4));
		bandmasks->set(3, this->alpha_mask);
	} else {
		$assign(bandmasks, $new($ints, 3));
	}
	$nc(bandmasks)->set(0, this->red_mask);
	bandmasks->set(1, this->green_mask);
	bandmasks->set(2, this->blue_mask);
	if (this->pixel_bits > 16) {
		return $Raster::createPackedRaster($DataBuffer::TYPE_INT, w, h, bandmasks, ($Point*)nullptr);
	} else if (this->pixel_bits > 8) {
		return $Raster::createPackedRaster($DataBuffer::TYPE_USHORT, w, h, bandmasks, ($Point*)nullptr);
	} else {
		return $Raster::createPackedRaster($DataBuffer::TYPE_BYTE, w, h, bandmasks, ($Point*)nullptr);
	}
}

int32_t DirectColorModel::getDataElement($ints* components, int32_t offset) {
	int32_t pixel = 0;
	for (int32_t i = 0; i < this->numComponents; ++i) {
		pixel |= ((int32_t)(($sl($nc(components)->get(offset + i), $nc(this->maskOffsets)->get(i))) & (uint32_t)$nc(this->maskArray)->get(i)));
	}
	return pixel;
}

$Object* DirectColorModel::getDataElements($ints* components, int32_t offset, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	for (int32_t i = 0; i < this->numComponents; ++i) {
		pixel |= ((int32_t)(($sl($nc(components)->get(offset + i), $nc(this->maskOffsets)->get(i))) & (uint32_t)$nc(this->maskArray)->get(i)));
	}
	switch (this->transferType) {
	case $DataBuffer::TYPE_BYTE:
		{
			if ($instanceOf($bytes, obj)) {
				$var($bytes, bdata, $cast($bytes, obj));
				$nc(bdata)->set(0, (int8_t)((int32_t)(pixel & (uint32_t)255)));
				return $of(bdata);
			} else {
				$var($bytes, bdata, $new($bytes, {(int8_t)((int32_t)(pixel & (uint32_t)255))}));
				return $of(bdata);
			}
		}
	case $DataBuffer::TYPE_USHORT:
		{
			if ($instanceOf($shorts, obj)) {
				$var($shorts, sdata, $cast($shorts, obj));
				$nc(sdata)->set(0, (int16_t)((int32_t)(pixel & (uint32_t)0x0000FFFF)));
				return $of(sdata);
			} else {
				$var($shorts, sdata, $new($shorts, {(int16_t)((int32_t)(pixel & (uint32_t)0x0000FFFF))}));
				return $of(sdata);
			}
		}
	case $DataBuffer::TYPE_INT:
		{
			if ($instanceOf($ints, obj)) {
				$var($ints, idata, $cast($ints, obj));
				$nc(idata)->set(0, pixel);
				return $of(idata);
			} else {
				$var($ints, idata, $new($ints, {pixel}));
				return $of(idata);
			}
		}
	default:
		{
			$throwNew($ClassCastException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
		}
	}
}

$ColorModel* DirectColorModel::coerceData($WritableRaster* raster, bool isAlphaPremultiplied) {
	$useLocalCurrentObjectStackCache();
	if (!this->supportsAlpha || this->isAlphaPremultiplied() == isAlphaPremultiplied) {
		return this;
	}
	int32_t w = $nc(raster)->getWidth();
	int32_t h = raster->getHeight();
	int32_t aIdx = this->numColorComponents;
	float normAlpha = 0.0;
	float alphaScale = 1.0f / ((float)(($sl(1, $nc(this->nBits)->get(aIdx))) - 1));
	int32_t rminX = raster->getMinX();
	int32_t rY = raster->getMinY();
	int32_t rX = 0;
	$var($ints, pixel, nullptr);
	$var($ints, zpixel, nullptr);
	if (isAlphaPremultiplied) {
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * normAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($ints, this->numComponents));
									$Arrays::fill(zpixel, 0);
								}
								raster->setPixel(rX, rY, zpixel);
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * normAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($ints, this->numComponents));
									$Arrays::fill(zpixel, 0);
								}
								raster->setPixel(rX, rY, zpixel);
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * normAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							} else {
								if (zpixel == nullptr) {
									$assign(zpixel, $new($ints, this->numComponents));
									$Arrays::fill(zpixel, 0);
								}
								raster->setPixel(rX, rY, zpixel);
							}
						}
					}
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	} else {
		switch (this->transferType) {
		case $DataBuffer::TYPE_BYTE:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0.0f) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * invAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * invAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							}
						}
					}
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				{
					for (int32_t y = 0; y < h; ++y, ++rY) {
						rX = rminX;
						for (int32_t x = 0; x < w; ++x, ++rX) {
							$assign(pixel, raster->getPixel(rX, rY, pixel));
							normAlpha = $nc(pixel)->get(aIdx) * alphaScale;
							if (normAlpha != 0) {
								float invAlpha = 1.0f / normAlpha;
								for (int32_t c = 0; c < aIdx; ++c) {
									pixel->set(c, $cast(int32_t, (pixel->get(c) * invAlpha + 0.5f)));
								}
								raster->setPixel(rX, rY, pixel);
							}
						}
					}
				}
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"This method has not been implemented for transferType "_s, $$str(this->transferType)}));
			}
		}
	}
	return $new(DirectColorModel, this->colorSpace, this->pixel_bits, $nc(this->maskArray)->get(0), $nc(this->maskArray)->get(1), $nc(this->maskArray)->get(2), $nc(this->maskArray)->get(3), isAlphaPremultiplied, this->transferType);
}

bool DirectColorModel::isCompatibleRaster($Raster* raster) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	$var($SinglePixelPackedSampleModel, spsm, nullptr);
	if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		$assign(spsm, $cast($SinglePixelPackedSampleModel, sm));
	} else {
		return false;
	}
	int32_t var$0 = $nc(spsm)->getNumBands();
	if (var$0 != getNumComponents()) {
		return false;
	}
	$var($ints, bitMasks, $nc(spsm)->getBitMasks());
	for (int32_t i = 0; i < this->numComponents; ++i) {
		if ($nc(bitMasks)->get(i) != $nc(this->maskArray)->get(i)) {
			return false;
		}
	}
	return (raster->getTransferType() == this->transferType);
}

void DirectColorModel::setFields() {
	this->red_mask = $nc(this->maskArray)->get(0);
	this->red_offset = $nc(this->maskOffsets)->get(0);
	this->green_mask = $nc(this->maskArray)->get(1);
	this->green_offset = $nc(this->maskOffsets)->get(1);
	this->blue_mask = $nc(this->maskArray)->get(2);
	this->blue_offset = $nc(this->maskOffsets)->get(2);
	if ($nc(this->nBits)->get(0) < 8) {
		this->red_scale = ($sl(1, $nc(this->nBits)->get(0))) - 1;
	}
	if ($nc(this->nBits)->get(1) < 8) {
		this->green_scale = ($sl(1, $nc(this->nBits)->get(1))) - 1;
	}
	if ($nc(this->nBits)->get(2) < 8) {
		this->blue_scale = ($sl(1, $nc(this->nBits)->get(2))) - 1;
	}
	if (this->supportsAlpha) {
		this->alpha_mask = $nc(this->maskArray)->get(3);
		this->alpha_offset = $nc(this->maskOffsets)->get(3);
		if ($nc(this->nBits)->get(3) < 8) {
			this->alpha_scale = ($sl(1, $nc(this->nBits)->get(3))) - 1;
		}
	}
}

$String* DirectColorModel::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$4, $$str({"DirectColorModel: rmask="_s, $($Integer::toHexString(this->red_mask)), " gmask="_s}));
	$var($String, var$3, $$concat(var$4, $($Integer::toHexString(this->green_mask))));
	$var($String, var$2, $$concat(var$3, " bmask="_s));
	$var($String, var$1, $$concat(var$2, $($Integer::toHexString(this->blue_mask))));
	$var($String, var$0, $$concat(var$1, " amask="_s));
	return $new($String, $$concat(var$0, $($Integer::toHexString(this->alpha_mask))));
}

DirectColorModel::DirectColorModel() {
}

$Class* DirectColorModel::load$($String* name, bool initialize) {
	$loadClass(DirectColorModel, name, initialize, &_DirectColorModel_ClassInfo_, allocate$DirectColorModel);
	return class$;
}

$Class* DirectColorModel::class$ = nullptr;

		} // image
	} // awt
} // java