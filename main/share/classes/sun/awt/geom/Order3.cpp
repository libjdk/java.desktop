#include <sun/awt/geom/Order3.h>

#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/QuadCurve2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/Curve.h>
#include <sun/awt/geom/Order2.h>
#include <jcpp.h>

#undef A
#undef B
#undef DECREASING
#undef INCREASING
#undef PI
#undef Q
#undef R
#undef S
#undef SEG_CUBICTO

using $PathIterator = ::java::awt::geom::PathIterator;
using $QuadCurve2D = ::java::awt::geom::QuadCurve2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Curve = ::sun::awt::geom::Curve;
using $Order2 = ::sun::awt::geom::Order2;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Order3_FieldInfo_[] = {
	{"x0", "D", nullptr, $PRIVATE, $field(Order3, x0)},
	{"y0", "D", nullptr, $PRIVATE, $field(Order3, y0)},
	{"cx0", "D", nullptr, $PRIVATE, $field(Order3, cx0)},
	{"cy0", "D", nullptr, $PRIVATE, $field(Order3, cy0)},
	{"cx1", "D", nullptr, $PRIVATE, $field(Order3, cx1)},
	{"cy1", "D", nullptr, $PRIVATE, $field(Order3, cy1)},
	{"x1", "D", nullptr, $PRIVATE, $field(Order3, x1)},
	{"y1", "D", nullptr, $PRIVATE, $field(Order3, y1)},
	{"xmin", "D", nullptr, $PRIVATE, $field(Order3, xmin)},
	{"xmax", "D", nullptr, $PRIVATE, $field(Order3, xmax)},
	{"xcoeff0", "D", nullptr, $PRIVATE, $field(Order3, xcoeff0)},
	{"xcoeff1", "D", nullptr, $PRIVATE, $field(Order3, xcoeff1)},
	{"xcoeff2", "D", nullptr, $PRIVATE, $field(Order3, xcoeff2)},
	{"xcoeff3", "D", nullptr, $PRIVATE, $field(Order3, xcoeff3)},
	{"ycoeff0", "D", nullptr, $PRIVATE, $field(Order3, ycoeff0)},
	{"ycoeff1", "D", nullptr, $PRIVATE, $field(Order3, ycoeff1)},
	{"ycoeff2", "D", nullptr, $PRIVATE, $field(Order3, ycoeff2)},
	{"ycoeff3", "D", nullptr, $PRIVATE, $field(Order3, ycoeff3)},
	{"TforY1", "D", nullptr, $PRIVATE, $field(Order3, TforY1)},
	{"YforT1", "D", nullptr, $PRIVATE, $field(Order3, YforT1)},
	{"TforY2", "D", nullptr, $PRIVATE, $field(Order3, TforY2)},
	{"YforT2", "D", nullptr, $PRIVATE, $field(Order3, YforT2)},
	{"TforY3", "D", nullptr, $PRIVATE, $field(Order3, TforY3)},
	{"YforT3", "D", nullptr, $PRIVATE, $field(Order3, YforT3)},
	{}
};

$MethodInfo _Order3_MethodInfo_[] = {
	{"<init>", "(DDDDDDDDI)V", nullptr, $PUBLIC, $method(static_cast<void(Order3::*)(double,double,double,double,double,double,double,double,int32_t)>(&Order3::init$))},
	{"TforY", "(D)D", nullptr, $PUBLIC},
	{"XforT", "(D)D", nullptr, $PUBLIC},
	{"XforY", "(D)D", nullptr, $PUBLIC},
	{"YforT", "(D)D", nullptr, $PUBLIC},
	{"addInstance", "(Ljava/util/Vector;DDDDDDDDI)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DDDDDDDDI)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double,double,double,double,double,double,double,int32_t)>(&Order3::addInstance))},
	{"controlPointString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"dXforT", "(DI)D", nullptr, $PUBLIC},
	{"dYforT", "(DI)D", nullptr, $PUBLIC},
	{"enlarge", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC},
	{"getCX0", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order3::*)()>(&Order3::getCX0))},
	{"getCX1", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order3::*)()>(&Order3::getCX1))},
	{"getCY0", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order3::*)()>(&Order3::getCY0))},
	{"getCY1", "()D", nullptr, $PUBLIC, $method(static_cast<double(Order3::*)()>(&Order3::getCY1))},
	{"getHorizontalParams", "(DDDD[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,$doubles*)>(&Order3::getHorizontalParams))},
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
	{"insert", "(Ljava/util/Vector;[DDDDDDDDDI)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;[DDDDDDDDDI)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,$doubles*,double,double,double,double,double,double,double,double,int32_t)>(&Order3::insert))},
	{"nextVertical", "(DD)D", nullptr, $PUBLIC},
	{"refine", "(DDDDD)D", nullptr, $PUBLIC, $method(static_cast<double(Order3::*)(double,double,double,double,double)>(&Order3::refine))},
	{"split", "([DID)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,double)>(&Order3::split))},
	{}
};

$ClassInfo _Order3_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.geom.Order3",
	"sun.awt.geom.Curve",
	nullptr,
	_Order3_FieldInfo_,
	_Order3_MethodInfo_
};

$Object* allocate$Order3($Class* clazz) {
	return $of($alloc(Order3));
}

void Order3::insert($Vector* curves, $doubles* tmp, double x0, double y0, double cx0, double cy0, double cx1, double cy1, double x1, double y1, int32_t direction) {
	$init(Order3);
	int32_t numparams = getHorizontalParams(y0, cy0, cy1, y1, tmp);
	if (numparams == 0) {
		addInstance(curves, x0, y0, cx0, cy0, cx1, cy1, x1, y1, direction);
		return;
	}
	$nc(tmp)->set(3, x0);
	tmp->set(4, y0);
	tmp->set(5, cx0);
	tmp->set(6, cy0);
	tmp->set(7, cx1);
	tmp->set(8, cy1);
	tmp->set(9, x1);
	tmp->set(10, y1);
	double t = tmp->get(0);
	if (numparams > 1 && t > tmp->get(1)) {
		tmp->set(0, tmp->get(1));
		tmp->set(1, t);
		t = tmp->get(0);
	}
	split(tmp, 3, t);
	if (numparams > 1) {
		t = (tmp->get(1) - t) / (1 - t);
		split(tmp, 9, t);
	}
	int32_t index = 3;
	if (direction == $Curve::DECREASING) {
		index += numparams * 6;
	}
	while (numparams >= 0) {
		addInstance(curves, tmp->get(index + 0), tmp->get(index + 1), tmp->get(index + 2), tmp->get(index + 3), tmp->get(index + 4), tmp->get(index + 5), tmp->get(index + 6), tmp->get(index + 7), direction);
		--numparams;
		if (direction == $Curve::INCREASING) {
			index += 6;
		} else {
			index -= 6;
		}
	}
}

void Order3::addInstance($Vector* curves, double x0, double y0, double cx0, double cy0, double cx1, double cy1, double x1, double y1, int32_t direction) {
	$init(Order3);
	$useLocalCurrentObjectStackCache();
	if (y0 > y1) {
		$nc(curves)->add($$new(Order3, x1, y1, cx1, cy1, cx0, cy0, x0, y0, -direction));
	} else if (y1 > y0) {
		$nc(curves)->add($$new(Order3, x0, y0, cx0, cy0, cx1, cy1, x1, y1, direction));
	}
}

int32_t Order3::getHorizontalParams(double c0, double cp0, double cp1, double c1, $doubles* ret) {
	$init(Order3);
	if (c0 <= cp0 && cp0 <= cp1 && cp1 <= c1) {
		return 0;
	}
	c1 -= cp1;
	cp1 -= cp0;
	cp0 -= c0;
	$nc(ret)->set(0, cp0);
	ret->set(1, (cp1 - cp0) * 2);
	ret->set(2, (c1 - cp1 - cp1 + cp0));
	int32_t numroots = $QuadCurve2D::solveQuadratic(ret, ret);
	int32_t j = 0;
	for (int32_t i = 0; i < numroots; ++i) {
		double t = ret->get(i);
		if (t > 0 && t < 1) {
			if (j < i) {
				ret->set(j, t);
			}
			++j;
		}
	}
	return j;
}

void Order3::split($doubles* coords, int32_t pos, double t) {
	$init(Order3);
	double x0 = 0.0;
	double y0 = 0.0;
	double cx0 = 0.0;
	double cy0 = 0.0;
	double cx1 = 0.0;
	double cy1 = 0.0;
	double x1 = 0.0;
	double y1 = 0.0;
	$nc(coords)->set(pos + 12, x1 = coords->get(pos + 6));
	coords->set(pos + 13, y1 = coords->get(pos + 7));
	cx1 = coords->get(pos + 4);
	cy1 = coords->get(pos + 5);
	x1 = cx1 + (x1 - cx1) * t;
	y1 = cy1 + (y1 - cy1) * t;
	x0 = coords->get(pos + 0);
	y0 = coords->get(pos + 1);
	cx0 = coords->get(pos + 2);
	cy0 = coords->get(pos + 3);
	x0 = x0 + (cx0 - x0) * t;
	y0 = y0 + (cy0 - y0) * t;
	cx0 = cx0 + (cx1 - cx0) * t;
	cy0 = cy0 + (cy1 - cy0) * t;
	cx1 = cx0 + (x1 - cx0) * t;
	cy1 = cy0 + (y1 - cy0) * t;
	cx0 = x0 + (cx0 - x0) * t;
	cy0 = y0 + (cy0 - y0) * t;
	coords->set(pos + 2, x0);
	coords->set(pos + 3, y0);
	coords->set(pos + 4, cx0);
	coords->set(pos + 5, cy0);
	coords->set(pos + 6, cx0 + (cx1 - cx0) * t);
	coords->set(pos + 7, cy0 + (cy1 - cy0) * t);
	coords->set(pos + 8, cx1);
	coords->set(pos + 9, cy1);
	coords->set(pos + 10, x1);
	coords->set(pos + 11, y1);
}

void Order3::init$(double x0, double y0, double cx0, double cy0, double cx1, double cy1, double x1, double y1, int32_t direction) {
	$Curve::init$(direction);
	if (cy0 < y0) {
		cy0 = y0;
	}
	if (cy1 > y1) {
		cy1 = y1;
	}
	this->x0 = x0;
	this->y0 = y0;
	this->cx0 = cx0;
	this->cy0 = cy0;
	this->cx1 = cx1;
	this->cy1 = cy1;
	this->x1 = x1;
	this->y1 = y1;
	double var$0 = $Math::min(x0, x1);
	this->xmin = $Math::min(var$0, $Math::min(cx0, cx1));
	double var$1 = $Math::max(x0, x1);
	this->xmax = $Math::max(var$1, $Math::max(cx0, cx1));
	this->xcoeff0 = x0;
	this->xcoeff1 = (cx0 - x0) * 3.0;
	this->xcoeff2 = (cx1 - cx0 - cx0 + x0) * 3.0;
	this->xcoeff3 = x1 - (cx1 - cx0) * 3.0 - x0;
	this->ycoeff0 = y0;
	this->ycoeff1 = (cy0 - y0) * 3.0;
	this->ycoeff2 = (cy1 - cy0 - cy0 + y0) * 3.0;
	this->ycoeff3 = y1 - (cy1 - cy0) * 3.0 - y0;
	this->YforT1 = (this->YforT2 = (this->YforT3 = y0));
}

int32_t Order3::getOrder() {
	return 3;
}

double Order3::getXTop() {
	return this->x0;
}

double Order3::getYTop() {
	return this->y0;
}

double Order3::getXBot() {
	return this->x1;
}

double Order3::getYBot() {
	return this->y1;
}

double Order3::getXMin() {
	return this->xmin;
}

double Order3::getXMax() {
	return this->xmax;
}

double Order3::getX0() {
	return (this->direction == $Curve::INCREASING) ? this->x0 : this->x1;
}

double Order3::getY0() {
	return (this->direction == $Curve::INCREASING) ? this->y0 : this->y1;
}

double Order3::getCX0() {
	return (this->direction == $Curve::INCREASING) ? this->cx0 : this->cx1;
}

double Order3::getCY0() {
	return (this->direction == $Curve::INCREASING) ? this->cy0 : this->cy1;
}

double Order3::getCX1() {
	return (this->direction == $Curve::DECREASING) ? this->cx0 : this->cx1;
}

double Order3::getCY1() {
	return (this->direction == $Curve::DECREASING) ? this->cy0 : this->cy1;
}

double Order3::getX1() {
	return (this->direction == $Curve::DECREASING) ? this->x0 : this->x1;
}

double Order3::getY1() {
	return (this->direction == $Curve::DECREASING) ? this->y0 : this->y1;
}

double Order3::TforY(double y) {
	if (y <= this->y0) {
		return (double)0;
	}
	if (y >= this->y1) {
		return (double)1;
	}
	if (y == this->YforT1) {
		return this->TforY1;
	}
	if (y == this->YforT2) {
		return this->TforY2;
	}
	if (y == this->YforT3) {
		return this->TforY3;
	}
	if (this->ycoeff3 == 0.0) {
		return $Order2::TforY(y, this->ycoeff0, this->ycoeff1, this->ycoeff2);
	}
	double a = this->ycoeff2 / this->ycoeff3;
	double b = this->ycoeff1 / this->ycoeff3;
	double c = (this->ycoeff0 - y) / this->ycoeff3;
	int32_t roots = 0;
	double Q = (a * a - 3.0 * b) / 9.0;
	double R = (2.0 * a * a * a - 9.0 * a * b + 27.0 * c) / 54.0;
	double R2 = R * R;
	double Q3 = Q * Q * Q;
	double a_3 = a / 3.0;
	double t = 0.0;
	if (R2 < Q3) {
		double theta = $Math::acos(R / $Math::sqrt(Q3));
		Q = -2.0 * $Math::sqrt(Q);
		t = refine(a, b, c, y, Q * $Math::cos(theta / 3.0) - a_3);
		if (t < 0) {
			t = refine(a, b, c, y, Q * $Math::cos((theta + $Math::PI * 2.0) / 3.0) - a_3);
		}
		if (t < 0) {
			t = refine(a, b, c, y, Q * $Math::cos((theta - $Math::PI * 2.0) / 3.0) - a_3);
		}
	} else {
		bool neg = (R < 0.0);
		double S = $Math::sqrt(R2 - Q3);
		if (neg) {
			R = -R;
		}
		double A = $Math::pow(R + S, 1.0 / 3.0);
		if (!neg) {
			A = -A;
		}
		double B = (A == 0.0) ? 0.0 : (Q / A);
		t = refine(a, b, c, y, (A + B) - a_3);
	}
	if (t < 0) {
		double t0 = (double)0;
		double t1 = (double)1;
		while (true) {
			t = (t0 + t1) / 2;
			if (t == t0 || t == t1) {
				break;
			}
			double yt = YforT(t);
			if (yt < y) {
				t0 = t;
			} else if (yt > y) {
				t1 = t;
			} else {
				break;
			}
		}
	}
	if (t >= 0) {
		this->TforY3 = this->TforY2;
		this->YforT3 = this->YforT2;
		this->TforY2 = this->TforY1;
		this->YforT2 = this->YforT1;
		this->TforY1 = t;
		this->YforT1 = y;
	}
	return t;
}

double Order3::refine(double a, double b, double c, double target, double t) {
	if (t < -0.1 || t > 1.1) {
		return (double)-1;
	}
	double y = YforT(t);
	double t0 = 0.0;
	double t1 = 0.0;
	if (y < target) {
		t0 = t;
		t1 = (double)1;
	} else {
		t0 = (double)0;
		t1 = t;
	}
	double origt = t;
	double origy = y;
	bool useslope = true;
	while (y != target) {
		if (!useslope) {
			double t2 = (t0 + t1) / 2;
			if (t2 == t0 || t2 == t1) {
				break;
			}
			t = t2;
		} else {
			double slope = dYforT(t, 1);
			if (slope == 0) {
				useslope = false;
				continue;
			}
			double t2 = t + ((target - y) / slope);
			if (t2 == t || t2 <= t0 || t2 >= t1) {
				useslope = false;
				continue;
			}
			t = t2;
		}
		y = YforT(t);
		if (y < target) {
			t0 = t;
		} else if (y > target) {
			t1 = t;
		} else {
			break;
		}
	}
	bool verbose = false;
	return (t > 1) ? (double)-1 : t;
}

double Order3::XforY(double y) {
	if (y <= this->y0) {
		return this->x0;
	}
	if (y >= this->y1) {
		return this->x1;
	}
	return XforT(TforY(y));
}

double Order3::XforT(double t) {
	return (((this->xcoeff3 * t) + this->xcoeff2) * t + this->xcoeff1) * t + this->xcoeff0;
}

double Order3::YforT(double t) {
	return (((this->ycoeff3 * t) + this->ycoeff2) * t + this->ycoeff1) * t + this->ycoeff0;
}

double Order3::dXforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return (((this->xcoeff3 * t) + this->xcoeff2) * t + this->xcoeff1) * t + this->xcoeff0;
		}
	case 1:
		{
			return ((3 * this->xcoeff3 * t) + 2 * this->xcoeff2) * t + this->xcoeff1;
		}
	case 2:
		{
			return (6 * this->xcoeff3 * t) + 2 * this->xcoeff2;
		}
	case 3:
		{
			return 6 * this->xcoeff3;
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order3::dYforT(double t, int32_t deriv) {
	switch (deriv) {
	case 0:
		{
			return (((this->ycoeff3 * t) + this->ycoeff2) * t + this->ycoeff1) * t + this->ycoeff0;
		}
	case 1:
		{
			return ((3 * this->ycoeff3 * t) + 2 * this->ycoeff2) * t + this->ycoeff1;
		}
	case 2:
		{
			return (6 * this->ycoeff3 * t) + 2 * this->ycoeff2;
		}
	case 3:
		{
			return 6 * this->ycoeff3;
		}
	default:
		{
			return (double)0;
		}
	}
}

double Order3::nextVertical(double t0, double t1) {
	$var($doubles, eqn, $new($doubles, {
		this->xcoeff1,
		2 * this->xcoeff2,
		3 * this->xcoeff3
	}));
	int32_t numroots = $QuadCurve2D::solveQuadratic(eqn, eqn);
	for (int32_t i = 0; i < numroots; ++i) {
		if (eqn->get(i) > t0 && eqn->get(i) < t1) {
			t1 = eqn->get(i);
		}
	}
	return t1;
}

void Order3::enlarge($Rectangle2D* r) {
	$nc(r)->add(this->x0, this->y0);
	$var($doubles, eqn, $new($doubles, {
		this->xcoeff1,
		2 * this->xcoeff2,
		3 * this->xcoeff3
	}));
	int32_t numroots = $QuadCurve2D::solveQuadratic(eqn, eqn);
	for (int32_t i = 0; i < numroots; ++i) {
		double t = eqn->get(i);
		if (t > 0 && t < 1) {
			double var$0 = XforT(t);
			r->add(var$0, YforT(t));
		}
	}
	r->add(this->x1, this->y1);
}

$Curve* Order3::getSubCurve(double ystart, double yend, int32_t dir) {
	if (ystart <= this->y0 && yend >= this->y1) {
		return getWithDirection(dir);
	}
	$var($doubles, eqn, $new($doubles, 14));
	double t0 = 0.0;
	double t1 = 0.0;
	t0 = TforY(ystart);
	t1 = TforY(yend);
	eqn->set(0, this->x0);
	eqn->set(1, this->y0);
	eqn->set(2, this->cx0);
	eqn->set(3, this->cy0);
	eqn->set(4, this->cx1);
	eqn->set(5, this->cy1);
	eqn->set(6, this->x1);
	eqn->set(7, this->y1);
	if (t0 > t1) {
		double t = t0;
		t0 = t1;
		t1 = t;
	}
	if (t1 < 1) {
		split(eqn, 0, t1);
	}
	int32_t i = 0;
	if (t0 <= 0) {
		i = 0;
	} else {
		split(eqn, 0, t0 / t1);
		i = 6;
	}
	return $new(Order3, eqn->get(i + 0), ystart, eqn->get(i + 2), eqn->get(i + 3), eqn->get(i + 4), eqn->get(i + 5), eqn->get(i + 6), yend, dir);
}

$Curve* Order3::getReversedCurve() {
	return $new(Order3, this->x0, this->y0, this->cx0, this->cy0, this->cx1, this->cy1, this->x1, this->y1, -this->direction);
}

int32_t Order3::getSegment($doubles* coords) {
	if (this->direction == $Curve::INCREASING) {
		$nc(coords)->set(0, this->cx0);
		coords->set(1, this->cy0);
		coords->set(2, this->cx1);
		coords->set(3, this->cy1);
		coords->set(4, this->x1);
		coords->set(5, this->y1);
	} else {
		$nc(coords)->set(0, this->cx1);
		coords->set(1, this->cy1);
		coords->set(2, this->cx0);
		coords->set(3, this->cy0);
		coords->set(4, this->x0);
		coords->set(5, this->y0);
	}
	return $PathIterator::SEG_CUBICTO;
}

$String* Order3::controlPointString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"("_s, $$str(round(getCX0())), ", "_s}));
	$var($String, var$1, $$concat(var$2, $$str(round(getCY0()))));
	$var($String, var$0, ($$concat(var$1, "), "_s)));
	$var($String, var$4, $$str({"("_s, $$str(round(getCX1())), ", "_s}));
	$var($String, var$3, $$concat(var$4, $$str(round(getCY1()))));
	return ($concat(var$0, ($$concat(var$3, "), "_s))));
}

Order3::Order3() {
}

$Class* Order3::load$($String* name, bool initialize) {
	$loadClass(Order3, name, initialize, &_Order3_ClassInfo_, allocate$Order3);
	return class$;
}

$Class* Order3::class$ = nullptr;

		} // geom
	} // awt
} // sun