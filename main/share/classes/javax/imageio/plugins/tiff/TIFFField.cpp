#include <javax/imageio/plugins/tiff/TIFFField.h>

#include <com/sun/imageio/plugins/tiff/TIFFFieldNode.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/Cloneable.h>
#include <java/util/StringTokenizer.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef IS_INTEGRAL
#undef MAX_DATATYPE
#undef MAX_UINT32
#undef MIN_DATATYPE
#undef TIFF_ASCII
#undef TIFF_BYTE
#undef TIFF_DOUBLE
#undef TIFF_FLOAT
#undef TIFF_IFD_POINTER
#undef TIFF_LONG
#undef TIFF_RATIONAL
#undef TIFF_SBYTE
#undef TIFF_SHORT
#undef TIFF_SLONG
#undef TIFF_SRATIONAL
#undef TIFF_SSHORT
#undef TIFF_UNDEFINED
#undef TYPE_NAMES
#undef UNKNOWN_TAG_NAME

using $intArray2 = $Array<int32_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $TIFFFieldNode = ::com::sun::imageio::plugins::tiff::TIFFFieldNode;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _TIFFField_FieldInfo_[] = {
	{"MAX_UINT32", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFField, MAX_UINT32)},
	{"TYPE_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFField, TYPE_NAMES)},
	{"IS_INTEGRAL", "[Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFField, IS_INTEGRAL)},
	{"tag", "Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PRIVATE, $field(TIFFField, tag)},
	{"tagNumber", "I", nullptr, $PRIVATE, $field(TIFFField, tagNumber)},
	{"type", "I", nullptr, $PRIVATE, $field(TIFFField, type)},
	{"count", "I", nullptr, $PRIVATE, $field(TIFFField, count)},
	{"data", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TIFFField, data)},
	{"dir", "Ljavax/imageio/plugins/tiff/TIFFDirectory;", nullptr, $PRIVATE, $field(TIFFField, dir)},
	{}
};

$MethodInfo _TIFFField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFField::*)()>(&TIFFField::init$))},
	{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFTag;IILjava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFField::*)($TIFFTag*,int32_t,int32_t,Object$*)>(&TIFFField::init$))},
	{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFTag;II)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFField::*)($TIFFTag*,int32_t,int32_t)>(&TIFFField::init$))},
	{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFTag;J)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFField::*)($TIFFTag*,int64_t)>(&TIFFField::init$))},
	{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFTag;IJLjavax/imageio/plugins/tiff/TIFFDirectory;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFField::*)($TIFFTag*,int32_t,int64_t,$TIFFDirectory*)>(&TIFFField::init$))},
	{"clone", "()Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"createArrayForType", "(II)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(int32_t,int32_t)>(&TIFFField::createArrayForType))},
	{"createFromMetadataNode", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;Lorg/w3c/dom/Node;)Ljavax/imageio/plugins/tiff/TIFFField;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TIFFField*(*)($TIFFTagSet*,$Node*)>(&TIFFField::createFromMetadataNode))},
	{"getAsBytes", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(TIFFField::*)()>(&TIFFField::getAsBytes))},
	{"getAsChars", "()[C", nullptr, $PUBLIC, $method(static_cast<$chars*(TIFFField::*)()>(&TIFFField::getAsChars))},
	{"getAsDouble", "(I)D", nullptr, $PUBLIC, $method(static_cast<double(TIFFField::*)(int32_t)>(&TIFFField::getAsDouble))},
	{"getAsDoubles", "()[D", nullptr, $PUBLIC, $method(static_cast<$doubles*(TIFFField::*)()>(&TIFFField::getAsDoubles))},
	{"getAsFloat", "(I)F", nullptr, $PUBLIC, $method(static_cast<float(TIFFField::*)(int32_t)>(&TIFFField::getAsFloat))},
	{"getAsFloats", "()[F", nullptr, $PUBLIC, $method(static_cast<$floats*(TIFFField::*)()>(&TIFFField::getAsFloats))},
	{"getAsInt", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TIFFField::*)(int32_t)>(&TIFFField::getAsInt))},
	{"getAsInts", "()[I", nullptr, $PUBLIC, $method(static_cast<$ints*(TIFFField::*)()>(&TIFFField::getAsInts))},
	{"getAsLong", "(I)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TIFFField::*)(int32_t)>(&TIFFField::getAsLong))},
	{"getAsLongs", "()[J", nullptr, $PUBLIC, $method(static_cast<$longs*(TIFFField::*)()>(&TIFFField::getAsLongs))},
	{"getAsNativeNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $method(static_cast<$Node*(TIFFField::*)()>(&TIFFField::getAsNativeNode))},
	{"getAsRational", "(I)[J", nullptr, $PUBLIC, $method(static_cast<$longs*(TIFFField::*)(int32_t)>(&TIFFField::getAsRational))},
	{"getAsRationals", "()[[J", nullptr, $PUBLIC, $method(static_cast<$longArray2*(TIFFField::*)()>(&TIFFField::getAsRationals))},
	{"getAsSRational", "(I)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(TIFFField::*)(int32_t)>(&TIFFField::getAsSRational))},
	{"getAsSRationals", "()[[I", nullptr, $PUBLIC, $method(static_cast<$intArray2*(TIFFField::*)()>(&TIFFField::getAsSRationals))},
	{"getAsShorts", "()[S", nullptr, $PUBLIC, $method(static_cast<$shorts*(TIFFField::*)()>(&TIFFField::getAsShorts))},
	{"getAsString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(TIFFField::*)(int32_t)>(&TIFFField::getAsString))},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Node*,$String*)>(&TIFFField::getAttribute))},
	{"getCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TIFFField::*)()>(&TIFFField::getCount))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(TIFFField::*)()>(&TIFFField::getData))},
	{"getDirectory", "()Ljavax/imageio/plugins/tiff/TIFFDirectory;", nullptr, $PUBLIC, $method(static_cast<$TIFFDirectory*(TIFFField::*)()>(&TIFFField::getDirectory))},
	{"getTag", "()Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC, $method(static_cast<$TIFFTag*(TIFFField::*)()>(&TIFFField::getTag))},
	{"getTagNumber", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TIFFField::*)()>(&TIFFField::getTagNumber))},
	{"getType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TIFFField::*)()>(&TIFFField::getType))},
	{"getTypeByName", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&TIFFField::getTypeByName))},
	{"getTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&TIFFField::getTypeName))},
	{"getValueAsString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(TIFFField::*)(int32_t)>(&TIFFField::getValueAsString))},
	{"hasDirectory", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TIFFField::*)()>(&TIFFField::hasDirectory))},
	{"initData", "(Lorg/w3c/dom/Node;[I[I[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*,$ints*,$ints*,$ObjectArray*)>(&TIFFField::initData))},
	{"isIntegral", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TIFFField::*)()>(&TIFFField::isIntegral))},
	{}
};

$ClassInfo _TIFFField_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.TIFFField",
	"java.lang.Object",
	"java.lang.Cloneable",
	_TIFFField_FieldInfo_,
	_TIFFField_MethodInfo_
};

