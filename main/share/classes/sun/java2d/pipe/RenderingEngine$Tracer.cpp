#include <sun/java2d/pipe/RenderingEngine$Tracer.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <sun/awt/geom/PathConsumer2D.h>
#include <sun/java2d/pipe/AATileGenerator.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderingEngine.h>
#include <jcpp.h>

using $BasicStroke = ::java::awt::BasicStroke;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PathConsumer2D = ::sun::awt::geom::PathConsumer2D;
using $AATileGenerator = ::sun::java2d::pipe::AATileGenerator;
using $Region = ::sun::java2d::pipe::Region;
using $RenderingEngine = ::sun::java2d::pipe::RenderingEngine;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RenderingEngine$Tracer_FieldInfo_[] = {
	{"target", "Lsun/java2d/pipe/RenderingEngine;", nullptr, 0, $field(RenderingEngine$Tracer, target)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(RenderingEngine$Tracer, name)},
	{}
};

$MethodInfo _RenderingEngine$Tracer_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/RenderingEngine;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderingEngine$Tracer::*)($RenderingEngine*)>(&RenderingEngine$Tracer::init$))},
	{"createStrokedShape", "(Ljava/awt/Shape;FIIF[FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getAATileGenerator", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZ[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC},
	{"getAATileGenerator", "(DDDDDDDDLsun/java2d/pipe/Region;[I)Lsun/java2d/pipe/AATileGenerator;", nullptr, $PUBLIC},
	{"getMinimumAAPenSize", "()F", nullptr, $PUBLIC},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC},
	{"strokeTo", "(Ljava/awt/Shape;Ljava/awt/geom/AffineTransform;Lsun/java2d/pipe/Region;Ljava/awt/BasicStroke;ZZZLsun/awt/geom/PathConsumer2D;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RenderingEngine$Tracer_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.RenderingEngine$Tracer", "sun.java2d.pipe.RenderingEngine", "Tracer", $STATIC},
	{}
};

$ClassInfo _RenderingEngine$Tracer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.pipe.RenderingEngine$Tracer",
	"sun.java2d.pipe.RenderingEngine",
	nullptr,
	_RenderingEngine$Tracer_FieldInfo_,
	_RenderingEngine$Tracer_MethodInfo_,
	nullptr,
	nullptr,
	_RenderingEngine$Tracer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.RenderingEngine"
};

$Object* allocate$RenderingEngine$Tracer($Class* clazz) {
	return $of($alloc(RenderingEngine$Tracer));
}

void RenderingEngine$Tracer::init$($RenderingEngine* target) {
	$RenderingEngine::init$();
	$set(this, target, target);
	$set(this, name, $nc($of(target))->getClass()->getName());
}

$Shape* RenderingEngine$Tracer::createStrokedShape($Shape* src, float width, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({this->name, ".createStrokedShape("_s, $($nc($of(src))->getClass()->getName()), ", width = "_s, $$str(width), ", caps = "_s, $$str(caps), ", join = "_s, $$str(join), ", miter = "_s, $$str(miterlimit), ", dashes = "_s, dashes, ", dashphase = "_s, $$str(dashphase), ")"_s}));
	return $nc(this->target)->createStrokedShape(src, width, caps, join, miterlimit, dashes, dashphase);
}

void RenderingEngine$Tracer::strokeTo($Shape* src, $AffineTransform* at, $BasicStroke* bs, bool thin, bool normalize, bool antialias, $PathConsumer2D* consumer) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({this->name, ".strokeTo("_s, $($nc($of(src))->getClass()->getName()), ", "_s, at, ", "_s, bs, ", "_s, (thin ? "thin"_s : "wide"_s), ", "_s, (normalize ? "normalized"_s : "pure"_s), ", "_s, (antialias ? "AA"_s : "non-AA"_s), ", "_s}));
	$var($String, var$0, $$concat(var$1, $($nc($of(consumer))->getClass()->getName())));
	$nc($System::out)->println($$concat(var$0, ")"_s));
	$nc(this->target)->strokeTo(src, at, bs, thin, normalize, antialias, consumer);
}

void RenderingEngine$Tracer::strokeTo($Shape* src, $AffineTransform* at, $Region* clip, $BasicStroke* bs, bool thin, bool normalize, bool antialias, $PathConsumer2D* consumer) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({this->name, ".strokeTo("_s, $($nc($of(src))->getClass()->getName()), ", "_s, at, ", "_s, clip, ", "_s, bs, ", "_s, (thin ? "thin"_s : "wide"_s), ", "_s, (normalize ? "normalized"_s : "pure"_s), ", "_s, (antialias ? "AA"_s : "non-AA"_s), ", "_s}));
	$var($String, var$0, $$concat(var$1, $($nc($of(consumer))->getClass()->getName())));
	$nc($System::out)->println($$concat(var$0, ")"_s));
	$nc(this->target)->strokeTo(src, at, clip, bs, thin, normalize, antialias, consumer);
}

float RenderingEngine$Tracer::getMinimumAAPenSize() {
	$nc($System::out)->println($$str({this->name, ".getMinimumAAPenSize()"_s}));
	return $nc(this->target)->getMinimumAAPenSize();
}

$AATileGenerator* RenderingEngine$Tracer::getAATileGenerator($Shape* s, $AffineTransform* at, $Region* clip, $BasicStroke* bs, bool thin, bool normalize, $ints* bbox) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({this->name, ".getAATileGenerator("_s, $($nc($of(s))->getClass()->getName()), ", "_s, at, ", "_s, clip, ", "_s, bs, ", "_s, (thin ? "thin"_s : "wide"_s), ", "_s, (normalize ? "normalized"_s : "pure"_s), ")"_s}));
	return $nc(this->target)->getAATileGenerator(s, at, clip, bs, thin, normalize, bbox);
}

$AATileGenerator* RenderingEngine$Tracer::getAATileGenerator(double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2, $Region* clip, $ints* bbox) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({this->name, ".getAATileGenerator("_s, $$str(x), ", "_s, $$str(y), ", "_s, $$str(dx1), ", "_s, $$str(dy1), ", "_s, $$str(dx2), ", "_s, $$str(dy2), ", "_s, $$str(lw1), ", "_s, 
	$$str(lw2), ", "_s, clip, ")"_s}));
	return $nc(this->target)->getAATileGenerator(x, y, dx1, dy1, dx2, dy2, lw1, lw2, clip, bbox);
}

RenderingEngine$Tracer::RenderingEngine$Tracer() {
}

$Class* RenderingEngine$Tracer::load$($String* name, bool initialize) {
	$loadClass(RenderingEngine$Tracer, name, initialize, &_RenderingEngine$Tracer_ClassInfo_, allocate$RenderingEngine$Tracer);
	return class$;
}

$Class* RenderingEngine$Tracer::class$ = nullptr;

		} // pipe
	} // java2d
} // sun