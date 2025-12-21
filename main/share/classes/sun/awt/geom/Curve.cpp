#include <sun/awt/geom/Curve.h>

#include <java/awt/geom/IllegalPathStateException.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <sun/awt/geom/Crossings.h>
#include <sun/awt/geom/Order0.h>
#include <sun/awt/geom/Order1.h>
#include <sun/awt/geom/Order2.h>
#include <sun/awt/geom/Order3.h>
#include <jcpp.h>

#undef DECREASING
#undef INCREASING
#undef RECT_INTERSECTS
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef TMIN

using $IllegalPathStateException = ::java::awt::geom::IllegalPathStateException;
using $PathIterator = ::java::awt::geom::PathIterator;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Crossings = ::sun::awt::geom::Crossings;
using $Order0 = ::sun::awt::geom::Order0;
using $Order1 = ::sun::awt::geom::Order1;
using $Order2 = ::sun::awt::geom::Order2;
using $Order3 = ::sun::awt::geom::Order3;

namespace sun {
	namespace awt {
		namespace geom {

$FieldInfo _Curve_FieldInfo_[] = {
	{"INCREASING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Curve, INCREASING)},
	{"DECREASING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Curve, DECREASING)},
	{"direction", "I", nullptr, $PROTECTED, $field(Curve, direction)},
	{"RECT_INTERSECTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Curve, RECT_INTERSECTS)},
	{"TMIN", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Curve, TMIN)},
	{}
};

$MethodInfo _Curve_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Curve::*)(int32_t)>(&Curve::init$))},
	{"TforY", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"XforT", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"XforY", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"YforT", "(D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"accumulateCrossings", "(Lsun/awt/geom/Crossings;)Z", nullptr, $PUBLIC},
	{"compareTo", "(Lsun/awt/geom/Curve;[D)I", nullptr, $PUBLIC},
	{"controlPointString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"crossingsFor", "(DD)I", nullptr, $PUBLIC},
	{"dXforT", "(DI)D", nullptr, $PUBLIC | $ABSTRACT},
	{"dYforT", "(DI)D", nullptr, $PUBLIC | $ABSTRACT},
	{"diffbits", "(DD)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(double,double)>(&Curve::diffbits))},
	{"enlarge", "(Ljava/awt/geom/Rectangle2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"fairlyClose", "(DD)Z", nullptr, $PUBLIC},
	{"findIntersect", "(Lsun/awt/geom/Curve;[DDIIDDDDDDDDDDDD)Z", nullptr, $PUBLIC},
	{"getDirection", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Curve::*)()>(&Curve::getDirection))},
	{"getOrder", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getReversedCurve", "()Lsun/awt/geom/Curve;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSegment", "([D)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubCurve", "(DD)Lsun/awt/geom/Curve;", nullptr, $PUBLIC},
	{"getSubCurve", "(DDI)Lsun/awt/geom/Curve;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWithDirection", "(I)Lsun/awt/geom/Curve;", nullptr, $PUBLIC | $FINAL, $method(static_cast<Curve*(Curve::*)(int32_t)>(&Curve::getWithDirection))},
	{"getX0", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getX1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getXBot", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMax", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getXMin", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getXTop", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY0", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getY1", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getYBot", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getYTop", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"insertCubic", "(Ljava/util/Vector;DD[D)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DD[D)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double,$doubles*)>(&Curve::insertCubic))},
	{"insertLine", "(Ljava/util/Vector;DDDD)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DDDD)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double,double,double)>(&Curve::insertLine))},
	{"insertMove", "(Ljava/util/Vector;DD)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DD)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double)>(&Curve::insertMove))},
	{"insertQuad", "(Ljava/util/Vector;DD[D)V", "(Ljava/util/Vector<Lsun/awt/geom/Curve;>;DD[D)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Vector*,double,double,$doubles*)>(&Curve::insertQuad))},
	{"next", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Curve::next))},
	{"nextVertical", "(DD)D", nullptr, $PUBLIC | $ABSTRACT},
	{"orderof", "(DD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double)>(&Curve::orderof))},
	{"pointCrossingsForCubic", "(DDDDDDDDDDI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,double,double,double,double,double,double,int32_t)>(&Curve::pointCrossingsForCubic))},
	{"pointCrossingsForLine", "(DDDDDD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,double,double)>(&Curve::pointCrossingsForLine))},
	{"pointCrossingsForPath", "(Ljava/awt/geom/PathIterator;DD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($PathIterator*,double,double)>(&Curve::pointCrossingsForPath))},
	{"pointCrossingsForQuad", "(DDDDDDDDI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(double,double,double,double,double,double,double,double,int32_t)>(&Curve::pointCrossingsForQuad))},
	{"prev", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Curve::prev))},
	{"rectCrossingsForCubic", "(IDDDDDDDDDDDDI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,double,double,double,double,double,double,double,double,double,double,double,double,int32_t)>(&Curve::rectCrossingsForCubic))},
	{"rectCrossingsForLine", "(IDDDDDDDD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,double,double,double,double,double,double,double,double)>(&Curve::rectCrossingsForLine))},
	{"rectCrossingsForPath", "(Ljava/awt/geom/PathIterator;DDDD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($PathIterator*,double,double,double,double)>(&Curve::rectCrossingsForPath))},
	{"rectCrossingsForQuad", "(IDDDDDDDDDDI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,double,double,double,double,double,double,double,double,double,double,int32_t)>(&Curve::rectCrossingsForQuad))},
	{"refineTforY", "(DDD)D", nullptr, $PUBLIC},
	{"round", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&Curve::round))},
	{"signeddiffbits", "(DD)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(double,double)>(&Curve::signeddiffbits))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Curve_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.geom.Curve",
	"java.lang.Object",
	nullptr,
	_Curve_FieldInfo_,
	_Curve_MethodInfo_
};

$Object* allocate$Curve($Class* clazz) {
	return $of($alloc(Curve));
}

double Curve::TMIN = 0.0;

void Curve::insertMove($Vector* curves, double x, double y) {
	$init(Curve);
	$nc(curves)->add($$new($Order0, x, y));
}

void Curve::insertLine($Vector* curves, double x0, double y0, double x1, double y1) {
	$init(Curve);
	$useLocalCurrentObjectStackCache();
	if (y0 < y1) {
		$nc(curves)->add($$new($Order1, x0, y0, x1, y1, Curve::INCREASING));
	} else if (y0 > y1) {
		$nc(curves)->add($$new($Order1, x1, y1, x0, y0, Curve::DECREASING));
	} else {
	}
}

void Curve::insertQuad($Vector* curves, double x0, double y0, $doubles* coords) {
	$init(Curve);
	double y1 = $nc(coords)->get(3);
	if (y0 > y1) {
		$Order2::insert(curves, coords, coords->get(2), y1, coords->get(0), coords->get(1), x0, y0, Curve::DECREASING);
	} else if (y0 == y1 && y0 == coords->get(1)) {
		return;
	} else {
		$Order2::insert(curves, coords, x0, y0, coords->get(0), coords->get(1), coords->get(2), y1, Curve::INCREASING);
	}
}

void Curve::insertCubic($Vector* curves, double x0, double y0, $doubles* coords) {
	$init(Curve);
	double y1 = $nc(coords)->get(5);
	if (y0 > y1) {
		$Order3::insert(curves, coords, coords->get(4), y1, coords->get(2), coords->get(3), coords->get(0), coords->get(1), x0, y0, Curve::DECREASING);
	} else if (y0 == y1 && y0 == coords->get(1) && y0 == coords->get(3)) {
		return;
	} else {
		$Order3::insert(curves, coords, x0, y0, coords->get(0), coords->get(1), coords->get(2), coords->get(3), coords->get(4), y1, Curve::INCREASING);
	}
}

int32_t Curve::pointCrossingsForPath($PathIterator* pi, double px, double py) {
	$init(Curve);
	if ($nc(pi)->isDone()) {
		return 0;
	}
	$var($doubles, coords, $new($doubles, 6));
	if ($nc(pi)->currentSegment(coords) != $PathIterator::SEG_MOVETO) {
		$throwNew($IllegalPathStateException, "missing initial moveto in path definition"_s);
	}
	$nc(pi)->next();
	double movx = coords->get(0);
	double movy = coords->get(1);
	double curx = movx;
	double cury = movy;
	double endx = 0.0;
	double endy = 0.0;
	int32_t crossings = 0;
	while (!pi->isDone()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				if (cury != movy) {
					crossings += pointCrossingsForLine(px, py, curx, cury, movx, movy);
				}
				movx = (curx = coords->get(0));
				movy = (cury = coords->get(1));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				endx = coords->get(0);
				endy = coords->get(1);
				crossings += pointCrossingsForLine(px, py, curx, cury, endx, endy);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				endx = coords->get(2);
				endy = coords->get(3);
				crossings += pointCrossingsForQuad(px, py, curx, cury, coords->get(0), coords->get(1), endx, endy, 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				endx = coords->get(4);
				endy = coords->get(5);
				crossings += pointCrossingsForCubic(px, py, curx, cury, coords->get(0), coords->get(1), coords->get(2), coords->get(3), endx, endy, 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (cury != movy) {
					crossings += pointCrossingsForLine(px, py, curx, cury, movx, movy);
				}
				curx = movx;
				cury = movy;
				break;
			}
		}
		pi->next();
	}
	if (cury != movy) {
		crossings += pointCrossingsForLine(px, py, curx, cury, movx, movy);
	}
	return crossings;
}

int32_t Curve::pointCrossingsForLine(double px, double py, double x0, double y0, double x1, double y1) {
	$init(Curve);
	if (py < y0 && py < y1) {
		return 0;
	}
	if (py >= y0 && py >= y1) {
		return 0;
	}
	if (px >= x0 && px >= x1) {
		return 0;
	}
	if (px < x0 && px < x1) {
		return (y0 < y1) ? 1 : -1;
	}
	double xintercept = x0 + (py - y0) * (x1 - x0) / (y1 - y0);
	if (px >= xintercept) {
		return 0;
	}
	return (y0 < y1) ? 1 : -1;
}

int32_t Curve::pointCrossingsForQuad(double px, double py, double x0, double y0, double xc, double yc, double x1, double y1, int32_t level) {
	$init(Curve);
	if (py < y0 && py < yc && py < y1) {
		return 0;
	}
	if (py >= y0 && py >= yc && py >= y1) {
		return 0;
	}
	if (px >= x0 && px >= xc && px >= x1) {
		return 0;
	}
	if (px < x0 && px < xc && px < x1) {
		if (py >= y0) {
			if (py < y1) {
				return 1;
			}
		} else if (py >= y1) {
			return -1;
		}
		return 0;
	}
	if (level > 52) {
		return pointCrossingsForLine(px, py, x0, y0, x1, y1);
	}
	double x0c = (x0 + xc) / 2;
	double y0c = (y0 + yc) / 2;
	double xc1 = (xc + x1) / 2;
	double yc1 = (yc + y1) / 2;
	xc = (x0c + xc1) / 2;
	yc = (y0c + yc1) / 2;
	bool var$0 = $Double::isNaN(xc);
	if (var$0 || $Double::isNaN(yc)) {
		return 0;
	}
	int32_t var$1 = pointCrossingsForQuad(px, py, x0, y0, x0c, y0c, xc, yc, level + 1);
	return (var$1 + pointCrossingsForQuad(px, py, xc, yc, xc1, yc1, x1, y1, level + 1));
}

int32_t Curve::pointCrossingsForCubic(double px, double py, double x0, double y0, double xc0, double yc0, double xc1, double yc1, double x1, double y1, int32_t level) {
	$init(Curve);
	if (py < y0 && py < yc0 && py < yc1 && py < y1) {
		return 0;
	}
	if (py >= y0 && py >= yc0 && py >= yc1 && py >= y1) {
		return 0;
	}
	if (px >= x0 && px >= xc0 && px >= xc1 && px >= x1) {
		return 0;
	}
	if (px < x0 && px < xc0 && px < xc1 && px < x1) {
		if (py >= y0) {
			if (py < y1) {
				return 1;
			}
		} else if (py >= y1) {
			return -1;
		}
		return 0;
	}
	if (level > 52) {
		return pointCrossingsForLine(px, py, x0, y0, x1, y1);
	}
	double xmid = (xc0 + xc1) / 2;
	double ymid = (yc0 + yc1) / 2;
	xc0 = (x0 + xc0) / 2;
	yc0 = (y0 + yc0) / 2;
	xc1 = (xc1 + x1) / 2;
	yc1 = (yc1 + y1) / 2;
	double xc0m = (xc0 + xmid) / 2;
	double yc0m = (yc0 + ymid) / 2;
	double xmc1 = (xmid + xc1) / 2;
	double ymc1 = (ymid + yc1) / 2;
	xmid = (xc0m + xmc1) / 2;
	ymid = (yc0m + ymc1) / 2;
	bool var$0 = $Double::isNaN(xmid);
	if (var$0 || $Double::isNaN(ymid)) {
		return 0;
	}
	int32_t var$1 = pointCrossingsForCubic(px, py, x0, y0, xc0, yc0, xc0m, yc0m, xmid, ymid, level + 1);
	return (var$1 + pointCrossingsForCubic(px, py, xmid, ymid, xmc1, ymc1, xc1, yc1, x1, y1, level + 1));
}

int32_t Curve::rectCrossingsForPath($PathIterator* pi, double rxmin, double rymin, double rxmax, double rymax) {
	$init(Curve);
	if (rxmax <= rxmin || rymax <= rymin) {
		return 0;
	}
	if ($nc(pi)->isDone()) {
		return 0;
	}
	$var($doubles, coords, $new($doubles, 6));
	if ($nc(pi)->currentSegment(coords) != $PathIterator::SEG_MOVETO) {
		$throwNew($IllegalPathStateException, "missing initial moveto in path definition"_s);
	}
	$nc(pi)->next();
	double curx = 0.0;
	double cury = 0.0;
	double movx = 0.0;
	double movy = 0.0;
	double endx = 0.0;
	double endy = 0.0;
	curx = (movx = coords->get(0));
	cury = (movy = coords->get(1));
	int32_t crossings = 0;
	while (crossings != Curve::RECT_INTERSECTS && !pi->isDone()) {
		switch (pi->currentSegment(coords)) {
		case $PathIterator::SEG_MOVETO:
			{
				if (curx != movx || cury != movy) {
					crossings = rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
				}
				movx = (curx = coords->get(0));
				movy = (cury = coords->get(1));
				break;
			}
		case $PathIterator::SEG_LINETO:
			{
				endx = coords->get(0);
				endy = coords->get(1);
				crossings = rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, endx, endy);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_QUADTO:
			{
				endx = coords->get(2);
				endy = coords->get(3);
				crossings = rectCrossingsForQuad(crossings, rxmin, rymin, rxmax, rymax, curx, cury, coords->get(0), coords->get(1), endx, endy, 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CUBICTO:
			{
				endx = coords->get(4);
				endy = coords->get(5);
				crossings = rectCrossingsForCubic(crossings, rxmin, rymin, rxmax, rymax, curx, cury, coords->get(0), coords->get(1), coords->get(2), coords->get(3), endx, endy, 0);
				curx = endx;
				cury = endy;
				break;
			}
		case $PathIterator::SEG_CLOSE:
			{
				if (curx != movx || cury != movy) {
					crossings = rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
				}
				curx = movx;
				cury = movy;
				break;
			}
		}
		pi->next();
	}
	if (crossings != Curve::RECT_INTERSECTS && (curx != movx || cury != movy)) {
		crossings = rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, curx, cury, movx, movy);
	}
	return crossings;
}

int32_t Curve::rectCrossingsForLine(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double x1, double y1) {
	$init(Curve);
	if (y0 >= rymax && y1 >= rymax) {
		return crossings;
	}
	if (y0 <= rymin && y1 <= rymin) {
		return crossings;
	}
	if (x0 <= rxmin && x1 <= rxmin) {
		return crossings;
	}
	if (x0 >= rxmax && x1 >= rxmax) {
		if (y0 < y1) {
			if (y0 <= rymin) {
				++crossings;
			}
			if (y1 >= rymax) {
				++crossings;
			}
		} else if (y1 < y0) {
			if (y1 <= rymin) {
				--crossings;
			}
			if (y0 >= rymax) {
				--crossings;
			}
		}
		return crossings;
	}
	if ((x0 > rxmin && x0 < rxmax && y0 > rymin && y0 < rymax) || (x1 > rxmin && x1 < rxmax && y1 > rymin && y1 < rymax)) {
		return Curve::RECT_INTERSECTS;
	}
	double xi0 = x0;
	if (y0 < rymin) {
		xi0 += ((rymin - y0) * (x1 - x0) / (y1 - y0));
	} else if (y0 > rymax) {
		xi0 += ((rymax - y0) * (x1 - x0) / (y1 - y0));
	}
	double xi1 = x1;
	if (y1 < rymin) {
		xi1 += ((rymin - y1) * (x0 - x1) / (y0 - y1));
	} else if (y1 > rymax) {
		xi1 += ((rymax - y1) * (x0 - x1) / (y0 - y1));
	}
	if (xi0 <= rxmin && xi1 <= rxmin) {
		return crossings;
	}
	if (xi0 >= rxmax && xi1 >= rxmax) {
		if (y0 < y1) {
			if (y0 <= rymin) {
				++crossings;
			}
			if (y1 >= rymax) {
				++crossings;
			}
		} else if (y1 < y0) {
			if (y1 <= rymin) {
				--crossings;
			}
			if (y0 >= rymax) {
				--crossings;
			}
		}
		return crossings;
	}
	return Curve::RECT_INTERSECTS;
}

int32_t Curve::rectCrossingsForQuad(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double xc, double yc, double x1, double y1, int32_t level) {
	$init(Curve);
	if (y0 >= rymax && yc >= rymax && y1 >= rymax) {
		return crossings;
	}
	if (y0 <= rymin && yc <= rymin && y1 <= rymin) {
		return crossings;
	}
	if (x0 <= rxmin && xc <= rxmin && x1 <= rxmin) {
		return crossings;
	}
	if (x0 >= rxmax && xc >= rxmax && x1 >= rxmax) {
		if (y0 < y1) {
			if (y0 <= rymin && y1 > rymin) {
				++crossings;
			}
			if (y0 < rymax && y1 >= rymax) {
				++crossings;
			}
		} else if (y1 < y0) {
			if (y1 <= rymin && y0 > rymin) {
				--crossings;
			}
			if (y1 < rymax && y0 >= rymax) {
				--crossings;
			}
		}
		return crossings;
	}
	if ((x0 < rxmax && x0 > rxmin && y0 < rymax && y0 > rymin) || (x1 < rxmax && x1 > rxmin && y1 < rymax && y1 > rymin)) {
		return Curve::RECT_INTERSECTS;
	}
	if (level > 52) {
		return rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, x0, y0, x1, y1);
	}
	double x0c = (x0 + xc) / 2;
	double y0c = (y0 + yc) / 2;
	double xc1 = (xc + x1) / 2;
	double yc1 = (yc + y1) / 2;
	xc = (x0c + xc1) / 2;
	yc = (y0c + yc1) / 2;
	bool var$0 = $Double::isNaN(xc);
	if (var$0 || $Double::isNaN(yc)) {
		return 0;
	}
	crossings = rectCrossingsForQuad(crossings, rxmin, rymin, rxmax, rymax, x0, y0, x0c, y0c, xc, yc, level + 1);
	if (crossings != Curve::RECT_INTERSECTS) {
		crossings = rectCrossingsForQuad(crossings, rxmin, rymin, rxmax, rymax, xc, yc, xc1, yc1, x1, y1, level + 1);
	}
	return crossings;
}

int32_t Curve::rectCrossingsForCubic(int32_t crossings, double rxmin, double rymin, double rxmax, double rymax, double x0, double y0, double xc0, double yc0, double xc1, double yc1, double x1, double y1, int32_t level) {
	$init(Curve);
	if (y0 >= rymax && yc0 >= rymax && yc1 >= rymax && y1 >= rymax) {
		return crossings;
	}
	if (y0 <= rymin && yc0 <= rymin && yc1 <= rymin && y1 <= rymin) {
		return crossings;
	}
	if (x0 <= rxmin && xc0 <= rxmin && xc1 <= rxmin && x1 <= rxmin) {
		return crossings;
	}
	if (x0 >= rxmax && xc0 >= rxmax && xc1 >= rxmax && x1 >= rxmax) {
		if (y0 < y1) {
			if (y0 <= rymin && y1 > rymin) {
				++crossings;
			}
			if (y0 < rymax && y1 >= rymax) {
				++crossings;
			}
		} else if (y1 < y0) {
			if (y1 <= rymin && y0 > rymin) {
				--crossings;
			}
			if (y1 < rymax && y0 >= rymax) {
				--crossings;
			}
		}
		return crossings;
	}
	if ((x0 > rxmin && x0 < rxmax && y0 > rymin && y0 < rymax) || (x1 > rxmin && x1 < rxmax && y1 > rymin && y1 < rymax)) {
		return Curve::RECT_INTERSECTS;
	}
	if (level > 52) {
		return rectCrossingsForLine(crossings, rxmin, rymin, rxmax, rymax, x0, y0, x1, y1);
	}
	double xmid = (xc0 + xc1) / 2;
	double ymid = (yc0 + yc1) / 2;
	xc0 = (x0 + xc0) / 2;
	yc0 = (y0 + yc0) / 2;
	xc1 = (xc1 + x1) / 2;
	yc1 = (yc1 + y1) / 2;
	double xc0m = (xc0 + xmid) / 2;
	double yc0m = (yc0 + ymid) / 2;
	double xmc1 = (xmid + xc1) / 2;
	double ymc1 = (ymid + yc1) / 2;
	xmid = (xc0m + xmc1) / 2;
	ymid = (yc0m + ymc1) / 2;
	bool var$0 = $Double::isNaN(xmid);
	if (var$0 || $Double::isNaN(ymid)) {
		return 0;
	}
	crossings = rectCrossingsForCubic(crossings, rxmin, rymin, rxmax, rymax, x0, y0, xc0, yc0, xc0m, yc0m, xmid, ymid, level + 1);
	if (crossings != Curve::RECT_INTERSECTS) {
		crossings = rectCrossingsForCubic(crossings, rxmin, rymin, rxmax, rymax, xmid, ymid, xmc1, ymc1, xc1, yc1, x1, y1, level + 1);
	}
	return crossings;
}

void Curve::init$(int32_t direction) {
	this->direction = direction;
}

int32_t Curve::getDirection() {
	return this->direction;
}

Curve* Curve::getWithDirection(int32_t direction) {
	return (this->direction == direction ? this : getReversedCurve());
}

double Curve::round(double v) {
	$init(Curve);
	return v;
}

int32_t Curve::orderof(double x1, double x2) {
	$init(Curve);
	if (x1 < x2) {
		return -1;
	}
	if (x1 > x2) {
		return 1;
	}
	return 0;
}

int64_t Curve::signeddiffbits(double y1, double y2) {
	$init(Curve);
	int64_t var$0 = $Double::doubleToLongBits(y1);
	return (var$0 - $Double::doubleToLongBits(y2));
}

int64_t Curve::diffbits(double y1, double y2) {
	$init(Curve);
	int64_t var$0 = $Double::doubleToLongBits(y1);
	return $Math::abs(var$0 - $Double::doubleToLongBits(y2));
}

double Curve::prev(double v) {
	$init(Curve);
	return $Double::longBitsToDouble($Double::doubleToLongBits(v) - 1);
}

double Curve::next(double v) {
	$init(Curve);
	return $Double::longBitsToDouble($Double::doubleToLongBits(v) + 1);
}

$String* Curve::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$4, $$str({"Curve["_s, $$str(getOrder()), ", "_s}));
	$var($String, var$6, $$str({"("_s, $$str(round(getX0())), ", "_s}));
	$var($String, var$5, $$concat(var$6, $$str(round(getY0()))));
	$var($String, var$3, $$concat(var$4, ($$concat(var$5, "), "_s))));
	$var($String, var$2, $$concat(var$3, $(controlPointString())));
	$var($String, var$8, $$str({"("_s, $$str(round(getX1())), ", "_s}));
	$var($String, var$7, $$concat(var$8, $$str(round(getY1()))));
	$var($String, var$1, $$concat(var$2, ($$concat(var$7, "), "_s))));
	$var($String, var$0, $$concat(var$1, (this->direction == Curve::INCREASING ? "D"_s : "U"_s)));
	return ($concat(var$0, "]"_s));
}

$String* Curve::controlPointString() {
	return ""_s;
}

int32_t Curve::crossingsFor(double x, double y) {
	bool var$0 = y >= getYTop();
	if (var$0 && y < getYBot()) {
		bool var$1 = x < getXMax();
		if (var$1) {
			bool var$2 = x < getXMin();
			var$1 = (var$2 || x < XforY(y));
		}
		if (var$1) {
			return 1;
		}
	}
	return 0;
}

bool Curve::accumulateCrossings($Crossings* c) {
	double xhi = $nc(c)->getXHi();
	if (getXMin() >= xhi) {
		return false;
	}
	double xlo = c->getXLo();
	double ylo = c->getYLo();
	double yhi = c->getYHi();
	double y0 = getYTop();
	double y1 = getYBot();
	double tstart = 0.0;
	double ystart = 0.0;
	double tend = 0.0;
	double yend = 0.0;
	if (y0 < ylo) {
		if (y1 <= ylo) {
			return false;
		}
		ystart = ylo;
		tstart = TforY(ylo);
	} else {
		if (y0 >= yhi) {
			return false;
		}
		ystart = y0;
		tstart = (double)0;
	}
	if (y1 > yhi) {
		yend = yhi;
		tend = TforY(yhi);
	} else {
		yend = y1;
		tend = (double)1;
	}
	bool hitLo = false;
	bool hitHi = false;
	while (true) {
		double x = XforT(tstart);
		if (x < xhi) {
			if (hitHi || x > xlo) {
				return true;
			}
			hitLo = true;
		} else {
			if (hitLo) {
				return true;
			}
			hitHi = true;
		}
		if (tstart >= tend) {
			break;
		}
		tstart = nextVertical(tstart, tend);
	}
	if (hitLo) {
		c->record(ystart, yend, this->direction);
	}
	return false;
}

Curve* Curve::getSubCurve(double ystart, double yend) {
	return getSubCurve(ystart, yend, this->direction);
}

int32_t Curve::compareTo(Curve* that, $doubles* yrange) {
	$useLocalCurrentObjectStackCache();
	double y0 = $nc(yrange)->get(0);
	double y1 = yrange->get(1);
	double var$0 = $Math::min(y1, this->getYBot());
	y1 = $Math::min(var$0, $nc(that)->getYBot());
	if (y1 <= yrange->get(0)) {
		$nc($System::err)->println($$str({"this == "_s, this}));
		$nc($System::err)->println($$str({"that == "_s, that}));
		$nc($System::out)->println($$str({"target range = "_s, $$str(yrange->get(0)), "=>"_s, $$str(yrange->get(1))}));
		$throwNew($InternalError, $$str({"backstepping from "_s, $$str(yrange->get(0)), " to "_s, $$str(y1)}));
	}
	yrange->set(1, y1);
	double var$1 = this->getXMax();
	if (var$1 <= $nc(that)->getXMin()) {
		double var$2 = this->getXMin();
		if (var$2 == that->getXMax()) {
			return 0;
		}
		return -1;
	}
	double var$3 = this->getXMin();
	if (var$3 >= $nc(that)->getXMax()) {
		return 1;
	}
	double s0 = this->TforY(y0);
	double ys0 = this->YforT(s0);
	if (ys0 < y0) {
		s0 = refineTforY(s0, ys0, y0);
		ys0 = this->YforT(s0);
	}
	double s1 = this->TforY(y1);
	if (this->YforT(s1) < y0) {
		s1 = refineTforY(s1, this->YforT(s1), y0);
	}
	double t0 = $nc(that)->TforY(y0);
	double yt0 = that->YforT(t0);
	if (yt0 < y0) {
		t0 = that->refineTforY(t0, yt0, y0);
		yt0 = that->YforT(t0);
	}
	double t1 = that->TforY(y1);
	if (that->YforT(t1) < y0) {
		t1 = that->refineTforY(t1, that->YforT(t1), y0);
	}
	double xs0 = this->XforT(s0);
	double xt0 = that->XforT(t0);
	double var$4 = $Math::abs(y0);
	double scale = $Math::max(var$4, $Math::abs(y1));
	double ymin = $Math::max(scale * 1.0E-14, 1.0E-300);
	if (fairlyClose(xs0, xt0)) {
		double bump = ymin;
		double maxbump = $Math::min(ymin * 1.0E13, (y1 - y0) * 0.1);
		double y = y0 + bump;
		while (y <= y1) {
			double var$5 = this->XforY(y);
			if (fairlyClose(var$5, that->XforY(y))) {
				if ((bump *= 2) > maxbump) {
					bump = maxbump;
				}
			} else {
				y -= bump;
				while (true) {
					bump /= 2;
					double newy = y + bump;
					if (newy <= y) {
						break;
					}
					double var$6 = this->XforY(newy);
					if (fairlyClose(var$6, that->XforY(newy))) {
						y = newy;
					}
				}
				break;
			}
			y += bump;
		}
		if (y > y0) {
			if (y < y1) {
				yrange->set(1, y);
			}
			return 0;
		}
	}
	if (ymin <= 0) {
		$nc($System::out)->println($$str({"ymin = "_s, $$str(ymin)}));
	}
	while (s0 < s1 && t0 < t1) {
		double sh = this->nextVertical(s0, s1);
		double xsh = this->XforT(sh);
		double ysh = this->YforT(sh);
		double th = that->nextVertical(t0, t1);
		double xth = that->XforT(th);
		double yth = that->YforT(th);
		try {
			if (findIntersect(that, yrange, ymin, 0, 0, s0, xs0, ys0, sh, xsh, ysh, t0, xt0, yt0, th, xth, yth)) {
				break;
			}
		} catch ($Throwable& t) {
			$nc($System::err)->println($$str({"Error: "_s, t}));
			$nc($System::err)->println($$str({"y range was "_s, $$str(yrange->get(0)), "=>"_s, $$str(yrange->get(1))}));
			$nc($System::err)->println($$str({"s y range is "_s, $$str(ys0), "=>"_s, $$str(ysh)}));
			$nc($System::err)->println($$str({"t y range is "_s, $$str(yt0), "=>"_s, $$str(yth)}));
			$nc($System::err)->println($$str({"ymin is "_s, $$str(ymin)}));
			return 0;
		}
		if (ysh < yth) {
			if (ysh > yrange->get(0)) {
				if (ysh < yrange->get(1)) {
					yrange->set(1, ysh);
				}
				break;
			}
			s0 = sh;
			xs0 = xsh;
			ys0 = ysh;
		} else {
			if (yth > yrange->get(0)) {
				if (yth < yrange->get(1)) {
					yrange->set(1, yth);
				}
				break;
			}
			t0 = th;
			xt0 = xth;
			yt0 = yth;
		}
	}
	double ymid = (yrange->get(0) + yrange->get(1)) / 2;
	double var$7 = this->XforY(ymid);
	return orderof(var$7, that->XforY(ymid));
}

bool Curve::findIntersect(Curve* that, $doubles* yrange, double ymin, int32_t slevel, int32_t tlevel, double s0, double xs0, double ys0, double s1, double xs1, double ys1, double t0, double xt0, double yt0, double t1, double xt1, double yt1) {
	$useLocalCurrentObjectStackCache();
	if (ys0 > yt1 || yt0 > ys1) {
		return false;
	}
	double var$1 = $Math::min(xs0, xs1);
	bool var$0 = var$1 > $Math::max(xt0, xt1);
	if (!var$0) {
		double var$2 = $Math::max(xs0, xs1);
		var$0 = var$2 < $Math::min(xt0, xt1);
	}
	if (var$0) {
		return false;
	}
	if (s1 - s0 > Curve::TMIN) {
		double s = (s0 + s1) / 2;
		double xs = this->XforT(s);
		double ys = this->YforT(s);
		if (s == s0 || s == s1) {
			$nc($System::out)->println($$str({"s0 = "_s, $$str(s0)}));
			$nc($System::out)->println($$str({"s1 = "_s, $$str(s1)}));
			$throwNew($InternalError, "no s progress!"_s);
		}
		if (t1 - t0 > Curve::TMIN) {
			double t = (t0 + t1) / 2;
			double xt = $nc(that)->XforT(t);
			double yt = that->YforT(t);
			if (t == t0 || t == t1) {
				$nc($System::out)->println($$str({"t0 = "_s, $$str(t0)}));
				$nc($System::out)->println($$str({"t1 = "_s, $$str(t1)}));
				$throwNew($InternalError, "no t progress!"_s);
			}
			if (ys >= yt0 && yt >= ys0) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel + 1, s0, xs0, ys0, s, xs, ys, t0, xt0, yt0, t, xt, yt)) {
					return true;
				}
			}
			if (ys >= yt) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel + 1, s0, xs0, ys0, s, xs, ys, t, xt, yt, t1, xt1, yt1)) {
					return true;
				}
			}
			if (yt >= ys) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel + 1, s, xs, ys, s1, xs1, ys1, t0, xt0, yt0, t, xt, yt)) {
					return true;
				}
			}
			if (ys1 >= yt && yt1 >= ys) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel + 1, s, xs, ys, s1, xs1, ys1, t, xt, yt, t1, xt1, yt1)) {
					return true;
				}
			}
		} else {
			if (ys >= yt0) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel, s0, xs0, ys0, s, xs, ys, t0, xt0, yt0, t1, xt1, yt1)) {
					return true;
				}
			}
			if (yt1 >= ys) {
				if (findIntersect(that, yrange, ymin, slevel + 1, tlevel, s, xs, ys, s1, xs1, ys1, t0, xt0, yt0, t1, xt1, yt1)) {
					return true;
				}
			}
		}
	} else if (t1 - t0 > Curve::TMIN) {
		double t = (t0 + t1) / 2;
		double xt = $nc(that)->XforT(t);
		double yt = that->YforT(t);
		if (t == t0 || t == t1) {
			$nc($System::out)->println($$str({"t0 = "_s, $$str(t0)}));
			$nc($System::out)->println($$str({"t1 = "_s, $$str(t1)}));
			$throwNew($InternalError, "no t progress!"_s);
		}
		if (yt >= ys0) {
			if (findIntersect(that, yrange, ymin, slevel, tlevel + 1, s0, xs0, ys0, s1, xs1, ys1, t0, xt0, yt0, t, xt, yt)) {
				return true;
			}
		}
		if (ys1 >= yt) {
			if (findIntersect(that, yrange, ymin, slevel, tlevel + 1, s0, xs0, ys0, s1, xs1, ys1, t, xt, yt, t1, xt1, yt1)) {
				return true;
			}
		}
	} else {
		double xlk = xs1 - xs0;
		double ylk = ys1 - ys0;
		double xnm = xt1 - xt0;
		double ynm = yt1 - yt0;
		double xmk = xt0 - xs0;
		double ymk = yt0 - ys0;
		double det = xnm * ylk - ynm * xlk;
		if (det != 0) {
			double detinv = 1 / det;
			double s = (xnm * ymk - ynm * xmk) * detinv;
			double t = (xlk * ymk - ylk * xmk) * detinv;
			if (s >= 0 && s <= 1 && t >= 0 && t <= 1) {
				s = s0 + s * (s1 - s0);
				t = t0 + t * (t1 - t0);
				if (s < 0 || s > 1 || t < 0 || t > 1) {
					$nc($System::out)->println("Uh oh!"_s);
				}
				double var$3 = this->YforT(s);
				double y = (var$3 + $nc(that)->YforT(t)) / 2;
				if (y <= $nc(yrange)->get(1) && y > yrange->get(0)) {
					yrange->set(1, y);
					return true;
				}
			}
		}
	}
	return false;
}

double Curve::refineTforY(double t0, double yt0, double y0) {
	double t1 = (double)1;
	while (true) {
		double th = (t0 + t1) / 2;
		if (th == t0 || th == t1) {
			return t1;
		}
		double y = YforT(th);
		if (y < y0) {
			t0 = th;
			yt0 = y;
		} else if (y > y0) {
			t1 = th;
		} else {
			return t1;
		}
	}
}

bool Curve::fairlyClose(double v1, double v2) {
	double var$0 = $Math::abs(v1 - v2);
	double var$2 = $Math::abs(v1);
	double var$1 = $Math::max(var$2, $Math::abs(v2)) * 1.0E-10;
	return (var$0 < var$1);
}

Curve::Curve() {
}

void clinit$Curve($Class* class$) {
	Curve::TMIN = 0.001;
}

$Class* Curve::load$($String* name, bool initialize) {
	$loadClass(Curve, name, initialize, &_Curve_ClassInfo_, clinit$Curve, allocate$Curve);
	return class$;
}

$Class* Curve::class$ = nullptr;

		} // geom
	} // awt
} // sun