$Object* allocate$TIFFField($Class* clazz) {
	return $of($alloc(TIFFField));
}

$StringArray* TIFFField::TYPE_NAMES = nullptr;
$booleans* TIFFField::IS_INTEGRAL = nullptr;

void TIFFField::init$() {
}

$String* TIFFField::getAttribute($Node* node, $String* attrName) {
	$init(TIFFField);
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	return $nc($($nc(attrs)->getNamedItem(attrName)))->getNodeValue();
}

void TIFFField::initData($Node* node, $ints* otype, $ints* ocount, $ObjectArray* odata) {
	$init(TIFFField);
	$useLocalCurrentObjectStackCache();
	int32_t type = 0;
	int32_t count = 0;
	$var($Object, data, nullptr);
	$var($String, typeName, $nc(node)->getNodeName());
	$assign(typeName, $nc(typeName)->substring(4));
	$assign(typeName, typeName->substring(0, typeName->length() - 1));
	type = TIFFField::getTypeByName(typeName);
	if (type == -1) {
		$throwNew($IllegalArgumentException, $$str({"typeName = "_s, typeName}));
	}
	$var($Node, child, node->getFirstChild());
	count = 0;
	while (child != nullptr) {
		$var($String, childTypeName, $nc($(child->getNodeName()))->substring(4));
		if (!typeName->equals(childTypeName)) {
		}
		++count;
		$assign(child, child->getNextSibling());
	}
	if (count > 0) {
		$assign(data, createArrayForType(type, count));
		$assign(child, node->getFirstChild());
		int32_t idx = 0;
		while (child != nullptr) {
			$var($String, value, getAttribute(child, "value"_s));
			$var($String, numerator, nullptr);
			$var($String, denominator, nullptr);
			int32_t slashPos = 0;
			switch (type) {
			case $TIFFTag::TIFF_ASCII:
				{
					$nc(($cast($StringArray, data)))->set(idx, value);
					break;
				}
			case $TIFFTag::TIFF_BYTE:
				{}
			case $TIFFTag::TIFF_SBYTE:
				{
					$nc(($cast($bytes, data)))->set(idx, (int8_t)$Integer::parseInt(value));
					break;
				}
			case $TIFFTag::TIFF_SHORT:
				{
					$nc(($cast($chars, data)))->set(idx, (char16_t)$Integer::parseInt(value));
					break;
				}
			case $TIFFTag::TIFF_SSHORT:
				{
					$nc(($cast($shorts, data)))->set(idx, (int16_t)$Integer::parseInt(value));
					break;
				}
			case $TIFFTag::TIFF_SLONG:
				{
					$nc(($cast($ints, data)))->set(idx, $Integer::parseInt(value));
					break;
				}
			case $TIFFTag::TIFF_LONG:
				{}
			case $TIFFTag::TIFF_IFD_POINTER:
				{
					$nc(($cast($longs, data)))->set(idx, $Long::parseLong(value));
					break;
				}
			case $TIFFTag::TIFF_FLOAT:
				{
					$nc(($cast($floats, data)))->set(idx, $Float::parseFloat(value));
					break;
				}
			case $TIFFTag::TIFF_DOUBLE:
				{
					$nc(($cast($doubles, data)))->set(idx, $Double::parseDouble(value));
					break;
				}
			case $TIFFTag::TIFF_SRATIONAL:
				{
					slashPos = $nc(value)->indexOf("/"_s);
					$assign(numerator, $nc(value)->substring(0, slashPos));
					$assign(denominator, $nc(value)->substring(slashPos + 1));
					$nc(($cast($intArray2, data)))->set(idx, $$new($ints, 2));
					$nc($nc(($cast($intArray2, data)))->get(idx))->set(0, $Integer::parseInt(numerator));
					$nc($nc(($cast($intArray2, data)))->get(idx))->set(1, $Integer::parseInt(denominator));
					break;
				}
			case $TIFFTag::TIFF_RATIONAL:
				{
					slashPos = $nc(value)->indexOf("/"_s);
					$assign(numerator, $nc(value)->substring(0, slashPos));
					$assign(denominator, $nc(value)->substring(slashPos + 1));
					$nc(($cast($longArray2, data)))->set(idx, $$new($longs, 2));
					$nc($nc(($cast($longArray2, data)))->get(idx))->set(0, $Long::parseLong(numerator));
					$nc($nc(($cast($longArray2, data)))->get(idx))->set(1, $Long::parseLong(denominator));
					break;
				}
			default:
				{}
			}
			++idx;
			$assign(child, child->getNextSibling());
		}
	}
	$nc(otype)->set(0, type);
	$nc(ocount)->set(0, count);
	$nc(odata)->set(0, data);
}

TIFFField* TIFFField::createFromMetadataNode($TIFFTagSet* tagSet, $Node* node) {
	$init(TIFFField);
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>($$new($NullPointerException, "node == null!"_s)));
	}
	$var($String, name, $nc(node)->getNodeName());
	if (!$nc(name)->equals("TIFFField"_s)) {
		$throwNew($IllegalArgumentException, "!name.equals(\"TIFFField\")"_s);
	}
	int32_t tagNumber = $Integer::parseInt($(getAttribute(node, "number"_s)));
	$var($TIFFTag, tag, nullptr);
	if (tagSet != nullptr) {
		$assign(tag, tagSet->getTag(tagNumber));
	}
	int32_t type = $TIFFTag::TIFF_UNDEFINED;
	int32_t count = 0;
	$var($Object, data, nullptr);
	$var($Node, child, node->getFirstChild());
	if (child != nullptr) {
		$var($String, typeName, child->getNodeName());
		if ($nc(typeName)->equals("TIFFUndefined"_s)) {
			$var($String, values, getAttribute(child, "value"_s));
			$var($StringTokenizer, st, $new($StringTokenizer, values, ","_s));
			count = st->countTokens();
			$var($bytes, bdata, $new($bytes, count));
			for (int32_t i = 0; i < count; ++i) {
				bdata->set(i, (int8_t)$Integer::parseInt($(st->nextToken())));
			}
			type = $TIFFTag::TIFF_UNDEFINED;
			$assign(data, bdata);
		} else {
			$var($ints, otype, $new($ints, 1));
			$var($ints, ocount, $new($ints, 1));
			$var($ObjectArray, odata, $new($ObjectArray, 1));
			initData($(node->getFirstChild()), otype, ocount, odata);
			type = otype->get(0);
			count = ocount->get(0);
			$assign(data, odata->get(0));
		}
	} else if (tag != nullptr) {
		int32_t t = $TIFFTag::MAX_DATATYPE;
		while (t >= $TIFFTag::MIN_DATATYPE && !tag->isDataTypeOK(t)) {
			--t;
		}
		type = t;
	}
	if (tag == nullptr) {
		$init($TIFFTag);
		$assign(tag, $new($TIFFTag, $TIFFTag::UNKNOWN_TAG_NAME, tagNumber, $sl(1, type)));
	}
	$var(TIFFField, field, nullptr);
	try {
		$assign(field, $new(TIFFField, tag, type, count, data));
	} catch ($NullPointerException& npe) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(npe));
	}
	return field;
}

void TIFFField::init$($TIFFTag* tag, int32_t type, int32_t count, Object$* data) {
	$useLocalCurrentObjectStackCache();
	if (tag == nullptr) {
		$throwNew($NullPointerException, "tag == null!"_s);
	} else if (type < $TIFFTag::MIN_DATATYPE || type > $TIFFTag::MAX_DATATYPE) {
		$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(type)}));
	} else if (!$nc(tag)->isDataTypeOK(type)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal data type "_s, $$str(type), " for "_s, $(tag->getName()), " tag"_s}));
	} else if (count < 0) {
		$throwNew($IllegalArgumentException, "count < 0!"_s);
	} else if ((type == $TIFFTag::TIFF_RATIONAL || type == $TIFFTag::TIFF_SRATIONAL) && count < 1) {
		$throwNew($IllegalArgumentException, "Type is TIFF_RATIONAL or TIFF_SRATIONAL and count < 1"_s);
	} else if (type == $TIFFTag::TIFF_IFD_POINTER && count != 1) {
		$throwNew($IllegalArgumentException, "Type is TIFF_IFD_POINTER and count != 1"_s);
	} else if (data == nullptr) {
		$throwNew($NullPointerException, "data == null!"_s);
	}
	bool isDataArrayCorrect = false;
	switch (type) {
	case $TIFFTag::TIFF_BYTE:
		{}
	case $TIFFTag::TIFF_SBYTE:
		{}
	case $TIFFTag::TIFF_UNDEFINED:
		{
			isDataArrayCorrect = $instanceOf($bytes, data) && $nc(($cast($bytes, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_ASCII:
		{
			isDataArrayCorrect = $instanceOf($StringArray, data) && $nc(($cast($StringArray, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_SHORT:
		{
			isDataArrayCorrect = $instanceOf($chars, data) && $nc(($cast($chars, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_LONG:
		{
			isDataArrayCorrect = $instanceOf($longs, data) && $nc(($cast($longs, data)))->length == count;
			if (isDataArrayCorrect) {
				{
					$var($longs, arr$, $cast($longs, data));
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int64_t datum = arr$->get(i$);
						{
							if (datum < 0) {
								$throwNew($IllegalArgumentException, "Negative value supplied for TIFF_LONG"_s);
							}
							if (datum > TIFFField::MAX_UINT32) {
								$throwNew($IllegalArgumentException, "Too large value supplied for TIFF_LONG"_s);
							}
						}
					}
				}
			}
			break;
		}
	case $TIFFTag::TIFF_IFD_POINTER:
		{
			isDataArrayCorrect = $instanceOf($longs, data) && $nc(($cast($longs, data)))->length == 1;
			if ($nc(($cast($longs, data)))->get(0) < 0) {
				$throwNew($IllegalArgumentException, "Negative value supplied for TIFF_IFD_POINTER"_s);
			}
			if ($nc(($cast($longs, data)))->get(0) > TIFFField::MAX_UINT32) {
				$throwNew($IllegalArgumentException, "Too large value supplied for TIFF_IFD_POINTER"_s);
			}
			break;
		}
	case $TIFFTag::TIFF_RATIONAL:
		{
			isDataArrayCorrect = $instanceOf($longArray2, data) && $nc(($cast($longArray2, data)))->length == count;
			if (isDataArrayCorrect) {
				{
					$var($longArray2, arr$, $cast($longArray2, data));
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($longs, datum, arr$->get(i$));
						{
							if ($nc(datum)->length != 2) {
								isDataArrayCorrect = false;
								break;
							}
							if ($nc(datum)->get(0) < 0 || $nc(datum)->get(1) < 0) {
								$throwNew($IllegalArgumentException, "Negative value supplied for TIFF_RATIONAL"_s);
							}
							if ($nc(datum)->get(0) > TIFFField::MAX_UINT32 || $nc(datum)->get(1) > TIFFField::MAX_UINT32) {
								$throwNew($IllegalArgumentException, "Too large value supplied for TIFF_RATIONAL"_s);
							}
						}
					}
				}
			}
			break;
		}
	case $TIFFTag::TIFF_SSHORT:
		{
			isDataArrayCorrect = $instanceOf($shorts, data) && $nc(($cast($shorts, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_SLONG:
		{
			isDataArrayCorrect = $instanceOf($ints, data) && $nc(($cast($ints, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_SRATIONAL:
		{
			isDataArrayCorrect = $instanceOf($intArray2, data) && $nc(($cast($intArray2, data)))->length == count;
			if (isDataArrayCorrect) {
				{
					$var($intArray2, arr$, $cast($intArray2, data));
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($ints, datum, arr$->get(i$));
						{
							if ($nc(datum)->length != 2) {
								isDataArrayCorrect = false;
								break;
							}
						}
					}
				}
			}
			break;
		}
	case $TIFFTag::TIFF_FLOAT:
		{
			isDataArrayCorrect = $instanceOf($floats, data) && $nc(($cast($floats, data)))->length == count;
			break;
		}
	case $TIFFTag::TIFF_DOUBLE:
		{
			isDataArrayCorrect = $instanceOf($doubles, data) && $nc(($cast($doubles, data)))->length == count;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(type)}));
		}
	}
	if (!isDataArrayCorrect) {
		$throwNew($IllegalArgumentException, "Illegal class or length for data array"_s);
	}
	$set(this, tag, tag);
	this->tagNumber = $nc(tag)->getNumber();
	this->type = type;
	this->count = count;
	$set(this, data, data);
}

void TIFFField::init$($TIFFTag* tag, int32_t type, int32_t count) {
	TIFFField::init$(tag, type, count, $(createArrayForType(type, count)));
}

void TIFFField::init$($TIFFTag* tag, int64_t value) {
	$useLocalCurrentObjectStackCache();
	if (tag == nullptr) {
		$throwNew($NullPointerException, "tag == null!"_s);
	}
	if (value < 0) {
		$throwNew($IllegalArgumentException, "value < 0!"_s);
	}
	if (value > TIFFField::MAX_UINT32) {
		$throwNew($IllegalArgumentException, "value > 0xffffffff!"_s);
	}
	$set(this, tag, tag);
	this->tagNumber = $nc(tag)->getNumber();
	this->count = 1;
	if (value < 0x00010000) {
		if (!tag->isDataTypeOK($TIFFTag::TIFF_SHORT)) {
			$var($String, var$1, $$str({"Illegal data type "_s, $(getTypeName($TIFFTag::TIFF_SHORT)), " for tag \""_s}));
			$var($String, var$0, $$concat(var$1, $(tag->getName())));
			$throwNew($IllegalArgumentException, $$concat(var$0, "\""_s));
		}
		this->type = $TIFFTag::TIFF_SHORT;
		$var($chars, cdata, $new($chars, 1));
		cdata->set(0, (char16_t)value);
		$set(this, data, cdata);
	} else {
		if (!tag->isDataTypeOK($TIFFTag::TIFF_LONG)) {
			$var($String, var$3, $$str({"Illegal data type "_s, $(getTypeName($TIFFTag::TIFF_LONG)), " for tag \""_s}));
			$var($String, var$2, $$concat(var$3, $(tag->getName())));
			$throwNew($IllegalArgumentException, $$concat(var$2, "\""_s));
		}
		this->type = $TIFFTag::TIFF_LONG;
		$var($longs, ldata, $new($longs, 1));
		ldata->set(0, value);
		$set(this, data, ldata);
	}
}

void TIFFField::init$($TIFFTag* tag, int32_t type, int64_t offset, $TIFFDirectory* dir) {
	$useLocalCurrentObjectStackCache();
	if (tag == nullptr) {
		$throwNew($NullPointerException, "tag == null!"_s);
	} else if (type < $TIFFTag::MIN_DATATYPE || type > $TIFFTag::MAX_DATATYPE) {
		$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(type)}));
	} else if (!$nc(tag)->isDataTypeOK(type)) {
		$throwNew($IllegalArgumentException, $$str({"Illegal data type "_s, $$str(type), " for "_s, $(tag->getName()), " tag"_s}));
	} else if (type != $TIFFTag::TIFF_LONG && type != $TIFFTag::TIFF_IFD_POINTER) {
		$throwNew($IllegalArgumentException, $$str({"type "_s, $$str(type), " is neither TIFFTag.TIFF_LONG nor TIFFTag.TIFF_IFD_POINTER"_s}));
	} else if (offset <= 0) {
		$throwNew($IllegalArgumentException, $$str({"offset "_s, $$str(offset), " is non-positive"_s}));
	} else if (dir == nullptr) {
		$throwNew($NullPointerException, "dir == null"_s);
	}
	$set(this, tag, tag);
	this->tagNumber = $nc(tag)->getNumber();
	this->type = type;
	this->count = 1;
	$set(this, data, $new($longs, {offset}));
	$set(this, dir, dir);
}

$TIFFTag* TIFFField::getTag() {
	return this->tag;
}

int32_t TIFFField::getTagNumber() {
	return this->tagNumber;
}

int32_t TIFFField::getType() {
	return this->type;
}

$String* TIFFField::getTypeName(int32_t dataType) {
	$init(TIFFField);
	$useLocalCurrentObjectStackCache();
	if (dataType < $TIFFTag::MIN_DATATYPE || dataType > $TIFFTag::MAX_DATATYPE) {
		$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(dataType)}));
	}
	return $nc(TIFFField::TYPE_NAMES)->get(dataType);
}

int32_t TIFFField::getTypeByName($String* typeName) {
	$init(TIFFField);
	for (int32_t i = $TIFFTag::MIN_DATATYPE; i <= $TIFFTag::MAX_DATATYPE; ++i) {
		if ($nc(typeName)->equals($nc(TIFFField::TYPE_NAMES)->get(i))) {
			return i;
		}
	}
	return -1;
}

$Object* TIFFField::createArrayForType(int32_t dataType, int32_t count) {
	$init(TIFFField);
	$useLocalCurrentObjectStackCache();
	if (count < 0) {
		$throwNew($IllegalArgumentException, "count < 0!"_s);
	} else if ((dataType == $TIFFTag::TIFF_RATIONAL || dataType == $TIFFTag::TIFF_SRATIONAL) && count < 1) {
		$throwNew($IllegalArgumentException, "Type is TIFF_RATIONAL or TIFF_SRATIONAL and count < 1"_s);
	} else if (dataType == $TIFFTag::TIFF_IFD_POINTER && count != 1) {
		$throwNew($IllegalArgumentException, "Type is TIFF_IFD_POINTER and count != 1"_s);
	}
	switch (dataType) {
	case $TIFFTag::TIFF_BYTE:
		{}
	case $TIFFTag::TIFF_SBYTE:
		{}
	case $TIFFTag::TIFF_UNDEFINED:
		{
			return $of($new($bytes, count));
		}
	case $TIFFTag::TIFF_ASCII:
		{
			return $of($new($StringArray, count));
		}
	case $TIFFTag::TIFF_SHORT:
		{
			return $of($new($chars, count));
		}
	case $TIFFTag::TIFF_LONG:
		{}
	case $TIFFTag::TIFF_IFD_POINTER:
		{
			return $of($new($longs, count));
		}
	case $TIFFTag::TIFF_RATIONAL:
		{
			return $of($new($longArray2, count, 2));
		}
	case $TIFFTag::TIFF_SSHORT:
		{
			return $of($new($shorts, count));
		}
	case $TIFFTag::TIFF_SLONG:
		{
			return $of($new($ints, count));
		}
	case $TIFFTag::TIFF_SRATIONAL:
		{
			return $of($new($intArray2, count, 2));
		}
	case $TIFFTag::TIFF_FLOAT:
		{
			return $of($new($floats, count));
		}
	case $TIFFTag::TIFF_DOUBLE:
		{
			return $of($new($doubles, count));
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unknown data type "_s, $$str(dataType)}));
		}
	}
}

$Node* TIFFField::getAsNativeNode() {
	return $new($TIFFFieldNode, this);
}

bool TIFFField::isIntegral() {
	return $nc(TIFFField::IS_INTEGRAL)->get(this->type);
}

int32_t TIFFField::getCount() {
	return this->count;
}

$Object* TIFFField::getData() {
	return $of(this->data);
}

$bytes* TIFFField::getAsBytes() {
	return $cast($bytes, this->data);
}

$chars* TIFFField::getAsChars() {
	return $cast($chars, this->data);
}

$shorts* TIFFField::getAsShorts() {
	return $cast($shorts, this->data);
}

$ints* TIFFField::getAsInts() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ints, this->data)) {
		return $cast($ints, this->data);
	} else if ($instanceOf($chars, this->data)) {
		$var($chars, cdata, $cast($chars, this->data));
		$var($ints, idata, $new($ints, $nc(cdata)->length));
		for (int32_t i = 0; i < cdata->length; ++i) {
			idata->set(i, (int32_t)(cdata->get(i) & (uint32_t)0x0000FFFF));
		}
		return idata;
	} else if ($instanceOf($shorts, this->data)) {
		$var($shorts, sdata, $cast($shorts, this->data));
		$var($ints, idata, $new($ints, $nc(sdata)->length));
		for (int32_t i = 0; i < sdata->length; ++i) {
			idata->set(i, (int32_t)sdata->get(i));
		}
		return idata;
	} else {
		$throwNew($ClassCastException, "Data not char[], short[], or int[]!"_s);
	}
}

$longs* TIFFField::getAsLongs() {
	return $cast($longs, this->data);
}

$floats* TIFFField::getAsFloats() {
	return $cast($floats, this->data);
}

$doubles* TIFFField::getAsDoubles() {
	return $cast($doubles, this->data);
}

$intArray2* TIFFField::getAsSRationals() {
	return $cast($intArray2, this->data);
}

$longArray2* TIFFField::getAsRationals() {
	return $cast($longArray2, this->data);
}

int32_t TIFFField::getAsInt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, ivalue, nullptr)
		$var($longs, lvalue, nullptr)
		$var($String, s, nullptr)
		switch (this->type) {
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{
				return (int32_t)($nc(($cast($bytes, this->data)))->get(index) & (uint32_t)255);
			}
		case $TIFFTag::TIFF_SBYTE:
			{
				return $nc(($cast($bytes, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SHORT:
			{
				return (int32_t)($nc(($cast($chars, this->data)))->get(index) & (uint32_t)0x0000FFFF);
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				return $nc(($cast($shorts, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SLONG:
			{
				return $nc(($cast($ints, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				return (int32_t)$nc(($cast($longs, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				return $cast(int32_t, $nc(($cast($floats, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				return $cast(int32_t, $nc(($cast($doubles, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				$assign(ivalue, getAsSRational(index));
				return $cast(int32_t, ((double)$nc(ivalue)->get(0) / ivalue->get(1)));
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				$assign(lvalue, getAsRational(index));
				return $cast(int32_t, ((double)$nc(lvalue)->get(0) / lvalue->get(1)));
			}
		case $TIFFTag::TIFF_ASCII:
			{
				$assign(s, $nc(($cast($StringArray, this->data)))->get(index));
				return $cast(int32_t, $Double::parseDouble(s));
			}
		default:
			{
				$throwNew($ClassCastException);
			}
		}
	}
}

int64_t TIFFField::getAsLong(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, ivalue, nullptr)
		$var($longs, lvalue, nullptr)
		$var($String, s, nullptr)
		switch (this->type) {
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{
				return (int32_t)($nc(($cast($bytes, this->data)))->get(index) & (uint32_t)255);
			}
		case $TIFFTag::TIFF_SBYTE:
			{
				return $nc(($cast($bytes, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SHORT:
			{
				return (int32_t)($nc(($cast($chars, this->data)))->get(index) & (uint32_t)0x0000FFFF);
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				return $nc(($cast($shorts, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SLONG:
			{
				return $nc(($cast($ints, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				return $nc(($cast($longs, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				return $cast(int64_t, $nc(($cast($floats, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				return $cast(int64_t, $nc(($cast($doubles, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				$assign(ivalue, getAsSRational(index));
				return $cast(int64_t, ((double)$nc(ivalue)->get(0) / ivalue->get(1)));
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				$assign(lvalue, getAsRational(index));
				return $cast(int64_t, ((double)$nc(lvalue)->get(0) / lvalue->get(1)));
			}
		case $TIFFTag::TIFF_ASCII:
			{
				$assign(s, $nc(($cast($StringArray, this->data)))->get(index));
				return $cast(int64_t, $Double::parseDouble(s));
			}
		default:
			{
				$throwNew($ClassCastException);
			}
		}
	}
}

float TIFFField::getAsFloat(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, ivalue, nullptr)
		$var($longs, lvalue, nullptr)
		$var($String, s, nullptr)
		switch (this->type) {
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{
				return (float)((int32_t)($nc(($cast($bytes, this->data)))->get(index) & (uint32_t)255));
			}
		case $TIFFTag::TIFF_SBYTE:
			{
				return (float)$nc(($cast($bytes, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SHORT:
			{
				return (float)((int32_t)($nc(($cast($chars, this->data)))->get(index) & (uint32_t)0x0000FFFF));
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				return (float)$nc(($cast($shorts, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SLONG:
			{
				return (float)$nc(($cast($ints, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				return (float)$nc(($cast($longs, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				return $nc(($cast($floats, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				return (float)$nc(($cast($doubles, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				$assign(ivalue, getAsSRational(index));
				return (float)((double)$nc(ivalue)->get(0) / ivalue->get(1));
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				$assign(lvalue, getAsRational(index));
				return (float)((double)$nc(lvalue)->get(0) / lvalue->get(1));
			}
		case $TIFFTag::TIFF_ASCII:
			{
				$assign(s, $nc(($cast($StringArray, this->data)))->get(index));
				return (float)$Double::parseDouble(s);
			}
		default:
			{
				$throwNew($ClassCastException);
			}
		}
	}
}

double TIFFField::getAsDouble(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, ivalue, nullptr)
		$var($longs, lvalue, nullptr)
		$var($String, s, nullptr)
		switch (this->type) {
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{
				return (double)((int32_t)($nc(($cast($bytes, this->data)))->get(index) & (uint32_t)255));
			}
		case $TIFFTag::TIFF_SBYTE:
			{
				return (double)$nc(($cast($bytes, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SHORT:
			{
				return (double)((int32_t)($nc(($cast($chars, this->data)))->get(index) & (uint32_t)0x0000FFFF));
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				return (double)$nc(($cast($shorts, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SLONG:
			{
				return (double)$nc(($cast($ints, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				return (double)$nc(($cast($longs, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				return $nc(($cast($floats, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				return $nc(($cast($doubles, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				$assign(ivalue, getAsSRational(index));
				return (double)$nc(ivalue)->get(0) / ivalue->get(1);
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				$assign(lvalue, getAsRational(index));
				return (double)$nc(lvalue)->get(0) / lvalue->get(1);
			}
		case $TIFFTag::TIFF_ASCII:
			{
				$assign(s, $nc(($cast($StringArray, this->data)))->get(index));
				return $Double::parseDouble(s);
			}
		default:
			{
				$throwNew($ClassCastException);
			}
		}
	}
}

$String* TIFFField::getAsString(int32_t index) {
	return $nc(($cast($StringArray, this->data)))->get(index);
}

$ints* TIFFField::getAsSRational(int32_t index) {
	return $nc(($cast($intArray2, this->data)))->get(index);
}

$longs* TIFFField::getAsRational(int32_t index) {
	return $nc(($cast($longArray2, this->data)))->get(index);
}

$String* TIFFField::getValueAsString(int32_t index) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ints, ivalue, nullptr)
		$var($String, srationalString, nullptr)
		$var($longs, lvalue, nullptr)
		$var($String, rationalString, nullptr)
		switch (this->type) {
		case $TIFFTag::TIFF_ASCII:
			{
				return $nc(($cast($StringArray, this->data)))->get(index);
			}
		case $TIFFTag::TIFF_BYTE:
			{}
		case $TIFFTag::TIFF_UNDEFINED:
			{
				return $Integer::toString((int32_t)($nc(($cast($bytes, this->data)))->get(index) & (uint32_t)255));
			}
		case $TIFFTag::TIFF_SBYTE:
			{
				return $Integer::toString($nc(($cast($bytes, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_SHORT:
			{
				return $Integer::toString((int32_t)($nc(($cast($chars, this->data)))->get(index) & (uint32_t)0x0000FFFF));
			}
		case $TIFFTag::TIFF_SSHORT:
			{
				return $Integer::toString($nc(($cast($shorts, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_SLONG:
			{
				return $Integer::toString($nc(($cast($ints, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_LONG:
			{}
		case $TIFFTag::TIFF_IFD_POINTER:
			{
				return $Long::toString($nc(($cast($longs, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_FLOAT:
			{
				return $Float::toString($nc(($cast($floats, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_DOUBLE:
			{
				return $Double::toString($nc(($cast($doubles, this->data)))->get(index));
			}
		case $TIFFTag::TIFF_SRATIONAL:
			{
				$assign(ivalue, getAsSRational(index));
				if ($nc(ivalue)->get(1) != 0 && $mod(ivalue->get(0), ivalue->get(1)) == 0) {
					$assign(srationalString, $str({$($Integer::toString($div(ivalue->get(0), ivalue->get(1)))), "/1"_s}));
				} else {
					$var($String, var$0, $$str({$($Integer::toString(ivalue->get(0))), "/"_s}));
					$assign(srationalString, $concat(var$0, $($Integer::toString(ivalue->get(1)))));
				}
				return srationalString;
			}
		case $TIFFTag::TIFF_RATIONAL:
			{
				$assign(lvalue, getAsRational(index));
				if ($nc(lvalue)->get(1) != (int64_t)0 && $mod(lvalue->get(0), lvalue->get(1)) == 0) {
					$assign(rationalString, $str({$($Long::toString($div(lvalue->get(0), lvalue->get(1)))), "/1"_s}));
				} else {
					$var($String, var$1, $$str({$($Long::toString(lvalue->get(0))), "/"_s}));
					$assign(rationalString, $concat(var$1, $($Long::toString(lvalue->get(1)))));
				}
				return rationalString;
			}
		default:
			{
				$throwNew($ClassCastException);
			}
		}
	}
}

bool TIFFField::hasDirectory() {
	return getDirectory() != nullptr;
}

$TIFFDirectory* TIFFField::getDirectory() {
	return this->dir;
}

TIFFField* TIFFField::clone() {
	$useLocalCurrentObjectStackCache();
	$var(TIFFField, field, $cast(TIFFField, $Cloneable::clone()));
	$var($Object, fieldData, nullptr);
	switch (this->type) {
	case $TIFFTag::TIFF_BYTE:
		{}
	case $TIFFTag::TIFF_UNDEFINED:
		{}
	case $TIFFTag::TIFF_SBYTE:
		{
			$assign(fieldData, $nc(($cast($bytes, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_SHORT:
		{
			$assign(fieldData, $nc(($cast($chars, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_SSHORT:
		{
			$assign(fieldData, $nc(($cast($shorts, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_SLONG:
		{
			$assign(fieldData, $nc(($cast($ints, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_LONG:
		{}
	case $TIFFTag::TIFF_IFD_POINTER:
		{
			$assign(fieldData, $nc(($cast($longs, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_FLOAT:
		{
			$assign(fieldData, $nc(($cast($floats, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_DOUBLE:
		{
			$assign(fieldData, $nc(($cast($doubles, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_SRATIONAL:
		{
			$assign(fieldData, $nc(($cast($intArray2, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_RATIONAL:
		{
			$assign(fieldData, $nc(($cast($longArray2, this->data)))->clone());
			break;
		}
	case $TIFFTag::TIFF_ASCII:
		{
			$assign(fieldData, $nc(($cast($StringArray, this->data)))->clone());
			break;
		}
	default:
		{
			$throwNew($ClassCastException);
		}
	}
	$set($nc(field), tag, this->tag);
	field->tagNumber = this->tagNumber;
	field->type = this->type;
	field->count = this->count;
	$set(field, data, fieldData);
	$set(field, dir, this->dir != nullptr ? $nc(this->dir)->clone() : ($TIFFDirectory*)nullptr);
	return field;
}

void clinit$TIFFField($Class* class$) {
	$assignStatic(TIFFField::TYPE_NAMES, $new($StringArray, {
		($String*)nullptr,
		"Byte"_s,
		"Ascii"_s,
		"Short"_s,
		"Long"_s,
		"Rational"_s,
		"SByte"_s,
		"Undefined"_s,
		"SShort"_s,
		"SLong"_s,
		"SRational"_s,
		"Float"_s,
		"Double"_s,
		"IFDPointer"_s
	}));
	$assignStatic(TIFFField::IS_INTEGRAL, $new($booleans, {
		false,
		true,
		false,
		true,
		true,
		false,
		true,
		true,
		true,
		true,
		false,
		false,
		false,
		false
	}));
}

TIFFField::TIFFField() {
}

$Class* TIFFField::load$($String* name, bool initialize) {
	$loadClass(TIFFField, name, initialize, &_TIFFField_ClassInfo_, clinit$TIFFField, allocate$TIFFField);
	return class$;
}

$Class* TIFFField::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax