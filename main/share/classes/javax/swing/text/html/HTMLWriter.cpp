#include <javax/swing/text/html/HTMLWriter.h>

#include <java/io/Writer.h>
#include <java/lang/Math.h>
#include <java/net/URL.h>
#include <java/util/Enumeration.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AbstractWriter.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/ElementIterator.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$FontWeight.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/Map.h>
#include <javax/swing/text/html/Option.h>
#include <javax/swing/text/html/OptionComboBoxModel.h>
#include <javax/swing/text/html/OptionListModel.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef ALIGN
#undef B
#undef BODY
#undef COLOR
#undef COMMENT
#undef CONTENT
#undef DEFAULT_STYLE
#undef EMPTY
#undef ENDTAG
#undef FACE
#undef FONT
#undef FONT_FAMILY
#undef FONT_SIZE
#undef FONT_STYLE
#undef FONT_WEIGHT
#undef FORM
#undef HEAD
#undef I
#undef IMPLIED
#undef P
#undef PRE
#undef SELECT
#undef SIZE
#undef STRIKE
#undef STYLE
#undef SUB
#undef SUP
#undef TEXTAREA
#undef TEXT_ALIGN
#undef TEXT_DECORATION
#undef TITLE
#undef U
#undef VALUE
#undef VERTICAL_ALIGN

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractWriter = ::javax::swing::text::AbstractWriter;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $ElementIterator = ::javax::swing::text::ElementIterator;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Segment = ::javax::swing::text::Segment;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$FontWeight = ::javax::swing::text::html::CSS$FontWeight;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $Map = ::javax::swing::text::html::Map;
using $Option = ::javax::swing::text::html::Option;
using $OptionComboBoxModel = ::javax::swing::text::html::OptionComboBoxModel;
using $OptionListModel = ::javax::swing::text::html::OptionListModel;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLWriter_FieldInfo_[] = {
	{"blockElementStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/text/Element;>;", $PRIVATE, $field(HTMLWriter, blockElementStack)},
	{"inContent", "Z", nullptr, $PRIVATE, $field(HTMLWriter, inContent)},
	{"inPre", "Z", nullptr, $PRIVATE, $field(HTMLWriter, inPre)},
	{"preEndOffset", "I", nullptr, $PRIVATE, $field(HTMLWriter, preEndOffset)},
	{"inTextArea", "Z", nullptr, $PRIVATE, $field(HTMLWriter, inTextArea)},
	{"newlineOutputed", "Z", nullptr, $PRIVATE, $field(HTMLWriter, newlineOutputed)},
	{"completeDoc", "Z", nullptr, $PRIVATE, $field(HTMLWriter, completeDoc)},
	{"tags", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE, $field(HTMLWriter, tags)},
	{"tagValues", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PRIVATE, $field(HTMLWriter, tagValues)},
	{"segment", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE, $field(HTMLWriter, segment)},
	{"tagsToRemove", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/HTML$Tag;>;", $PRIVATE, $field(HTMLWriter, tagsToRemove)},
	{"wroteHead", "Z", nullptr, $PRIVATE, $field(HTMLWriter, wroteHead)},
	{"replaceEntities", "Z", nullptr, $PRIVATE, $field(HTMLWriter, replaceEntities)},
	{"tempChars", "[C", nullptr, $PRIVATE, $field(HTMLWriter, tempChars)},
	{"indentNext", "Z", nullptr, $PRIVATE, $field(HTMLWriter, indentNext)},
	{"writeCSS", "Z", nullptr, $PRIVATE, $field(HTMLWriter, writeCSS)},
	{"convAttr", "Ljavax/swing/text/MutableAttributeSet;", nullptr, $PRIVATE, $field(HTMLWriter, convAttr)},
	{"oConvAttr", "Ljavax/swing/text/MutableAttributeSet;", nullptr, $PRIVATE, $field(HTMLWriter, oConvAttr)},
	{"indented", "Z", nullptr, $PRIVATE, $field(HTMLWriter, indented)},
	{}
};

$MethodInfo _HTMLWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/html/HTMLDocument;)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLWriter::*)($Writer*,$HTMLDocument*)>(&HTMLWriter::init$))},
	{"<init>", "(Ljava/io/Writer;Ljavax/swing/text/html/HTMLDocument;II)V", nullptr, $PUBLIC, $method(static_cast<void(HTMLWriter::*)($Writer*,$HTMLDocument*,int32_t,int32_t)>(&HTMLWriter::init$))},
	{"addAttribute", "(Ljavax/swing/text/MutableAttributeSet;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MutableAttributeSet*,Object$*,Object$*)>(&HTMLWriter::addAttribute))},
	{"closeOutUnwantedEmbeddedTags", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"comment", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"convertToHTML", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)Ljavax/swing/text/AttributeSet;", nullptr, 0},
	{"convertToHTML32", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AttributeSet*,$MutableAttributeSet*)>(&HTMLWriter::convertToHTML32))},
	{"convertToHTML40", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AttributeSet*,$MutableAttributeSet*)>(&HTMLWriter::convertToHTML40))},
	{"createFontAttribute", "(Ljavax/swing/text/html/CSS$Attribute;Ljavax/swing/text/AttributeSet;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($CSS$Attribute*,$AttributeSet*,$MutableAttributeSet*)>(&HTMLWriter::createFontAttribute))},
	{"emptyTag", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"endTag", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"indentNeedsIncrementing", "(Ljavax/swing/text/Element;Ljavax/swing/text/Element;)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLWriter::*)($Element*,$Element*)>(&HTMLWriter::indentNeedsIncrementing))},
	{"indentSmart", "()V", nullptr, $PRIVATE, $method(static_cast<void(HTMLWriter::*)()>(&HTMLWriter::indentSmart)), "java.io.IOException"},
	{"isBlockTag", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PROTECTED},
	{"isFormElementWithContent", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLWriter::*)($AttributeSet*)>(&HTMLWriter::isFormElementWithContent))},
	{"isPreTagWithParagraphTag", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLWriter::*)($AttributeSet*)>(&HTMLWriter::isPreTagWithParagraphTag))},
	{"matchNameAttribute", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Tag;)Z", nullptr, $PROTECTED},
	{"noMatchForTagInAttributes", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/HTML$Tag;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(HTMLWriter::*)($AttributeSet*,$HTML$Tag*,Object$*)>(&HTMLWriter::noMatchForTagInAttributes))},
	{"output", "([CII)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"output", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(HTMLWriter::*)($String*)>(&HTMLWriter::output)), "java.io.IOException"},
	{"selectContent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"startTag", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"synthesizedElement", "(Ljavax/swing/text/Element;)Z", nullptr, $PROTECTED},
	{"text", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"textAreaContent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"write", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"writeAdditionalComments", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeComment", "(Ljava/lang/String;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeEmbeddedTags", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeLineSeparator", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeMaps", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", 0, nullptr, "java.io.IOException"},
	{"writeOption", "(Ljavax/swing/text/html/Option;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"writeStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;Z)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeStyleEndTag", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeStyleStartTag", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeStyles", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _HTMLWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.HTMLWriter",
	"javax.swing.text.AbstractWriter",
	nullptr,
	_HTMLWriter_FieldInfo_,
	_HTMLWriter_MethodInfo_
};

$Object* allocate$HTMLWriter($Class* clazz) {
	return $of($alloc(HTMLWriter));
}

void HTMLWriter::init$($Writer* w, $HTMLDocument* doc) {
	HTMLWriter::init$(w, doc, 0, $nc(doc)->getLength());
}

void HTMLWriter::init$($Writer* w, $HTMLDocument* doc, int32_t pos, int32_t len) {
	$AbstractWriter::init$(w, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc))), pos, len);
	$set(this, blockElementStack, $new($Stack));
	this->inContent = false;
	this->inPre = false;
	this->inTextArea = false;
	this->newlineOutputed = false;
	$set(this, tags, $new($Vector, 10));
	$set(this, tagValues, $new($Vector, 10));
	$set(this, tagsToRemove, $new($Vector, 10));
	this->indentNext = false;
	this->writeCSS = false;
	$set(this, convAttr, $new($SimpleAttributeSet));
	$set(this, oConvAttr, $new($SimpleAttributeSet));
	this->indented = false;
	this->completeDoc = (pos == 0 && len == $nc(doc)->getLength());
	setLineLength(80);
}

void HTMLWriter::write() {
	$useLocalCurrentObjectStackCache();
	$var($ElementIterator, it, getElementIterator());
	$var($Element, current, nullptr);
	$var($Element, next, nullptr);
	this->wroteHead = false;
	setCurrentLineLength(0);
	this->replaceEntities = false;
	setCanWrapLines(false);
	if (this->segment == nullptr) {
		$set(this, segment, $new($Segment));
	}
	this->inPre = false;
	bool forcedBody = false;
	while (($assign(next, $nc(it)->next())) != nullptr) {
		if (!inRange(next)) {
			$init($StyleConstants);
			$init($HTML$Tag);
			if (this->completeDoc && $equals($nc($($nc(next)->getAttributes()))->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::BODY)) {
				forcedBody = true;
			} else {
				continue;
			}
		}
		if (current != nullptr) {
			if (indentNeedsIncrementing(current, next)) {
				incrIndent();
			} else if (current->getParentElement() != $nc(next)->getParentElement()) {
				$var($Element, top, $cast($Element, $nc(this->blockElementStack)->peek()));
				while (top != next->getParentElement()) {
					$nc(this->blockElementStack)->pop();
					if (!synthesizedElement(top)) {
						$var($AttributeSet, attrs, $nc(top)->getAttributes());
						$init($HTML$Tag);
						bool var$1 = !matchNameAttribute(attrs, $HTML$Tag::PRE);
						bool var$0 = var$1 && !isFormElementWithContent(attrs);
						if (var$0 && !isPreTagWithParagraphTag(attrs)) {
							decrIndent();
						}
						endTag(top);
					}
					$assign(top, $cast($Element, $nc(this->blockElementStack)->peek()));
				}
			} else if (current->getParentElement() == next->getParentElement()) {
				$var($Element, top, $cast($Element, $nc(this->blockElementStack)->peek()));
				if (top == current) {
					$nc(this->blockElementStack)->pop();
					endTag(top);
				}
			}
		}
		bool var$2 = !$nc(next)->isLeaf();
		if (var$2 || isFormElementWithContent($($nc(next)->getAttributes()))) {
			$nc(this->blockElementStack)->push(next);
			startTag(next);
		} else {
			emptyTag(next);
		}
		$assign(current, next);
	}
	closeOutUnwantedEmbeddedTags(nullptr);
	if (forcedBody) {
		$nc(this->blockElementStack)->pop();
		endTag(current);
	}
	while (!$nc(this->blockElementStack)->empty()) {
		$assign(current, $cast($Element, $nc(this->blockElementStack)->pop()));
		if (!synthesizedElement(current)) {
			$var($AttributeSet, attrs, $nc(current)->getAttributes());
			$init($HTML$Tag);
			bool var$4 = !matchNameAttribute(attrs, $HTML$Tag::PRE);
			bool var$3 = var$4 && !isFormElementWithContent(attrs);
			if (var$3 && !isPreTagWithParagraphTag(attrs)) {
				decrIndent();
			}
			endTag(current);
		}
	}
	if (this->completeDoc) {
		writeAdditionalComments();
	}
	$set($nc(this->segment), array, nullptr);
}

