#include <java/awt/geom/AffineTransform.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Path2D$Double.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef APPLY_IDENTITY
#undef APPLY_SCALE
#undef APPLY_SHEAR
#undef APPLY_TRANSLATE
#undef HI_IDENTITY
#undef HI_SCALE
#undef HI_SHEAR
#undef HI_SHIFT
#undef HI_TRANSLATE
#undef MIN_VALUE
#undef TYPE_FLIP
#undef TYPE_GENERAL_ROTATION
#undef TYPE_GENERAL_SCALE
#undef TYPE_GENERAL_TRANSFORM
#undef TYPE_IDENTITY
#undef TYPE_MASK_ROTATION
#undef TYPE_MASK_SCALE
#undef TYPE_QUADRANT_ROTATION
#undef TYPE_TRANSLATION
#undef TYPE_UNIFORM_SCALE
#undef TYPE_UNKNOWN

using $Point2DArray = $Array<::java::awt::geom::Point2D>;
using $Shape = ::java::awt::Shape;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Double = ::java::awt::geom::Path2D$Double;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {
		namespace geom {

$Attribute AffineTransform_Attribute_var$1[] = {
	{'s', "scaleX"},
	{'s', "shearY"},
	{'s', "shearX"},
	{'s', "scaleY"},
	{'s', "translateX"},
	{'s', "translateY"},
	{'-'}
};

$NamedAttribute AffineTransform_Attribute_var$0[] = {
	{"value", '[', AffineTransform_Attribute_var$1},
	{}
};

$CompoundAttribute _AffineTransform_MethodAnnotations_init$3[] = {
	{"Ljava/beans/ConstructorProperties;", AffineTransform_Attribute_var$0},
	{}
};

$FieldInfo _AffineTransform_FieldInfo_[] = {
	{"TYPE_UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, TYPE_UNKNOWN)},
	{"TYPE_IDENTITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_IDENTITY)},
	{"TYPE_TRANSLATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_TRANSLATION)},
	{"TYPE_UNIFORM_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_UNIFORM_SCALE)},
	{"TYPE_GENERAL_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_GENERAL_SCALE)},
	{"TYPE_MASK_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_MASK_SCALE)},
	{"TYPE_FLIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_FLIP)},
	{"TYPE_QUADRANT_ROTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_QUADRANT_ROTATION)},
	{"TYPE_GENERAL_ROTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_GENERAL_ROTATION)},
	{"TYPE_MASK_ROTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_MASK_ROTATION)},
	{"TYPE_GENERAL_TRANSFORM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AffineTransform, TYPE_GENERAL_TRANSFORM)},
	{"APPLY_IDENTITY", "I", nullptr, $STATIC | $FINAL, $constField(AffineTransform, APPLY_IDENTITY)},
	{"APPLY_TRANSLATE", "I", nullptr, $STATIC | $FINAL, $constField(AffineTransform, APPLY_TRANSLATE)},
	{"APPLY_SCALE", "I", nullptr, $STATIC | $FINAL, $constField(AffineTransform, APPLY_SCALE)},
	{"APPLY_SHEAR", "I", nullptr, $STATIC | $FINAL, $constField(AffineTransform, APPLY_SHEAR)},
	{"HI_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, HI_SHIFT)},
	{"HI_IDENTITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, HI_IDENTITY)},
	{"HI_TRANSLATE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, HI_TRANSLATE)},
	{"HI_SCALE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, HI_SCALE)},
	{"HI_SHEAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, HI_SHEAR)},
	{"m00", "D", nullptr, 0, $field(AffineTransform, m00)},
	{"m10", "D", nullptr, 0, $field(AffineTransform, m10)},
	{"m01", "D", nullptr, 0, $field(AffineTransform, m01)},
	{"m11", "D", nullptr, 0, $field(AffineTransform, m11)},
	{"m02", "D", nullptr, 0, $field(AffineTransform, m02)},
	{"m12", "D", nullptr, 0, $field(AffineTransform, m12)},
	{"state", "I", nullptr, $TRANSIENT, $field(AffineTransform, state)},
	{"type", "I", nullptr, $PRIVATE | $TRANSIENT, $field(AffineTransform, type)},
	{"rot90conversion", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AffineTransform, rot90conversion)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AffineTransform, serialVersionUID)},
	{}
};

$MethodInfo _AffineTransform_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(DDDDDDI)V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)(double,double,double,double,double,double,int32_t)>(&AffineTransform::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::init$))},
	{"<init>", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)(AffineTransform*)>(&AffineTransform::init$))},
	{"<init>", "(FFFFFF)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)(float,float,float,float,float,float)>(&AffineTransform::init$)), nullptr, nullptr, _AffineTransform_MethodAnnotations_init$3},
	{"<init>", "([F)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)($floats*)>(&AffineTransform::init$))},
	{"<init>", "(DDDDDD)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)(double,double,double,double,double,double)>(&AffineTransform::init$))},
	{"<init>", "([D)V", nullptr, $PUBLIC, $method(static_cast<void(AffineTransform::*)($doubles*)>(&AffineTransform::init$))},
	{"_matround", "(D)D", nullptr, $PRIVATE | $STATIC, $method(static_cast<double(*)(double)>(&AffineTransform::_matround))},
	{"calculateType", "()V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::calculateType))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"concatenate", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"createInverse", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, nullptr, "java.awt.geom.NoninvertibleTransformException"},
	{"createTransformedShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"deltaTransform", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"deltaTransform", "([DI[DII)V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDeterminant", "()D", nullptr, $PUBLIC},
	{"getMatrix", "([D)V", nullptr, $PUBLIC},
	{"getQuadrantRotateInstance", "(I)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(int32_t)>(&AffineTransform::getQuadrantRotateInstance))},
	{"getQuadrantRotateInstance", "(IDD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(int32_t,double,double)>(&AffineTransform::getQuadrantRotateInstance))},
	{"getRotateInstance", "(D)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double)>(&AffineTransform::getRotateInstance))},
	{"getRotateInstance", "(DDD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double,double)>(&AffineTransform::getRotateInstance))},
	{"getRotateInstance", "(DD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double)>(&AffineTransform::getRotateInstance))},
	{"getRotateInstance", "(DDDD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double,double,double)>(&AffineTransform::getRotateInstance))},
	{"getScaleInstance", "(DD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double)>(&AffineTransform::getScaleInstance))},
	{"getScaleX", "()D", nullptr, $PUBLIC},
	{"getScaleY", "()D", nullptr, $PUBLIC},
	{"getShearInstance", "(DD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double)>(&AffineTransform::getShearInstance))},
	{"getShearX", "()D", nullptr, $PUBLIC},
	{"getShearY", "()D", nullptr, $PUBLIC},
	{"getTranslateInstance", "(DD)Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AffineTransform*(*)(double,double)>(&AffineTransform::getTranslateInstance))},
	{"getTranslateX", "()D", nullptr, $PUBLIC},
	{"getTranslateY", "()D", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inverseTransform", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC, nullptr, "java.awt.geom.NoninvertibleTransformException"},
	{"inverseTransform", "([DI[DII)V", nullptr, $PUBLIC, nullptr, "java.awt.geom.NoninvertibleTransformException"},
	{"invert", "()V", nullptr, $PUBLIC, nullptr, "java.awt.geom.NoninvertibleTransformException"},
	{"isIdentity", "()Z", nullptr, $PUBLIC},
	{"preConcatenate", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"quadrantRotate", "(I)V", nullptr, $PUBLIC},
	{"quadrantRotate", "(IDD)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)($ObjectInputStream*)>(&AffineTransform::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"rotate", "(D)V", nullptr, $PUBLIC},
	{"rotate", "(DDD)V", nullptr, $PUBLIC},
	{"rotate", "(DD)V", nullptr, $PUBLIC},
	{"rotate", "(DDDD)V", nullptr, $PUBLIC},
	{"rotate180", "()V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::rotate180))},
	{"rotate270", "()V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::rotate270))},
	{"rotate90", "()V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::rotate90))},
	{"scale", "(DD)V", nullptr, $PUBLIC},
	{"setToIdentity", "()V", nullptr, $PUBLIC},
	{"setToQuadrantRotation", "(I)V", nullptr, $PUBLIC},
	{"setToQuadrantRotation", "(IDD)V", nullptr, $PUBLIC},
	{"setToRotation", "(D)V", nullptr, $PUBLIC},
	{"setToRotation", "(DDD)V", nullptr, $PUBLIC},
	{"setToRotation", "(DD)V", nullptr, $PUBLIC},
	{"setToRotation", "(DDDD)V", nullptr, $PUBLIC},
	{"setToScale", "(DD)V", nullptr, $PUBLIC},
	{"setToShear", "(DD)V", nullptr, $PUBLIC},
	{"setToTranslation", "(DD)V", nullptr, $PUBLIC},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC},
	{"setTransform", "(DDDDDD)V", nullptr, $PUBLIC},
	{"shear", "(DD)V", nullptr, $PUBLIC},
	{"stateError", "()V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)()>(&AffineTransform::stateError))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;)Ljava/awt/geom/Point2D;", nullptr, $PUBLIC},
	{"transform", "([Ljava/awt/geom/Point2D;I[Ljava/awt/geom/Point2D;II)V", nullptr, $PUBLIC},
	{"transform", "([FI[FII)V", nullptr, $PUBLIC},
	{"transform", "([DI[DII)V", nullptr, $PUBLIC},
	{"transform", "([FI[DII)V", nullptr, $PUBLIC},
	{"transform", "([DI[FII)V", nullptr, $PUBLIC},
	{"translate", "(DD)V", nullptr, $PUBLIC},
	{"updateState", "()V", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AffineTransform::*)($ObjectOutputStream*)>(&AffineTransform::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _AffineTransform_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.geom.AffineTransform",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_AffineTransform_FieldInfo_,
	_AffineTransform_MethodInfo_
};

$Object* allocate$AffineTransform($Class* clazz) {
	return $of($alloc(AffineTransform));
}

void AffineTransform::finalize() {
	this->$Cloneable::finalize();
}

$ints* AffineTransform::rot90conversion = nullptr;

void AffineTransform::init$(double m00, double m10, double m01, double m11, double m02, double m12, int32_t state) {
	this->m00 = m00;
	this->m10 = m10;
	this->m01 = m01;
	this->m11 = m11;
	this->m02 = m02;
	this->m12 = m12;
	this->state = state;
	this->type = AffineTransform::TYPE_UNKNOWN;
}

void AffineTransform::init$() {
	this->m00 = (this->m11 = 1.0);
}

void AffineTransform::init$(AffineTransform* Tx) {
	this->m00 = $nc(Tx)->m00;
	this->m10 = Tx->m10;
	this->m01 = Tx->m01;
	this->m11 = Tx->m11;
	this->m02 = Tx->m02;
	this->m12 = Tx->m12;
	this->state = Tx->state;
	this->type = Tx->type;
}

void AffineTransform::init$(float m00, float m10, float m01, float m11, float m02, float m12) {
	this->m00 = m00;
	this->m10 = m10;
	this->m01 = m01;
	this->m11 = m11;
	this->m02 = m02;
	this->m12 = m12;
	updateState();
}

void AffineTransform::init$($floats* flatmatrix) {
	this->m00 = $nc(flatmatrix)->get(0);
	this->m10 = flatmatrix->get(1);
	this->m01 = flatmatrix->get(2);
	this->m11 = flatmatrix->get(3);
	if (flatmatrix->length > 5) {
		this->m02 = flatmatrix->get(4);
		this->m12 = flatmatrix->get(5);
	}
	updateState();
}

void AffineTransform::init$(double m00, double m10, double m01, double m11, double m02, double m12) {
	this->m00 = m00;
	this->m10 = m10;
	this->m01 = m01;
	this->m11 = m11;
	this->m02 = m02;
	this->m12 = m12;
	updateState();
}

void AffineTransform::init$($doubles* flatmatrix) {
	this->m00 = $nc(flatmatrix)->get(0);
	this->m10 = flatmatrix->get(1);
	this->m01 = flatmatrix->get(2);
	this->m11 = flatmatrix->get(3);
	if (flatmatrix->length > 5) {
		this->m02 = flatmatrix->get(4);
		this->m12 = flatmatrix->get(5);
	}
	updateState();
}

AffineTransform* AffineTransform::getTranslateInstance(double tx, double ty) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToTranslation(tx, ty);
	return Tx;
}

AffineTransform* AffineTransform::getRotateInstance(double theta) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToRotation(theta);
	return Tx;
}

AffineTransform* AffineTransform::getRotateInstance(double theta, double anchorx, double anchory) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToRotation(theta, anchorx, anchory);
	return Tx;
}

AffineTransform* AffineTransform::getRotateInstance(double vecx, double vecy) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToRotation(vecx, vecy);
	return Tx;
}

AffineTransform* AffineTransform::getRotateInstance(double vecx, double vecy, double anchorx, double anchory) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToRotation(vecx, vecy, anchorx, anchory);
	return Tx;
}

AffineTransform* AffineTransform::getQuadrantRotateInstance(int32_t numquadrants) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToQuadrantRotation(numquadrants);
	return Tx;
}

AffineTransform* AffineTransform::getQuadrantRotateInstance(int32_t numquadrants, double anchorx, double anchory) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToQuadrantRotation(numquadrants, anchorx, anchory);
	return Tx;
}

AffineTransform* AffineTransform::getScaleInstance(double sx, double sy) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToScale(sx, sy);
	return Tx;
}

AffineTransform* AffineTransform::getShearInstance(double shx, double shy) {
	$init(AffineTransform);
	$var(AffineTransform, Tx, $new(AffineTransform));
	Tx->setToShear(shx, shy);
	return Tx;
}

int32_t AffineTransform::getType() {
	if (this->type == AffineTransform::TYPE_UNKNOWN) {
		calculateType();
	}
	return this->type;
}

void AffineTransform::calculateType() {
	int32_t ret = AffineTransform::TYPE_IDENTITY;
	bool sgn0 = false;
	bool sgn1 = false;
	double M0 = 0.0;
	double M1 = 0.0;
	double M2 = 0.0;
	double M3 = 0.0;
	updateState();
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$0;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$1;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$2;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$3;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$4;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$5;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$6;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$7;
		}
		goto case$8;
case$8:
		// default
		{
			stateError();
		}
case$0:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			ret = AffineTransform::TYPE_TRANSLATION;
		}
case$1:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			if ((M0 = this->m00) * (M2 = this->m01) + (M3 = this->m10) * (M1 = this->m11) != 0) {
				this->type = AffineTransform::TYPE_GENERAL_TRANSFORM;
				return;
			}
			sgn0 = (M0 >= 0.0);
			sgn1 = (M1 >= 0.0);
			if (sgn0 == sgn1) {
				if (M0 != M1 || M2 != -M3) {
					ret |= (AffineTransform::TYPE_GENERAL_ROTATION | AffineTransform::TYPE_GENERAL_SCALE);
				} else if (M0 * M1 - M2 * M3 != 1.0) {
					ret |= (AffineTransform::TYPE_GENERAL_ROTATION | AffineTransform::TYPE_UNIFORM_SCALE);
				} else {
					ret |= AffineTransform::TYPE_GENERAL_ROTATION;
				}
			} else if (M0 != -M1 || M2 != M3) {
				ret |= ((AffineTransform::TYPE_GENERAL_ROTATION | AffineTransform::TYPE_FLIP) | AffineTransform::TYPE_GENERAL_SCALE);
			} else if (M0 * M1 - M2 * M3 != 1.0) {
				ret |= ((AffineTransform::TYPE_GENERAL_ROTATION | AffineTransform::TYPE_FLIP) | AffineTransform::TYPE_UNIFORM_SCALE);
			} else {
				ret |= (AffineTransform::TYPE_GENERAL_ROTATION | AffineTransform::TYPE_FLIP);
			}
			break;
		}
case$2:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			ret = AffineTransform::TYPE_TRANSLATION;
		}
case$3:
		// (APPLY_SHEAR)
		{
			sgn0 = ((M0 = this->m01) >= 0.0);
			sgn1 = ((M1 = this->m10) >= 0.0);
			if (sgn0 != sgn1) {
				if (M0 != -M1) {
					ret |= (AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_GENERAL_SCALE);
				} else if (M0 != 1.0 && M0 != -1.0) {
					ret |= (AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_UNIFORM_SCALE);
				} else {
					ret |= AffineTransform::TYPE_QUADRANT_ROTATION;
				}
			} else if (M0 == M1) {
				ret |= ((AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_FLIP) | AffineTransform::TYPE_UNIFORM_SCALE);
			} else {
				ret |= ((AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_FLIP) | AffineTransform::TYPE_GENERAL_SCALE);
			}
			break;
		}
case$4:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			ret = AffineTransform::TYPE_TRANSLATION;
		}
case$5:
		// (APPLY_SCALE)
		{
			sgn0 = ((M0 = this->m00) >= 0.0);
			sgn1 = ((M1 = this->m11) >= 0.0);
			if (sgn0 == sgn1) {
				if (sgn0) {
					if (M0 == M1) {
						ret |= AffineTransform::TYPE_UNIFORM_SCALE;
					} else {
						ret |= AffineTransform::TYPE_GENERAL_SCALE;
					}
				} else if (M0 != M1) {
					ret |= (AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_GENERAL_SCALE);
				} else if (M0 != -1.0) {
					ret |= (AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_UNIFORM_SCALE);
				} else {
					ret |= AffineTransform::TYPE_QUADRANT_ROTATION;
				}
			} else if (M0 == -M1) {
				if (M0 == 1.0 || M0 == -1.0) {
					ret |= AffineTransform::TYPE_FLIP;
				} else {
					ret |= (AffineTransform::TYPE_FLIP | AffineTransform::TYPE_UNIFORM_SCALE);
				}
			} else {
				ret |= (AffineTransform::TYPE_FLIP | AffineTransform::TYPE_GENERAL_SCALE);
			}
			break;
		}
case$6:
		// (APPLY_TRANSLATE)
		{
			ret = AffineTransform::TYPE_TRANSLATION;
			break;
		}
case$7:
		// (APPLY_IDENTITY)
		{
			break;
		}
	} while (false);
	this->type = ret;
}

double AffineTransform::getDeterminant() {
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$9;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$10;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$11;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$12;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$13;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$14;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$15;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$16;
		}
		goto case$17;
case$17:
		// default
		{
			stateError();
		}
case$9:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$10:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			return this->m00 * this->m11 - this->m01 * this->m10;
		}
case$11:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$12:
		// (APPLY_SHEAR)
		{
			return -(this->m01 * this->m10);
		}
case$13:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$14:
		// (APPLY_SCALE)
		{
			return this->m00 * this->m11;
		}
case$15:
		// (APPLY_TRANSLATE)
		{
		}
case$16:
		// (APPLY_IDENTITY)
		{
			return 1.0;
		}
	} while (false);
}

void AffineTransform::updateState() {
	if (this->m01 == 0.0 && this->m10 == 0.0) {
		if (this->m00 == 1.0 && this->m11 == 1.0) {
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_IDENTITY;
				this->type = AffineTransform::TYPE_IDENTITY;
			} else {
				this->state = AffineTransform::APPLY_TRANSLATE;
				this->type = AffineTransform::TYPE_TRANSLATION;
			}
		} else if (this->m02 == 0.0 && this->m12 == 0.0) {
			this->state = AffineTransform::APPLY_SCALE;
			this->type = AffineTransform::TYPE_UNKNOWN;
		} else {
			this->state = (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE);
			this->type = AffineTransform::TYPE_UNKNOWN;
		}
	} else if (this->m00 == 0.0 && this->m11 == 0.0) {
		if (this->m02 == 0.0 && this->m12 == 0.0) {
			this->state = AffineTransform::APPLY_SHEAR;
			this->type = AffineTransform::TYPE_UNKNOWN;
		} else {
			this->state = (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE);
			this->type = AffineTransform::TYPE_UNKNOWN;
		}
	} else if (this->m02 == 0.0 && this->m12 == 0.0) {
		this->state = (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE);
		this->type = AffineTransform::TYPE_UNKNOWN;
	} else {
		this->state = ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE);
		this->type = AffineTransform::TYPE_UNKNOWN;
	}
}

void AffineTransform::stateError() {
	$throwNew($InternalError, "missing case in transform state switch"_s);
}

void AffineTransform::getMatrix($doubles* flatmatrix) {
	$nc(flatmatrix)->set(0, this->m00);
	flatmatrix->set(1, this->m10);
	flatmatrix->set(2, this->m01);
	flatmatrix->set(3, this->m11);
	if (flatmatrix->length > 5) {
		flatmatrix->set(4, this->m02);
		flatmatrix->set(5, this->m12);
	}
}

double AffineTransform::getScaleX() {
	return this->m00;
}

double AffineTransform::getScaleY() {
	return this->m11;
}

double AffineTransform::getShearX() {
	return this->m01;
}

double AffineTransform::getShearY() {
	return this->m10;
}

double AffineTransform::getTranslateX() {
	return this->m02;
}

double AffineTransform::getTranslateY() {
	return this->m12;
}

void AffineTransform::translate(double tx, double ty) {
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$18;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$19;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$20;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$21;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$22;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$23;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$24;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$25;
		}
		goto case$26;
case$26:
		// default
		{
			stateError();
			return;
		}
case$18:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			this->m02 = tx * this->m00 + ty * this->m01 + this->m02;
			this->m12 = tx * this->m10 + ty * this->m11 + this->m12;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE;
				if (this->type != AffineTransform::TYPE_UNKNOWN) {
					this->type -= AffineTransform::TYPE_TRANSLATION;
				}
			}
			return;
		}
case$19:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			this->m02 = tx * this->m00 + ty * this->m01;
			this->m12 = tx * this->m10 + ty * this->m11;
			if (this->m02 != 0.0 || this->m12 != 0.0) {
				this->state = (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE;
				this->type |= AffineTransform::TYPE_TRANSLATION;
			}
			return;
		}
case$20:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			this->m02 = ty * this->m01 + this->m02;
			this->m12 = tx * this->m10 + this->m12;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SHEAR;
				if (this->type != AffineTransform::TYPE_UNKNOWN) {
					this->type -= AffineTransform::TYPE_TRANSLATION;
				}
			}
			return;
		}
case$21:
		// (APPLY_SHEAR)
		{
			this->m02 = ty * this->m01;
			this->m12 = tx * this->m10;
			if (this->m02 != 0.0 || this->m12 != 0.0) {
				this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE;
				this->type |= AffineTransform::TYPE_TRANSLATION;
			}
			return;
		}
case$22:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			this->m02 = tx * this->m00 + this->m02;
			this->m12 = ty * this->m11 + this->m12;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SCALE;
				if (this->type != AffineTransform::TYPE_UNKNOWN) {
					this->type -= AffineTransform::TYPE_TRANSLATION;
				}
			}
			return;
		}
case$23:
		// (APPLY_SCALE)
		{
			this->m02 = tx * this->m00;
			this->m12 = ty * this->m11;
			if (this->m02 != 0.0 || this->m12 != 0.0) {
				this->state = AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE;
				this->type |= AffineTransform::TYPE_TRANSLATION;
			}
			return;
		}
case$24:
		// (APPLY_TRANSLATE)
		{
			this->m02 = tx + this->m02;
			this->m12 = ty + this->m12;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_IDENTITY;
				this->type = AffineTransform::TYPE_IDENTITY;
			}
			return;
		}
case$25:
		// (APPLY_IDENTITY)
		{
			this->m02 = tx;
			this->m12 = ty;
			if (tx != 0.0 || ty != 0.0) {
				this->state = AffineTransform::APPLY_TRANSLATE;
				this->type = AffineTransform::TYPE_TRANSLATION;
			}
			return;
		}
	} while (false);
}

void AffineTransform::rotate90() {
	double M0 = this->m00;
	this->m00 = this->m01;
	this->m01 = -M0;
	M0 = this->m10;
	this->m10 = this->m11;
	this->m11 = -M0;
	int32_t state = $nc(AffineTransform::rot90conversion)->get(this->state);
	if (((int32_t)(state & (uint32_t)(AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE))) == AffineTransform::APPLY_SCALE && this->m00 == 1.0 && this->m11 == 1.0) {
		state -= AffineTransform::APPLY_SCALE;
	}
	this->state = state;
	this->type = AffineTransform::TYPE_UNKNOWN;
}

void AffineTransform::rotate180() {
	this->m00 = -this->m00;
	this->m11 = -this->m11;
	int32_t state = this->state;
	if (((int32_t)(state & (uint32_t)(AffineTransform::APPLY_SHEAR))) != 0) {
		this->m01 = -this->m01;
		this->m10 = -this->m10;
	} else if (this->m00 == 1.0 && this->m11 == 1.0) {
		this->state = (int32_t)(state & (uint32_t)~AffineTransform::APPLY_SCALE);
	} else {
		this->state = state | AffineTransform::APPLY_SCALE;
	}
	this->type = AffineTransform::TYPE_UNKNOWN;
}

void AffineTransform::rotate270() {
	double M0 = this->m00;
	this->m00 = -this->m01;
	this->m01 = M0;
	M0 = this->m10;
	this->m10 = -this->m11;
	this->m11 = M0;
	int32_t state = $nc(AffineTransform::rot90conversion)->get(this->state);
	if (((int32_t)(state & (uint32_t)(AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE))) == AffineTransform::APPLY_SCALE && this->m00 == 1.0 && this->m11 == 1.0) {
		state -= AffineTransform::APPLY_SCALE;
	}
	this->state = state;
	this->type = AffineTransform::TYPE_UNKNOWN;
}

void AffineTransform::rotate(double theta) {
	double sin = $Math::sin(theta);
	if (sin == 1.0) {
		rotate90();
	} else if (sin == -1.0) {
		rotate270();
	} else {
		double cos = $Math::cos(theta);
		if (cos == -1.0) {
			rotate180();
		} else if (cos != 1.0) {
			double M0 = 0.0;
			double M1 = 0.0;
			M0 = this->m00;
			M1 = this->m01;
			this->m00 = cos * M0 + sin * M1;
			this->m01 = -sin * M0 + cos * M1;
			M0 = this->m10;
			M1 = this->m11;
			this->m10 = cos * M0 + sin * M1;
			this->m11 = -sin * M0 + cos * M1;
			updateState();
		}
	}
}

void AffineTransform::rotate(double theta, double anchorx, double anchory) {
	translate(anchorx, anchory);
	rotate(theta);
	translate(-anchorx, -anchory);
}

void AffineTransform::rotate(double vecx, double vecy) {
	if (vecy == 0.0) {
		if (vecx < 0.0) {
			rotate180();
		}
	} else if (vecx == 0.0) {
		if (vecy > 0.0) {
			rotate90();
		} else {
			rotate270();
		}
	} else {
		double len = $Math::sqrt(vecx * vecx + vecy * vecy);
		double sin = vecy / len;
		double cos = vecx / len;
		double M0 = 0.0;
		double M1 = 0.0;
		M0 = this->m00;
		M1 = this->m01;
		this->m00 = cos * M0 + sin * M1;
		this->m01 = -sin * M0 + cos * M1;
		M0 = this->m10;
		M1 = this->m11;
		this->m10 = cos * M0 + sin * M1;
		this->m11 = -sin * M0 + cos * M1;
		updateState();
	}
}

void AffineTransform::rotate(double vecx, double vecy, double anchorx, double anchory) {
	translate(anchorx, anchory);
	rotate(vecx, vecy);
	translate(-anchorx, -anchory);
}

void AffineTransform::quadrantRotate(int32_t numquadrants) {
	switch ((int32_t)(numquadrants & (uint32_t)3)) {
	case 0:
		{
			break;
		}
	case 1:
		{
			rotate90();
			break;
		}
	case 2:
		{
			rotate180();
			break;
		}
	case 3:
		{
			rotate270();
			break;
		}
	}
}

void AffineTransform::quadrantRotate(int32_t numquadrants, double anchorx, double anchory) {
	switch ((int32_t)(numquadrants & (uint32_t)3)) {
	case 0:
		{
			return;
		}
	case 1:
		{
			this->m02 += anchorx * (this->m00 - this->m01) + anchory * (this->m01 + this->m00);
			this->m12 += anchorx * (this->m10 - this->m11) + anchory * (this->m11 + this->m10);
			rotate90();
			break;
		}
	case 2:
		{
			this->m02 += anchorx * (this->m00 + this->m00) + anchory * (this->m01 + this->m01);
			this->m12 += anchorx * (this->m10 + this->m10) + anchory * (this->m11 + this->m11);
			rotate180();
			break;
		}
	case 3:
		{
			this->m02 += anchorx * (this->m00 + this->m01) + anchory * (this->m01 - this->m00);
			this->m12 += anchorx * (this->m10 + this->m11) + anchory * (this->m11 - this->m10);
			rotate270();
			break;
		}
	}
	if (this->m02 == 0.0 && this->m12 == 0.0) {
		this->state &= (uint32_t)~AffineTransform::APPLY_TRANSLATE;
	} else {
		this->state |= AffineTransform::APPLY_TRANSLATE;
	}
}

void AffineTransform::scale(double sx, double sy) {
	int32_t state = this->state;
	do {
		if (state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$27;
		}
		if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$28;
		}
		if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$29;
		}
		if (state == (AffineTransform::APPLY_SHEAR)) {
			goto case$30;
		}
		if (state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$31;
		}
		if (state == (AffineTransform::APPLY_SCALE)) {
			goto case$32;
		}
		if (state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$33;
		}
		if (state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$34;
		}
		goto case$35;
case$35:
		// default
		{
			stateError();
		}
case$27:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$28:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			this->m00 *= sx;
			this->m11 *= sy;
		}
case$29:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$30:
		// (APPLY_SHEAR)
		{
			this->m01 *= sy;
			this->m10 *= sx;
			if (this->m01 == 0 && this->m10 == 0) {
				state &= (uint32_t)AffineTransform::APPLY_TRANSLATE;
				if (this->m00 == 1.0 && this->m11 == 1.0) {
					this->type = (state == AffineTransform::APPLY_IDENTITY ? AffineTransform::TYPE_IDENTITY : AffineTransform::TYPE_TRANSLATION);
				} else {
					state |= AffineTransform::APPLY_SCALE;
					this->type = AffineTransform::TYPE_UNKNOWN;
				}
				this->state = state;
			}
			return;
		}
case$31:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$32:
		// (APPLY_SCALE)
		{
			this->m00 *= sx;
			this->m11 *= sy;
			if (this->m00 == 1.0 && this->m11 == 1.0) {
				this->state = (state &= (uint32_t)AffineTransform::APPLY_TRANSLATE);
				this->type = (state == AffineTransform::APPLY_IDENTITY ? AffineTransform::TYPE_IDENTITY : AffineTransform::TYPE_TRANSLATION);
			} else {
				this->type = AffineTransform::TYPE_UNKNOWN;
			}
			return;
		}
case$33:
		// (APPLY_TRANSLATE)
		{
		}
case$34:
		// (APPLY_IDENTITY)
		{
			this->m00 = sx;
			this->m11 = sy;
			if (sx != 1.0 || sy != 1.0) {
				this->state = state | AffineTransform::APPLY_SCALE;
				this->type = AffineTransform::TYPE_UNKNOWN;
			}
			return;
		}
	} while (false);
}

