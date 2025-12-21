#include <sun/awt/geom/Order2.h>

#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/Curve.h>
#include <jcpp.h>

#undef DECREASING
#undef INCREASING
#undef SEG_QUADTO

using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Curve = ::sun::awt::geom::Curve;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Order2_FieldInfo_[] = {
	{"x0", "D", nullptr, $PRIVATE, $field(Order2, x0)},
	{"y0", "D", nullptr, $PRIVATE, $field(Order2, y0)},
	{"cx0", "D", nullptr, $PRIVATE, $field(Order2, cx0)},
	{"cy0", "D", nullptr, $PRIVATE, $field(Order2, cy0)},
	{"x1", "D", nullptr, $PRIVATE, $field(Order2, x1)},
	{"y1", "D", nullptr, $PRIVATE, $field(Order2, y1)},
	{"xmin", "D", nullptr, $PRIVATE, $field(Order2, xmin)},
	{"xmax", "D", nullptr, $PRIVATE, $field(Order2, xmax)},
	{"xcoeff0", "D", nullptr, $PRIVATE, $field(Order2, xcoeff0)},
	{"xcoeff1", "D", nullptr, $PRIVATE, $field(Order2, xcoeff1)},
	{"xcoeff2", "D", nullptr, $PRIVATE, $field(Order2, xcoeff2)},
	{"ycoeff0", "D", nullptr, $PRIVATE, $field(Order2, ycoeff0)},
	{"ycoeff1", "D", nullptr, $PRIVATE, $field(Order2, ycoeff1)},
	{"ycoeff2", "D", nullptr, $PRIVATE, $field(Order2, ycoeff2)},
	{}
};

$MethodInfo _Order2_MethodInfo_[] = {
	{"<init>", "(DDDDDDI)V", nullptr, $PUBLIC, $method(static_cast<void(Order2::*)(double,double,double,double,double,double,int32_t)>(&Order2::init$))},
	{"TforY", "(D)D", nullptr, $PUBLIC},
	{"TforY", "(DDDD)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,double,double,double)>(&Order2::TforY))},
	{"XforT", "(D)D", nullptr, $PUBLIC},
	{"XforY", "(D)D", nullptr, $PUBLIC},
	{"YforT", "(D)D", nullptr, $PUBLIC},
	{"addInstance", "(Ljava/util/Vector;DDDDDDI)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DDDDDDI)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double,double,double,double,double,int32_t)>(&Order2::addInstance))},
	{"controlPointString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"dXforT", "(DI)D", nullptr, $PUBLIC},
	{"dYforT", "(DI)D", nullptr, $PUBLIC},
	{"enlarge", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"getCX0", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order2::*)()>(&Order2::getCX0))},
	{"getCY0", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order2::*)()>(&Order2::getCY0))},
	{"getHorizontalParams", "(DDD[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,$doubles*)>(&Order2::getHorizontalParams))},
	{"getOrder", "()I", nullptr, $PUBLIC},
	{"getReversedCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getSegment", "([D)I", nullptr, $PUBLIC},
	{"getSubCurve", "(DDI)Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getX0", "()D", nullptr, $PUBLIC},
	{"getX1", "()D", nullptr, $PUBLIC},
	{"getXBot", "()D", nullptr, $PUBLIC},
	{"getXMax", "()D", nullptr, $PUBLIC},
	{"getXMin", "()D", nullptr, $PUBLIC},
	{"getXTop", "()D", nullptr, $PUBLIC},
	{"getY0", "()D", nullptr, $PUBLIC},
	{"getY1", "()D", nullptr, $PUBLIC},
	{"getYBot", "()D", nullptr, $PUBLIC},
	{"getYTop", "()D", nullptr, $PUBLIC},
	{"insert", "(Ljava/util/Vector;[DDDDDDDI)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;[DDDDDDDI)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,$doubles*,double,double,double,double,double,double,int32_t)>(&Order2::insert))},
	{"nextVertical", "(DD)D", nullptr, $PUBLIC},
	{"split", "([DID)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,double)>(&Order2::split))},
	{}
};

$ClassInfo _Order2_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.Order2",
	"sun.awt.geom.Curve",
	nullptr,
	_Order2_FieldInfo_,
	_Order2_MethodInfo_
};

$Object* allocate$Order2($Class* clazz) {
	return $of($alloc(Order2));
}

void Order2::insert($Vector* curves, $doubles* tmp, double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction) {
	$init(Order2);
	int32_t numparams = getHorizontalParams(y0, cy0, y1, tmp);
	if (numparams == 0) {
		addInstance(curves, x0, y0, cx0, cy0, x1, y1, direction);
		return;
	}
	double t = $nc(tmp)->get(0);
	tmp->set(0, x0);
	tmp->set(1, y0);
	tmp->set(2, cx0);
	tmp->set(3, cy0);
	tmp->set(4, x1);
	tmp->set(5, y1);
	split(tmp, 0, t);
	int32_t i0 = (direction == $Curve::INCREASING) ? 0 : 4;
	int32_t i1 = 4 - i0;
	addInstance(curves, tmp->get(i0), tmp->get(i0 + 1), tmp->get(i0 + 2), tmp->get(i0 + 3), tmp->get(i0 + 4), tmp->get(i0 + 5), direction);
	addInstance(curves, tmp->get(i1), tmp->get(i1 + 1), tmp->get(i1 + 2), tmp->get(i1 + 3), tmp->get(i1 + 4), tmp->get(i1 + 5), direction);
}

void Order2::addInstance($Vector* curves, double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction) {
	$init(Order2);
	$useLocalCurrentObjectStackCache();
	if (y0 > y1) {
		$nc(curves)->add($$new(Order2, x1, y1, cx0, cy0, x0, y0, -direction));
	} else if (y1 > y0) {
		$nc(curves)->add($$new(Order2, x0, y0, cx0, cy0, x1, y1, direction));
	}
}

int32_t Order2::getHorizontalParams(double c0, double cp, double c1, $doubles* ret) {
	$init(Order2);
	if (c0 <= cp && cp <= c1) {
		return 0;
	}
	c0 -= cp;
	c1 -= cp;
	double denom = c0 + c1;
	if (denom == 0) {
		return 0;
	}
	double t = c0 / denom;
	if (t <= 0 || t >= 1) {
		return 0;
	}
	$nc(ret)->set(0, t);
	return 1;
}

void Order2::split($doubles* coords, int32_t pos, double t) {
	$init(Order2);
	double x0 = 0.0;
	double y0 = 0.0;
	double cx = 0.0;
	double cy = 0.0;
	double x1 = 0.0;
	double y1 = 0.0;
	$nc(coords)->set(pos + 8, x1 = coords->get(pos + 4));
	coords->set(pos + 9, y1 = coords->get(pos + 5));
	cx = coords->get(pos + 2);
	cy = coords->get(pos + 3);
	x1 = cx + (x1 - cx) * t;
	y1 = cy + (y1 - cy) * t;
	x0 = coords->get(pos + 0);
	y0 = coords->get(pos + 1);
	x0 = x0 + (cx - x0) * t;
	y0 = y0 + (cy - y0) * t;
	cx = x0 + (x1 - x0) * t;
	cy = y0 + (y1 - y0) * t;
	coords->set(pos + 2, x0);
	coords->set(pos + 3, y0);
	coords->set(pos + 4, cx);
	coords->set(pos + 5, cy);
	coords->set(pos + 6, x1);
	coords->set(pos + 7, y1);
}

void Order2::init$(double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction) {
	$Curve::init$(direction);
	if (cy0 < y0) {
		cy0 = y0;
	} else if (cy0 > y1) {
		cy0 = y1;
	}
	this->x0 = x0;
	this->y0 = y0;
	this->cx0 = cx0;
	this->cy0 = cy0;
	this->x1 = x1;
	this->y1 = y1;
	this->xmin = $Math::min($Math::min(x0, x1), cx0);
	this->xmax = $Math::max($Math::max(x0, x1), cx0);
	this->xcoeff0 = x0;
	this->xcoeff1 = cx0 + cx0 - x0 - x0;
	this->xcoeff2 = x0 - cx0 - cx0 + x1;
	this->ycoeff0 = y0;
	this->ycoeff1 = cy0 + cy0 - y0 - y0;
	this->ycoeff2 = y0 - cy0 - cy0 + y1;
}

int32_t Order2::getOrder() {
	return 2;
}

double Order2::getXTop() {
	return this->x0;
}

double Order2::getYTop() {
	return this->y0;
}

double Order2::getXBot() {
	return this->x1;
}

double Order2::getYBot() {
	return this->y1;
}

double Order2::getXMin() {
	return this->xmin;
}

double Order2::getXMax() {
	return this->xmax;
}

double Order2::getX0() {
	return (this->direction == $Curve::INCREASING) ? this->x0 : this->x1;
}

double Order2::getY0() {
	return (this->direction == $Curve::INCREASING) ? this->y0 : this->y1;
}

double Order2::getCX0() {
	return this->cx0;
}

double Order2::getCY0() {
	return this->cy0;
}

double Order2::getX1() {
	return (this->direction == $Curve::DECREASING) ? this->x0 : this->x1;
}

double Order2::getY1() {
	return (this->direction == $Curve::DECREASING) ? this->y0 : this->y1;
}

double Order2::XforY(double y) {
	if (y <= this->y0) {
		return this->x0;
	}
	if (y >= this->y1) {
		return this->x1;
	}
	return XforT(TforY(y));
}

double Order2::TforY(double y) {
	if (y <= this->y0) {
		return (double)0;
	}
	if (y >= this->y1) {
		return (double)1;
	}
	return TforY(y, this->ycoeff0, this->ycoeff1, this->ycoeff2);
}

double Order2::TforY(double y, double ycoeff0, double ycoeff1, double ycoeff2) {
	$init(Order2);
	ycoeff0 -= y;
	if (ycoeff2 == 0.0) {
		double root = -ycoeff0 / ycoeff1;
		if (root >= 0 && root <= 1) {
			return root;
		}
	} else {
		double d = ycoeff1 * ycoeff1 - 4.0 * ycoeff2 * ycoeff0;
		if (d >= 0.0) {
			d = $Math::sqrt(d);
			if (ycoeff1 < 0.0) {
				d = -d;
			}
			double q = $div((ycoeff1 + d), -2.0);
			double root = q / ycoeff2;
			if (root >= 0 && root <= 1) {
				return root;
			}
			if (q != 0.0) {
				root = ycoeff0 / q;
				if (root >= 0 && root <= 1) {
					return root;
				}
			}
		}
	}
	double y0 = ycoeff0;
	double y1 = ycoeff0 + ycoeff1 + ycoeff2;
	return (0 < (y0 + y1) / 2) ? 0.0 : 1.0;
}

double Order2::XforT(double t) {
	return (this->xcoeff2 * t + this->xcoeff1) * t + this->xcoeff0;
}

double Order2::YforT(double t) {
	return (this->ycoeff2 * t + this->ycoeff1) * t + this->ycoeff0;
}

double Order2::dXforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return (this->xcoeff2 * t + this->xcoeff1) * t + this->xcoeff0;
		}
	case 1:
		{
			return 2 * this->xcoeff2 * t + this->xcoeff1;
		}
	case 2:
		{
			return 2 * this->xcoeff2;
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order2::dYforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return (this->ycoeff2 * t + this->ycoeff1) * t + this->ycoeff0;
		}
	case 1:
		{
			return 2 * this->ycoeff2 * t + this->ycoeff1;
		}
	case 2:
		{
			return 2 * this->ycoeff2;
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order2::nextVertical(double t0, double t1) {
	double t = -this->xcoeff1 / (2 * this->xcoeff2);
	if (t > t0 && t < t1) {
		return t;
	}
	return t1;
}

void Order2::enlarge($Rectangle2D* r) {
	$nc(r)->add(this->x0, this->y0);
	double t = -this->xcoeff1 / (2 * this->xcoeff2);
	if (t > 0 && t < 1) {
		double var$0 = XforT(t);
		r->add(var$0, YforT(t));
	}
	r->add(this->x1, this->y1);
}

$Curve* Order2::getSubCurve(double ystart, double yend, int32_t dir) {
	double t0 = 0.0;
	double t1 = 0.0;
	if (ystart <= this->y0) {
		if (yend >= this->y1) {
			return getWithDirection(dir);
		}
		t0 = (double)0;
	} else {
		t0 = TforY(ystart, this->ycoeff0, this->ycoeff1, this->ycoeff2);
	}
	if (yend >= this->y1) {
		t1 = (double)1;
	} else {
		t1 = TforY(yend, this->ycoeff0, this->ycoeff1, this->ycoeff2);
	}
	$var($doubles, eqn, $new($doubles, 10));
	eqn->set(0, this->x0);
	eqn->set(1, this->y0);
	eqn->set(2, this->cx0);
	eqn->set(3, this->cy0);
	eqn->set(4, this->x1);
	eqn->set(5, this->y1);
	if (t1 < 1) {
		split(eqn, 0, t1);
	}
	int32_t i = 0;
	if (t0 <= 0) {
		i = 0;
	} else {
		split(eqn, 0, t0 / t1);
		i = 4;
	}
	return $new(Order2, eqn->get(i + 0), ystart, eqn->get(i + 2), eqn->get(i + 3), eqn->get(i + 4), yend, dir);
}

$Curve* Order2::getReversedCurve() {
	return $new(Order2, this->x0, this->y0, this->cx0, this->cy0, this->x1, this->y1, -this->direction);
}

int32_t Order2::getSegment($doubles* coords) {
	$nc(coords)->set(0, this->cx0);
	coords->set(1, this->cy0);
	if (this->direction == $Curve::INCREASING) {
		coords->set(2, this->x1);
		coords->set(3, this->y1);
	} else {
		coords->set(2, this->x0);
		coords->set(3, this->y0);
	}
	return $PathIterator::SEG_QUADTO;
}

$String* Order2::controlPointString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"("_s, $$str(round(this->cx0)), ", "_s}));
	$var($String, var$0, $$concat(var$1, $$str(round(this->cy0))));
	return ($concat(var$0, "), "_s));
}

Order2::Order2() {
}

$Class* Order2::load$($String* name, bool initialize) {
	$loadClass(Order2, name, initialize, &_Order2_ClassInfo_, allocate$Order2);
	return class$;
}

$Class* Order2::class$ = nullptr;

		} // geom
	} // awt
} // sun