void HTMLWriter::writeAttributes($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$nc(this->convAttr)->removeAttributes(static_cast<$AttributeSet*>(this->convAttr));
	convertToHTML32(attr, this->convAttr);
	$var($Enumeration, names, $nc(this->convAttr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		$init($HTML$Attribute);
		if ($instanceOf($HTML$Tag, name) || $instanceOf($StyleConstants, name) || $equals(name, $HTML$Attribute::ENDTAG)) {
			continue;
		}
		$var($String, var$1, $$str({" "_s, name, "=\""_s}));
		$var($String, var$0, $$concat(var$1, $($nc(this->convAttr)->getAttribute(name))));
		write($$concat(var$0, "\""_s));
	}
}

void HTMLWriter::emptyTag($Element* elem) {
	$useLocalCurrentObjectStackCache();
	if (!this->inContent && !this->inPre) {
		indentSmart();
	}
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	closeOutUnwantedEmbeddedTags(attr);
	writeEmbeddedTags(attr);
	$init($HTML$Tag);
	if (matchNameAttribute(attr, $HTML$Tag::CONTENT)) {
		this->inContent = true;
		text(elem);
	} else {
		if (matchNameAttribute(attr, $HTML$Tag::COMMENT)) {
			comment(elem);
		} else {
			bool isBlock = isBlockTag($(elem->getAttributes()));
			if (this->inContent && isBlock) {
				writeLineSeparator();
				indentSmart();
			}
			$init($StyleConstants);
			$var($Object, nameTag, (attr != nullptr) ? $nc(attr)->getAttribute($StyleConstants::NameAttribute) : ($Object*)nullptr);
			$init($HTML$Attribute);
			$var($Object, endTag, (attr != nullptr) ? attr->getAttribute($HTML$Attribute::ENDTAG) : ($Object*)nullptr);
			bool outputEndTag = false;
			if (nameTag != nullptr && endTag != nullptr && ($instanceOf($String, endTag)) && $of(endTag)->equals("true"_s)) {
				outputEndTag = true;
			}
			if (this->completeDoc && matchNameAttribute(attr, $HTML$Tag::HEAD)) {
				if (outputEndTag) {
					writeStyles($($nc(($cast($HTMLDocument, $(getDocument()))))->getStyleSheet()));
				}
				this->wroteHead = true;
			}
			write(u'<');
			if (outputEndTag) {
				write(u'/');
			}
			write($(elem->getName()));
			writeAttributes(attr);
			write(u'>');
			if (matchNameAttribute(attr, $HTML$Tag::TITLE) && !outputEndTag) {
				$var($Document, doc, elem->getDocument());
				$init($Document);
				$var($String, title, $cast($String, $nc(doc)->getProperty($Document::TitleProperty)));
				write(title);
			} else if (!this->inContent || isBlock) {
				writeLineSeparator();
				if (isBlock && this->inContent) {
					indentSmart();
				}
			}
		}
	}
}

bool HTMLWriter::isBlockTag($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$init($StyleConstants);
	$var($Object, o, $nc(attr)->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, name, $cast($HTML$Tag, o));
		return $nc(name)->isBlock();
	}
	return false;
}

void HTMLWriter::startTag($Element* elem) {
	$useLocalCurrentObjectStackCache();
	if (synthesizedElement(elem)) {
		return;
	}
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	$init($StyleConstants);
	$var($Object, nameAttribute, $nc(attr)->getAttribute($StyleConstants::NameAttribute));
	$var($HTML$Tag, name, nullptr);
	if ($instanceOf($HTML$Tag, nameAttribute)) {
		$assign(name, $cast($HTML$Tag, nameAttribute));
	} else {
		$assign(name, nullptr);
	}
	$init($HTML$Tag);
	if (name == $HTML$Tag::PRE) {
		this->inPre = true;
		this->preEndOffset = elem->getEndOffset();
	}
	closeOutUnwantedEmbeddedTags(attr);
	if (this->inContent) {
		writeLineSeparator();
		this->inContent = false;
		this->newlineOutputed = false;
	}
	if (this->completeDoc && name == $HTML$Tag::BODY && !this->wroteHead) {
		this->wroteHead = true;
		indentSmart();
		write("<head>"_s);
		writeLineSeparator();
		incrIndent();
		writeStyles($($nc(($cast($HTMLDocument, $(getDocument()))))->getStyleSheet()));
		decrIndent();
		writeLineSeparator();
		indentSmart();
		write("</head>"_s);
		writeLineSeparator();
	}
	indentSmart();
	write(u'<');
	write($(elem->getName()));
	writeAttributes(attr);
	write(u'>');
	if (name != $HTML$Tag::PRE) {
		writeLineSeparator();
	}
	if (name == $HTML$Tag::TEXTAREA) {
		textAreaContent($(elem->getAttributes()));
	} else {
		if (name == $HTML$Tag::SELECT) {
			selectContent($(elem->getAttributes()));
		} else {
			if (this->completeDoc && name == $HTML$Tag::BODY) {
				writeMaps($($nc(($cast($HTMLDocument, $(getDocument()))))->getMaps()));
			} else {
				if (name == $HTML$Tag::HEAD) {
					$var($HTMLDocument, document, $cast($HTMLDocument, getDocument()));
					this->wroteHead = true;
					incrIndent();
					writeStyles($($nc(document)->getStyleSheet()));
					if ($nc(document)->hasBaseTag()) {
						indentSmart();
						write($$str({"<base href=\""_s, $(document->getBase()), "\">"_s}));
						writeLineSeparator();
					}
					decrIndent();
				}
			}
		}
	}
}

void HTMLWriter::textAreaContent($AttributeSet* attr) {
	$init($StyleConstants);
	$var($Document, doc, $cast($Document, $nc(attr)->getAttribute($StyleConstants::ModelAttribute)));
	if (doc != nullptr && doc->getLength() > 0) {
		if (this->segment == nullptr) {
			$set(this, segment, $new($Segment));
		}
		doc->getText(0, doc->getLength(), this->segment);
		if ($nc(this->segment)->count > 0) {
			this->inTextArea = true;
			incrIndent();
			indentSmart();
			setCanWrapLines(true);
			this->replaceEntities = true;
			write($nc(this->segment)->array, $nc(this->segment)->offset, $nc(this->segment)->count);
			this->replaceEntities = false;
			setCanWrapLines(false);
			writeLineSeparator();
			this->inTextArea = false;
			decrIndent();
		}
	}
}

void HTMLWriter::text($Element* elem) {
	int32_t var$0 = getStartOffset();
	int32_t start = $Math::max(var$0, $nc(elem)->getStartOffset());
	int32_t var$1 = getEndOffset();
	int32_t end = $Math::min(var$1, $nc(elem)->getEndOffset());
	if (start < end) {
		if (this->segment == nullptr) {
			$set(this, segment, $new($Segment));
		}
		$nc($(getDocument()))->getText(start, end - start, this->segment);
		this->newlineOutputed = false;
		if ($nc(this->segment)->count > 0) {
			if ($nc($nc(this->segment)->array)->get($nc(this->segment)->offset + $nc(this->segment)->count - 1) == u'\n') {
				this->newlineOutputed = true;
			}
			if (this->inPre && end == this->preEndOffset) {
				if ($nc(this->segment)->count > 1) {
					--$nc(this->segment)->count;
				} else {
					return;
				}
			}
			this->replaceEntities = true;
			setCanWrapLines(!this->inPre);
			write($nc(this->segment)->array, $nc(this->segment)->offset, $nc(this->segment)->count);
			setCanWrapLines(false);
			this->replaceEntities = false;
		}
	}
}

void HTMLWriter::selectContent($AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$init($StyleConstants);
	$var($Object, model, $nc(attr)->getAttribute($StyleConstants::ModelAttribute));
	incrIndent();
	if ($instanceOf($OptionListModel, model)) {
		$var($OptionListModel, listModel, $cast($OptionListModel, model));
		int32_t size = $nc(listModel)->getSize();
		for (int32_t i = 0; i < size; ++i) {
			$var($Option, option, $cast($Option, listModel->getElementAt(i)));
			writeOption(option);
		}
	} else if ($instanceOf($OptionComboBoxModel, model)) {
		$var($OptionComboBoxModel, comboBoxModel, $cast($OptionComboBoxModel, model));
		int32_t size = $nc(comboBoxModel)->getSize();
		for (int32_t i = 0; i < size; ++i) {
			$var($Option, option, $cast($Option, comboBoxModel->getElementAt(i)));
			writeOption(option);
		}
	}
	decrIndent();
}

void HTMLWriter::writeOption($Option* option) {
	$useLocalCurrentObjectStackCache();
	indentSmart();
	write(u'<');
	write("option"_s);
	$init($HTML$Attribute);
	$var($Object, value, $nc($($nc(option)->getAttributes()))->getAttribute($HTML$Attribute::VALUE));
	if (value != nullptr) {
		write($$str({" value="_s, value}));
	}
	if (option->isSelected()) {
		write(" selected"_s);
	}
	write(u'>');
	if (option->getLabel() != nullptr) {
		write($(option->getLabel()));
	}
	writeLineSeparator();
}

void HTMLWriter::endTag($Element* elem) {
	$useLocalCurrentObjectStackCache();
	if (synthesizedElement(elem)) {
		return;
	}
	closeOutUnwantedEmbeddedTags($($nc(elem)->getAttributes()));
	if (this->inContent) {
		if (!this->newlineOutputed && !this->inPre) {
			writeLineSeparator();
		}
		this->newlineOutputed = false;
		this->inContent = false;
	}
	if (!this->inPre) {
		indentSmart();
	}
	$init($HTML$Tag);
	if (matchNameAttribute($($nc(elem)->getAttributes()), $HTML$Tag::PRE)) {
		this->inPre = false;
	}
	write(u'<');
	write(u'/');
	write($($nc(elem)->getName()));
	write(u'>');
	writeLineSeparator();
}

void HTMLWriter::comment($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, as, $nc(elem)->getAttributes());
	$init($HTML$Tag);
	if (matchNameAttribute(as, $HTML$Tag::COMMENT)) {
		$init($HTML$Attribute);
		$var($Object, comment, $nc(as)->getAttribute($HTML$Attribute::COMMENT));
		if ($instanceOf($String, comment)) {
			writeComment($cast($String, comment));
		} else {
			writeComment(nullptr);
		}
	}
}

void HTMLWriter::writeComment($String* string) {
	write("<!--"_s);
	if (string != nullptr) {
		write(string);
	}
	write("-->"_s);
	writeLineSeparator();
	indentSmart();
}

void HTMLWriter::writeAdditionalComments() {
	$useLocalCurrentObjectStackCache();
	$init($HTMLDocument);
	$var($Object, comments, $nc($(getDocument()))->getProperty($HTMLDocument::AdditionalComments));
	if ($instanceOf($Vector, comments)) {
		$var($Vector, v, $cast($Vector, comments));
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(v)->size();
			for (; counter < maxCounter; ++counter) {
				writeComment($($nc($of($(v->elementAt(counter))))->toString()));
			}
		}
	}
}

bool HTMLWriter::synthesizedElement($Element* elem) {
	$init($HTML$Tag);
	if (matchNameAttribute($($nc(elem)->getAttributes()), $HTML$Tag::IMPLIED)) {
		return true;
	}
	return false;
}

bool HTMLWriter::matchNameAttribute($AttributeSet* attr, $HTML$Tag* tag) {
	$useLocalCurrentObjectStackCache();
	$init($StyleConstants);
	$var($Object, o, $nc(attr)->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, name, $cast($HTML$Tag, o));
		if (name == tag) {
			return true;
		}
	}
	return false;
}

void HTMLWriter::writeEmbeddedTags($AttributeSet* attr$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, attr$renamed);
	$assign(attr, convertToHTML(attr, this->oConvAttr));
	$var($Enumeration, names, $nc(attr)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		if ($instanceOf($HTML$Tag, name)) {
			$var($HTML$Tag, tag, $cast($HTML$Tag, name));
			$init($HTML$Tag);
			if (tag == $HTML$Tag::FORM || $nc(this->tags)->contains(tag)) {
				continue;
			}
			write(u'<');
			write($($nc(tag)->toString()));
			$var($Object, o, attr->getAttribute(tag));
			if (o != nullptr && $instanceOf($AttributeSet, o)) {
				writeAttributes($cast($AttributeSet, o));
			}
			write(u'>');
			$nc(this->tags)->addElement(tag);
			$nc(this->tagValues)->addElement(o);
		}
	}
}

bool HTMLWriter::noMatchForTagInAttributes($AttributeSet* attr, $HTML$Tag* t, Object$* tagValue) {
	if (attr != nullptr && attr->isDefined(t)) {
		$var($Object, newValue, attr->getAttribute(t));
		if ((tagValue == nullptr) ? (newValue == nullptr) : (newValue != nullptr && $nc($of(tagValue))->equals(newValue))) {
			return false;
		}
	}
	return true;
}

void HTMLWriter::closeOutUnwantedEmbeddedTags($AttributeSet* attr$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, attr$renamed);
	$nc(this->tagsToRemove)->removeAllElements();
	$assign(attr, convertToHTML(attr, nullptr));
	$var($HTML$Tag, t, nullptr);
	$var($Object, tValue, nullptr);
	int32_t firstIndex = -1;
	int32_t size = $nc(this->tags)->size();
	for (int32_t i = size - 1; i >= 0; --i) {
		$assign(t, $cast($HTML$Tag, $nc(this->tags)->elementAt(i)));
		$assign(tValue, $nc(this->tagValues)->elementAt(i));
		if ((attr == nullptr) || noMatchForTagInAttributes(attr, t, tValue)) {
			firstIndex = i;
			$nc(this->tagsToRemove)->addElement(t);
		}
	}
	if (firstIndex != -1) {
		bool removeAll = ((size - firstIndex) == $nc(this->tagsToRemove)->size());
		for (int32_t i = size - 1; i >= firstIndex; --i) {
			$assign(t, $cast($HTML$Tag, $nc(this->tags)->elementAt(i)));
			if (removeAll || $nc(this->tagsToRemove)->contains(t)) {
				$nc(this->tags)->removeElementAt(i);
				$nc(this->tagValues)->removeElementAt(i);
			}
			write(u'<');
			write(u'/');
			write($($nc(t)->toString()));
			write(u'>');
		}
		size = $nc(this->tags)->size();
		for (int32_t i = firstIndex; i < size; ++i) {
			$assign(t, $cast($HTML$Tag, $nc(this->tags)->elementAt(i)));
			write(u'<');
			write($($nc(t)->toString()));
			$var($Object, o, $nc(this->tagValues)->elementAt(i));
			if (o != nullptr && $instanceOf($AttributeSet, o)) {
				writeAttributes($cast($AttributeSet, o));
			}
			write(u'>');
		}
	}
}

bool HTMLWriter::isFormElementWithContent($AttributeSet* attr) {
	$init($HTML$Tag);
	bool var$0 = matchNameAttribute(attr, $HTML$Tag::TEXTAREA);
	return var$0 || matchNameAttribute(attr, $HTML$Tag::SELECT);
}

bool HTMLWriter::isPreTagWithParagraphTag($AttributeSet* attr) {
	$init($HTML$Tag);
	return this->inPre && matchNameAttribute(attr, $HTML$Tag::P);
}

bool HTMLWriter::indentNeedsIncrementing($Element* current, $Element* next) {
	if (($nc(next)->getParentElement() == current) && !this->inPre) {
		if (this->indentNext) {
			this->indentNext = false;
			return true;
		} else if (synthesizedElement(next)) {
			this->indentNext = true;
		} else if (!synthesizedElement(current)) {
			return true;
		}
	}
	return false;
}

void HTMLWriter::writeMaps($Enumeration* maps) {
	$useLocalCurrentObjectStackCache();
	if (maps != nullptr) {
		while (maps->hasMoreElements()) {
			$var($Map, map, $cast($Map, maps->nextElement()));
			$var($String, name, $nc(map)->getName());
			incrIndent();
			indentSmart();
			write("<map"_s);
			if (name != nullptr) {
				write(" name=\""_s);
				write(name);
				write("\">"_s);
			} else {
				write(u'>');
			}
			writeLineSeparator();
			incrIndent();
			$var($AttributeSetArray, areas, map->getAreas());
			if (areas != nullptr) {
				{
					int32_t counter = 0;
					int32_t maxCounter = areas->length;
					for (; counter < maxCounter; ++counter) {
						indentSmart();
						write("<area"_s);
						writeAttributes(areas->get(counter));
						write("></area>"_s);
						writeLineSeparator();
					}
				}
			}
			decrIndent();
			indentSmart();
			write("</map>"_s);
			writeLineSeparator();
			decrIndent();
		}
	}
}

void HTMLWriter::writeStyles($StyleSheet* sheet) {
	$useLocalCurrentObjectStackCache();
	if (sheet != nullptr) {
		$var($Enumeration, styles, sheet->getStyleNames());
		if (styles != nullptr) {
			bool outputStyle = false;
			while (styles->hasMoreElements()) {
				$var($String, name, $cast($String, styles->nextElement()));
				$init($StyleContext);
				bool var$0 = !$nc($StyleContext::DEFAULT_STYLE)->equals(name);
				if (var$0 && writeStyle(name, $(sheet->getStyle(name)), outputStyle)) {
					outputStyle = true;
				}
			}
			if (outputStyle) {
				writeStyleEndTag();
			}
		}
	}
}

bool HTMLWriter::writeStyle($String* name, $Style* style, bool outputStyle) {
	$useLocalCurrentObjectStackCache();
	bool didOutputStyle = false;
	$var($Enumeration, attributes, $nc(style)->getAttributeNames());
	if (attributes != nullptr) {
		while (attributes->hasMoreElements()) {
			$var($Object, attribute, attributes->nextElement());
			if ($instanceOf($CSS$Attribute, attribute)) {
				$var($String, value, $nc($of($(style->getAttribute(attribute))))->toString());
				if (value != nullptr) {
					if (!outputStyle) {
						writeStyleStartTag();
						outputStyle = true;
					}
					if (!didOutputStyle) {
						didOutputStyle = true;
						indentSmart();
						write(name);
						write(" {"_s);
					} else {
						write(";"_s);
					}
					write(u' ');
					write($($nc($of(attribute))->toString()));
					write(": "_s);
					write(value);
				}
			}
		}
	}
	if (didOutputStyle) {
		write(" }"_s);
		writeLineSeparator();
	}
	return didOutputStyle;
}

void HTMLWriter::writeStyleStartTag() {
	indentSmart();
	write("<style type=\"text/css\">"_s);
	incrIndent();
	writeLineSeparator();
	indentSmart();
	write("<!--"_s);
	incrIndent();
	writeLineSeparator();
}

void HTMLWriter::writeStyleEndTag() {
	decrIndent();
	indentSmart();
	write("-->"_s);
	writeLineSeparator();
	decrIndent();
	indentSmart();
	write("</style>"_s);
	writeLineSeparator();
	indentSmart();
}

$AttributeSet* HTMLWriter::convertToHTML($AttributeSet* from, $MutableAttributeSet* to$renamed) {
	$var($MutableAttributeSet, to, to$renamed);
	if (to == nullptr) {
		$assign(to, this->convAttr);
	}
	$nc(to)->removeAttributes(static_cast<$AttributeSet*>(to));
	if (this->writeCSS) {
		convertToHTML40(from, to);
	} else {
		convertToHTML32(from, to);
	}
	return to;
}

void HTMLWriter::convertToHTML32($AttributeSet* from, $MutableAttributeSet* to) {
	$init(HTMLWriter);
	$useLocalCurrentObjectStackCache();
	if (from == nullptr) {
		return;
	}
	$var($Enumeration, keys, $nc(from)->getAttributeNames());
	$var($String, value, ""_s);
	while ($nc(keys)->hasMoreElements()) {
		$var($Object, key, keys->nextElement());
		if ($instanceOf($CSS$Attribute, key)) {
			$init($CSS$Attribute);
			if (($equals(key, $CSS$Attribute::FONT_FAMILY)) || ($equals(key, $CSS$Attribute::FONT_SIZE)) || ($equals(key, $CSS$Attribute::COLOR))) {
				createFontAttribute($cast($CSS$Attribute, key), from, to);
			} else {
				if ($equals(key, $CSS$Attribute::FONT_WEIGHT)) {
					$var($CSS$FontWeight, weightValue, $cast($CSS$FontWeight, from->getAttribute($CSS$Attribute::FONT_WEIGHT)));
					if ((weightValue != nullptr) && (weightValue->getValue() > 400)) {
						$init($HTML$Tag);
						$init($SimpleAttributeSet);
						addAttribute(to, $HTML$Tag::B, $SimpleAttributeSet::EMPTY);
					}
				} else {
					if ($equals(key, $CSS$Attribute::FONT_STYLE)) {
						$var($String, s, $nc($of($(from->getAttribute(key))))->toString());
						if ($nc(s)->indexOf("italic"_s) >= 0) {
							$init($HTML$Tag);
							$init($SimpleAttributeSet);
							addAttribute(to, $HTML$Tag::I, $SimpleAttributeSet::EMPTY);
						}
					} else {
						if ($equals(key, $CSS$Attribute::TEXT_DECORATION)) {
							$var($String, decor, $nc($of($(from->getAttribute(key))))->toString());
							if ($nc(decor)->indexOf("underline"_s) >= 0) {
								$init($HTML$Tag);
								$init($SimpleAttributeSet);
								addAttribute(to, $HTML$Tag::U, $SimpleAttributeSet::EMPTY);
							}
							if ($nc(decor)->indexOf("line-through"_s) >= 0) {
								$init($HTML$Tag);
								$init($SimpleAttributeSet);
								addAttribute(to, $HTML$Tag::STRIKE, $SimpleAttributeSet::EMPTY);
							}
						} else {
							if ($equals(key, $CSS$Attribute::VERTICAL_ALIGN)) {
								$var($String, vAlign, $nc($of($(from->getAttribute(key))))->toString());
								if ($nc(vAlign)->indexOf("sup"_s) >= 0) {
									$init($HTML$Tag);
									$init($SimpleAttributeSet);
									addAttribute(to, $HTML$Tag::SUP, $SimpleAttributeSet::EMPTY);
								}
								if ($nc(vAlign)->indexOf("sub"_s) >= 0) {
									$init($HTML$Tag);
									$init($SimpleAttributeSet);
									addAttribute(to, $HTML$Tag::SUB, $SimpleAttributeSet::EMPTY);
								}
							} else {
								if ($equals(key, $CSS$Attribute::TEXT_ALIGN)) {
									$init($HTML$Attribute);
									addAttribute(to, $HTML$Attribute::ALIGN, $($nc($of($(from->getAttribute(key))))->toString()));
								} else {
									if ($nc(value)->length() > 0) {
										$assign(value, $str({value, "; "_s}));
									}
									$var($String, var$0, $$str({value, key, ": "_s}));
									$assign(value, $concat(var$0, $(from->getAttribute(key))));
								}
							}
						}
					}
				}
			}
		} else {
			$var($Object, attr, from->getAttribute(key));
			if ($instanceOf($AttributeSet, attr)) {
				$assign(attr, $nc(($cast($AttributeSet, attr)))->copyAttributes());
			}
			addAttribute(to, key, attr);
		}
	}
	if ($nc(value)->length() > 0) {
		$init($HTML$Attribute);
		$nc(to)->addAttribute($HTML$Attribute::STYLE, value);
	}
}

void HTMLWriter::addAttribute($MutableAttributeSet* to, Object$* key, Object$* value) {
	$init(HTMLWriter);
	$var($Object, attr, $nc(to)->getAttribute(key));
	$init($SimpleAttributeSet);
	if (attr == nullptr || $equals(attr, $SimpleAttributeSet::EMPTY)) {
		to->addAttribute(key, value);
	} else if ($instanceOf($MutableAttributeSet, attr) && $instanceOf($AttributeSet, value)) {
		$nc(($cast($MutableAttributeSet, attr)))->addAttributes($cast($AttributeSet, value));
	}
}

void HTMLWriter::createFontAttribute($CSS$Attribute* a, $AttributeSet* from, $MutableAttributeSet* to) {
	$init(HTMLWriter);
	$useLocalCurrentObjectStackCache();
	$init($HTML$Tag);
	$var($MutableAttributeSet, fontAttr, $cast($MutableAttributeSet, $nc(to)->getAttribute($HTML$Tag::FONT)));
	if (fontAttr == nullptr) {
		$assign(fontAttr, $new($SimpleAttributeSet));
		to->addAttribute($HTML$Tag::FONT, fontAttr);
	}
	$var($String, htmlValue, $nc($of($($nc(from)->getAttribute(a))))->toString());
	$init($CSS$Attribute);
	if (a == $CSS$Attribute::FONT_FAMILY) {
		$init($HTML$Attribute);
		$nc(fontAttr)->addAttribute($HTML$Attribute::FACE, htmlValue);
	} else {
		if (a == $CSS$Attribute::FONT_SIZE) {
			$init($HTML$Attribute);
			$nc(fontAttr)->addAttribute($HTML$Attribute::SIZE, htmlValue);
		} else {
			if (a == $CSS$Attribute::COLOR) {
				$init($HTML$Attribute);
				$nc(fontAttr)->addAttribute($HTML$Attribute::COLOR, htmlValue);
			}
		}
	}
}

void HTMLWriter::convertToHTML40($AttributeSet* from, $MutableAttributeSet* to) {
	$init(HTMLWriter);
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, keys, $nc(from)->getAttributeNames());
	$var($String, value, ""_s);
	while ($nc(keys)->hasMoreElements()) {
		$var($Object, key, keys->nextElement());
		if ($instanceOf($CSS$Attribute, key)) {
			$var($String, var$1, $$str({value, " "_s, key, "="_s}));
			$var($String, var$0, $$concat(var$1, $(from->getAttribute(key))));
			$assign(value, $concat(var$0, ";"_s));
		} else {
			$nc(to)->addAttribute(key, $(from->getAttribute(key)));
		}
	}
	if ($nc(value)->length() > 0) {
		$init($HTML$Attribute);
		$nc(to)->addAttribute($HTML$Attribute::STYLE, value);
	}
}

void HTMLWriter::writeLineSeparator() {
	bool oldReplace = this->replaceEntities;
	this->replaceEntities = false;
	$AbstractWriter::writeLineSeparator();
	this->replaceEntities = oldReplace;
	this->indented = false;
}

void HTMLWriter::output($chars* chars, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (!this->replaceEntities) {
		$AbstractWriter::output(chars, start, length);
		return;
	}
	int32_t last = start;
	length += start;
	for (int32_t counter = start; counter < length; ++counter) {
		switch ($nc(chars)->get(counter)) {
		case u'<':
			{
				if (counter > last) {
					$AbstractWriter::output(chars, last, counter - last);
				}
				last = counter + 1;
				output("&lt;"_s);
				break;
			}
		case u'>':
			{
				if (counter > last) {
					$AbstractWriter::output(chars, last, counter - last);
				}
				last = counter + 1;
				output("&gt;"_s);
				break;
			}
		case u'&':
			{
				if (counter > last) {
					$AbstractWriter::output(chars, last, counter - last);
				}
				last = counter + 1;
				output("&amp;"_s);
				break;
			}
		case u'\"':
			{
				if (counter > last) {
					$AbstractWriter::output(chars, last, counter - last);
				}
				last = counter + 1;
				output("&quot;"_s);
				break;
			}
		case u'\n':
			{}
		case u'\t':
			{}
		case u'\r':
			{
				break;
			}
		default:
			{
				if (chars->get(counter) < u' ' || chars->get(counter) > 127) {
					if (counter > last) {
						$AbstractWriter::output(chars, last, counter - last);
					}
					last = counter + 1;
					output("&#"_s);
					output($($String::valueOf((int32_t)chars->get(counter))));
					output(";"_s);
				}
				break;
			}
		}
	}
	if (last < length) {
		$AbstractWriter::output(chars, last, length - last);
	}
}

void HTMLWriter::output($String* string) {
	int32_t length = $nc(string)->length();
	if (this->tempChars == nullptr || $nc(this->tempChars)->length < length) {
		$set(this, tempChars, $new($chars, length));
	}
	string->getChars(0, length, this->tempChars, 0);
	$AbstractWriter::output(this->tempChars, 0, length);
}

void HTMLWriter::indentSmart() {
	if (!this->indented) {
		indent();
		this->indented = true;
	}
}

HTMLWriter::HTMLWriter() {
}

$Class* HTMLWriter::load$($String* name, bool initialize) {
	$loadClass(HTMLWriter, name, initialize, &_HTMLWriter_ClassInfo_, allocate$HTMLWriter);
	return class$;
}

$Class* HTMLWriter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax