#include <sun/font/ExtendedTextSourceLabel.h>

#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration$Label.h>
#include <sun/font/Decoration.h>
#include <sun/font/ExtendedTextLabel.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/StandardGlyphVector.h>
#include <sun/font/TextLineComponent.h>
#include <sun/font/TextSource.h>
#include <jcpp.h>

#undef DEBUG
#undef PRIORITY_INTERCHAR
#undef PRIORITY_NONE
#undef PRIORITY_WHITESPACE
#undef WITHOUT_CONTEXT

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;
using $Decoration$Label = ::sun::font::Decoration$Label;
using $ExtendedTextLabel = ::sun::font::ExtendedTextLabel;
using $FontUtilities = ::sun::font::FontUtilities;
using $GlyphLayout = ::sun::font::GlyphLayout;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;
using $TextLineComponent = ::sun::font::TextLineComponent;
using $TextSource = ::sun::font::TextSource;

namespace sun {
	namespace font {

$FieldInfo _ExtendedTextSourceLabel_FieldInfo_[] = {
	{"source", "Lsun/font/TextSource;", nullptr, 0, $field(ExtendedTextSourceLabel, source)},
	{"decorator", "Lsun/font/Decoration;", nullptr, $PRIVATE, $field(ExtendedTextSourceLabel, decorator)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(ExtendedTextSourceLabel, font)},
	{"baseTX", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(ExtendedTextSourceLabel, baseTX)},
	{"cm", "Lsun/font/CoreMetrics;", nullptr, $PRIVATE, $field(ExtendedTextSourceLabel, cm)},
	{"lb", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(ExtendedTextSourceLabel, lb)},
	{"ab", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(ExtendedTextSourceLabel, ab)},
	{"vb", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(ExtendedTextSourceLabel, vb)},
	{"ib", "Ljava/awt/geom/Rectangle2D;", nullptr, 0, $field(ExtendedTextSourceLabel, ib)},
	{"gv", "Lsun/font/StandardGlyphVector;", nullptr, 0, $field(ExtendedTextSourceLabel, gv)},
	{"charinfo", "[F", nullptr, 0, $field(ExtendedTextSourceLabel, charinfo)},
	{"posx", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, posx)},
	{"posy", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, posy)},
	{"advx", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, advx)},
	{"advy", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, advy)},
	{"visx", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, visx)},
	{"visy", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, visy)},
	{"visw", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, visw)},
	{"vish", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, vish)},
	{"numvals", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExtendedTextSourceLabel, numvals)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExtendedTextSourceLabel, DEBUG)},
	{}
};

$MethodInfo _ExtendedTextSourceLabel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/font/TextSource;Lsun/font/Decoration;)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedTextSourceLabel::*)($TextSource*,$Decoration*)>(&ExtendedTextSourceLabel::init$))},
	{"<init>", "(Lsun/font/TextSource;Lsun/font/ExtendedTextSourceLabel;I)V", nullptr, $PUBLIC, $method(static_cast<void(ExtendedTextSourceLabel::*)($TextSource*,ExtendedTextSourceLabel*,int32_t)>(&ExtendedTextSourceLabel::init$))},
	{"applyJustificationDeltas", "([FI[Z)Lsun/font/TextLineComponent;", nullptr, $PUBLIC},
	{"caretAtOffsetIsValid", "(I)Z", nullptr, $PUBLIC},
	{"createAlignBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"createCharinfo", "()[F", nullptr, $PROTECTED},
	{"createGV", "()Lsun/font/StandardGlyphVector;", nullptr, $PROTECTED},
	{"createItalicBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"createLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PROTECTED},
	{"draw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"finishInit", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedTextSourceLabel::*)()>(&ExtendedTextSourceLabel::finishInit))},
	{"getAdvance", "()F", nullptr, $PUBLIC},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC},
	{"getAlignBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getBaselineTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getCharAdvance", "(I)F", nullptr, $PUBLIC},
	{"getCharVisualBounds", "(IFF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getCharX", "(I)F", nullptr, $PUBLIC},
	{"getCharY", "(I)F", nullptr, $PUBLIC},
	{"getCharinfo", "()[F", nullptr, $PRIVATE, $method(static_cast<$floats*(ExtendedTextSourceLabel::*)()>(&ExtendedTextSourceLabel::getCharinfo))},
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC},
	{"getGV", "()Lsun/font/StandardGlyphVector;", nullptr, $PRIVATE, $method(static_cast<$StandardGlyphVector*(ExtendedTextSourceLabel::*)()>(&ExtendedTextSourceLabel::getGV))},
	{"getItalicBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getJustificationInfos", "([Ljava/awt/font/GlyphJustificationInfo;III)V", nullptr, $PUBLIC},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getLogicalBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getNumCharacters", "()I", nullptr, $PUBLIC},
	{"getNumJustificationInfos", "()I", nullptr, $PUBLIC},
	{"getOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getPixelBounds", "(Ljava/awt/font/FontRenderContext;FF)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getSubset", "(III)Lsun/font/TextLineComponent;", nullptr, $PUBLIC},
	{"getVisualBounds", "(FF)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"handleDraw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC},
	{"handleGetCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"handleGetOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"handleGetVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"isSimple", "()Z", nullptr, $PUBLIC},
	{"l2v", "(I)I", nullptr, $PROTECTED},
	{"logicalToVisual", "(I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"v2l", "(I)I", nullptr, $PROTECTED},
	{"validate", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedTextSourceLabel::*)(int32_t)>(&ExtendedTextSourceLabel::validate))},
	{"visualToLogical", "(I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ExtendedTextSourceLabel_InnerClassesInfo_[] = {
	{"sun.font.Decoration$Label", "sun.font.Decoration", "Label", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedTextSourceLabel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.ExtendedTextSourceLabel",
	"sun.font.ExtendedTextLabel",
	"sun.font.Decoration$Label",
	_ExtendedTextSourceLabel_FieldInfo_,
	_ExtendedTextSourceLabel_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedTextSourceLabel_InnerClassesInfo_
};

$Object* allocate$ExtendedTextSourceLabel($Class* clazz) {
	return $of($alloc(ExtendedTextSourceLabel));
}

int32_t ExtendedTextSourceLabel::hashCode() {
	 return this->$ExtendedTextLabel::hashCode();
}

bool ExtendedTextSourceLabel::equals(Object$* arg0) {
	 return this->$ExtendedTextLabel::equals(arg0);
}

$Object* ExtendedTextSourceLabel::clone() {
	 return this->$ExtendedTextLabel::clone();
}

void ExtendedTextSourceLabel::finalize() {
	this->$ExtendedTextLabel::finalize();
}

bool ExtendedTextSourceLabel::DEBUG = false;

void ExtendedTextSourceLabel::init$($TextSource* source, $Decoration* decorator) {
	$ExtendedTextLabel::init$();
	$set(this, source, source);
	$set(this, decorator, decorator);
	finishInit();
}

void ExtendedTextSourceLabel::init$($TextSource* source, ExtendedTextSourceLabel* oldLabel, int32_t offset) {
	$ExtendedTextLabel::init$();
	$set(this, source, source);
	$set(this, decorator, $nc(oldLabel)->decorator);
	finishInit();
}

void ExtendedTextSourceLabel::finishInit() {
	$useLocalCurrentObjectStackCache();
	$set(this, font, $nc(this->source)->getFont());
	$var($Map, atts, $nc(this->font)->getAttributes());
	$set(this, baseTX, $AttributeValues::getBaselineTransform(atts));
	if (this->baseTX == nullptr) {
		$set(this, cm, $nc(this->source)->getCoreMetrics());
	} else {
		$var($AffineTransform, charTX, $AttributeValues::getCharTransform(atts));
		if (charTX == nullptr) {
			$assign(charTX, $new($AffineTransform));
		}
		$set(this, font, $nc(this->font)->deriveFont(charTX));
		$var($chars, var$0, $nc(this->source)->getChars());
		int32_t var$1 = $nc(this->source)->getStart();
		int32_t var$3 = $nc(this->source)->getStart();
		int32_t var$2 = var$3 + $nc(this->source)->getLength();
		$var($LineMetrics, lm, $nc(this->font)->getLineMetrics(var$0, var$1, var$2, $($nc(this->source)->getFRC())));
		$set(this, cm, $CoreMetrics::get(lm));
	}
}

$Rectangle2D* ExtendedTextSourceLabel::getLogicalBounds() {
	return getLogicalBounds((float)0, (float)0);
}

$Rectangle2D* ExtendedTextSourceLabel::getLogicalBounds(float x, float y) {
	if (this->lb == nullptr) {
		$set(this, lb, createLogicalBounds());
	}
	float var$0 = (float)($nc(this->lb)->getX() + x);
	float var$1 = (float)($nc(this->lb)->getY() + y);
	float var$2 = (float)$nc(this->lb)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->lb)->getHeight());
}

float ExtendedTextSourceLabel::getAdvance() {
	if (this->lb == nullptr) {
		$set(this, lb, createLogicalBounds());
	}
	return (float)$nc(this->lb)->getWidth();
}

$Rectangle2D* ExtendedTextSourceLabel::getVisualBounds(float x, float y) {
	if (this->vb == nullptr) {
		$set(this, vb, $nc(this->decorator)->getVisualBounds(this));
	}
	float var$0 = (float)($nc(this->vb)->getX() + x);
	float var$1 = (float)($nc(this->vb)->getY() + y);
	float var$2 = (float)$nc(this->vb)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->vb)->getHeight());
}

