#include <javax/swing/text/AbstractDocument$BranchElement.h>

#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $AbstractDocument$AbstractElementArray = $Array<::javax::swing::text::AbstractDocument$AbstractElement>;
using $ElementArray = $Array<::javax::swing::text::Element>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$BranchElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$BranchElement, this$0)},
	{"children", "[Ljavax/swing/text/AbstractDocument$AbstractElement;", nullptr, $PRIVATE, $field(AbstractDocument$BranchElement, children$)},
	{"nchildren", "I", nullptr, $PRIVATE, $field(AbstractDocument$BranchElement, nchildren)},
	{"lastIndex", "I", nullptr, $PRIVATE, $field(AbstractDocument$BranchElement, lastIndex)},
	{}
};

$MethodInfo _AbstractDocument$BranchElement_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$BranchElement::*)($AbstractDocument*,$Element*,$AttributeSet*)>(&AbstractDocument$BranchElement::init$))},
	{"children", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PUBLIC},
	{"getAllowsChildren", "()Z", nullptr, $PUBLIC},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC},
	{"positionToElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"replace", "(II[Ljavax/swing/text/Element;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDocument$BranchElement_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$BranchElement", "javax.swing.text.AbstractDocument", "BranchElement", $PUBLIC},
	{"javax.swing.text.AbstractDocument$AbstractElement", "javax.swing.text.AbstractDocument", "AbstractElement", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$BranchElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.AbstractDocument$BranchElement",
	"javax.swing.text.AbstractDocument$AbstractElement",
	nullptr,
	_AbstractDocument$BranchElement_FieldInfo_,
	_AbstractDocument$BranchElement_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$BranchElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$BranchElement($Class* clazz) {
	return $of($alloc(AbstractDocument$BranchElement));
}

void AbstractDocument$BranchElement::init$($AbstractDocument* this$0, $Element* parent, $AttributeSet* a) {
	$set(this, this$0, this$0);
	$AbstractDocument$AbstractElement::init$(this$0, parent, a);
	$set(this, children$, $new($AbstractDocument$AbstractElementArray, 1));
	this->nchildren = 0;
	this->lastIndex = -1;
}

$Element* AbstractDocument$BranchElement::positionToElement(int32_t pos) {
	int32_t index = getElementIndex(pos);
	$var($Element, child, $nc(this->children$)->get(index));
	int32_t p0 = $nc(child)->getStartOffset();
	int32_t p1 = child->getEndOffset();
	if ((pos >= p0) && (pos < p1)) {
		return child;
	}
	return nullptr;
}

void AbstractDocument$BranchElement::replace(int32_t offset, int32_t length, $ElementArray* elems) {
	int32_t delta = $nc(elems)->length - length;
	int32_t src = offset + length;
	int32_t nmove = this->nchildren - src;
	int32_t dest = src + delta;
	if ((this->nchildren + delta) >= $nc(this->children$)->length) {
		int32_t newLength = $Math::max(2 * $nc(this->children$)->length, this->nchildren + delta);
		$var($AbstractDocument$AbstractElementArray, newChildren, $new($AbstractDocument$AbstractElementArray, newLength));
		$System::arraycopy(this->children$, 0, newChildren, 0, offset);
		$System::arraycopy(elems, 0, newChildren, offset, elems->length);
		$System::arraycopy(this->children$, src, newChildren, dest, nmove);
		$set(this, children$, newChildren);
	} else {
		$System::arraycopy(this->children$, src, this->children$, dest, nmove);
		$System::arraycopy(elems, 0, this->children$, offset, elems->length);
	}
	this->nchildren = this->nchildren + delta;
}

$String* AbstractDocument$BranchElement::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"BranchElement("_s, $(getName()), ") "_s}));
	$var($String, var$2, $$concat(var$3, $$str(getStartOffset())));
	$var($String, var$1, $$concat(var$2, ","_s));
	$var($String, var$0, $$concat(var$1, $$str(getEndOffset())));
	return $concat(var$0, "\n"_s);
}

$String* AbstractDocument$BranchElement::getName() {
	$var($String, nm, $AbstractDocument$AbstractElement::getName());
	if (nm == nullptr) {
		$assign(nm, "paragraph"_s);
	}
	return nm;
}

int32_t AbstractDocument$BranchElement::getStartOffset() {
	return $nc($nc(this->children$)->get(0))->getStartOffset();
}

int32_t AbstractDocument$BranchElement::getEndOffset() {
	$var($Element, child, (this->nchildren > 0) ? static_cast<$Element*>($nc(this->children$)->get(this->nchildren - 1)) : static_cast<$Element*>($nc(this->children$)->get(0)));
	return $nc(child)->getEndOffset();
}

$Element* AbstractDocument$BranchElement::getElement(int32_t index) {
	if (index < this->nchildren) {
		return $nc(this->children$)->get(index);
	}
	return nullptr;
}

int32_t AbstractDocument$BranchElement::getElementCount() {
	return this->nchildren;
}

int32_t AbstractDocument$BranchElement::getElementIndex(int32_t offset) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	int32_t lower = 0;
	int32_t upper = this->nchildren - 1;
	int32_t mid = 0;
	int32_t p0 = getStartOffset();
	int32_t p1 = 0;
	if (this->nchildren == 0) {
		return 0;
	}
	if (offset >= getEndOffset()) {
		return this->nchildren - 1;
	}
	if ((this->lastIndex >= lower) && (this->lastIndex <= upper)) {
		$var($Element, lastHit, $nc(this->children$)->get(this->lastIndex));
		p0 = $nc(lastHit)->getStartOffset();
		p1 = lastHit->getEndOffset();
		if ((offset >= p0) && (offset < p1)) {
			return this->lastIndex;
		}
		if (offset < p0) {
			upper = this->lastIndex;
		} else {
			lower = this->lastIndex;
		}
	}
	while (lower <= upper) {
		mid = lower + ((upper - lower) / 2);
		$var($Element, elem, $nc(this->children$)->get(mid));
		p0 = $nc(elem)->getStartOffset();
		p1 = elem->getEndOffset();
		if ((offset >= p0) && (offset < p1)) {
			index = mid;
			this->lastIndex = index;
			return index;
		} else if (offset < p0) {
			upper = mid - 1;
		} else {
			lower = mid + 1;
		}
	}
	if (offset < p0) {
		index = mid;
	} else {
		index = mid + 1;
	}
	this->lastIndex = index;
	return index;
}

bool AbstractDocument$BranchElement::isLeaf() {
	return false;
}

bool AbstractDocument$BranchElement::getAllowsChildren() {
	return true;
}

$Enumeration* AbstractDocument$BranchElement::children() {
	if (this->nchildren == 0) {
		return nullptr;
	}
	$var($Vector, tempVector, $new($Vector, this->nchildren));
	for (int32_t counter = 0; counter < this->nchildren; ++counter) {
		tempVector->addElement($nc(this->children$)->get(counter));
	}
	return tempVector->elements();
}

AbstractDocument$BranchElement::AbstractDocument$BranchElement() {
}

$Class* AbstractDocument$BranchElement::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$BranchElement, name, initialize, &_AbstractDocument$BranchElement_ClassInfo_, allocate$AbstractDocument$BranchElement);
	return class$;
}

$Class* AbstractDocument$BranchElement::class$ = nullptr;

		} // text
	} // swing
} // javax