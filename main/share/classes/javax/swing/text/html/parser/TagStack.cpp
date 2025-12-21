#include <javax/swing/text/html/parser/TagStack.h>

#include <java/util/BitSet.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/ContentModelState.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <javax/swing/text/html/parser/Element.h>
#include <javax/swing/text/html/parser/TagElement.h>
#include <jcpp.h>

#undef ANY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $ContentModelState = ::javax::swing::text::html::parser::ContentModelState;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;
using $Element = ::javax::swing::text::html::parser::Element;
using $TagElement = ::javax::swing::text::html::parser::TagElement;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$FieldInfo _TagStack_FieldInfo_[] = {
	{"tag", "Ljavax/swing/text/html/parser/TagElement;", nullptr, 0, $field(TagStack, tag)},
	{"elem", "Ljavax/swing/text/html/parser/Element;", nullptr, 0, $field(TagStack, elem)},
	{"state", "Ljavax/swing/text/html/parser/ContentModelState;", nullptr, 0, $field(TagStack, state)},
	{"next", "Ljavax/swing/text/html/parser/TagStack;", nullptr, 0, $field(TagStack, next)},
	{"inclusions", "Ljava/util/BitSet;", nullptr, 0, $field(TagStack, inclusions)},
	{"exclusions", "Ljava/util/BitSet;", nullptr, 0, $field(TagStack, exclusions)},
	{"net", "Z", nullptr, 0, $field(TagStack, net)},
	{"pre", "Z", nullptr, 0, $field(TagStack, pre)},
	{}
};

$MethodInfo _TagStack_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/parser/TagElement;Ljavax/swing/text/html/parser/TagStack;)V", nullptr, 0, $method(static_cast<void(TagStack::*)($TagElement*,TagStack*)>(&TagStack::init$))},
	{"advance", "(Ljavax/swing/text/html/parser/Element;)Z", nullptr, 0, $method(static_cast<bool(TagStack::*)($Element*)>(&TagStack::advance))},
	{"contentModel", "()Ljavax/swing/text/html/parser/ContentModel;", nullptr, $PUBLIC, $method(static_cast<$ContentModel*(TagStack::*)()>(&TagStack::contentModel))},
	{"excluded", "(I)Z", nullptr, 0, $method(static_cast<bool(TagStack::*)(int32_t)>(&TagStack::excluded))},
	{"first", "()Ljavax/swing/text/html/parser/Element;", nullptr, $PUBLIC, $method(static_cast<$Element*(TagStack::*)()>(&TagStack::first))},
	{"terminate", "()Z", nullptr, 0, $method(static_cast<bool(TagStack::*)()>(&TagStack::terminate))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TagStack_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.html.parser.TagStack",
	"java.lang.Object",
	"javax.swing.text.html.parser.DTDConstants",
	_TagStack_FieldInfo_,
	_TagStack_MethodInfo_
};

$Object* allocate$TagStack($Class* clazz) {
	return $of($alloc(TagStack));
}

void TagStack::init$($TagElement* tag, TagStack* next) {
	$useLocalCurrentObjectStackCache();
	$set(this, tag, tag);
	$set(this, elem, $nc(tag)->getElement());
	$set(this, next, next);
	$var($Element, elem, tag->getElement());
	if ($nc(elem)->getContent() != nullptr) {
		$set(this, state, $new($ContentModelState, $(elem->getContent())));
	}
	if (next != nullptr) {
		$set(this, inclusions, next->inclusions);
		$set(this, exclusions, next->exclusions);
		this->pre = next->pre;
	}
	if (tag->isPreformatted()) {
		this->pre = true;
	}
	if ($nc(elem)->inclusions != nullptr) {
		if (this->inclusions != nullptr) {
			$set(this, inclusions, $cast($BitSet, $nc(this->inclusions)->clone()));
			$nc(this->inclusions)->or$(elem->inclusions);
		} else {
			$set(this, inclusions, elem->inclusions);
		}
	}
	if ($nc(elem)->exclusions != nullptr) {
		if (this->exclusions != nullptr) {
			$set(this, exclusions, $cast($BitSet, $nc(this->exclusions)->clone()));
			$nc(this->exclusions)->or$(elem->exclusions);
		} else {
			$set(this, exclusions, elem->exclusions);
		}
	}
}

$Element* TagStack::first() {
	return (this->state != nullptr) ? $nc(this->state)->first() : ($Element*)nullptr;
}

$ContentModel* TagStack::contentModel() {
	if (this->state == nullptr) {
		return nullptr;
	} else {
		return $nc(this->state)->getModel();
	}
}

bool TagStack::excluded(int32_t elemIndex) {
	return (this->exclusions != nullptr) && $nc(this->exclusions)->get($nc(this->elem)->getIndex());
}

bool TagStack::advance($Element* elem) {
	if ((this->exclusions != nullptr) && $nc(this->exclusions)->get($nc(elem)->getIndex())) {
		return false;
	}
	if (this->state != nullptr) {
		$var($ContentModelState, newState, $nc(this->state)->advance(elem));
		if (newState != nullptr) {
			$set(this, state, newState);
			return true;
		}
	} else if ($nc(this->elem)->getType() == $DTDConstants::ANY) {
		return true;
	}
	return (this->inclusions != nullptr) && $nc(this->inclusions)->get($nc(elem)->getIndex());
}

bool TagStack::terminate() {
	return (this->state == nullptr) || $nc(this->state)->terminate();
}

$String* TagStack::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, nullptr);
	if (this->next == nullptr) {
		$assign(var$0, $str({"<"_s, $($nc($($nc(this->tag)->getElement()))->getName()), ">"_s}));
	} else {
		$var($String, var$2, $$str({this->next, " <"_s}));
		$var($String, var$1, $$concat(var$2, $($nc($($nc(this->tag)->getElement()))->getName())));
		$assign(var$0, $concat(var$1, ">"_s));
	}
	return var$0;
}

TagStack::TagStack() {
}

$Class* TagStack::load$($String* name, bool initialize) {
	$loadClass(TagStack, name, initialize, &_TagStack_ClassInfo_, allocate$TagStack);
	return class$;
}

$Class* TagStack::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax