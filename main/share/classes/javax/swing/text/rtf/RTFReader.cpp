#include <javax/swing/text/rtf/RTFReader.h>

#include <java/awt/Color.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/Number.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/rtf/AbstractFilter.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/MockAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFParser.h>
#include <javax/swing/text/rtf/RTFReader$1.h>
#include <javax/swing/text/rtf/RTFReader$AttributeTrackingDestination.h>
#include <javax/swing/text/rtf/RTFReader$ColortblDestination.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>
#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>
#include <javax/swing/text/rtf/RTFReader$DocumentDestination.h>
#include <javax/swing/text/rtf/RTFReader$FonttblDestination.h>
#include <javax/swing/text/rtf/RTFReader$InfoDestination.h>
#include <javax/swing/text/rtf/RTFReader$StylesheetDestination.h>
#include <javax/swing/text/rtf/RTFReader$TextHandlingDestination.h>
#include <jcpp.h>

#undef TT_NUMBER

using $Color = ::java::awt::Color;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $AbstractFilter = ::javax::swing::text::rtf::AbstractFilter;
using $Constants = ::javax::swing::text::rtf::Constants;
using $MockAttributeSet = ::javax::swing::text::rtf::MockAttributeSet;
using $RTFAttributes = ::javax::swing::text::rtf::RTFAttributes;
using $RTFParser = ::javax::swing::text::rtf::RTFParser;
using $RTFReader$1 = ::javax::swing::text::rtf::RTFReader$1;
using $RTFReader$AttributeTrackingDestination = ::javax::swing::text::rtf::RTFReader$AttributeTrackingDestination;
using $RTFReader$ColortblDestination = ::javax::swing::text::rtf::RTFReader$ColortblDestination;
using $RTFReader$Destination = ::javax::swing::text::rtf::RTFReader$Destination;
using $RTFReader$DiscardingDestination = ::javax::swing::text::rtf::RTFReader$DiscardingDestination;
using $RTFReader$DocumentDestination = ::javax::swing::text::rtf::RTFReader$DocumentDestination;
using $RTFReader$FonttblDestination = ::javax::swing::text::rtf::RTFReader$FonttblDestination;
using $RTFReader$InfoDestination = ::javax::swing::text::rtf::RTFReader$InfoDestination;
using $RTFReader$StylesheetDestination = ::javax::swing::text::rtf::RTFReader$StylesheetDestination;
using $RTFReader$TextHandlingDestination = ::javax::swing::text::rtf::RTFReader$TextHandlingDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFReader_FieldInfo_[] = {
	{"target", "Ljavax/swing/text/StyledDocument;", nullptr, 0, $field(RTFReader, target)},
	{"parserState", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;", 0, $field(RTFReader, parserState)},
	{"rtfDestination", "Ljavax/swing/text/rtf/RTFReader$Destination;", nullptr, 0, $field(RTFReader, rtfDestination)},
	{"documentAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFReader, documentAttributes)},
	{"fontTable", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Integer;Ljava/lang/String;>;", 0, $field(RTFReader, fontTable)},
	{"colorTable", "[Ljava/awt/Color;", nullptr, 0, $field(RTFReader, colorTable)},
	{"characterStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, characterStyles)},
	{"paragraphStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, paragraphStyles)},
	{"sectionStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, sectionStyles)},
	{"rtfversion", "I", nullptr, 0, $field(RTFReader, rtfversion)},
	{"ignoreGroupIfUnknownKeyword", "Z", nullptr, 0, $field(RTFReader, ignoreGroupIfUnknownKeyword)},
	{"skippingCharacters", "I", nullptr, 0, $field(RTFReader, skippingCharacters)},
	{"straightforwardAttributes", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;Ljavax/swing/text/rtf/RTFAttribute;>;", $PRIVATE | $STATIC, $staticField(RTFReader, straightforwardAttributes)},
	{"mockery", "Ljavax/swing/text/rtf/MockAttributeSet;", nullptr, $PRIVATE, $field(RTFReader, mockery)},
	{"textKeywords", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;Ljava/lang/String;>;", $STATIC, $staticField(RTFReader, textKeywords)},
	{"TabAlignmentKey", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(RTFReader, TabAlignmentKey)},
	{"TabLeaderKey", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(RTFReader, TabLeaderKey)},
	{"characterSets", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;[C>;", $STATIC, $staticField(RTFReader, characterSets)},
	{"useNeXTForAnsi", "Z", nullptr, $STATIC, $staticField(RTFReader, useNeXTForAnsi)},
	{}
};

$MethodInfo _RTFReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StyledDocument;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFReader::*)($StyledDocument*)>(&RTFReader::init$))},
	{"begingroup", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"defaultColor", "()Ljava/awt/Color;", nullptr, 0},
	{"defineCharacterSet", "(Ljava/lang/String;[C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$chars*)>(&RTFReader::defineCharacterSet))},
	{"endgroup", "()V", nullptr, $PUBLIC},
	{"getCharacterSet", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&RTFReader::getCharacterSet)), "java.io.IOException"},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"readCharset", "(Ljava/io/InputStream;)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)($InputStream*)>(&RTFReader::readCharset)), "java.io.IOException"},
	{"readCharset", "(Ljava/net/URL;)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)($URL*)>(&RTFReader::readCharset)), "java.io.IOException"},
	{"setCharacterSet", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setRTFDestination", "(Ljavax/swing/text/rtf/RTFReader$Destination;)V", nullptr, $PROTECTED},
	{"setTargetAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(RTFReader::*)($String*,Object$*)>(&RTFReader::setTargetAttribute))},
	{}
};

$InnerClassInfo _RTFReader_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$DocumentDestination", "javax.swing.text.rtf.RTFReader", "DocumentDestination", 0},
	{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
	{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
	{"javax.swing.text.rtf.RTFReader$InfoDestination", "javax.swing.text.rtf.RTFReader", "InfoDestination", 0},
	{"javax.swing.text.rtf.RTFReader$StylesheetDestination", "javax.swing.text.rtf.RTFReader", "StylesheetDestination", 0},
	{"javax.swing.text.rtf.RTFReader$ColortblDestination", "javax.swing.text.rtf.RTFReader", "ColortblDestination", 0},
	{"javax.swing.text.rtf.RTFReader$FonttblDestination", "javax.swing.text.rtf.RTFReader", "FonttblDestination", 0},
	{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.rtf.RTFReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RTFReader_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFReader",
	"javax.swing.text.rtf.RTFParser",
	nullptr,
	_RTFReader_FieldInfo_,
	_RTFReader_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader$DocumentDestination,javax.swing.text.rtf.RTFReader$TextHandlingDestination,javax.swing.text.rtf.RTFReader$AttributeTrackingDestination,javax.swing.text.rtf.RTFReader$InfoDestination,javax.swing.text.rtf.RTFReader$StylesheetDestination,javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination,javax.swing.text.rtf.RTFReader$ColortblDestination,javax.swing.text.rtf.RTFReader$FonttblDestination,javax.swing.text.rtf.RTFReader$DiscardingDestination,javax.swing.text.rtf.RTFReader$Destination,javax.swing.text.rtf.RTFReader$1"
};

$Object* allocate$RTFReader($Class* clazz) {
	return $of($alloc(RTFReader));
}

$Dictionary* RTFReader::straightforwardAttributes = nullptr;
$Dictionary* RTFReader::textKeywords = nullptr;
$String* RTFReader::TabAlignmentKey = nullptr;
$String* RTFReader::TabLeaderKey = nullptr;
$Dictionary* RTFReader::characterSets = nullptr;
bool RTFReader::useNeXTForAnsi = false;

void RTFReader::init$($StyledDocument* destination) {
	$RTFParser::init$();
	int32_t i = 0;
	$set(this, target, destination);
	$set(this, parserState, $new($Hashtable));
	$set(this, fontTable, $new($Hashtable));
	this->rtfversion = -1;
	$set(this, mockery, $new($MockAttributeSet));
	$set(this, documentAttributes, $new($SimpleAttributeSet));
}

void RTFReader::handleBinaryBlob($bytes* data) {
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return;
	}
}

void RTFReader::handleText($String* text$renamed) {
	$var($String, text, text$renamed);
	if (this->skippingCharacters > 0) {
		if (this->skippingCharacters >= $nc(text)->length()) {
			this->skippingCharacters -= text->length();
			return;
		} else {
			$assign(text, text->substring(this->skippingCharacters));
			this->skippingCharacters = 0;
		}
	}
	if (this->rtfDestination != nullptr) {
		$nc(this->rtfDestination)->handleText(text);
		return;
	}
	warning("Text with no destination. oops."_s);
}

$Color* RTFReader::defaultColor() {
	$init($Color);
	return $Color::black;
}

void RTFReader::begingroup() {
	$useLocalCurrentObjectStackCache();
	if (this->skippingCharacters > 0) {
		this->skippingCharacters = 0;
	}
	$var($Object, oldSaveState, $nc(this->parserState)->get("_savedState"_s));
	if (oldSaveState != nullptr) {
		$nc(this->parserState)->remove("_savedState"_s);
	}
	$var($Dictionary, saveState, $cast($Dictionary, $nc(($cast($Hashtable, this->parserState)))->clone()));
	if (oldSaveState != nullptr) {
		$nc(saveState)->put("_savedState"_s, oldSaveState);
	}
	$nc(this->parserState)->put("_savedState"_s, saveState);
	if (this->rtfDestination != nullptr) {
		$nc(this->rtfDestination)->begingroup();
	}
}

void RTFReader::endgroup() {
	$useLocalCurrentObjectStackCache();
	if (this->skippingCharacters > 0) {
		this->skippingCharacters = 0;
	}
	$var($Dictionary, restoredState, $cast($Dictionary, $nc(this->parserState)->get("_savedState"_s)));
	$var($RTFReader$Destination, restoredDestination, $cast($RTFReader$Destination, $nc(restoredState)->get("dst"_s)));
	if (restoredDestination != this->rtfDestination) {
		$nc(this->rtfDestination)->close();
		$set(this, rtfDestination, restoredDestination);
	}
	$var($Dictionary, oldParserState, this->parserState);
	$set(this, parserState, restoredState);
	if (this->rtfDestination != nullptr) {
		$nc(this->rtfDestination)->endgroup(oldParserState);
	}
}

void RTFReader::setRTFDestination($RTFReader$Destination* newDestination) {
	$var($Dictionary, previousState, $cast($Dictionary, $nc(this->parserState)->get("_savedState"_s)));
	if (previousState != nullptr) {
		if (!$equals(this->rtfDestination, previousState->get("dst"_s))) {
			warning("Warning, RTF destination overridden, invalid RTF."_s);
			$nc(this->rtfDestination)->close();
		}
	}
	$set(this, rtfDestination, newDestination);
	$nc(this->parserState)->put("dst"_s, this->rtfDestination);
}

void RTFReader::close() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, docProps, $nc(this->documentAttributes)->getAttributeNames());
	while ($nc(docProps)->hasMoreElements()) {
		$var($Object, propName, docProps->nextElement());
		$nc(this->target)->putProperty(propName, $($nc(this->documentAttributes)->getAttribute(propName)));
	}
	warning("RTF filter done."_s);
	$RTFParser::close();
}

bool RTFReader::handleKeyword($String* keyword) {
	$useLocalCurrentObjectStackCache();
	$var($String, item, nullptr);
	bool ignoreGroupIfUnknownKeywordSave = this->ignoreGroupIfUnknownKeyword;
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return true;
	}
	this->ignoreGroupIfUnknownKeyword = false;
	if (($assign(item, $cast($String, $nc(RTFReader::textKeywords)->get(keyword)))) != nullptr) {
		handleText(item);
		return true;
	}
	if ($nc(keyword)->equals("fonttbl"_s)) {
		setRTFDestination($$new($RTFReader$FonttblDestination, this));
		return true;
	}
	if ($nc(keyword)->equals("colortbl"_s)) {
		setRTFDestination($$new($RTFReader$ColortblDestination, this));
		return true;
	}
	if ($nc(keyword)->equals("stylesheet"_s)) {
		setRTFDestination($$new($RTFReader$StylesheetDestination, this));
		return true;
	}
	if ($nc(keyword)->equals("info"_s)) {
		setRTFDestination($$new($RTFReader$InfoDestination, this));
		return false;
	}
	if ($nc(keyword)->equals("mac"_s)) {
		setCharacterSet("mac"_s);
		return true;
	}
	if ($nc(keyword)->equals("ansi"_s)) {
		if (RTFReader::useNeXTForAnsi) {
			setCharacterSet("NeXT"_s);
		} else {
			setCharacterSet("ansi"_s);
		}
		return true;
	}
	if ($nc(keyword)->equals("next"_s)) {
		setCharacterSet("NeXT"_s);
		return true;
	}
	if ($nc(keyword)->equals("pc"_s)) {
		setCharacterSet("cpg437"_s);
		return true;
	}
	if ($nc(keyword)->equals("pca"_s)) {
		setCharacterSet("cpg850"_s);
		return true;
	}
	if ($nc(keyword)->equals("*"_s)) {
		this->ignoreGroupIfUnknownKeyword = true;
		return true;
	}
	if (this->rtfDestination != nullptr) {
		if ($nc(this->rtfDestination)->handleKeyword(keyword)) {
			return true;
		}
	}
	bool var$47 = $nc(keyword)->equals("aftncn"_s);
	bool var$46 = var$47 || $nc(keyword)->equals("aftnsep"_s);
	bool var$45 = var$46 || $nc(keyword)->equals("aftnsepc"_s);
	bool var$44 = var$45 || $nc(keyword)->equals("annotation"_s);
	bool var$43 = var$44 || $nc(keyword)->equals("atnauthor"_s);
	bool var$42 = var$43 || $nc(keyword)->equals("atnicn"_s);
	bool var$41 = var$42 || $nc(keyword)->equals("atnid"_s);
	bool var$40 = var$41 || $nc(keyword)->equals("atnref"_s);
	bool var$39 = var$40 || $nc(keyword)->equals("atntime"_s);
	bool var$38 = var$39 || $nc(keyword)->equals("atrfend"_s);
	bool var$37 = var$38 || $nc(keyword)->equals("atrfstart"_s);
	bool var$36 = var$37 || $nc(keyword)->equals("bkmkend"_s);
	bool var$35 = var$36 || $nc(keyword)->equals("bkmkstart"_s);
	bool var$34 = var$35 || $nc(keyword)->equals("datafield"_s);
	bool var$33 = var$34 || $nc(keyword)->equals("do"_s);
	bool var$32 = var$33 || $nc(keyword)->equals("dptxbxtext"_s);
	bool var$31 = var$32 || $nc(keyword)->equals("falt"_s);
	bool var$30 = var$31 || $nc(keyword)->equals("field"_s);
	bool var$29 = var$30 || $nc(keyword)->equals("file"_s);
	bool var$28 = var$29 || $nc(keyword)->equals("filetbl"_s);
	bool var$27 = var$28 || $nc(keyword)->equals("fname"_s);
	bool var$26 = var$27 || $nc(keyword)->equals("fontemb"_s);
	bool var$25 = var$26 || $nc(keyword)->equals("fontfile"_s);
	bool var$24 = var$25 || $nc(keyword)->equals("footer"_s);
	bool var$23 = var$24 || $nc(keyword)->equals("footerf"_s);
	bool var$22 = var$23 || $nc(keyword)->equals("footerl"_s);
	bool var$21 = var$22 || $nc(keyword)->equals("footerr"_s);
	bool var$20 = var$21 || $nc(keyword)->equals("footnote"_s);
	bool var$19 = var$20 || $nc(keyword)->equals("ftncn"_s);
	bool var$18 = var$19 || $nc(keyword)->equals("ftnsep"_s);
	bool var$17 = var$18 || $nc(keyword)->equals("ftnsepc"_s);
	bool var$16 = var$17 || $nc(keyword)->equals("header"_s);
	bool var$15 = var$16 || $nc(keyword)->equals("headerf"_s);
	bool var$14 = var$15 || $nc(keyword)->equals("headerl"_s);
	bool var$13 = var$14 || $nc(keyword)->equals("headerr"_s);
	bool var$12 = var$13 || $nc(keyword)->equals("keycode"_s);
	bool var$11 = var$12 || $nc(keyword)->equals("nextfile"_s);
	bool var$10 = var$11 || $nc(keyword)->equals("object"_s);
	bool var$9 = var$10 || $nc(keyword)->equals("pict"_s);
	bool var$8 = var$9 || $nc(keyword)->equals("pn"_s);
	bool var$7 = var$8 || $nc(keyword)->equals("pnseclvl"_s);
	bool var$6 = var$7 || $nc(keyword)->equals("pntxtb"_s);
	bool var$5 = var$6 || $nc(keyword)->equals("pntxta"_s);
	bool var$4 = var$5 || $nc(keyword)->equals("revtbl"_s);
	bool var$3 = var$4 || $nc(keyword)->equals("rxe"_s);
	bool var$2 = var$3 || $nc(keyword)->equals("tc"_s);
	bool var$1 = var$2 || $nc(keyword)->equals("template"_s);
	bool var$0 = var$1 || $nc(keyword)->equals("txe"_s);
	if (var$0 || $nc(keyword)->equals("xe"_s)) {
		ignoreGroupIfUnknownKeywordSave = true;
	}
	if (ignoreGroupIfUnknownKeywordSave) {
		setRTFDestination($$new($RTFReader$DiscardingDestination, this));
	}
	return false;
}

bool RTFReader::handleKeyword($String* keyword, int32_t parameter) {
	$useLocalCurrentObjectStackCache();
	bool ignoreGroupIfUnknownKeywordSave = this->ignoreGroupIfUnknownKeyword;
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return true;
	}
	this->ignoreGroupIfUnknownKeyword = false;
	if ($nc(keyword)->equals("uc"_s)) {
		$nc(this->parserState)->put("UnicodeSkip"_s, $($Integer::valueOf(parameter)));
		return true;
	}
	if ($nc(keyword)->equals("u"_s)) {
		if (parameter < 0) {
			parameter = parameter + 0x00010000;
		}
		handleText((char16_t)parameter);
		$var($Number, skip, ($cast($Number, $nc(this->parserState)->get("UnicodeSkip"_s))));
		if (skip != nullptr) {
			this->skippingCharacters = skip->intValue();
		} else {
			this->skippingCharacters = 1;
		}
		return true;
	}
	if ($nc(keyword)->equals("rtf"_s)) {
		this->rtfversion = parameter;
		setRTFDestination($$new($RTFReader$DocumentDestination, this));
		return true;
	}
	bool var$0 = $nc(keyword)->startsWith("NeXT"_s);
	if (var$0 || $nc(keyword)->equals("private"_s)) {
		ignoreGroupIfUnknownKeywordSave = true;
	}
	if ($nc(keyword)->contains("ansicpg"_s)) {
		setCharacterSet("ansicpg"_s);
		return true;
	}
	if (this->rtfDestination != nullptr) {
		if ($nc(this->rtfDestination)->handleKeyword(keyword, parameter)) {
			return true;
		}
	}
	if (ignoreGroupIfUnknownKeywordSave) {
		setRTFDestination($$new($RTFReader$DiscardingDestination, this));
	}
	return false;
}

void RTFReader::setTargetAttribute($String* name, Object$* value) {
}

void RTFReader::setCharacterSet($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($Object, set, nullptr);
	try {
		$assign(set, getCharacterSet(name));
	} catch ($Exception& e) {
		warning($$str({"Exception loading RTF character set \""_s, name, "\": "_s, e}));
		$assign(set, nullptr);
	}
	if (set != nullptr) {
		$set(this, translationTable, $cast($chars, set));
	} else {
		warning($$str({"Unknown RTF character set \""_s, name, "\""_s}));
		if (!$nc(name)->equals("ansi"_s)) {
			try {
				$set(this, translationTable, $cast($chars, getCharacterSet("ansi"_s)));
			} catch ($IOException& e) {
				$throwNew($InternalError, $$str({"RTFReader: Unable to find character set resources ("_s, e, ")"_s}), e);
			}
		}
	}
	$init($Constants);
	setTargetAttribute($Constants::RTFCharacterSet, name);
}

void RTFReader::defineCharacterSet($String* name, $chars* table) {
	$init(RTFReader);
	if ($nc(table)->length < 256) {
		$throwNew($IllegalArgumentException, "Translation table must have 256 entries."_s);
	}
	$nc(RTFReader::characterSets)->put(name, table);
}

$Object* RTFReader::getCharacterSet($String* name) {
	$init(RTFReader);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($chars, set, $cast($chars, $nc(RTFReader::characterSets)->get(name)));
	if (set == nullptr) {
		$var($InputStream, charsetStream, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($RTFReader$1, name)))));
		$assign(set, readCharset(charsetStream));
		defineCharacterSet(name, set);
	}
	return $of(set);
}

$chars* RTFReader::readCharset($InputStream* strm) {
	$init(RTFReader);
	$useLocalCurrentObjectStackCache();
	$var($chars, values, $new($chars, 256));
	int32_t i = 0;
	$var($StreamTokenizer, in, $new($StreamTokenizer, static_cast<$Reader*>($$new($BufferedReader, $$new($InputStreamReader, strm, "ISO-8859-1"_s)))));
	in->eolIsSignificant(false);
	in->commentChar(u'#');
	in->slashSlashComments(true);
	in->slashStarComments(true);
	i = 0;
	while (i < 256) {
		int32_t ttype = 0;
		try {
			ttype = in->nextToken();
		} catch ($Exception& e) {
			$throwNew($IOException, $$str({"Unable to read from character set file ("_s, e, ")"_s}));
		}
		if (ttype != $StreamTokenizer::TT_NUMBER) {
			$throwNew($IOException, "Unexpected token in character set file"_s);
		}
		values->set(i, (char16_t)(in->nval));
		++i;
	}
	return values;
}

$chars* RTFReader::readCharset($URL* href) {
	$init(RTFReader);
	return readCharset($($nc(href)->openStream()));
}

void clinit$RTFReader($Class* class$) {
	$assignStatic(RTFReader::TabAlignmentKey, "tab_alignment"_s);
	$assignStatic(RTFReader::TabLeaderKey, "tab_leader"_s);
	{
		$assignStatic(RTFReader::straightforwardAttributes, $RTFAttributes::attributesByKeyword());
	}
	$assignStatic(RTFReader::textKeywords, nullptr);
	{
		$assignStatic(RTFReader::textKeywords, $new($Hashtable));
		$nc(RTFReader::textKeywords)->put("\\"_s, "\\"_s);
		$nc(RTFReader::textKeywords)->put("{"_s, "{"_s);
		$nc(RTFReader::textKeywords)->put("}"_s, "}"_s);
		$nc(RTFReader::textKeywords)->put(" "_s, u" "_s);
		$nc(RTFReader::textKeywords)->put("~"_s, u" "_s);
		$nc(RTFReader::textKeywords)->put("_"_s, u"‑"_s);
		$nc(RTFReader::textKeywords)->put("bullet"_s, u"•"_s);
		$nc(RTFReader::textKeywords)->put("emdash"_s, u"—"_s);
		$nc(RTFReader::textKeywords)->put("emspace"_s, u" "_s);
		$nc(RTFReader::textKeywords)->put("endash"_s, u"–"_s);
		$nc(RTFReader::textKeywords)->put("enspace"_s, u" "_s);
		$nc(RTFReader::textKeywords)->put("ldblquote"_s, u"“"_s);
		$nc(RTFReader::textKeywords)->put("lquote"_s, u"‘"_s);
		$nc(RTFReader::textKeywords)->put("ltrmark"_s, u"\u200e"_s);
		$nc(RTFReader::textKeywords)->put("rdblquote"_s, u"”"_s);
		$nc(RTFReader::textKeywords)->put("rquote"_s, u"’"_s);
		$nc(RTFReader::textKeywords)->put("rtlmark"_s, u"\u200f"_s);
		$nc(RTFReader::textKeywords)->put("tab"_s, "\t"_s);
		$nc(RTFReader::textKeywords)->put("zwj"_s, u"\u200d"_s);
		$nc(RTFReader::textKeywords)->put("zwnj"_s, u"\u200c"_s);
		$nc(RTFReader::textKeywords)->put("-"_s, u"‧"_s);
	}
	RTFReader::useNeXTForAnsi = false;
	{
		$assignStatic(RTFReader::characterSets, $new($Hashtable));
		$init($AbstractFilter);
		RTFReader::defineCharacterSet("ansicpg"_s, $AbstractFilter::latin1TranslationTable);
	}
}

RTFReader::RTFReader() {
}

$Class* RTFReader::load$($String* name, bool initialize) {
	$loadClass(RTFReader, name, initialize, &_RTFReader_ClassInfo_, clinit$RTFReader, allocate$RTFReader);
	return class$;
}

$Class* RTFReader::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax