#include <sun/font/GraphicComponent.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/InternalError.h>
#include <sun/font/BidiUtils.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/Decoration.h>
#include <sun/font/TextLineComponent.h>
#include <jcpp.h>

#undef GRAPHIC_LEADING
#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNCHANGED

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BidiUtils = ::sun::font::BidiUtils;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $Decoration$Label = ::sun::font::Decoration$Label;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace sun {
	namespace font {

$FieldInfo _GraphicComponent_FieldInfo_[] = {
	{"GRAPHIC_LEADING", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GraphicComponent, GRAPHIC_LEADING)},
	{"graphic", "Ljava/awt/font/GraphicAttribute;", nullptr, $PRIVATE, $field(GraphicComponent, graphic)},
	{"graphicCount", "I", nullptr, $PRIVATE, $field(GraphicComponent, graphicCount)},
	{"charsLtoV", "[I", nullptr, $PRIVATE, $field(GraphicComponent, charsLtoV)},
	{"levels", "[B", nullptr, $PRIVATE, $field(GraphicComponent, levels)},
	{"visualBounds", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(GraphicComponent, visualBounds)},
	{"graphicAdvance", "F", nullptr, $PRIVATE, $field(GraphicComponent, graphicAdvance)},
	{"baseTx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(GraphicComponent, baseTx)},
	{"cm", "Lsun/font/CoreMetrics;", nullptr, $PRIVATE, $field(GraphicComponent, cm)},
	{"decorator", "Lsun/font/Decoration;", nullptr, $PRIVATE, $field(GraphicComponent, decorator)},
	{}
};

$MethodInfo _GraphicComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/font/GraphicAttribute;Lsun/font/Decoration;[I[BIILjava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(GraphicComponent::*)($GraphicAttribute*,$Decoration*,$ints*,$bytes*,int32_t,int32_t,$AffineTransform*)>(&GraphicComponent::init$))},
	{"<init>", "(Lsun/font/GraphicComponent;III)V", nullptr, $PRIVATE, $method(static_cast<void(GraphicComponent::*)(GraphicComponent*,int32_t,int32_t,int32_t)>(&GraphicComponent::init$))},
	{"applyJustificationDeltas", "([FI[Z)Lsun/font/TextLineComponent;", nullptr, $PUBLIC},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC},
	{"createCoreMetrics", "(Ljava/awt/font/GraphicAttribute;)Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CoreMetrics*(*)($GraphicAttribute*)>(&GraphicComponent::createCoreMetrics))},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"getAdvance", "()F", nullptr, $PUBLIC},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC},
	{"getCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCharX", "(I)F", nullptr, $PUBLIC},
	{"getCharY", "(I)F", nullptr, $PUBLIC},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC},
	{"getItalicAngle", "()F", nullptr, $PUBLIC, $method(static_cast<float(GraphicComponent::*)()>(&GraphicComponent::getItalicAngle))},
	{"getItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getJustificationInfos", "([Ljava/awt/font/GlyphJustificationInfo;III)V", nullptr, $PUBLIC},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getNumCharacters", "()I", nullptr, $PUBLIC},
	{"getNumJustificationInfos", "()I", nullptr, $PUBLIC},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getSubset", "(III)Lsun/font/TextLineComponent;", nullptr, $PUBLIC},
	{"getVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"handleDraw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"handleGetCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"handleGetOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"handleGetVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"initLocalOrdering", "([I[BII)V", nullptr, $PRIVATE, $method(static_cast<void(GraphicComponent::*)($ints*,$bytes*,int32_t,int32_t)>(&GraphicComponent::initLocalOrdering))},
	{"isSimple", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GraphicComponent_InnerClassesInfo_[] = {
	{"sun.font.Decoration$Label", "sun.font.Decoration", "Label", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _GraphicComponent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.GraphicComponent",
	"java.lang.Object",
	"sun.font.TextLineComponent,sun.font.Decoration$Label",
	_GraphicComponent_FieldInfo_,
	_GraphicComponent_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicComponent_InnerClassesInfo_
};

$Object* allocate$GraphicComponent($Class* clazz) {
	return $of($alloc(GraphicComponent));
}

int32_t GraphicComponent::hashCode() {
	 return this->$TextLineComponent::hashCode();
}

bool GraphicComponent::equals(Object$* arg0) {
	 return this->$TextLineComponent::equals(arg0);
}

$Object* GraphicComponent::clone() {
	 return this->$TextLineComponent::clone();
}

void GraphicComponent::finalize() {
	this->$TextLineComponent::finalize();
}

float GraphicComponent::GRAPHIC_LEADING = 0.0;

void GraphicComponent::init$($GraphicAttribute* graphic, $Decoration* decorator, $ints* charsLtoV, $bytes* levels, int32_t start, int32_t limit, $AffineTransform* baseTx) {
	$set(this, visualBounds, nullptr);
	if (limit <= start) {
		$throwNew($IllegalArgumentException, "0 or negative length in GraphicComponent"_s);
	}
	$set(this, graphic, graphic);
	this->graphicAdvance = $nc(graphic)->getAdvance();
	$set(this, decorator, decorator);
	$set(this, cm, createCoreMetrics(graphic));
	$set(this, baseTx, baseTx);
	initLocalOrdering(charsLtoV, levels, start, limit);
}

void GraphicComponent::init$(GraphicComponent* parent, int32_t start, int32_t limit, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	$set(this, visualBounds, nullptr);
	$set(this, graphic, $nc(parent)->graphic);
	this->graphicAdvance = parent->graphicAdvance;
	$set(this, decorator, parent->decorator);
	$set(this, cm, parent->cm);
	$set(this, baseTx, parent->baseTx);
	$var($ints, charsLtoV, nullptr);
	$var($bytes, levels, nullptr);
	if (dir == $TextLineComponent::UNCHANGED) {
		$assign(charsLtoV, parent->charsLtoV);
		$assign(levels, parent->levels);
	} else if (dir == $TextLineComponent::LEFT_TO_RIGHT || dir == $TextLineComponent::RIGHT_TO_LEFT) {
		limit -= start;
		start = 0;
		if (dir == $TextLineComponent::RIGHT_TO_LEFT) {
			$assign(charsLtoV, $new($ints, limit));
			$assign(levels, $new($bytes, limit));
			for (int32_t i = 0; i < limit; ++i) {
				charsLtoV->set(i, limit - i - 1);
				levels->set(i, (int8_t)1);
			}
		}
	} else {
		$throwNew($IllegalArgumentException, "Invalid direction flag"_s);
	}
	initLocalOrdering(charsLtoV, levels, start, limit);
}

void GraphicComponent::initLocalOrdering($ints* charsLtoV, $bytes* levels, int32_t start, int32_t limit) {
	this->graphicCount = limit - start;
	if (charsLtoV == nullptr || $nc(charsLtoV)->length == this->graphicCount) {
		$set(this, charsLtoV, charsLtoV);
	} else {
		$set(this, charsLtoV, $BidiUtils::createNormalizedMap(charsLtoV, levels, start, limit));
	}
	if (levels == nullptr || $nc(levels)->length == this->graphicCount) {
		$set(this, levels, levels);
	} else {
		$set(this, levels, $new($bytes, this->graphicCount));
		$System::arraycopy(levels, start, this->levels, 0, this->graphicCount);
	}
}

bool GraphicComponent::isSimple() {
	return false;
}

$Rectangle* GraphicComponent::getPixelBounds($FontRenderContext* frc, float x, float y) {
	$throwNew($InternalError, "do not call if isSimple returns false"_s);
	$shouldNotReachHere();
}

$Rectangle2D* GraphicComponent::handleGetVisualBounds() {
	$var($Rectangle2D, bounds, $nc(this->graphic)->getBounds());
	float width = (float)$nc(bounds)->getWidth() + this->graphicAdvance * (this->graphicCount - 1);
	float var$0 = (float)bounds->getX();
	float var$1 = (float)bounds->getY();
	float var$2 = width;
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)bounds->getHeight());
}

$CoreMetrics* GraphicComponent::getCoreMetrics() {
	return this->cm;
}

$CoreMetrics* GraphicComponent::createCoreMetrics($GraphicAttribute* graphic) {
	$init(GraphicComponent);
	float var$0 = $nc(graphic)->getAscent();
	float var$1 = graphic->getDescent();
	float var$2 = GraphicComponent::GRAPHIC_LEADING;
	float var$4 = graphic->getAscent();
	float var$3 = var$4 + graphic->getDescent() + GraphicComponent::GRAPHIC_LEADING;
	int32_t var$5 = graphic->getAlignment();
	$var($floats, var$6, $new($floats, {
		(float)0,
		-graphic->getAscent() / 2,
		-graphic->getAscent()
	}));
	float var$7 = -graphic->getAscent() / 2;
	float var$8 = graphic->getAscent() / 12;
	float var$9 = graphic->getDescent() / 3;
	return $new($CoreMetrics, var$0, var$1, var$2, var$3, var$5, var$6, var$7, var$8, var$9, graphic->getAscent() / 12, (float)0, (float)0);
}

float GraphicComponent::getItalicAngle() {
	return (float)0;
}

$Rectangle2D* GraphicComponent::getVisualBounds() {
	if (this->visualBounds == nullptr) {
		$set(this, visualBounds, $nc(this->decorator)->getVisualBounds(this));
	}
	$var($Rectangle2D$Float, bounds, $new($Rectangle2D$Float));
	bounds->setRect(this->visualBounds);
	return bounds;
}

$Shape* GraphicComponent::handleGetOutline(float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, matrix, $new($doubles, {
		(double)1,
		(double)0,
		(double)0,
		(double)1,
		(double)x,
		(double)y
	}));
	if (this->graphicCount == 1) {
		$var($AffineTransform, tx, $new($AffineTransform, matrix));
		return $nc(this->graphic)->getOutline(tx);
	}
	$var($GeneralPath, gp, $new($GeneralPath));
	for (int32_t i = 0; i < this->graphicCount; ++i) {
		$var($AffineTransform, tx, $new($AffineTransform, matrix));
		gp->append($($nc(this->graphic)->getOutline(tx)), false);
		(*matrix)[4] += this->graphicAdvance;
	}
	return gp;
}

$AffineTransform* GraphicComponent::getBaselineTransform() {
	return this->baseTx;
}

$Shape* GraphicComponent::getOutline(float x, float y) {
	return $nc(this->decorator)->getOutline(this, x, y);
}

void GraphicComponent::handleDraw($Graphics2D* g2d, float x, float y) {
	for (int32_t i = 0; i < this->graphicCount; ++i) {
		$nc(this->graphic)->draw(g2d, x, y);
		x += this->graphicAdvance;
	}
}

void GraphicComponent::draw($Graphics2D* g2d, float x, float y) {
	$nc(this->decorator)->drawTextAndDecorations(this, g2d, x, y);
}

$Rectangle2D* GraphicComponent::getCharVisualBounds(int32_t index) {
	return $nc(this->decorator)->getCharVisualBounds(this, index);
}

int32_t GraphicComponent::getNumCharacters() {
	return this->graphicCount;
}

float GraphicComponent::getCharX(int32_t index) {
	int32_t visIndex = this->charsLtoV == nullptr ? index : $nc(this->charsLtoV)->get(index);
	return this->graphicAdvance * visIndex;
}

float GraphicComponent::getCharY(int32_t index) {
	return (float)0;
}

float GraphicComponent::getCharAdvance(int32_t index) {
	return this->graphicAdvance;
}

bool GraphicComponent::caretAtOffsetIsValid(int32_t index) {
	return true;
}

$Rectangle2D* GraphicComponent::handleGetCharVisualBounds(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(this->graphic)->getBounds());
	$var($Rectangle2D$Float, charBounds, $new($Rectangle2D$Float));
	charBounds->setRect(bounds);
	charBounds->x += this->graphicAdvance * index;
	return charBounds;
}

int32_t GraphicComponent::getLineBreakIndex(int32_t start, float width) {
	int32_t index = $cast(int32_t, (width / this->graphicAdvance));
	if (index > this->graphicCount - start) {
		index = this->graphicCount - start;
	}
	return index;
}

float GraphicComponent::getAdvanceBetween(int32_t start, int32_t limit) {
	return this->graphicAdvance * (limit - start);
}

$Rectangle2D* GraphicComponent::getLogicalBounds() {
	float left = (float)0;
	float top = -$nc(this->cm)->ascent;
	float width = this->graphicAdvance * this->graphicCount;
	float height = $nc(this->cm)->descent - top;
	return $new($Rectangle2D$Float, left, top, width, height);
}

float GraphicComponent::getAdvance() {
	return this->graphicAdvance * this->graphicCount;
}

$Rectangle2D* GraphicComponent::getItalicBounds() {
	return getLogicalBounds();
}

$TextLineComponent* GraphicComponent::getSubset(int32_t start, int32_t limit, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	if (start < 0 || limit > this->graphicCount || start >= limit) {
		$throwNew($IllegalArgumentException, $$str({"Invalid range.  start="_s, $$str(start), "; limit="_s, $$str(limit)}));
	}
	if (start == 0 && limit == this->graphicCount && dir == $TextLineComponent::UNCHANGED) {
		return this;
	}
	return $new(GraphicComponent, this, start, limit, dir);
}

$String* GraphicComponent::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"[graphic="_s, this->graphic, ":count="_s}));
	$var($String, var$0, $$concat(var$1, $$str(getNumCharacters())));
	return $concat(var$0, "]"_s);
}

int32_t GraphicComponent::getNumJustificationInfos() {
	return 0;
}

void GraphicComponent::getJustificationInfos($GlyphJustificationInfoArray* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) {
}

$TextLineComponent* GraphicComponent::applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) {
	return this;
}

GraphicComponent::GraphicComponent() {
}

void clinit$GraphicComponent($Class* class$) {
	GraphicComponent::GRAPHIC_LEADING = (float)2;
}

$Class* GraphicComponent::load$($String* name, bool initialize) {
	$loadClass(GraphicComponent, name, initialize, &_GraphicComponent_ClassInfo_, clinit$GraphicComponent, allocate$GraphicComponent);
	return class$;
}

$Class* GraphicComponent::class$ = nullptr;

	} // font
} // sun