$Rectangle2D* ExtendedTextSourceLabel::getAlignBounds(float x, float y) {
	if (this->ab == nullptr) {
		$set(this, ab, createAlignBounds());
	}
	float var$0 = (float)($nc(this->ab)->getX() + x);
	float var$1 = (float)($nc(this->ab)->getY() + y);
	float var$2 = (float)$nc(this->ab)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->ab)->getHeight());
}

$Rectangle2D* ExtendedTextSourceLabel::getItalicBounds(float x, float y) {
	if (this->ib == nullptr) {
		$set(this, ib, createItalicBounds());
	}
	float var$0 = (float)($nc(this->ib)->getX() + x);
	float var$1 = (float)($nc(this->ib)->getY() + y);
	float var$2 = (float)$nc(this->ib)->getWidth();
	return $new($Rectangle2D$Float, var$0, var$1, var$2, (float)$nc(this->ib)->getHeight());
}

$Rectangle* ExtendedTextSourceLabel::getPixelBounds($FontRenderContext* frc, float x, float y) {
	return $nc($(getGV()))->getPixelBounds(frc, x, y);
}

bool ExtendedTextSourceLabel::isSimple() {
	return this->decorator == $Decoration::getPlainDecoration() && this->baseTX == nullptr;
}

$AffineTransform* ExtendedTextSourceLabel::getBaselineTransform() {
	return this->baseTX;
}

$Shape* ExtendedTextSourceLabel::handleGetOutline(float x, float y) {
	return $nc($(getGV()))->getOutline(x, y);
}

$Shape* ExtendedTextSourceLabel::getOutline(float x, float y) {
	return $nc(this->decorator)->getOutline(this, x, y);
}

void ExtendedTextSourceLabel::handleDraw($Graphics2D* g, float x, float y) {
	$nc(g)->drawGlyphVector($(getGV()), x, y);
}

void ExtendedTextSourceLabel::draw($Graphics2D* g, float x, float y) {
	$nc(this->decorator)->drawTextAndDecorations(this, g, x, y);
}

$Rectangle2D* ExtendedTextSourceLabel::createLogicalBounds() {
	return $nc($(getGV()))->getLogicalBounds();
}

$Rectangle2D* ExtendedTextSourceLabel::handleGetVisualBounds() {
	return $nc($(getGV()))->getVisualBounds();
}

$Rectangle2D* ExtendedTextSourceLabel::createAlignBounds() {
	$var($floats, info, getCharinfo());
	float al = 0.0f;
	float at = -$nc(this->cm)->ascent;
	float aw = 0.0f;
	float ah = $nc(this->cm)->ascent + $nc(this->cm)->descent;
	if (this->charinfo == nullptr || $nc(this->charinfo)->length == 0) {
		return $new($Rectangle2D$Float, al, at, aw, ah);
	}
	bool lineIsLTR = ((int32_t)($nc(this->source)->getLayoutFlags() & (uint32_t)8)) == 0;
	int32_t rn = $nc(info)->length - ExtendedTextSourceLabel::numvals;
	if (lineIsLTR) {
		while (rn > 0 && info->get(rn + ExtendedTextSourceLabel::visw) == 0) {
			rn -= ExtendedTextSourceLabel::numvals;
		}
	}
	if (rn >= 0) {
		int32_t ln = 0;
		while (ln < rn && ((info->get(ln + ExtendedTextSourceLabel::advx) == 0) || (!lineIsLTR && info->get(ln + ExtendedTextSourceLabel::visw) == 0))) {
			ln += ExtendedTextSourceLabel::numvals;
		}
		al = $Math::max(0.0f, info->get(ln + ExtendedTextSourceLabel::posx));
		aw = info->get(rn + ExtendedTextSourceLabel::posx) + info->get(rn + ExtendedTextSourceLabel::advx) - al;
	}
	return $new($Rectangle2D$Float, al, at, aw, ah);
}

$Rectangle2D* ExtendedTextSourceLabel::createItalicBounds() {
	float ia = $nc(this->cm)->italicAngle;
	$var($Rectangle2D, lb, getLogicalBounds());
	float l = (float)$nc(lb)->getMinX();
	float t = -$nc(this->cm)->ascent;
	float r = (float)lb->getMaxX();
	float b = $nc(this->cm)->descent;
	if (ia != 0) {
		if (ia > 0) {
			l -= ia * (b - $nc(this->cm)->ssOffset);
			r -= ia * (t - $nc(this->cm)->ssOffset);
		} else {
			l -= ia * (t - $nc(this->cm)->ssOffset);
			r -= ia * (b - $nc(this->cm)->ssOffset);
		}
	}
	return $new($Rectangle2D$Float, l, t, r - l, b - t);
}

$StandardGlyphVector* ExtendedTextSourceLabel::getGV() {
	if (this->gv == nullptr) {
		$set(this, gv, createGV());
	}
	return this->gv;
}

$StandardGlyphVector* ExtendedTextSourceLabel::createGV() {
	$useLocalCurrentObjectStackCache();
	$var($FontRenderContext, frc, $nc(this->source)->getFRC());
	int32_t flags = $nc(this->source)->getLayoutFlags();
	$var($chars, context, $nc(this->source)->getChars());
	int32_t start = $nc(this->source)->getStart();
	int32_t length = $nc(this->source)->getLength();
	$var($GlyphLayout, gl, $GlyphLayout::get(nullptr));
	$set(this, gv, $nc(gl)->layout(this->font, frc, context, start, length, flags, nullptr));
	$GlyphLayout::done(gl);
	return this->gv;
}

int32_t ExtendedTextSourceLabel::getNumCharacters() {
	return $nc(this->source)->getLength();
}

$CoreMetrics* ExtendedTextSourceLabel::getCoreMetrics() {
	return this->cm;
}

float ExtendedTextSourceLabel::getCharX(int32_t index) {
	validate(index);
	$var($floats, charinfo, getCharinfo());
	int32_t idx = l2v(index) * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::posx;
	if (charinfo == nullptr || idx >= $nc(charinfo)->length) {
		return 0.0f;
	} else {
		return charinfo->get(idx);
	}
}

float ExtendedTextSourceLabel::getCharY(int32_t index) {
	validate(index);
	$var($floats, charinfo, getCharinfo());
	int32_t idx = l2v(index) * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::posy;
	if (charinfo == nullptr || idx >= $nc(charinfo)->length) {
		return 0.0f;
	} else {
		return charinfo->get(idx);
	}
}

float ExtendedTextSourceLabel::getCharAdvance(int32_t index) {
	validate(index);
	$var($floats, charinfo, getCharinfo());
	int32_t idx = l2v(index) * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx;
	if (charinfo == nullptr || idx >= $nc(charinfo)->length) {
		return 0.0f;
	} else {
		return charinfo->get(idx);
	}
}

$Rectangle2D* ExtendedTextSourceLabel::handleGetCharVisualBounds(int32_t index) {
	validate(index);
	$var($floats, charinfo, getCharinfo());
	index = l2v(index) * ExtendedTextSourceLabel::numvals;
	if (charinfo == nullptr || (index + ExtendedTextSourceLabel::vish) >= $nc(charinfo)->length) {
		return $new($Rectangle2D$Float);
	}
	return $new($Rectangle2D$Float, $nc(charinfo)->get(index + ExtendedTextSourceLabel::visx), charinfo->get(index + ExtendedTextSourceLabel::visy), charinfo->get(index + ExtendedTextSourceLabel::visw), charinfo->get(index + ExtendedTextSourceLabel::vish));
}

$Rectangle2D* ExtendedTextSourceLabel::getCharVisualBounds(int32_t index, float x, float y) {
	$var($Rectangle2D, bounds, $nc(this->decorator)->getCharVisualBounds(this, index));
	if (x != 0 || y != 0) {
		double var$0 = bounds->getX() + x;
		double var$1 = bounds->getY() + y;
		double var$2 = bounds->getWidth();
		$nc(bounds)->setRect(var$0, var$1, var$2, bounds->getHeight());
	}
	return bounds;
}

void ExtendedTextSourceLabel::validate(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0) {
		$throwNew($IllegalArgumentException, $$str({"index "_s, $$str(index), " < 0"_s}));
	} else if (index >= $nc(this->source)->getLength()) {
		$throwNew($IllegalArgumentException, $$str({"index "_s, $$str(index), " < "_s, $$str($nc(this->source)->getLength())}));
	}
}

int32_t ExtendedTextSourceLabel::logicalToVisual(int32_t logicalIndex) {
	validate(logicalIndex);
	return l2v(logicalIndex);
}

int32_t ExtendedTextSourceLabel::visualToLogical(int32_t visualIndex) {
	validate(visualIndex);
	return v2l(visualIndex);
}

int32_t ExtendedTextSourceLabel::getLineBreakIndex(int32_t start, float width) {
	$var($floats, charinfo, getCharinfo());
	int32_t length = $nc(this->source)->getLength();
	--start;
	while (width >= 0 && ++start < length) {
		int32_t cidx = l2v(start) * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx;
		if (cidx >= $nc(charinfo)->length) {
			break;
		}
		float adv = $nc(charinfo)->get(cidx);
		width -= adv;
	}
	return start;
}

float ExtendedTextSourceLabel::getAdvanceBetween(int32_t start, int32_t limit) {
	float a = 0.0f;
	$var($floats, charinfo, getCharinfo());
	--start;
	while (++start < limit) {
		int32_t cidx = l2v(start) * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx;
		if (cidx >= $nc(charinfo)->length) {
			break;
		}
		a += $nc(charinfo)->get(cidx);
	}
	return a;
}

bool ExtendedTextSourceLabel::caretAtOffsetIsValid(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (offset == 0 || offset == $nc(this->source)->getLength()) {
		return true;
	}
	char16_t c = $nc($($nc(this->source)->getChars()))->get($nc(this->source)->getStart() + offset);
	if (c == u'\t' || c == u'\n' || c == u'\r') {
		return true;
	}
	int32_t v = l2v(offset);
	int32_t idx = v * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx;
	$var($floats, charinfo, getCharinfo());
	if (charinfo == nullptr || idx >= $nc(charinfo)->length) {
		return false;
	} else {
		return charinfo->get(idx) != 0;
	}
}

$floats* ExtendedTextSourceLabel::getCharinfo() {
	if (this->charinfo == nullptr) {
		$set(this, charinfo, createCharinfo());
	}
	return this->charinfo;
}

$floats* ExtendedTextSourceLabel::createCharinfo() {
	$useLocalCurrentObjectStackCache();
	$var($StandardGlyphVector, gv, getGV());
	$var($floats, glyphinfo, nullptr);
	try {
		$assign(glyphinfo, $nc(gv)->getGlyphInfo());
	} catch ($Exception& e) {
		if (ExtendedTextSourceLabel::DEBUG) {
			$nc($System::err)->println($of(this->source));
			e->printStackTrace();
		}
		$assign(glyphinfo, $new($floats, $nc(gv)->getNumGlyphs() * ExtendedTextSourceLabel::numvals));
	}
	int32_t numGlyphs = $nc(gv)->getNumGlyphs();
	if (numGlyphs == 0) {
		return glyphinfo;
	}
	$var($ints, indices, gv->getGlyphCharIndices(0, numGlyphs, nullptr));
	$var($floats, charInfo, $new($floats, $nc(this->source)->getLength() * ExtendedTextSourceLabel::numvals));
	if (ExtendedTextSourceLabel::DEBUG) {
		$nc($System::err)->println($$str({"number of glyphs: "_s, $$str(numGlyphs)}));
		$nc($System::err)->println($$str({"glyphinfo.len: "_s, $$str($nc(glyphinfo)->length)}));
		$nc($System::err)->println($$str({"indices.len: "_s, $$str($nc(indices)->length)}));
		for (int32_t i = 0; i < numGlyphs; ++i) {
			$nc($System::err)->println($$str({"g: "_s, $$str(i), "  v: "_s, $$str(gv->getGlyphCode(i)), ", x: "_s, $$str($nc(glyphinfo)->get(i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::posx)), ", a: "_s, $$str(glyphinfo->get(i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx)), ", n: "_s, $$str($nc(indices)->get(i))}));
		}
	}
	int32_t minIndex = $nc(indices)->get(0);
	int32_t maxIndex = minIndex;
	int32_t cp = 0;
	int32_t cc = 0;
	int32_t gp = 0;
	int32_t gx = 0;
	int32_t gxlimit = numGlyphs;
	int32_t pdelta = ExtendedTextSourceLabel::numvals;
	int32_t xdelta = 1;
	bool rtl = ((int32_t)($nc(this->source)->getLayoutFlags() & (uint32_t)1)) == 1;
	if (rtl) {
		minIndex = indices->get(numGlyphs - 1);
		maxIndex = minIndex;
		cp = charInfo->length - ExtendedTextSourceLabel::numvals;
		gp = $nc(glyphinfo)->length - ExtendedTextSourceLabel::numvals;
		gx = numGlyphs - 1;
		gxlimit = -1;
		pdelta = -ExtendedTextSourceLabel::numvals;
		xdelta = -1;
	}
	float cposl = (float)0;
	float cposr = (float)0;
	float cvisl = (float)0;
	float cvist = (float)0;
	float cvisr = (float)0;
	float cvisb = (float)0;
	float baseline = (float)0;
	while (gx != gxlimit) {
		int32_t clusterExtraGlyphs = 0;
		minIndex = indices->get(gx);
		maxIndex = minIndex;
		cposl = $nc(glyphinfo)->get(gp + ExtendedTextSourceLabel::posx);
		cposr = cposl + glyphinfo->get(gp + ExtendedTextSourceLabel::advx);
		cvisl = glyphinfo->get(gp + ExtendedTextSourceLabel::visx);
		cvist = glyphinfo->get(gp + ExtendedTextSourceLabel::visy);
		cvisr = cvisl + glyphinfo->get(gp + ExtendedTextSourceLabel::visw);
		cvisb = cvist + glyphinfo->get(gp + ExtendedTextSourceLabel::vish);
		gx += xdelta;
		gp += pdelta;
		while (gx != gxlimit && ((glyphinfo->get(gp + ExtendedTextSourceLabel::advx) == 0) || (indices->get(gx) <= maxIndex) || (maxIndex - minIndex > clusterExtraGlyphs))) {
			++clusterExtraGlyphs;
			if (ExtendedTextSourceLabel::DEBUG) {
				$nc($System::err)->println($$str({"gp="_s, $$str(gp), " adv="_s, $$str(glyphinfo->get(gp + ExtendedTextSourceLabel::advx)), " gx="_s, $$str(gx), " i[gx]="_s, $$str(indices->get(gx)), " clusterExtraGlyphs="_s, $$str(clusterExtraGlyphs)}));
			}
			float radvx = glyphinfo->get(gp + ExtendedTextSourceLabel::advx);
			if (radvx != 0) {
				float rposx = glyphinfo->get(gp + ExtendedTextSourceLabel::posx);
				cposl = $Math::min(cposl, rposx);
				cposr = $Math::max(cposr, rposx + radvx);
			}
			float rvisw = glyphinfo->get(gp + ExtendedTextSourceLabel::visw);
			if (rvisw != 0) {
				float rvisx = glyphinfo->get(gp + ExtendedTextSourceLabel::visx);
				float rvisy = glyphinfo->get(gp + ExtendedTextSourceLabel::visy);
				cvisl = $Math::min(cvisl, rvisx);
				cvist = $Math::min(cvist, rvisy);
				cvisr = $Math::max(cvisr, rvisx + rvisw);
				cvisb = $Math::max(cvisb, rvisy + glyphinfo->get(gp + ExtendedTextSourceLabel::vish));
			}
			minIndex = $Math::min(minIndex, indices->get(gx));
			maxIndex = $Math::max(maxIndex, indices->get(gx));
			gx += xdelta;
			gp += pdelta;
		}
		if (ExtendedTextSourceLabel::DEBUG) {
			$nc($System::err)->println($$str({"minIndex = "_s, $$str(minIndex), ", maxIndex = "_s, $$str(maxIndex)}));
		}
		charInfo->set(cp + ExtendedTextSourceLabel::posx, cposl);
		charInfo->set(cp + ExtendedTextSourceLabel::posy, baseline);
		charInfo->set(cp + ExtendedTextSourceLabel::advx, cposr - cposl);
		charInfo->set(cp + ExtendedTextSourceLabel::advy, (float)0);
		charInfo->set(cp + ExtendedTextSourceLabel::visx, cvisl);
		charInfo->set(cp + ExtendedTextSourceLabel::visy, cvist);
		charInfo->set(cp + ExtendedTextSourceLabel::visw, cvisr - cvisl);
		charInfo->set(cp + ExtendedTextSourceLabel::vish, cvisb - cvist);
		++cc;
		int32_t tgt = 0;
		if (gx == gxlimit) {
			tgt = $div(charInfo->length, ExtendedTextSourceLabel::numvals);
		} else {
			tgt = indices->get(gx);
		}
		if (ExtendedTextSourceLabel::DEBUG) {
			$nc($System::err)->println($$str({"gx="_s, $$str(gx), " gxlimit="_s, $$str(gxlimit), " charInfo.len="_s, $$str(charInfo->length), " tgt="_s, $$str(tgt), " cc="_s, $$str(cc), " cp="_s, $$str(cp)}));
		}
		while (cc < tgt) {
			if (rtl) {
				cposr = cposl;
			}
			cvisr -= cvisl;
			cvisb -= cvist;
			cp += pdelta;
			if (cp < 0 || cp >= charInfo->length) {
				if (ExtendedTextSourceLabel::DEBUG) {
					$nc($System::err)->println($$str({"Error : cp="_s, $$str(cp), " charInfo.length="_s, $$str(charInfo->length)}));
				}
				break;
			}
			if (ExtendedTextSourceLabel::DEBUG) {
				$nc($System::err)->println($$str({"Insert charIndex "_s, $$str(cc), " at pos="_s, $$str(cp)}));
			}
			charInfo->set(cp + ExtendedTextSourceLabel::posx, cposr);
			charInfo->set(cp + ExtendedTextSourceLabel::posy, baseline);
			charInfo->set(cp + ExtendedTextSourceLabel::advx, (float)0);
			charInfo->set(cp + ExtendedTextSourceLabel::advy, (float)0);
			charInfo->set(cp + ExtendedTextSourceLabel::visx, cvisl);
			charInfo->set(cp + ExtendedTextSourceLabel::visy, cvist);
			charInfo->set(cp + ExtendedTextSourceLabel::visw, cvisr);
			charInfo->set(cp + ExtendedTextSourceLabel::vish, cvisb);
			++cc;
		}
		cp += pdelta;
	}
	if (ExtendedTextSourceLabel::DEBUG) {
		$var($chars, chars, $nc(this->source)->getChars());
		int32_t start = $nc(this->source)->getStart();
		int32_t length = $nc(this->source)->getLength();
		$nc($System::err)->println($$str({"char info for "_s, $$str(length), " characters"_s}));
		for (int32_t i = 0; i < length * ExtendedTextSourceLabel::numvals;) {
			$var($String, var$14, $$str({" ch: "_s, $($Integer::toHexString($nc(chars)->get(start + v2l($div(i, ExtendedTextSourceLabel::numvals))))), " x: "_s}));
			$var($String, var$13, $$concat(var$14, $$str(charInfo->get(i++))));
			$var($String, var$12, $$concat(var$13, " y: "_s));
			$var($String, var$11, $$concat(var$12, $$str(charInfo->get(i++))));
			$var($String, var$10, $$concat(var$11, " xa: "_s));
			$var($String, var$9, $$concat(var$10, $$str(charInfo->get(i++))));
			$var($String, var$8, $$concat(var$9, " ya: "_s));
			$var($String, var$7, $$concat(var$8, $$str(charInfo->get(i++))));
			$var($String, var$6, $$concat(var$7, " l: "_s));
			$var($String, var$5, $$concat(var$6, $$str(charInfo->get(i++))));
			$var($String, var$4, $$concat(var$5, " t: "_s));
			$var($String, var$3, $$concat(var$4, $$str(charInfo->get(i++))));
			$var($String, var$2, $$concat(var$3, " w: "_s));
			$var($String, var$1, $$concat(var$2, $$str(charInfo->get(i++))));
			$var($String, var$0, $$concat(var$1, " h: "_s));
			$nc($System::err)->println($$concat(var$0, $$str(charInfo->get(i++))));
		}
	}
	return charInfo;
}

int32_t ExtendedTextSourceLabel::l2v(int32_t index) {
	return ((int32_t)($nc(this->source)->getLayoutFlags() & (uint32_t)1)) == 0 ? index : $nc(this->source)->getLength() - 1 - index;
}

int32_t ExtendedTextSourceLabel::v2l(int32_t index) {
	return ((int32_t)($nc(this->source)->getLayoutFlags() & (uint32_t)1)) == 0 ? index : $nc(this->source)->getLength() - 1 - index;
}

$TextLineComponent* ExtendedTextSourceLabel::getSubset(int32_t start, int32_t limit, int32_t dir) {
	return $new(ExtendedTextSourceLabel, $($nc(this->source)->getSubSource(start, limit - start, dir)), this->decorator);
}

$String* ExtendedTextSourceLabel::toString() {
	$useLocalCurrentObjectStackCache();
	{
		return $nc(this->source)->toString($TextSource::WITHOUT_CONTEXT);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($ExtendedTextLabel::toString()));
	sb->append("[source:"_s);
	sb->append($($nc(this->source)->toString($TextSource::WITHOUT_CONTEXT)));
	sb->append(", lb:"_s);
	sb->append($of(this->lb));
	sb->append(", ab:"_s);
	sb->append($of(this->ab));
	sb->append(", vb:"_s);
	sb->append($of(this->vb));
	sb->append(", gv:"_s);
	sb->append($of(this->gv));
	sb->append(", ci: "_s);
	if (this->charinfo == nullptr) {
		sb->append("null"_s);
	} else {
		sb->append($nc(this->charinfo)->get(0));
		for (int32_t i = 1; i < $nc(this->charinfo)->length;) {
			sb->append($mod(i, ExtendedTextSourceLabel::numvals) == 0 ? "; "_s : ", "_s);
			sb->append($nc(this->charinfo)->get(i));
		}
	}
	sb->append("]"_s);
	return sb->toString();
}

int32_t ExtendedTextSourceLabel::getNumJustificationInfos() {
	return $nc($(getGV()))->getNumGlyphs();
}

void ExtendedTextSourceLabel::getJustificationInfos($GlyphJustificationInfoArray* infos, int32_t infoStart, int32_t charStart, int32_t charLimit) {
	$useLocalCurrentObjectStackCache();
	$var($StandardGlyphVector, gv, getGV());
	$var($floats, charinfo, getCharinfo());
	float size = $nc($($nc(gv)->getFont()))->getSize2D();
	$var($GlyphJustificationInfo, nullInfo, $new($GlyphJustificationInfo, (float)0, false, $GlyphJustificationInfo::PRIORITY_NONE, (float)0, (float)0, false, $GlyphJustificationInfo::PRIORITY_NONE, (float)0, (float)0));
	$var($GlyphJustificationInfo, spaceInfo, $new($GlyphJustificationInfo, size, true, $GlyphJustificationInfo::PRIORITY_WHITESPACE, (float)0, size, true, $GlyphJustificationInfo::PRIORITY_WHITESPACE, (float)0, size / 4.0f));
	$var($GlyphJustificationInfo, kanjiInfo, $new($GlyphJustificationInfo, size, true, $GlyphJustificationInfo::PRIORITY_INTERCHAR, size, size, false, $GlyphJustificationInfo::PRIORITY_NONE, (float)0, (float)0));
	$var($chars, chars, $nc(this->source)->getChars());
	int32_t offset = $nc(this->source)->getStart();
	int32_t numGlyphs = gv->getNumGlyphs();
	int32_t minGlyph = 0;
	int32_t maxGlyph = numGlyphs;
	bool ltr = ((int32_t)($nc(this->source)->getLayoutFlags() & (uint32_t)1)) == 0;
	if (charStart != 0 || charLimit != $nc(this->source)->getLength()) {
		if (ltr) {
			minGlyph = charStart;
			maxGlyph = charLimit;
		} else {
			minGlyph = numGlyphs - charLimit;
			maxGlyph = numGlyphs - charStart;
		}
	}
	for (int32_t i = 0; i < numGlyphs; ++i) {
		$var($GlyphJustificationInfo, info, nullptr);
		if (i >= minGlyph && i < maxGlyph) {
			if ($nc(charinfo)->get(i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx) == 0) {
				$assign(info, nullInfo);
			} else {
				int32_t ci = v2l(i);
				char16_t c = $nc(chars)->get(offset + ci);
				if ($Character::isWhitespace(c)) {
					$assign(info, spaceInfo);
				} else if (c >= 19968 && (c < 0x0000A000) || (c >= 0x0000AC00 && c < 0x0000D7B0) || (c >= 0x0000F900 && c < 0x0000FB00)) {
					$assign(info, kanjiInfo);
				} else {
					$assign(info, nullInfo);
				}
			}
		}
		$nc(infos)->set(infoStart + i, info);
	}
}

