#include <java/awt/image/AffineTransformOp.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/BufferedImageOp.h>
#include <java/awt/image/ColorConvertOp.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/ImagingOpException.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/RasterOp.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef MIN_VALUE
#undef OPAQUE
#undef TYPE_BICUBIC
#undef TYPE_BILINEAR
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_IDENTITY
#undef TYPE_INT_ARGB
#undef TYPE_MASK_ROTATION
#undef TYPE_NEAREST_NEIGHBOR
#undef TYPE_TRANSLATION
#undef VALUE_INTERPOLATION_BICUBIC
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR
#undef VALUE_RENDER_QUALITY
#undef VALUE_RENDER_SPEED

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $BufferedImageOp = ::java::awt::image::BufferedImageOp;
using $ColorConvertOp = ::java::awt::image::ColorConvertOp;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ImagingOpException = ::java::awt::image::ImagingOpException;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $RasterOp = ::java::awt::image::RasterOp;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _AffineTransformOp_FieldInfo_[] = {
	{"xform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(AffineTransformOp, xform)},
	{"hints", "Ljava/awt/RenderingHints;", nullptr, 0, $field(AffineTransformOp, hints)},
	{"TYPE_NEAREST_NEIGHBOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransformOp, TYPE_NEAREST_NEIGHBOR)},
	{"TYPE_BILINEAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransformOp, TYPE_BILINEAR)},
	{"TYPE_BICUBIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransformOp, TYPE_BICUBIC)},
	{"interpolationType", "I", nullptr, 0, $field(AffineTransformOp, interpolationType)},
	{}
};

$MethodInfo _AffineTransformOp_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/geom/AffineTransform;Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransformOp::*)($AffineTransform*,$RenderingHints*)>(&AffineTransformOp::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;I)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransformOp::*)($AffineTransform*,int32_t)>(&AffineTransformOp::init$))},
	{"createCompatibleDestImage", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/ColorModel;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleDestRaster", "(Ljava/awt/image/Raster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"filter", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $FINAL},
	{"filter", "(Ljava/awt/image/Raster;Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/BufferedImage;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getBounds2D", "(Ljava/awt/image/Raster;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $FINAL},
	{"getInterpolationType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(AffineTransformOp::*)()>(&AffineTransformOp::getInterpolationType))},
	{"getPoint2D", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC | $FINAL},
	{"getRenderingHints", "()Ljava/awt/RenderingHints;", nullptr, $PUBLIC | $FINAL},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AffineTransform*(AffineTransformOp::*)()>(&AffineTransformOp::getTransform))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, 0},
	{}
};

$ClassInfo _AffineTransformOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.AffineTransformOp",
	"java.lang.Object",
	"java.awt.image.BufferedImageOp,java.awt.image.RasterOp",
	_AffineTransformOp_FieldInfo_,
	_AffineTransformOp_MethodInfo_
};

$Object* allocate$AffineTransformOp($Class* clazz) {
	return $of($alloc(AffineTransformOp));
}

int32_t AffineTransformOp::hashCode() {
	 return this->$BufferedImageOp::hashCode();
}

bool AffineTransformOp::equals(Object$* arg0) {
	 return this->$BufferedImageOp::equals(arg0);
}

$Object* AffineTransformOp::clone() {
	 return this->$BufferedImageOp::clone();
}

$String* AffineTransformOp::toString() {
	 return this->$BufferedImageOp::toString();
}

void AffineTransformOp::finalize() {
	this->$BufferedImageOp::finalize();
}

void AffineTransformOp::init$($AffineTransform* xform, $RenderingHints* hints) {
	this->interpolationType = AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
	validateTransform(xform);
	$set(this, xform, $cast($AffineTransform, $nc(xform)->clone()));
	$set(this, hints, hints);
	if (hints != nullptr) {
		$init($RenderingHints);
		$var($Object, value, hints->get($RenderingHints::KEY_INTERPOLATION));
		if (value == nullptr) {
			$assign(value, hints->get($RenderingHints::KEY_RENDERING));
			if ($equals(value, $RenderingHints::VALUE_RENDER_SPEED)) {
				this->interpolationType = AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
			} else {
				if ($equals(value, $RenderingHints::VALUE_RENDER_QUALITY)) {
					this->interpolationType = AffineTransformOp::TYPE_BILINEAR;
				}
			}
		} else {
			if ($equals(value, $RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR)) {
				this->interpolationType = AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
			} else {
				if ($equals(value, $RenderingHints::VALUE_INTERPOLATION_BILINEAR)) {
					this->interpolationType = AffineTransformOp::TYPE_BILINEAR;
				} else {
					if ($equals(value, $RenderingHints::VALUE_INTERPOLATION_BICUBIC)) {
						this->interpolationType = AffineTransformOp::TYPE_BICUBIC;
					}
				}
			}
		}
	} else {
		this->interpolationType = AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
	}
}

void AffineTransformOp::init$($AffineTransform* xform, int32_t interpolationType) {
	$useLocalCurrentObjectStackCache();
	this->interpolationType = AffineTransformOp::TYPE_NEAREST_NEIGHBOR;
	validateTransform(xform);
	$set(this, xform, $cast($AffineTransform, $nc(xform)->clone()));
	switch (interpolationType) {
	case AffineTransformOp::TYPE_NEAREST_NEIGHBOR:
		{}
	case AffineTransformOp::TYPE_BILINEAR:
		{}
	case AffineTransformOp::TYPE_BICUBIC:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown interpolation type: "_s, $$str(interpolationType)}));
		}
	}
	this->interpolationType = interpolationType;
}

int32_t AffineTransformOp::getInterpolationType() {
	return this->interpolationType;
}

$BufferedImage* AffineTransformOp::filter($BufferedImage* src$renamed, $BufferedImage* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, dst, dst$renamed);
	$var($BufferedImage, src, src$renamed);
	if (src == nullptr) {
		$throwNew($NullPointerException, "src image is null"_s);
	}
	if (src == dst) {
		$throwNew($IllegalArgumentException, "src image cannot be the same as the dst image"_s);
	}
	bool needToConvert = false;
	$var($ColorModel, srcCM, $nc(src)->getColorModel());
	$var($ColorModel, dstCM, nullptr);
	$var($BufferedImage, origDst, dst);
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestImage(src, nullptr));
		$assign(dstCM, srcCM);
		$assign(origDst, dst);
	} else {
		$assign(dstCM, $nc(dst)->getColorModel());
		int32_t var$0 = $nc($($nc(srcCM)->getColorSpace()))->getType();
		if (var$0 != $nc($($nc(dstCM)->getColorSpace()))->getType()) {
			int32_t type = $nc(this->xform)->getType();
			bool needTrans = (((int32_t)(type & (uint32_t)($AffineTransform::TYPE_MASK_ROTATION | $AffineTransform::TYPE_GENERAL_TRANSFORM))) != 0);
			if (!needTrans && type != $AffineTransform::TYPE_TRANSLATION && type != $AffineTransform::TYPE_IDENTITY) {
				$var($doubles, mtx, $new($doubles, 4));
				$nc(this->xform)->getMatrix(mtx);
				needTrans = (mtx->get(0) != $cast(int32_t, mtx->get(0)) || mtx->get(3) != $cast(int32_t, mtx->get(3)));
			}
			if (needTrans && srcCM->getTransparency() == $Transparency::OPAQUE) {
				$var($ColorConvertOp, ccop, $new($ColorConvertOp, this->hints));
				$var($BufferedImage, tmpSrc, nullptr);
				int32_t sw = src->getWidth();
				int32_t sh = src->getHeight();
				if (dstCM->getTransparency() == $Transparency::OPAQUE) {
					$assign(tmpSrc, $new($BufferedImage, sw, sh, $BufferedImage::TYPE_INT_ARGB));
				} else {
					$var($WritableRaster, r, dstCM->createCompatibleWritableRaster(sw, sh));
					$assign(tmpSrc, $new($BufferedImage, dstCM, r, dstCM->isAlphaPremultiplied(), ($Hashtable*)nullptr));
				}
				$assign(src, ccop->filter(src, tmpSrc));
			} else {
				needToConvert = true;
				$assign(dst, createCompatibleDestImage(src, nullptr));
			}
		}
	}
	if (this->interpolationType != AffineTransformOp::TYPE_NEAREST_NEIGHBOR && $instanceOf($IndexColorModel, $($nc(dst)->getColorModel()))) {
		int32_t var$1 = dst->getWidth();
		$assign(dst, $new($BufferedImage, var$1, dst->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	}
	if ($ImagingLib::filter(static_cast<$BufferedImageOp*>(this), src, dst) == nullptr) {
		$throwNew($ImagingOpException, "Unable to transform src image"_s);
	}
	if (needToConvert) {
		$var($ColorConvertOp, ccop, $new($ColorConvertOp, this->hints));
		ccop->filter(dst, origDst);
	} else if (origDst != dst) {
		$var($Graphics2D, g, $nc(origDst)->createGraphics());
		{
			$var($Throwable, var$2, nullptr);
			try {
				$init($AlphaComposite);
				$nc(g)->setComposite($AlphaComposite::Src);
				g->drawImage(dst, 0, 0, nullptr);
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	return origDst;
}

$WritableRaster* AffineTransformOp::filter($Raster* src, $WritableRaster* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($WritableRaster, dst, dst$renamed);
	if (src == nullptr) {
		$throwNew($NullPointerException, "src image is null"_s);
	}
	if (dst == nullptr) {
		$assign(dst, createCompatibleDestRaster(src));
	}
	if ($equals(src, dst)) {
		$throwNew($IllegalArgumentException, "src image cannot be the same as the dst image"_s);
	}
	int32_t var$0 = $nc(src)->getNumBands();
	if (var$0 != $nc(dst)->getNumBands()) {
		$var($String, var$2, $$str({"Number of src bands ("_s, $$str(src->getNumBands()), ") does not match number of  dst bands ("_s}));
		$var($String, var$1, $$concat(var$2, $$str(dst->getNumBands())));
		$throwNew($IllegalArgumentException, $$concat(var$1, ")"_s));
	}
	if ($ImagingLib::filter(static_cast<$RasterOp*>(this), src, dst) == nullptr) {
		$throwNew($ImagingOpException, "Unable to transform src image"_s);
	}
	return dst;
}

$Rectangle2D* AffineTransformOp::getBounds2D($BufferedImage* src) {
	return getBounds2D($(static_cast<$Raster*>($nc(src)->getRaster())));
}

$Rectangle2D* AffineTransformOp::getBounds2D($Raster* src) {
	int32_t w = $nc(src)->getWidth();
	int32_t h = src->getHeight();
	$var($floats, pts, $new($floats, {
		(float)0,
		(float)0,
		(float)w,
		(float)0,
		(float)w,
		(float)h,
		(float)0,
		(float)h
	}));
	$nc(this->xform)->transform(pts, 0, pts, 0, 4);
	float fmaxX = pts->get(0);
	float fmaxY = pts->get(1);
	float fminX = pts->get(0);
	float fminY = pts->get(1);
	for (int32_t i = 2; i < 8; i += 2) {
		if (pts->get(i) > fmaxX) {
			fmaxX = pts->get(i);
		} else if (pts->get(i) < fminX) {
			fminX = pts->get(i);
		}
		if (pts->get(i + 1) > fmaxY) {
			fmaxY = pts->get(i + 1);
		} else if (pts->get(i + 1) < fminY) {
			fminY = pts->get(i + 1);
		}
	}
	return $new($Rectangle2D$Float, fminX, fminY, fmaxX - fminX, fmaxY - fminY);
}

$BufferedImage* AffineTransformOp::createCompatibleDestImage($BufferedImage* src, $ColorModel* destCM) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, nullptr);
	$var($Rectangle, r, $nc($(getBounds2D(src)))->getBounds());
	int32_t w = $nc(r)->x + r->width;
	int32_t h = r->y + r->height;
	if (w <= 0) {
		$throwNew($RasterFormatException, $$str({"Transformed width ("_s, $$str(w), ") is less than or equal to 0."_s}));
	}
	if (h <= 0) {
		$throwNew($RasterFormatException, $$str({"Transformed height ("_s, $$str(h), ") is less than or equal to 0."_s}));
	}
	if (destCM == nullptr) {
		$var($ColorModel, cm, $nc(src)->getColorModel());
		if (this->interpolationType != AffineTransformOp::TYPE_NEAREST_NEIGHBOR && ($instanceOf($IndexColorModel, cm) || $nc(cm)->getTransparency() == $Transparency::OPAQUE)) {
			$assign(image, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
		} else {
			$var($ColorModel, var$0, cm);
			$var($WritableRaster, var$1, $nc($(src->getRaster()))->createCompatibleWritableRaster(w, h));
			$assign(image, $new($BufferedImage, var$0, var$1, cm->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		}
	} else {
		$var($ColorModel, var$2, destCM);
		$var($WritableRaster, var$3, $nc(destCM)->createCompatibleWritableRaster(w, h));
		$assign(image, $new($BufferedImage, var$2, var$3, destCM->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	}
	return image;
}

$WritableRaster* AffineTransformOp::createCompatibleDestRaster($Raster* src) {
	$var($Rectangle2D, r, getBounds2D(src));
	int32_t var$0 = $cast(int32_t, $nc(r)->getX());
	int32_t var$1 = $cast(int32_t, r->getY());
	int32_t var$2 = $cast(int32_t, r->getWidth());
	return $nc(src)->createCompatibleWritableRaster(var$0, var$1, var$2, $cast(int32_t, r->getHeight()));
}

$Point2D* AffineTransformOp::getPoint2D($Point2D* srcPt, $Point2D* dstPt) {
	return $nc(this->xform)->transform(srcPt, dstPt);
}

$AffineTransform* AffineTransformOp::getTransform() {
	return $cast($AffineTransform, $nc(this->xform)->clone());
}

$RenderingHints* AffineTransformOp::getRenderingHints() {
	$useLocalCurrentObjectStackCache();
	if (this->hints == nullptr) {
		$var($Object, val, nullptr);
		switch (this->interpolationType) {
		case AffineTransformOp::TYPE_NEAREST_NEIGHBOR:
			{
				$init($RenderingHints);
				$assign(val, $RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR);
				break;
			}
		case AffineTransformOp::TYPE_BILINEAR:
			{
				$init($RenderingHints);
				$assign(val, $RenderingHints::VALUE_INTERPOLATION_BILINEAR);
				break;
			}
		case AffineTransformOp::TYPE_BICUBIC:
			{
				$init($RenderingHints);
				$assign(val, $RenderingHints::VALUE_INTERPOLATION_BICUBIC);
				break;
			}
		default:
			{
				$throwNew($InternalError, $$str({"Unknown interpolation type "_s, $$str(this->interpolationType)}));
			}
		}
		$init($RenderingHints);
		$set(this, hints, $new($RenderingHints, $RenderingHints::KEY_INTERPOLATION, val));
	}
	return this->hints;
}

void AffineTransformOp::validateTransform($AffineTransform* xform) {
	$init($Double);
	if ($Math::abs($nc(xform)->getDeterminant()) <= $Double::MIN_VALUE) {
		$throwNew($ImagingOpException, $$str({"Unable to invert transform "_s, xform}));
	}
}

AffineTransformOp::AffineTransformOp() {
}

$Class* AffineTransformOp::load$($String* name, bool initialize) {
	$loadClass(AffineTransformOp, name, initialize, &_AffineTransformOp_ClassInfo_, allocate$AffineTransformOp);
	return class$;
}

$Class* AffineTransformOp::class$ = nullptr;

		} // image
	} // awt
} // java