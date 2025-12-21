#include <javax/swing/text/AbstractDocument$AbstractElement.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AbstractDocument$AttributeContext.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef EMPTY

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$AttributeContext = ::javax::swing::text::AbstractDocument$AttributeContext;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$AbstractElement_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$AbstractElement, this$0)},
	{"parent", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(AbstractDocument$AbstractElement, parent)},
	{"attributes", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractDocument$AbstractElement, attributes)},
	{}
};

$MethodInfo _AbstractDocument$AbstractElement_MethodInfo_[] = {
	{"children", "()Ljava/util/Enumeration;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getAllowsChildren", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementIndex", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AbstractDocument;Ljavax/swing/text/Element;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractDocument$AbstractElement::*)($AbstractDocument*,$Element*,$AttributeSet*)>(&AbstractDocument$AbstractElement::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"checkForIllegalCast", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$AbstractElement::*)()>(&AbstractDocument$AbstractElement::checkForIllegalCast))},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"dump", "(Ljava/io/PrintStream;I)V", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getChildAt", "(I)Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getChildCount", "()I", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getIndex", "(Ljavax/swing/tree/TreeNode;)I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{"getParentElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"indent", "(Ljava/io/PrintWriter;I)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$AbstractElement::*)($PrintWriter*,int32_t)>(&AbstractDocument$AbstractElement::indent))},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"isLeaf", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$AbstractElement::*)($ObjectInputStream*)>(&AbstractDocument$AbstractElement::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractDocument$AbstractElement::*)($ObjectOutputStream*)>(&AbstractDocument$AbstractElement::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _AbstractDocument$AbstractElement_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$AbstractElement", "javax.swing.text.AbstractDocument", "AbstractElement", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractDocument$AbstractElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.AbstractDocument$AbstractElement",
	"java.lang.Object",
	"javax.swing.text.Element,javax.swing.text.MutableAttributeSet,java.io.Serializable,javax.swing.tree.TreeNode",
	_AbstractDocument$AbstractElement_FieldInfo_,
	_AbstractDocument$AbstractElement_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDocument$AbstractElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$AbstractElement($Class* clazz) {
	return $of($alloc(AbstractDocument$AbstractElement));
}

int32_t AbstractDocument$AbstractElement::hashCode() {
	 return this->$Element::hashCode();
}

bool AbstractDocument$AbstractElement::equals(Object$* arg0) {
	 return this->$Element::equals(arg0);
}

$Object* AbstractDocument$AbstractElement::clone() {
	 return this->$Element::clone();
}

$String* AbstractDocument$AbstractElement::toString() {
	 return this->$Element::toString();
}

void AbstractDocument$AbstractElement::finalize() {
	this->$Element::finalize();
}

void AbstractDocument$AbstractElement::init$($AbstractDocument* this$0, $Element* parent, $AttributeSet* a) {
	$set(this, this$0, this$0);
	$set(this, parent, parent);
	$set(this, attributes, $nc($(this$0->getAttributeContext()))->getEmptySet());
	if (a != nullptr) {
		addAttributes(a);
	}
}

void AbstractDocument$AbstractElement::indent($PrintWriter* out, int32_t n) {
	for (int32_t i = 0; i < n; ++i) {
		$nc(out)->print("  "_s);
	}
}

void AbstractDocument$AbstractElement::dump($PrintStream* psOut, int32_t indentAmount) {
	$useLocalCurrentObjectStackCache();
	$var($PrintWriter, out, nullptr);
	try {
		$assign(out, $new($PrintWriter, static_cast<$Writer*>($$new($OutputStreamWriter, static_cast<$OutputStream*>(psOut), "JavaEsc"_s)), true));
	} catch ($UnsupportedEncodingException& e) {
		$assign(out, $new($PrintWriter, static_cast<$OutputStream*>(psOut), true));
	}
	indent(out, indentAmount);
	if (getName() == nullptr) {
		$nc(out)->print("<??"_s);
	} else {
		$nc(out)->print($$str({"<"_s, $(getName())}));
	}
	if (getAttributeCount() > 0) {
		$nc(out)->println(""_s);
		$var($Enumeration, names, $nc(this->attributes)->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			indent(out, indentAmount + 1);
			$var($String, var$0, $$str({name, "="_s}));
			out->println($$concat(var$0, $(getAttribute(name))));
		}
		indent(out, indentAmount);
	}
	$nc(out)->println(">"_s);
	if (isLeaf()) {
		indent(out, indentAmount + 1);
		$var($String, var$2, $$str({"["_s, $$str(getStartOffset()), ","_s}));
		$var($String, var$1, $$concat(var$2, $$str(getEndOffset())));
		out->print($$concat(var$1, "]"_s));
		$var($AbstractDocument$Content, c, this->this$0->getContent());
		try {
			int32_t var$3 = getStartOffset();
			int32_t var$4 = getEndOffset();
			$var($String, contentStr, $nc(c)->getString(var$3, var$4 - getStartOffset()));
			if ($nc(contentStr)->length() > 40) {
				$assign(contentStr, $str({$(contentStr->substring(0, 40)), "..."_s}));
			}
			out->println($$str({"["_s, contentStr, "]"_s}));
		} catch ($BadLocationException& e) {
		}
	} else {
		int32_t n = getElementCount();
		for (int32_t i = 0; i < n; ++i) {
			$var(AbstractDocument$AbstractElement, e, $cast(AbstractDocument$AbstractElement, getElement(i)));
			$nc(e)->dump(psOut, indentAmount + 1);
		}
	}
}

int32_t AbstractDocument$AbstractElement::getAttributeCount() {
	return $nc(this->attributes)->getAttributeCount();
}

bool AbstractDocument$AbstractElement::isDefined(Object$* attrName) {
	return $nc(this->attributes)->isDefined(attrName);
}

bool AbstractDocument$AbstractElement::isEqual($AttributeSet* attr) {
	return $nc(this->attributes)->isEqual(attr);
}

$AttributeSet* AbstractDocument$AbstractElement::copyAttributes() {
	return $nc(this->attributes)->copyAttributes();
}

$Object* AbstractDocument$AbstractElement::getAttribute(Object$* attrName) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(this->attributes)->getAttribute(attrName));
	if (value == nullptr) {
		$var($AttributeSet, a, (this->parent != nullptr) ? $nc(this->parent)->getAttributes() : ($AttributeSet*)nullptr);
		if (a != nullptr) {
			$assign(value, a->getAttribute(attrName));
		}
	}
	return $of(value);
}

$Enumeration* AbstractDocument$AbstractElement::getAttributeNames() {
	return $nc(this->attributes)->getAttributeNames();
}

bool AbstractDocument$AbstractElement::containsAttribute(Object$* name, Object$* value) {
	return $nc(this->attributes)->containsAttribute(name, value);
}

bool AbstractDocument$AbstractElement::containsAttributes($AttributeSet* attrs) {
	return $nc(this->attributes)->containsAttributes(attrs);
}

$AttributeSet* AbstractDocument$AbstractElement::getResolveParent() {
	$var($AttributeSet, a, $nc(this->attributes)->getResolveParent());
	if ((a == nullptr) && (this->parent != nullptr)) {
		$assign(a, $nc(this->parent)->getAttributes());
	}
	return a;
}

void AbstractDocument$AbstractElement::addAttribute(Object$* name, Object$* value) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	$set(this, attributes, $nc(context)->addAttribute(this->attributes, name, value));
}

void AbstractDocument$AbstractElement::addAttributes($AttributeSet* attr) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	$set(this, attributes, $nc(context)->addAttributes(this->attributes, attr));
}

void AbstractDocument$AbstractElement::removeAttribute(Object$* name) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	$set(this, attributes, $nc(context)->removeAttribute(this->attributes, name));
}

void AbstractDocument$AbstractElement::removeAttributes($Enumeration* names) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	$set(this, attributes, $nc(context)->removeAttributes(this->attributes, names));
}

void AbstractDocument$AbstractElement::removeAttributes($AttributeSet* attrs) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	if ($equals(attrs, this)) {
		$set(this, attributes, $nc(context)->getEmptySet());
	} else {
		$set(this, attributes, $nc(context)->removeAttributes(this->attributes, attrs));
	}
}

void AbstractDocument$AbstractElement::setResolveParent($AttributeSet* parent) {
	checkForIllegalCast();
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	if (parent != nullptr) {
		$init($StyleConstants);
		$set(this, attributes, $nc(context)->addAttribute(this->attributes, $StyleConstants::ResolveAttribute, parent));
	} else {
		$init($StyleConstants);
		$set(this, attributes, $nc(context)->removeAttribute(this->attributes, $StyleConstants::ResolveAttribute));
	}
}

void AbstractDocument$AbstractElement::checkForIllegalCast() {
	$var($Thread, t, this->this$0->getCurrentWriter());
	if ((t == nullptr) || (t != $Thread::currentThread())) {
		$throwNew($StateInvariantError, "Illegal cast to MutableAttributeSet"_s);
	}
}

$Document* AbstractDocument$AbstractElement::getDocument() {
	return this->this$0;
}

$Element* AbstractDocument$AbstractElement::getParentElement() {
	return this->parent;
}

$AttributeSet* AbstractDocument$AbstractElement::getAttributes() {
	return this;
}

$String* AbstractDocument$AbstractElement::getName() {
	if ($nc(this->attributes)->isDefined("$ename"_s)) {
		return $cast($String, $nc(this->attributes)->getAttribute("$ename"_s));
	}
	return nullptr;
}

$TreeNode* AbstractDocument$AbstractElement::getChildAt(int32_t childIndex) {
	return $cast($TreeNode, getElement(childIndex));
}

int32_t AbstractDocument$AbstractElement::getChildCount() {
	return getElementCount();
}

$TreeNode* AbstractDocument$AbstractElement::getParent() {
	return $cast($TreeNode, getParentElement());
}

int32_t AbstractDocument$AbstractElement::getIndex($TreeNode* node) {
	for (int32_t counter = getChildCount() - 1; counter >= 0; --counter) {
		if (getChildAt(counter) == node) {
			return counter;
		}
	}
	return -1;
}

void AbstractDocument$AbstractElement::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$StyleContext::writeAttributeSet(s, this->attributes);
}

void AbstractDocument$AbstractElement::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
	$StyleContext::readAttributeSet(s, attr);
	$var($AbstractDocument$AttributeContext, context, this->this$0->getAttributeContext());
	$init($SimpleAttributeSet);
	$set(this, attributes, $nc(context)->addAttributes($SimpleAttributeSet::EMPTY, attr));
}

AbstractDocument$AbstractElement::AbstractDocument$AbstractElement() {
}

$Class* AbstractDocument$AbstractElement::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$AbstractElement, name, initialize, &_AbstractDocument$AbstractElement_ClassInfo_, allocate$AbstractDocument$AbstractElement);
	return class$;
}

$Class* AbstractDocument$AbstractElement::class$ = nullptr;

		} // text
	} // swing
} // javax