$TextLineComponent* ExtendedTextSourceLabel::applyJustificationDeltas($floats* deltas, int32_t deltaStart, $booleans* flags) {
	$useLocalCurrentObjectStackCache();
	$var($floats, newCharinfo, $cast($floats, $nc($(getCharinfo()))->clone()));
	$nc(flags)->set(0, false);
	$var($StandardGlyphVector, newgv, $cast($StandardGlyphVector, $nc($(getGV()))->clone()));
	$var($floats, newPositions, $nc(newgv)->getGlyphPositions(nullptr));
	int32_t numGlyphs = newgv->getNumGlyphs();
	$var($chars, chars, $nc(this->source)->getChars());
	int32_t offset = $nc(this->source)->getStart();
	float deltaPos = (float)0;
	for (int32_t i = 0; i < numGlyphs; ++i) {
		if ($Character::isWhitespace($nc(chars)->get(offset + v2l(i)))) {
			(*$nc(newPositions))[i * 2] += deltaPos;
			float deltaAdv = $nc(deltas)->get(deltaStart + i * 2) + deltas->get(deltaStart + i * 2 + 1);
			(*newCharinfo)[i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::posx] += deltaPos;
			(*newCharinfo)[i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::visx] += deltaPos;
			(*newCharinfo)[i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::advx] += deltaAdv;
			deltaPos += deltaAdv;
		} else {
			deltaPos += $nc(deltas)->get(deltaStart + i * 2);
			(*$nc(newPositions))[i * 2] += deltaPos;
			(*newCharinfo)[i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::posx] += deltaPos;
			(*newCharinfo)[i * ExtendedTextSourceLabel::numvals + ExtendedTextSourceLabel::visx] += deltaPos;
			deltaPos += deltas->get(deltaStart + i * 2 + 1);
		}
	}
	(*$nc(newPositions))[numGlyphs * 2] += deltaPos;
	newgv->setGlyphPositions(newPositions);
	$var(ExtendedTextSourceLabel, result, $new(ExtendedTextSourceLabel, this->source, this->decorator));
	$set(result, gv, newgv);
	$set(result, charinfo, newCharinfo);
	return result;
}

void clinit$ExtendedTextSourceLabel($Class* class$) {
	ExtendedTextSourceLabel::DEBUG = $FontUtilities::debugFonts();
}

ExtendedTextSourceLabel::ExtendedTextSourceLabel() {
}

$Class* ExtendedTextSourceLabel::load$($String* name, bool initialize) {
	$loadClass(ExtendedTextSourceLabel, name, initialize, &_ExtendedTextSourceLabel_ClassInfo_, clinit$ExtendedTextSourceLabel, allocate$ExtendedTextSourceLabel);
	return class$;
}

$Class* ExtendedTextSourceLabel::class$ = nullptr;

	} // font
} // sun