void AffineTransform::shear(double shx, double shy) {
	int32_t state = this->state;
	{
		double M0 = 0;
		double M1 = 0;
		do {
			if (state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
				goto case$36;
			}
			if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
				goto case$37;
			}
			if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
				goto case$38;
			}
			if (state == (AffineTransform::APPLY_SHEAR)) {
				goto case$39;
			}
			if (state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
				goto case$40;
			}
			if (state == (AffineTransform::APPLY_SCALE)) {
				goto case$41;
			}
			if (state == (AffineTransform::APPLY_TRANSLATE)) {
				goto case$42;
			}
			if (state == (AffineTransform::APPLY_IDENTITY)) {
				goto case$43;
			}
			goto case$44;
case$44:
			// default
			{
				stateError();
				return;
			}
case$36:
			// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
			{
			}
case$37:
			// (APPLY_SHEAR | APPLY_SCALE)
			{
				M0 = this->m00;
				M1 = this->m01;
				this->m00 = M0 + M1 * shy;
				this->m01 = M0 * shx + M1;
				M0 = this->m10;
				M1 = this->m11;
				this->m10 = M0 + M1 * shy;
				this->m11 = M0 * shx + M1;
				updateState();
				return;
			}
case$38:
			// (APPLY_SHEAR | APPLY_TRANSLATE)
			{
			}
case$39:
			// (APPLY_SHEAR)
			{
				this->m00 = this->m01 * shy;
				this->m11 = this->m10 * shx;
				if (this->m00 != 0.0 || this->m11 != 0.0) {
					this->state = state | AffineTransform::APPLY_SCALE;
				}
				this->type = AffineTransform::TYPE_UNKNOWN;
				return;
			}
case$40:
			// (APPLY_SCALE | APPLY_TRANSLATE)
			{
			}
case$41:
			// (APPLY_SCALE)
			{
				this->m01 = this->m00 * shx;
				this->m10 = this->m11 * shy;
				if (this->m01 != 0.0 || this->m10 != 0.0) {
					this->state = state | AffineTransform::APPLY_SHEAR;
				}
				this->type = AffineTransform::TYPE_UNKNOWN;
				return;
			}
case$42:
			// (APPLY_TRANSLATE)
			{
			}
case$43:
			// (APPLY_IDENTITY)
			{
				this->m01 = shx;
				this->m10 = shy;
				if (this->m01 != 0.0 || this->m10 != 0.0) {
					this->state = (state | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_SHEAR;
					this->type = AffineTransform::TYPE_UNKNOWN;
				}
				return;
			}
		} while (false);
	}
}

void AffineTransform::setToIdentity() {
	this->m00 = (this->m11 = 1.0);
	this->m10 = (this->m01 = (this->m02 = (this->m12 = 0.0)));
	this->state = AffineTransform::APPLY_IDENTITY;
	this->type = AffineTransform::TYPE_IDENTITY;
}

void AffineTransform::setToTranslation(double tx, double ty) {
	this->m00 = 1.0;
	this->m10 = 0.0;
	this->m01 = 0.0;
	this->m11 = 1.0;
	this->m02 = tx;
	this->m12 = ty;
	if (tx != 0.0 || ty != 0.0) {
		this->state = AffineTransform::APPLY_TRANSLATE;
		this->type = AffineTransform::TYPE_TRANSLATION;
	} else {
		this->state = AffineTransform::APPLY_IDENTITY;
		this->type = AffineTransform::TYPE_IDENTITY;
	}
}

void AffineTransform::setToRotation(double theta) {
	double sin = $Math::sin(theta);
	double cos = 0.0;
	if (sin == 1.0 || sin == -1.0) {
		cos = 0.0;
		this->state = AffineTransform::APPLY_SHEAR;
		this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
	} else {
		cos = $Math::cos(theta);
		if (cos == -1.0) {
			sin = 0.0;
			this->state = AffineTransform::APPLY_SCALE;
			this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
		} else if (cos == 1.0) {
			sin = 0.0;
			this->state = AffineTransform::APPLY_IDENTITY;
			this->type = AffineTransform::TYPE_IDENTITY;
		} else {
			this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE;
			this->type = AffineTransform::TYPE_GENERAL_ROTATION;
		}
	}
	this->m00 = cos;
	this->m10 = sin;
	this->m01 = -sin;
	this->m11 = cos;
	this->m02 = 0.0;
	this->m12 = 0.0;
}

void AffineTransform::setToRotation(double theta, double anchorx, double anchory) {
	setToRotation(theta);
	double sin = this->m10;
	double oneMinusCos = 1.0 - this->m00;
	this->m02 = anchorx * oneMinusCos + anchory * sin;
	this->m12 = anchory * oneMinusCos - anchorx * sin;
	if (this->m02 != 0.0 || this->m12 != 0.0) {
		this->state |= AffineTransform::APPLY_TRANSLATE;
		this->type |= AffineTransform::TYPE_TRANSLATION;
	}
}

void AffineTransform::setToRotation(double vecx, double vecy) {
	double sin = 0.0;
	double cos = 0.0;
	if (vecy == 0) {
		sin = 0.0;
		if (vecx < 0.0) {
			cos = -1.0;
			this->state = AffineTransform::APPLY_SCALE;
			this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
		} else {
			cos = 1.0;
			this->state = AffineTransform::APPLY_IDENTITY;
			this->type = AffineTransform::TYPE_IDENTITY;
		}
	} else if (vecx == 0) {
		cos = 0.0;
		sin = (vecy > 0.0) ? 1.0 : -1.0;
		this->state = AffineTransform::APPLY_SHEAR;
		this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
	} else {
		double len = $Math::sqrt(vecx * vecx + vecy * vecy);
		cos = vecx / len;
		sin = vecy / len;
		this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE;
		this->type = AffineTransform::TYPE_GENERAL_ROTATION;
	}
	this->m00 = cos;
	this->m10 = sin;
	this->m01 = -sin;
	this->m11 = cos;
	this->m02 = 0.0;
	this->m12 = 0.0;
}

void AffineTransform::setToRotation(double vecx, double vecy, double anchorx, double anchory) {
	setToRotation(vecx, vecy);
	double sin = this->m10;
	double oneMinusCos = 1.0 - this->m00;
	this->m02 = anchorx * oneMinusCos + anchory * sin;
	this->m12 = anchory * oneMinusCos - anchorx * sin;
	if (this->m02 != 0.0 || this->m12 != 0.0) {
		this->state |= AffineTransform::APPLY_TRANSLATE;
		this->type |= AffineTransform::TYPE_TRANSLATION;
	}
}

void AffineTransform::setToQuadrantRotation(int32_t numquadrants) {
	switch ((int32_t)(numquadrants & (uint32_t)3)) {
	case 0:
		{
			this->m00 = 1.0;
			this->m10 = 0.0;
			this->m01 = 0.0;
			this->m11 = 1.0;
			this->m02 = 0.0;
			this->m12 = 0.0;
			this->state = AffineTransform::APPLY_IDENTITY;
			this->type = AffineTransform::TYPE_IDENTITY;
			break;
		}
	case 1:
		{
			this->m00 = 0.0;
			this->m10 = 1.0;
			this->m01 = -1.0;
			this->m11 = 0.0;
			this->m02 = 0.0;
			this->m12 = 0.0;
			this->state = AffineTransform::APPLY_SHEAR;
			this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			break;
		}
	case 2:
		{
			this->m00 = -1.0;
			this->m10 = 0.0;
			this->m01 = 0.0;
			this->m11 = -1.0;
			this->m02 = 0.0;
			this->m12 = 0.0;
			this->state = AffineTransform::APPLY_SCALE;
			this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			break;
		}
	case 3:
		{
			this->m00 = 0.0;
			this->m10 = -1.0;
			this->m01 = 1.0;
			this->m11 = 0.0;
			this->m02 = 0.0;
			this->m12 = 0.0;
			this->state = AffineTransform::APPLY_SHEAR;
			this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			break;
		}
	}
}

void AffineTransform::setToQuadrantRotation(int32_t numquadrants, double anchorx, double anchory) {
	switch ((int32_t)(numquadrants & (uint32_t)3)) {
	case 0:
		{
			this->m00 = 1.0;
			this->m10 = 0.0;
			this->m01 = 0.0;
			this->m11 = 1.0;
			this->m02 = 0.0;
			this->m12 = 0.0;
			this->state = AffineTransform::APPLY_IDENTITY;
			this->type = AffineTransform::TYPE_IDENTITY;
			break;
		}
	case 1:
		{
			this->m00 = 0.0;
			this->m10 = 1.0;
			this->m01 = -1.0;
			this->m11 = 0.0;
			this->m02 = anchorx + anchory;
			this->m12 = anchory - anchorx;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SHEAR;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			} else {
				this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_TRANSLATION;
			}
			break;
		}
	case 2:
		{
			this->m00 = -1.0;
			this->m10 = 0.0;
			this->m01 = 0.0;
			this->m11 = -1.0;
			this->m02 = anchorx + anchorx;
			this->m12 = anchory + anchory;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SCALE;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			} else {
				this->state = AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_TRANSLATION;
			}
			break;
		}
	case 3:
		{
			this->m00 = 0.0;
			this->m10 = -1.0;
			this->m01 = 1.0;
			this->m11 = 0.0;
			this->m02 = anchorx - anchory;
			this->m12 = anchory + anchorx;
			if (this->m02 == 0.0 && this->m12 == 0.0) {
				this->state = AffineTransform::APPLY_SHEAR;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION;
			} else {
				this->state = AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE;
				this->type = AffineTransform::TYPE_QUADRANT_ROTATION | AffineTransform::TYPE_TRANSLATION;
			}
			break;
		}
	}
}

void AffineTransform::setToScale(double sx, double sy) {
	this->m00 = sx;
	this->m10 = 0.0;
	this->m01 = 0.0;
	this->m11 = sy;
	this->m02 = 0.0;
	this->m12 = 0.0;
	if (sx != 1.0 || sy != 1.0) {
		this->state = AffineTransform::APPLY_SCALE;
		this->type = AffineTransform::TYPE_UNKNOWN;
	} else {
		this->state = AffineTransform::APPLY_IDENTITY;
		this->type = AffineTransform::TYPE_IDENTITY;
	}
}

void AffineTransform::setToShear(double shx, double shy) {
	this->m00 = 1.0;
	this->m01 = shx;
	this->m10 = shy;
	this->m11 = 1.0;
	this->m02 = 0.0;
	this->m12 = 0.0;
	if (shx != 0.0 || shy != 0.0) {
		this->state = (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE);
		this->type = AffineTransform::TYPE_UNKNOWN;
	} else {
		this->state = AffineTransform::APPLY_IDENTITY;
		this->type = AffineTransform::TYPE_IDENTITY;
	}
}

void AffineTransform::setTransform(AffineTransform* Tx) {
	this->m00 = $nc(Tx)->m00;
	this->m10 = Tx->m10;
	this->m01 = Tx->m01;
	this->m11 = Tx->m11;
	this->m02 = Tx->m02;
	this->m12 = Tx->m12;
	this->state = Tx->state;
	this->type = Tx->type;
}

void AffineTransform::setTransform(double m00, double m10, double m01, double m11, double m02, double m12) {
	this->m00 = m00;
	this->m10 = m10;
	this->m01 = m01;
	this->m11 = m11;
	this->m02 = m02;
	this->m12 = m12;
	updateState();
}

void AffineTransform::concatenate(AffineTransform* Tx) {
	double M0 = 0.0;
	double M1 = 0.0;
	double T00 = 0.0;
	double T01 = 0.0;
	double T10 = 0.0;
	double T11 = 0.0;
	double T02 = 0.0;
	double T12 = 0.0;
	int32_t mystate = this->state;
	int32_t txstate = $nc(Tx)->state;
	do {
		int32_t var$0 = ($sl(txstate, AffineTransform::HI_SHIFT)) | mystate;
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_IDENTITY)) {
			goto case$45;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_TRANSLATE)) {
			goto case$46;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SCALE)) {
			goto case$47;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$48;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR)) {
			goto case$49;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$50;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$51;
		}
		if (var$0 == (((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$52;
		}
		if (var$0 == (((AffineTransform::HI_SHEAR | AffineTransform::HI_SCALE) | AffineTransform::HI_TRANSLATE) | AffineTransform::APPLY_IDENTITY)) {
			goto case$53;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::HI_TRANSLATE) | AffineTransform::APPLY_IDENTITY)) {
			goto case$54;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_IDENTITY)) {
			goto case$55;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::HI_SCALE) | AffineTransform::APPLY_IDENTITY)) {
			goto case$56;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_IDENTITY)) {
			goto case$57;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::HI_TRANSLATE) | AffineTransform::APPLY_IDENTITY)) {
			goto case$58;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_IDENTITY)) {
			goto case$59;
		}
		if (var$0 == (((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$60;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$61;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$62;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR)) {
			goto case$63;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$64;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SCALE)) {
			goto case$65;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$66;
		}
		if (var$0 == (((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$67;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$68;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$69;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR)) {
			goto case$70;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$71;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_SCALE)) {
			goto case$72;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$73;
		}
		if (var$0 == (((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$74;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$75;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$76;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR)) {
			goto case$77;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$78;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$79;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$80;
		}
		break;
case$45:
		// (HI_IDENTITY | APPLY_IDENTITY)
		{
		}
case$46:
		// (HI_IDENTITY | APPLY_TRANSLATE)
		{
		}
case$47:
		// (HI_IDENTITY | APPLY_SCALE)
		{
		}
case$48:
		// (HI_IDENTITY | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$49:
		// (HI_IDENTITY | APPLY_SHEAR)
		{
		}
case$50:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$51:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_SCALE)
		{
		}
case$52:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			return;
		}
case$53:
		// (HI_SHEAR | HI_SCALE | HI_TRANSLATE | APPLY_IDENTITY)
		{
			this->m01 = Tx->m01;
			this->m10 = Tx->m10;
		}
case$54:
		// (HI_SCALE | HI_TRANSLATE | APPLY_IDENTITY)
		{
			this->m00 = Tx->m00;
			this->m11 = Tx->m11;
		}
case$55:
		// (HI_TRANSLATE | APPLY_IDENTITY)
		{
			this->m02 = Tx->m02;
			this->m12 = Tx->m12;
			this->state = txstate;
			this->type = Tx->type;
			return;
		}
case$56:
		// (HI_SHEAR | HI_SCALE | APPLY_IDENTITY)
		{
			this->m01 = Tx->m01;
			this->m10 = Tx->m10;
		}
case$57:
		// (HI_SCALE | APPLY_IDENTITY)
		{
			this->m00 = Tx->m00;
			this->m11 = Tx->m11;
			this->state = txstate;
			this->type = Tx->type;
			return;
		}
case$58:
		// (HI_SHEAR | HI_TRANSLATE | APPLY_IDENTITY)
		{
			this->m02 = Tx->m02;
			this->m12 = Tx->m12;
		}
case$59:
		// (HI_SHEAR | APPLY_IDENTITY)
		{
			this->m01 = Tx->m01;
			this->m10 = Tx->m10;
			this->m00 = (this->m11 = 0.0);
			this->state = txstate;
			this->type = Tx->type;
			return;
		}
case$60:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$61:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_SCALE)
		{
		}
case$62:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$63:
		// (HI_TRANSLATE | APPLY_SHEAR)
		{
		}
case$64:
		// (HI_TRANSLATE | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$65:
		// (HI_TRANSLATE | APPLY_SCALE)
		{
		}
case$66:
		// (HI_TRANSLATE | APPLY_TRANSLATE)
		{
			translate(Tx->m02, Tx->m12);
			return;
		}
case$67:
		// (HI_SCALE | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$68:
		// (HI_SCALE | APPLY_SHEAR | APPLY_SCALE)
		{
		}
case$69:
		// (HI_SCALE | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$70:
		// (HI_SCALE | APPLY_SHEAR)
		{
		}
case$71:
		// (HI_SCALE | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$72:
		// (HI_SCALE | APPLY_SCALE)
		{
		}
case$73:
		// (HI_SCALE | APPLY_TRANSLATE)
		{
			scale(Tx->m00, Tx->m11);
			return;
		}
case$74:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$75:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_SCALE)
		{
			T01 = Tx->m01;
			T10 = Tx->m10;
			M0 = this->m00;
			this->m00 = this->m01 * T10;
			this->m01 = M0 * T01;
			M0 = this->m10;
			this->m10 = this->m11 * T10;
			this->m11 = M0 * T01;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
case$76:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$77:
		// (HI_SHEAR | APPLY_SHEAR)
		{
			this->m00 = this->m01 * Tx->m10;
			this->m01 = 0.0;
			this->m11 = this->m10 * Tx->m01;
			this->m10 = 0.0;
			this->state = mystate ^ (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE);
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
case$78:
		// (HI_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$79:
		// (HI_SHEAR | APPLY_SCALE)
		{
			this->m01 = this->m00 * Tx->m01;
			this->m00 = 0.0;
			this->m10 = this->m11 * Tx->m10;
			this->m11 = 0.0;
			this->state = mystate ^ (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE);
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
case$80:
		// (HI_SHEAR | APPLY_TRANSLATE)
		{
			this->m00 = 0.0;
			this->m01 = Tx->m01;
			this->m10 = Tx->m10;
			this->m11 = 0.0;
			this->state = AffineTransform::APPLY_TRANSLATE | AffineTransform::APPLY_SHEAR;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
	} while (false);
	T00 = Tx->m00;
	T01 = Tx->m01;
	T02 = Tx->m02;
	T10 = Tx->m10;
	T11 = Tx->m11;
	T12 = Tx->m12;
	do {
		if (mystate == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$81;
		}
		if (mystate == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$82;
		}
		if (mystate == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$83;
		}
		if (mystate == (AffineTransform::APPLY_SHEAR)) {
			goto case$84;
		}
		if (mystate == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$85;
		}
		if (mystate == (AffineTransform::APPLY_SCALE)) {
			goto case$86;
		}
		if (mystate == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$87;
		}
		goto case$88;
case$88:
		// default
		{
			stateError();
		}
case$81:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			this->state = mystate | txstate;
		}
case$82:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M0 = this->m00;
			M1 = this->m01;
			this->m00 = T00 * M0 + T10 * M1;
			this->m01 = T01 * M0 + T11 * M1;
			this->m02 += T02 * M0 + T12 * M1;
			M0 = this->m10;
			M1 = this->m11;
			this->m10 = T00 * M0 + T10 * M1;
			this->m11 = T01 * M0 + T11 * M1;
			this->m12 += T02 * M0 + T12 * M1;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
case$83:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$84:
		// (APPLY_SHEAR)
		{
			M0 = this->m01;
			this->m00 = T10 * M0;
			this->m01 = T11 * M0;
			this->m02 += T12 * M0;
			M0 = this->m10;
			this->m10 = T00 * M0;
			this->m11 = T01 * M0;
			this->m12 += T02 * M0;
			break;
		}
case$85:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$86:
		// (APPLY_SCALE)
		{
			M0 = this->m00;
			this->m00 = T00 * M0;
			this->m01 = T01 * M0;
			this->m02 += T02 * M0;
			M0 = this->m11;
			this->m10 = T10 * M0;
			this->m11 = T11 * M0;
			this->m12 += T12 * M0;
			break;
		}
case$87:
		// (APPLY_TRANSLATE)
		{
			this->m00 = T00;
			this->m01 = T01;
			this->m02 += T02;
			this->m10 = T10;
			this->m11 = T11;
			this->m12 += T12;
			this->state = txstate | AffineTransform::APPLY_TRANSLATE;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
	} while (false);
	updateState();
}

void AffineTransform::preConcatenate(AffineTransform* Tx) {
	double M0 = 0.0;
	double M1 = 0.0;
	double T00 = 0.0;
	double T01 = 0.0;
	double T10 = 0.0;
	double T11 = 0.0;
	double T02 = 0.0;
	double T12 = 0.0;
	int32_t mystate = this->state;
	int32_t txstate = $nc(Tx)->state;
	do {
		int32_t var$0 = ($sl(txstate, AffineTransform::HI_SHIFT)) | mystate;
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_IDENTITY)) {
			goto case$89;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_TRANSLATE)) {
			goto case$90;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SCALE)) {
			goto case$91;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$92;
		}
		if (var$0 == (AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR)) {
			goto case$93;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$94;
		}
		if (var$0 == ((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$95;
		}
		if (var$0 == (((AffineTransform::HI_IDENTITY | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$96;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_IDENTITY)) {
			goto case$97;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SCALE)) {
			goto case$98;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR)) {
			goto case$99;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$100;
		}
		if (var$0 == (AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$101;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$102;
		}
		if (var$0 == ((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$103;
		}
		if (var$0 == (((AffineTransform::HI_TRANSLATE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$104;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$105;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_IDENTITY)) {
			goto case$106;
		}
		if (var$0 == (((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$107;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$108;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$109;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_SHEAR)) {
			goto case$110;
		}
		if (var$0 == ((AffineTransform::HI_SCALE | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$111;
		}
		if (var$0 == (AffineTransform::HI_SCALE | AffineTransform::APPLY_SCALE)) {
			goto case$112;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$113;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR)) {
			goto case$114;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$115;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_IDENTITY)) {
			goto case$116;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$117;
		}
		if (var$0 == (AffineTransform::HI_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$118;
		}
		if (var$0 == (((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$119;
		}
		if (var$0 == ((AffineTransform::HI_SHEAR | AffineTransform::APPLY_SHEAR) | AffineTransform::APPLY_SCALE)) {
			goto case$120;
		}
		break;
case$89:
		// (HI_IDENTITY | APPLY_IDENTITY)
		{
		}
case$90:
		// (HI_IDENTITY | APPLY_TRANSLATE)
		{
		}
case$91:
		// (HI_IDENTITY | APPLY_SCALE)
		{
		}
case$92:
		// (HI_IDENTITY | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$93:
		// (HI_IDENTITY | APPLY_SHEAR)
		{
		}
case$94:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$95:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_SCALE)
		{
		}
case$96:
		// (HI_IDENTITY | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			return;
		}
case$97:
		// (HI_TRANSLATE | APPLY_IDENTITY)
		{
		}
case$98:
		// (HI_TRANSLATE | APPLY_SCALE)
		{
		}
case$99:
		// (HI_TRANSLATE | APPLY_SHEAR)
		{
		}
case$100:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_SCALE)
		{
			this->m02 = Tx->m02;
			this->m12 = Tx->m12;
			this->state = mystate | AffineTransform::APPLY_TRANSLATE;
			this->type |= AffineTransform::TYPE_TRANSLATION;
			return;
		}
case$101:
		// (HI_TRANSLATE | APPLY_TRANSLATE)
		{
		}
case$102:
		// (HI_TRANSLATE | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$103:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$104:
		// (HI_TRANSLATE | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			this->m02 = this->m02 + Tx->m02;
			this->m12 = this->m12 + Tx->m12;
			return;
		}
case$105:
		// (HI_SCALE | APPLY_TRANSLATE)
		{
		}
case$106:
		// (HI_SCALE | APPLY_IDENTITY)
		{
			this->state = mystate | AffineTransform::APPLY_SCALE;
		}
case$107:
		// (HI_SCALE | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$108:
		// (HI_SCALE | APPLY_SHEAR | APPLY_SCALE)
		{
		}
case$109:
		// (HI_SCALE | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$110:
		// (HI_SCALE | APPLY_SHEAR)
		{
		}
case$111:
		// (HI_SCALE | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$112:
		// (HI_SCALE | APPLY_SCALE)
		{
			T00 = Tx->m00;
			T11 = Tx->m11;
			if (((int32_t)(mystate & (uint32_t)AffineTransform::APPLY_SHEAR)) != 0) {
				this->m01 = this->m01 * T00;
				this->m10 = this->m10 * T11;
				if (((int32_t)(mystate & (uint32_t)AffineTransform::APPLY_SCALE)) != 0) {
					this->m00 = this->m00 * T00;
					this->m11 = this->m11 * T11;
				}
			} else {
				this->m00 = this->m00 * T00;
				this->m11 = this->m11 * T11;
			}
			if (((int32_t)(mystate & (uint32_t)AffineTransform::APPLY_TRANSLATE)) != 0) {
				this->m02 = this->m02 * T00;
				this->m12 = this->m12 * T11;
			}
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
case$113:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$114:
		// (HI_SHEAR | APPLY_SHEAR)
		{
			mystate = mystate | AffineTransform::APPLY_SCALE;
		}
case$115:
		// (HI_SHEAR | APPLY_TRANSLATE)
		{
		}
case$116:
		// (HI_SHEAR | APPLY_IDENTITY)
		{
		}
case$117:
		// (HI_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$118:
		// (HI_SHEAR | APPLY_SCALE)
		{
			this->state = mystate ^ AffineTransform::APPLY_SHEAR;
		}
case$119:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$120:
		// (HI_SHEAR | APPLY_SHEAR | APPLY_SCALE)
		{
			T01 = Tx->m01;
			T10 = Tx->m10;
			M0 = this->m00;
			this->m00 = this->m10 * T01;
			this->m10 = M0 * T10;
			M0 = this->m01;
			this->m01 = this->m11 * T01;
			this->m11 = M0 * T10;
			M0 = this->m02;
			this->m02 = this->m12 * T01;
			this->m12 = M0 * T10;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
	} while (false);
	T00 = Tx->m00;
	T01 = Tx->m01;
	T02 = Tx->m02;
	T10 = Tx->m10;
	T11 = Tx->m11;
	T12 = Tx->m12;
	do {
		if (mystate == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$121;
		}
		if (mystate == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$122;
		}
		if (mystate == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$123;
		}
		if (mystate == (AffineTransform::APPLY_SHEAR)) {
			goto case$124;
		}
		if (mystate == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$125;
		}
		if (mystate == (AffineTransform::APPLY_SCALE)) {
			goto case$126;
		}
		if (mystate == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$127;
		}
		if (mystate == (AffineTransform::APPLY_IDENTITY)) {
			goto case$128;
		}
		goto case$129;
case$129:
		// default
		{
			stateError();
		}
case$121:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M0 = this->m02;
			M1 = this->m12;
			T02 += M0 * T00 + M1 * T01;
			T12 += M0 * T10 + M1 * T11;
		}
case$122:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			this->m02 = T02;
			this->m12 = T12;
			M0 = this->m00;
			M1 = this->m10;
			this->m00 = M0 * T00 + M1 * T01;
			this->m10 = M0 * T10 + M1 * T11;
			M0 = this->m01;
			M1 = this->m11;
			this->m01 = M0 * T00 + M1 * T01;
			this->m11 = M0 * T10 + M1 * T11;
			break;
		}
case$123:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M0 = this->m02;
			M1 = this->m12;
			T02 += M0 * T00 + M1 * T01;
			T12 += M0 * T10 + M1 * T11;
		}
case$124:
		// (APPLY_SHEAR)
		{
			this->m02 = T02;
			this->m12 = T12;
			M0 = this->m10;
			this->m00 = M0 * T01;
			this->m10 = M0 * T11;
			M0 = this->m01;
			this->m01 = M0 * T00;
			this->m11 = M0 * T10;
			break;
		}
case$125:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M0 = this->m02;
			M1 = this->m12;
			T02 += M0 * T00 + M1 * T01;
			T12 += M0 * T10 + M1 * T11;
		}
case$126:
		// (APPLY_SCALE)
		{
			this->m02 = T02;
			this->m12 = T12;
			M0 = this->m00;
			this->m00 = M0 * T00;
			this->m10 = M0 * T10;
			M0 = this->m11;
			this->m01 = M0 * T01;
			this->m11 = M0 * T11;
			break;
		}
case$127:
		// (APPLY_TRANSLATE)
		{
			M0 = this->m02;
			M1 = this->m12;
			T02 += M0 * T00 + M1 * T01;
			T12 += M0 * T10 + M1 * T11;
		}
case$128:
		// (APPLY_IDENTITY)
		{
			this->m02 = T02;
			this->m12 = T12;
			this->m00 = T00;
			this->m10 = T10;
			this->m01 = T01;
			this->m11 = T11;
			this->state = mystate | txstate;
			this->type = AffineTransform::TYPE_UNKNOWN;
			return;
		}
	} while (false);
	updateState();
}

AffineTransform* AffineTransform::createInverse() {
	$useLocalCurrentObjectStackCache();
	double det = 0.0;
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$130;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$131;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$132;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$133;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$134;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$135;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$136;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$137;
		}
		goto case$138;
case$138:
		// default
		{
			stateError();
			return nullptr;
		}
case$130:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			det = this->m00 * this->m11 - this->m01 * this->m10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			return $new(AffineTransform, this->m11 / det, -this->m10 / det, -this->m01 / det, this->m00 / det, (this->m01 * this->m12 - this->m11 * this->m02) / det, (this->m10 * this->m02 - this->m00 * this->m12) / det, ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE));
		}
case$131:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			det = this->m00 * this->m11 - this->m01 * this->m10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			return $new(AffineTransform, this->m11 / det, -this->m10 / det, -this->m01 / det, this->m00 / det, 0.0, 0.0, (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE));
		}
case$132:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			if (this->m01 == 0.0 || this->m10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			return $new(AffineTransform, 0.0, 1.0 / this->m01, 1.0 / this->m10, 0.0, -this->m12 / this->m10, -this->m02 / this->m01, (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE));
		}
case$133:
		// (APPLY_SHEAR)
		{
			if (this->m01 == 0.0 || this->m10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			return $new(AffineTransform, 0.0, 1.0 / this->m01, 1.0 / this->m10, 0.0, 0.0, 0.0, (AffineTransform::APPLY_SHEAR));
		}
case$134:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			if (this->m00 == 0.0 || this->m11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			return $new(AffineTransform, 1.0 / this->m00, 0.0, 0.0, 1.0 / this->m11, -this->m02 / this->m00, -this->m12 / this->m11, (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE));
		}
case$135:
		// (APPLY_SCALE)
		{
			if (this->m00 == 0.0 || this->m11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			return $new(AffineTransform, 1.0 / this->m00, 0.0, 0.0, 1.0 / this->m11, 0.0, 0.0, (AffineTransform::APPLY_SCALE));
		}
case$136:
		// (APPLY_TRANSLATE)
		{
			return $new(AffineTransform, 1.0, 0.0, 0.0, 1.0, -this->m02, -this->m12, (AffineTransform::APPLY_TRANSLATE));
		}
case$137:
		// (APPLY_IDENTITY)
		{
			return $new(AffineTransform);
		}
	} while (false);
}

void AffineTransform::invert() {
	$useLocalCurrentObjectStackCache();
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	double det = 0.0;
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$139;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$140;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$141;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$142;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$143;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$144;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$145;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$146;
		}
		goto case$147;
case$147:
		// default
		{
			stateError();
			return;
		}
case$139:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			det = M00 * M11 - M01 * M10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			this->m00 = M11 / det;
			this->m10 = -M10 / det;
			this->m01 = -M01 / det;
			this->m11 = M00 / det;
			this->m02 = (M01 * M12 - M11 * M02) / det;
			this->m12 = (M10 * M02 - M00 * M12) / det;
			break;
		}
case$140:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			det = M00 * M11 - M01 * M10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			this->m00 = M11 / det;
			this->m10 = -M10 / det;
			this->m01 = -M01 / det;
			this->m11 = M00 / det;
			break;
		}
case$141:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			if (M01 == 0.0 || M10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			this->m10 = 1.0 / M01;
			this->m01 = 1.0 / M10;
			this->m02 = -M12 / M10;
			this->m12 = -M02 / M01;
			break;
		}
case$142:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			if (M01 == 0.0 || M10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			this->m10 = 1.0 / M01;
			this->m01 = 1.0 / M10;
			break;
		}
case$143:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			if (M00 == 0.0 || M11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			this->m00 = 1.0 / M00;
			this->m11 = 1.0 / M11;
			this->m02 = -M02 / M00;
			this->m12 = -M12 / M11;
			break;
		}
case$144:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			if (M00 == 0.0 || M11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			this->m00 = 1.0 / M00;
			this->m11 = 1.0 / M11;
			break;
		}
case$145:
		// (APPLY_TRANSLATE)
		{
			this->m02 = -this->m02;
			this->m12 = -this->m12;
			break;
		}
case$146:
		// (APPLY_IDENTITY)
		{
			break;
		}
	} while (false);
}

$Point2D* AffineTransform::transform($Point2D* ptSrc, $Point2D* ptDst$renamed) {
	$var($Point2D, ptDst, ptDst$renamed);
	if (ptDst == nullptr) {
		if ($instanceOf($Point2D$Double, ptSrc)) {
			$assign(ptDst, $new($Point2D$Double));
		} else {
			$assign(ptDst, $new($Point2D$Float));
		}
	}
	double x = $nc(ptSrc)->getX();
	double y = ptSrc->getY();
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$148;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$149;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$150;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$151;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$152;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$153;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$154;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$155;
		}
		goto case$156;
case$156:
		// default
		{
			stateError();
			return nullptr;
		}
case$148:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			$nc(ptDst)->setLocation(x * this->m00 + y * this->m01 + this->m02, x * this->m10 + y * this->m11 + this->m12);
			return ptDst;
		}
case$149:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			$nc(ptDst)->setLocation(x * this->m00 + y * this->m01, x * this->m10 + y * this->m11);
			return ptDst;
		}
case$150:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			$nc(ptDst)->setLocation(y * this->m01 + this->m02, x * this->m10 + this->m12);
			return ptDst;
		}
case$151:
		// (APPLY_SHEAR)
		{
			$nc(ptDst)->setLocation(y * this->m01, x * this->m10);
			return ptDst;
		}
case$152:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			$nc(ptDst)->setLocation(x * this->m00 + this->m02, y * this->m11 + this->m12);
			return ptDst;
		}
case$153:
		// (APPLY_SCALE)
		{
			$nc(ptDst)->setLocation(x * this->m00, y * this->m11);
			return ptDst;
		}
case$154:
		// (APPLY_TRANSLATE)
		{
			$nc(ptDst)->setLocation(x + this->m02, y + this->m12);
			return ptDst;
		}
case$155:
		// (APPLY_IDENTITY)
		{
			$nc(ptDst)->setLocation(x, y);
			return ptDst;
		}
	} while (false);
}

void AffineTransform::transform($Point2DArray* ptSrc, int32_t srcOff, $Point2DArray* ptDst, int32_t dstOff, int32_t numPts) {
	$useLocalCurrentObjectStackCache();
	int32_t state = this->state;
	while (--numPts >= 0) {
		$var($Point2D, src, $nc(ptSrc)->get(srcOff++));
		double x = $nc(src)->getX();
		double y = src->getY();
		$var($Point2D, dst, $nc(ptDst)->get(dstOff++));
		if (dst == nullptr) {
			if ($instanceOf($Point2D$Double, src)) {
				$assign(dst, $new($Point2D$Double));
			} else {
				$assign(dst, $new($Point2D$Float));
			}
			ptDst->set(dstOff - 1, dst);
		}
		do {
			if (state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
				goto case$157;
			}
			if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
				goto case$158;
			}
			if (state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
				goto case$159;
			}
			if (state == (AffineTransform::APPLY_SHEAR)) {
				goto case$160;
			}
			if (state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
				goto case$161;
			}
			if (state == (AffineTransform::APPLY_SCALE)) {
				goto case$162;
			}
			if (state == (AffineTransform::APPLY_TRANSLATE)) {
				goto case$163;
			}
			if (state == (AffineTransform::APPLY_IDENTITY)) {
				goto case$164;
			}
			goto case$165;
case$165:
			// default
			{
				stateError();
				return;
			}
case$157:
			// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
			{
				$nc(dst)->setLocation(x * this->m00 + y * this->m01 + this->m02, x * this->m10 + y * this->m11 + this->m12);
				break;
			}
case$158:
			// (APPLY_SHEAR | APPLY_SCALE)
			{
				$nc(dst)->setLocation(x * this->m00 + y * this->m01, x * this->m10 + y * this->m11);
				break;
			}
case$159:
			// (APPLY_SHEAR | APPLY_TRANSLATE)
			{
				$nc(dst)->setLocation(y * this->m01 + this->m02, x * this->m10 + this->m12);
				break;
			}
case$160:
			// (APPLY_SHEAR)
			{
				$nc(dst)->setLocation(y * this->m01, x * this->m10);
				break;
			}
case$161:
			// (APPLY_SCALE | APPLY_TRANSLATE)
			{
				$nc(dst)->setLocation(x * this->m00 + this->m02, y * this->m11 + this->m12);
				break;
			}
case$162:
			// (APPLY_SCALE)
			{
				$nc(dst)->setLocation(x * this->m00, y * this->m11);
				break;
			}
case$163:
			// (APPLY_TRANSLATE)
			{
				$nc(dst)->setLocation(x + this->m02, y + this->m12);
				break;
			}
case$164:
			// (APPLY_IDENTITY)
			{
				$nc(dst)->setLocation(x, y);
				break;
			}
		} while (false);
	}
}

void AffineTransform::transform($floats* srcPts, int32_t srcOff, $floats* dstPts, int32_t dstOff, int32_t numPts) {
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	if (dstPts == srcPts && dstOff > srcOff && dstOff < srcOff + numPts * 2) {
		$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
		srcOff = dstOff;
	}
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$166;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$167;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$168;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$169;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$170;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$171;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$172;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$173;
		}
		goto case$174;
case$174:
		// default
		{
			stateError();
			return;
		}
case$166:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M00 * x + M01 * y + M02));
				dstPts->set(dstOff++, (float)(M10 * x + M11 * y + M12));
			}
			return;
		}
case$167:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M00 * x + M01 * y));
				dstPts->set(dstOff++, (float)(M10 * x + M11 * y));
			}
			return;
		}
case$168:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M01 * srcPts->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(M10 * x + M12));
			}
			return;
		}
case$169:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M01 * srcPts->get(srcOff++)));
				dstPts->set(dstOff++, (float)(M10 * x));
			}
			return;
		}
case$170:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)(M00 * $nc(srcPts)->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(M11 * srcPts->get(srcOff++) + M12));
			}
			return;
		}
case$171:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)(M00 * $nc(srcPts)->get(srcOff++)));
				dstPts->set(dstOff++, (float)(M11 * srcPts->get(srcOff++)));
			}
			return;
		}
case$172:
		// (APPLY_TRANSLATE)
		{
			M02 = this->m02;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)($nc(srcPts)->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(srcPts->get(srcOff++) + M12));
			}
			return;
		}
case$173:
		// (APPLY_IDENTITY)
		{
			if (srcPts != dstPts || srcOff != dstOff) {
				$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
			}
			return;
		}
	} while (false);
}

void AffineTransform::transform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts) {
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	if (dstPts == srcPts && dstOff > srcOff && dstOff < srcOff + numPts * 2) {
		$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
		srcOff = dstOff;
	}
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$175;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$176;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$177;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$178;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$179;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$180;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$181;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$182;
		}
		goto case$183;
case$183:
		// default
		{
			stateError();
			return;
		}
case$175:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M00 * x + M01 * y + M02);
				dstPts->set(dstOff++, M10 * x + M11 * y + M12);
			}
			return;
		}
case$176:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M00 * x + M01 * y);
				dstPts->set(dstOff++, M10 * x + M11 * y);
			}
			return;
		}
case$177:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M01 * srcPts->get(srcOff++) + M02);
				dstPts->set(dstOff++, M10 * x + M12);
			}
			return;
		}
case$178:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M01 * srcPts->get(srcOff++));
				dstPts->set(dstOff++, M10 * x);
			}
			return;
		}
case$179:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, M00 * $nc(srcPts)->get(srcOff++) + M02);
				dstPts->set(dstOff++, M11 * srcPts->get(srcOff++) + M12);
			}
			return;
		}
case$180:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, M00 * $nc(srcPts)->get(srcOff++));
				dstPts->set(dstOff++, M11 * srcPts->get(srcOff++));
			}
			return;
		}
case$181:
		// (APPLY_TRANSLATE)
		{
			M02 = this->m02;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++) + M02);
				dstPts->set(dstOff++, srcPts->get(srcOff++) + M12);
			}
			return;
		}
case$182:
		// (APPLY_IDENTITY)
		{
			if (srcPts != dstPts || srcOff != dstOff) {
				$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
			}
			return;
		}
	} while (false);
}

void AffineTransform::transform($floats* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts) {
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$184;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$185;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$186;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$187;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$188;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$189;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$190;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$191;
		}
		goto case$192;
case$192:
		// default
		{
			stateError();
			return;
		}
case$184:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M00 * x + M01 * y + M02);
				dstPts->set(dstOff++, M10 * x + M11 * y + M12);
			}
			return;
		}
case$185:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M00 * x + M01 * y);
				dstPts->set(dstOff++, M10 * x + M11 * y);
			}
			return;
		}
case$186:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M01 * srcPts->get(srcOff++) + M02);
				dstPts->set(dstOff++, M10 * x + M12);
			}
			return;
		}
case$187:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, M01 * srcPts->get(srcOff++));
				dstPts->set(dstOff++, M10 * x);
			}
			return;
		}
case$188:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, M00 * $nc(srcPts)->get(srcOff++) + M02);
				dstPts->set(dstOff++, M11 * srcPts->get(srcOff++) + M12);
			}
			return;
		}
case$189:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, M00 * $nc(srcPts)->get(srcOff++));
				dstPts->set(dstOff++, M11 * srcPts->get(srcOff++));
			}
			return;
		}
case$190:
		// (APPLY_TRANSLATE)
		{
			M02 = this->m02;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++) + M02);
				dstPts->set(dstOff++, srcPts->get(srcOff++) + M12);
			}
			return;
		}
case$191:
		// (APPLY_IDENTITY)
		{
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++));
				dstPts->set(dstOff++, srcPts->get(srcOff++));
			}
			return;
		}
	} while (false);
}

void AffineTransform::transform($doubles* srcPts, int32_t srcOff, $floats* dstPts, int32_t dstOff, int32_t numPts) {
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$193;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$194;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$195;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$196;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$197;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$198;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$199;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$200;
		}
		goto case$201;
case$201:
		// default
		{
			stateError();
			return;
		}
case$193:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M00 * x + M01 * y + M02));
				dstPts->set(dstOff++, (float)(M10 * x + M11 * y + M12));
			}
			return;
		}
case$194:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M00 * x + M01 * y));
				dstPts->set(dstOff++, (float)(M10 * x + M11 * y));
			}
			return;
		}
case$195:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M01 * srcPts->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(M10 * x + M12));
			}
			return;
		}
case$196:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (float)(M01 * srcPts->get(srcOff++)));
				dstPts->set(dstOff++, (float)(M10 * x));
			}
			return;
		}
case$197:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)(M00 * $nc(srcPts)->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(M11 * srcPts->get(srcOff++) + M12));
			}
			return;
		}
case$198:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)(M00 * $nc(srcPts)->get(srcOff++)));
				dstPts->set(dstOff++, (float)(M11 * srcPts->get(srcOff++)));
			}
			return;
		}
case$199:
		// (APPLY_TRANSLATE)
		{
			M02 = this->m02;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)($nc(srcPts)->get(srcOff++) + M02));
				dstPts->set(dstOff++, (float)(srcPts->get(srcOff++) + M12));
			}
			return;
		}
case$200:
		// (APPLY_IDENTITY)
		{
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, (float)($nc(srcPts)->get(srcOff++)));
				dstPts->set(dstOff++, (float)(srcPts->get(srcOff++)));
			}
			return;
		}
	} while (false);
}

$Point2D* AffineTransform::inverseTransform($Point2D* ptSrc, $Point2D* ptDst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, ptDst, ptDst$renamed);
	if (ptDst == nullptr) {
		if ($instanceOf($Point2D$Double, ptSrc)) {
			$assign(ptDst, $new($Point2D$Double));
		} else {
			$assign(ptDst, $new($Point2D$Float));
		}
	}
	double x = $nc(ptSrc)->getX();
	double y = ptSrc->getY();
	{
		double det = 0;
		do {
			if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
				goto case$202;
			}
			if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
				goto case$203;
			}
			if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
				goto case$204;
			}
			if (this->state == (AffineTransform::APPLY_SHEAR)) {
				goto case$205;
			}
			if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
				goto case$206;
			}
			if (this->state == (AffineTransform::APPLY_SCALE)) {
				goto case$207;
			}
			if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
				goto case$208;
			}
			if (this->state == (AffineTransform::APPLY_IDENTITY)) {
				goto case$209;
			}
			goto case$210;
case$210:
			// default
			{
				stateError();
			}
case$202:
			// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
			{
				x -= this->m02;
				y -= this->m12;
			}
case$203:
			// (APPLY_SHEAR | APPLY_SCALE)
			{
				det = this->m00 * this->m11 - this->m01 * this->m10;
				$init($Double);
				if ($Math::abs(det) <= $Double::MIN_VALUE) {
					$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
				}
				$nc(ptDst)->setLocation((x * this->m11 - y * this->m01) / det, (y * this->m00 - x * this->m10) / det);
				return ptDst;
			}
case$204:
			// (APPLY_SHEAR | APPLY_TRANSLATE)
			{
				x -= this->m02;
				y -= this->m12;
			}
case$205:
			// (APPLY_SHEAR)
			{
				if (this->m01 == 0.0 || this->m10 == 0.0) {
					$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
				}
				$nc(ptDst)->setLocation(y / this->m10, x / this->m01);
				return ptDst;
			}
case$206:
			// (APPLY_SCALE | APPLY_TRANSLATE)
			{
				x -= this->m02;
				y -= this->m12;
			}
case$207:
			// (APPLY_SCALE)
			{
				if (this->m00 == 0.0 || this->m11 == 0.0) {
					$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
				}
				$nc(ptDst)->setLocation(x / this->m00, y / this->m11);
				return ptDst;
			}
case$208:
			// (APPLY_TRANSLATE)
			{
				$nc(ptDst)->setLocation(x - this->m02, y - this->m12);
				return ptDst;
			}
case$209:
			// (APPLY_IDENTITY)
			{
				$nc(ptDst)->setLocation(x, y);
				return ptDst;
			}
		} while (false);
	}
}

void AffineTransform::inverseTransform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts) {
	$useLocalCurrentObjectStackCache();
	double M00 = 0.0;
	double M01 = 0.0;
	double M02 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	double M12 = 0.0;
	double det = 0.0;
	if (dstPts == srcPts && dstOff > srcOff && dstOff < srcOff + numPts * 2) {
		$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
		srcOff = dstOff;
	}
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$211;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$212;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$213;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$214;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$215;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$216;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$217;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$218;
		}
		goto case$219;
case$219:
		// default
		{
			stateError();
			return;
		}
case$211:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M11 = this->m11;
			M12 = this->m12;
			det = M00 * M11 - M01 * M10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++) - M02;
				double y = srcPts->get(srcOff++) - M12;
				$nc(dstPts)->set(dstOff++, (x * M11 - y * M01) / det);
				dstPts->set(dstOff++, (y * M00 - x * M10) / det);
			}
			return;
		}
case$212:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			det = M00 * M11 - M01 * M10;
			$init($Double);
			if ($Math::abs(det) <= $Double::MIN_VALUE) {
				$throwNew($NoninvertibleTransformException, $$str({"Determinant is "_s, $$str(det)}));
			}
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, (x * M11 - y * M01) / det);
				dstPts->set(dstOff++, (y * M00 - x * M10) / det);
			}
			return;
		}
case$213:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
			M01 = this->m01;
			M02 = this->m02;
			M10 = this->m10;
			M12 = this->m12;
			if (M01 == 0.0 || M10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++) - M02;
				$nc(dstPts)->set(dstOff++, (srcPts->get(srcOff++) - M12) / M10);
				dstPts->set(dstOff++, x / M01);
			}
			return;
		}
case$214:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			if (M01 == 0.0 || M10 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, srcPts->get(srcOff++) / M10);
				dstPts->set(dstOff++, x / M01);
			}
			return;
		}
case$215:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
			M00 = this->m00;
			M02 = this->m02;
			M11 = this->m11;
			M12 = this->m12;
			if (M00 == 0.0 || M11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, ($nc(srcPts)->get(srcOff++) - M02) / M00);
				dstPts->set(dstOff++, (srcPts->get(srcOff++) - M12) / M11);
			}
			return;
		}
case$216:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			if (M00 == 0.0 || M11 == 0.0) {
				$throwNew($NoninvertibleTransformException, "Determinant is 0"_s);
			}
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++) / M00);
				dstPts->set(dstOff++, srcPts->get(srcOff++) / M11);
			}
			return;
		}
case$217:
		// (APPLY_TRANSLATE)
		{
			M02 = this->m02;
			M12 = this->m12;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++) - M02);
				dstPts->set(dstOff++, srcPts->get(srcOff++) - M12);
			}
			return;
		}
case$218:
		// (APPLY_IDENTITY)
		{
			if (srcPts != dstPts || srcOff != dstOff) {
				$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
			}
			return;
		}
	} while (false);
}

$Point2D* AffineTransform::deltaTransform($Point2D* ptSrc, $Point2D* ptDst$renamed) {
	$var($Point2D, ptDst, ptDst$renamed);
	if (ptDst == nullptr) {
		if ($instanceOf($Point2D$Double, ptSrc)) {
			$assign(ptDst, $new($Point2D$Double));
		} else {
			$assign(ptDst, $new($Point2D$Float));
		}
	}
	double x = $nc(ptSrc)->getX();
	double y = ptSrc->getY();
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$220;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$221;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$222;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$223;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$224;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$225;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$226;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$227;
		}
		goto case$228;
case$228:
		// default
		{
			stateError();
			return nullptr;
		}
case$220:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$221:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			$nc(ptDst)->setLocation(x * this->m00 + y * this->m01, x * this->m10 + y * this->m11);
			return ptDst;
		}
case$222:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$223:
		// (APPLY_SHEAR)
		{
			$nc(ptDst)->setLocation(y * this->m01, x * this->m10);
			return ptDst;
		}
case$224:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$225:
		// (APPLY_SCALE)
		{
			$nc(ptDst)->setLocation(x * this->m00, y * this->m11);
			return ptDst;
		}
case$226:
		// (APPLY_TRANSLATE)
		{
		}
case$227:
		// (APPLY_IDENTITY)
		{
			$nc(ptDst)->setLocation(x, y);
			return ptDst;
		}
	} while (false);
}

void AffineTransform::deltaTransform($doubles* srcPts, int32_t srcOff, $doubles* dstPts, int32_t dstOff, int32_t numPts) {
	double M00 = 0.0;
	double M01 = 0.0;
	double M10 = 0.0;
	double M11 = 0.0;
	if (dstPts == srcPts && dstOff > srcOff && dstOff < srcOff + numPts * 2) {
		$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
		srcOff = dstOff;
	}
	do {
		if (this->state == ((AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE)) {
			goto case$229;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE)) {
			goto case$230;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE)) {
			goto case$231;
		}
		if (this->state == (AffineTransform::APPLY_SHEAR)) {
			goto case$232;
		}
		if (this->state == (AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE)) {
			goto case$233;
		}
		if (this->state == (AffineTransform::APPLY_SCALE)) {
			goto case$234;
		}
		if (this->state == (AffineTransform::APPLY_TRANSLATE)) {
			goto case$235;
		}
		if (this->state == (AffineTransform::APPLY_IDENTITY)) {
			goto case$236;
		}
		goto case$237;
case$237:
		// default
		{
			stateError();
			return;
		}
case$229:
		// (APPLY_SHEAR | APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$230:
		// (APPLY_SHEAR | APPLY_SCALE)
		{
			M00 = this->m00;
			M01 = this->m01;
			M10 = this->m10;
			M11 = this->m11;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				double y = srcPts->get(srcOff++);
				$nc(dstPts)->set(dstOff++, x * M00 + y * M01);
				dstPts->set(dstOff++, x * M10 + y * M11);
			}
			return;
		}
case$231:
		// (APPLY_SHEAR | APPLY_TRANSLATE)
		{
		}
case$232:
		// (APPLY_SHEAR)
		{
			M01 = this->m01;
			M10 = this->m10;
			while (--numPts >= 0) {
				double x = $nc(srcPts)->get(srcOff++);
				$nc(dstPts)->set(dstOff++, srcPts->get(srcOff++) * M01);
				dstPts->set(dstOff++, x * M10);
			}
			return;
		}
case$233:
		// (APPLY_SCALE | APPLY_TRANSLATE)
		{
		}
case$234:
		// (APPLY_SCALE)
		{
			M00 = this->m00;
			M11 = this->m11;
			while (--numPts >= 0) {
				$nc(dstPts)->set(dstOff++, $nc(srcPts)->get(srcOff++) * M00);
				dstPts->set(dstOff++, srcPts->get(srcOff++) * M11);
			}
			return;
		}
case$235:
		// (APPLY_TRANSLATE)
		{
		}
case$236:
		// (APPLY_IDENTITY)
		{
			if (srcPts != dstPts || srcOff != dstOff) {
				$System::arraycopy(srcPts, srcOff, dstPts, dstOff, numPts * 2);
			}
			return;
		}
	} while (false);
}

$Shape* AffineTransform::createTransformedShape($Shape* pSrc) {
	if (pSrc == nullptr) {
		return nullptr;
	}
	return $new($Path2D$Double, pSrc, this);
}

double AffineTransform::_matround(double matval) {
	$init(AffineTransform);
	return $Math::rint(matval * 1.0E15) / 1.0E15;
}

$String* AffineTransform::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$9, $$str({"AffineTransform[["_s, $$str(_matround(this->m00)), ", "_s}));
	$var($String, var$8, $$concat(var$9, $$str(_matround(this->m01))));
	$var($String, var$7, $$concat(var$8, ", "_s));
	$var($String, var$6, $$concat(var$7, $$str(_matround(this->m02))));
	$var($String, var$5, $$concat(var$6, "], ["_s));
	$var($String, var$4, $$concat(var$5, $$str(_matround(this->m10))));
	$var($String, var$3, $$concat(var$4, ", "_s));
	$var($String, var$2, $$concat(var$3, $$str(_matround(this->m11))));
	$var($String, var$1, $$concat(var$2, ", "_s));
	$var($String, var$0, $$concat(var$1, $$str(_matround(this->m12))));
	return ($concat(var$0, "]]"_s));
}

bool AffineTransform::isIdentity() {
	return (this->state == AffineTransform::APPLY_IDENTITY || (getType() == AffineTransform::TYPE_IDENTITY));
}

$Object* AffineTransform::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

int32_t AffineTransform::hashCode() {
	int64_t bits = $Double::doubleToLongBits(this->m00);
	bits = bits * 31 + $Double::doubleToLongBits(this->m01);
	bits = bits * 31 + $Double::doubleToLongBits(this->m02);
	bits = bits * 31 + $Double::doubleToLongBits(this->m10);
	bits = bits * 31 + $Double::doubleToLongBits(this->m11);
	bits = bits * 31 + $Double::doubleToLongBits(this->m12);
	return (((int32_t)bits) ^ ((int32_t)(bits >> 32)));
}

bool AffineTransform::equals(Object$* obj) {
	if (!($instanceOf(AffineTransform, obj))) {
		return false;
	}
	$var(AffineTransform, a, $cast(AffineTransform, obj));
	return ((this->m00 == $nc(a)->m00) && (this->m01 == a->m01) && (this->m02 == a->m02) && (this->m10 == a->m10) && (this->m11 == a->m11) && (this->m12 == a->m12));
}

void AffineTransform::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

void AffineTransform::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	updateState();
}

void clinit$AffineTransform($Class* class$) {
	$assignStatic(AffineTransform::rot90conversion, $new($ints, {
		AffineTransform::APPLY_SHEAR,
		AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE,
		AffineTransform::APPLY_SHEAR,
		AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_TRANSLATE,
		AffineTransform::APPLY_SCALE,
		AffineTransform::APPLY_SCALE | AffineTransform::APPLY_TRANSLATE,
		AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE,
		(AffineTransform::APPLY_SHEAR | AffineTransform::APPLY_SCALE) | AffineTransform::APPLY_TRANSLATE
	}));
}

AffineTransform::AffineTransform() {
}

$Class* AffineTransform::load$($String* name, bool initialize) {
	$loadClass(AffineTransform, name, initialize, &_AffineTransform_ClassInfo_, clinit$AffineTransform, allocate$AffineTransform);
	return class$;
}

$Class* AffineTransform::class$ = nullptr;

		} // geom
	} // awt
} // java