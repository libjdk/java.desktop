#include <com/sun/imageio/plugins/png/PNGMetadata.h>

#include <com/sun/imageio/plugins/png/PNGImageReader.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/time/LocalDateTime.h>
#include <java/time/OffsetDateTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeParseException.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalQuery.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <java/util/StringTokenizer.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ISO_DATE_TIME
#undef PHYS_UNIT_METER
#undef PHYS_UNIT_UNKNOWN
#undef PNG_COLOR_GRAY
#undef PNG_COLOR_GRAY_ALPHA
#undef PNG_COLOR_PALETTE
#undef PNG_COLOR_RGB
#undef PNG_COLOR_RGB_ALPHA
#undef UTC

using $TemporalQueryArray = $Array<::java::time::temporal::TemporalQuery>;
using $PNGImageReader = ::com::sun::imageio::plugins::png::PNGImageReader;
using $ColorModel = ::java::awt::image::ColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $LocalDateTime = ::java::time::LocalDateTime;
using $OffsetDateTime = ::java::time::OffsetDateTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeParseException = ::java::time::format::DateTimeParseException;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalQuery = ::java::time::temporal::TemporalQuery;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $StringTokenizer = ::java::util::StringTokenizer;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class PNGMetadata$$Lambda$from : public $TemporalQuery {
	$class(PNGMetadata$$Lambda$from, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* arg0) override {
		 return $of($OffsetDateTime::from(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PNGMetadata$$Lambda$from>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PNGMetadata$$Lambda$from::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGMetadata$$Lambda$from::*)()>(&PNGMetadata$$Lambda$from::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PNGMetadata$$Lambda$from::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.imageio.plugins.png.PNGMetadata$$Lambda$from",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	methodInfos
};
$Class* PNGMetadata$$Lambda$from::load$($String* name, bool initialize) {
	$loadClass(PNGMetadata$$Lambda$from, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PNGMetadata$$Lambda$from::class$ = nullptr;

class PNGMetadata$$Lambda$from$1 : public $TemporalQuery {
	$class(PNGMetadata$$Lambda$from$1, $NO_CLASS_INIT, $TemporalQuery)
public:
	void init$() {
	}
	virtual $Object* queryFrom($TemporalAccessor* arg0) override {
		 return $of($LocalDateTime::from(arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PNGMetadata$$Lambda$from$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PNGMetadata$$Lambda$from$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGMetadata$$Lambda$from$1::*)()>(&PNGMetadata$$Lambda$from$1::init$))},
	{"queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PNGMetadata$$Lambda$from$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.imageio.plugins.png.PNGMetadata$$Lambda$from$1",
	"java.lang.Object",
	"java.time.temporal.TemporalQuery",
	nullptr,
	methodInfos
};
$Class* PNGMetadata$$Lambda$from$1::load$($String* name, bool initialize) {
	$loadClass(PNGMetadata$$Lambda$from$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PNGMetadata$$Lambda$from$1::class$ = nullptr;

$FieldInfo _PNGMetadata_FieldInfo_[] = {
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PNGMetadata, nativeMetadataFormatName)},
	{"nativeMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(PNGMetadata, nativeMetadataFormatClassName)},
	{"IHDR_colorTypeNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_colorTypeNames)},
	{"IHDR_numChannels", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_numChannels)},
	{"IHDR_bitDepths", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_bitDepths)},
	{"IHDR_compressionMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_compressionMethodNames)},
	{"IHDR_filterMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_filterMethodNames)},
	{"IHDR_interlaceMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, IHDR_interlaceMethodNames)},
	{"iCCP_compressionMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, iCCP_compressionMethodNames)},
	{"zTXt_compressionMethodNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, zTXt_compressionMethodNames)},
	{"PHYS_UNIT_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PNGMetadata, PHYS_UNIT_UNKNOWN)},
	{"PHYS_UNIT_METER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PNGMetadata, PHYS_UNIT_METER)},
	{"unitSpecifierNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, unitSpecifierNames)},
	{"renderingIntentNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, renderingIntentNames)},
	{"colorSpaceTypeNames", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PNGMetadata, colorSpaceTypeNames)},
	{"IHDR_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_present)},
	{"IHDR_width", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_width)},
	{"IHDR_height", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_height)},
	{"IHDR_bitDepth", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_bitDepth)},
	{"IHDR_colorType", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_colorType)},
	{"IHDR_compressionMethod", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_compressionMethod)},
	{"IHDR_filterMethod", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_filterMethod)},
	{"IHDR_interlaceMethod", "I", nullptr, $PUBLIC, $field(PNGMetadata, IHDR_interlaceMethod)},
	{"PLTE_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, PLTE_present)},
	{"PLTE_red", "[B", nullptr, $PUBLIC, $field(PNGMetadata, PLTE_red)},
	{"PLTE_green", "[B", nullptr, $PUBLIC, $field(PNGMetadata, PLTE_green)},
	{"PLTE_blue", "[B", nullptr, $PUBLIC, $field(PNGMetadata, PLTE_blue)},
	{"PLTE_order", "[I", nullptr, $PUBLIC, $field(PNGMetadata, PLTE_order)},
	{"bKGD_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_present)},
	{"bKGD_colorType", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_colorType)},
	{"bKGD_index", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_index)},
	{"bKGD_gray", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_gray)},
	{"bKGD_red", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_red)},
	{"bKGD_green", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_green)},
	{"bKGD_blue", "I", nullptr, $PUBLIC, $field(PNGMetadata, bKGD_blue)},
	{"cHRM_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_present)},
	{"cHRM_whitePointX", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_whitePointX)},
	{"cHRM_whitePointY", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_whitePointY)},
	{"cHRM_redX", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_redX)},
	{"cHRM_redY", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_redY)},
	{"cHRM_greenX", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_greenX)},
	{"cHRM_greenY", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_greenY)},
	{"cHRM_blueX", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_blueX)},
	{"cHRM_blueY", "I", nullptr, $PUBLIC, $field(PNGMetadata, cHRM_blueY)},
	{"gAMA_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, gAMA_present)},
	{"gAMA_gamma", "I", nullptr, $PUBLIC, $field(PNGMetadata, gAMA_gamma)},
	{"hIST_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, hIST_present)},
	{"hIST_histogram", "[C", nullptr, $PUBLIC, $field(PNGMetadata, hIST_histogram)},
	{"iCCP_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, iCCP_present)},
	{"iCCP_profileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PNGMetadata, iCCP_profileName)},
	{"iCCP_compressionMethod", "I", nullptr, $PUBLIC, $field(PNGMetadata, iCCP_compressionMethod)},
	{"iCCP_compressedProfile", "[B", nullptr, $PUBLIC, $field(PNGMetadata, iCCP_compressedProfile)},
	{"iTXt_keyword", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, iTXt_keyword)},
	{"iTXt_compressionFlag", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Boolean;>;", $PUBLIC, $field(PNGMetadata, iTXt_compressionFlag)},
	{"iTXt_compressionMethod", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PUBLIC, $field(PNGMetadata, iTXt_compressionMethod)},
	{"iTXt_languageTag", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, iTXt_languageTag)},
	{"iTXt_translatedKeyword", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, iTXt_translatedKeyword)},
	{"iTXt_text", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, iTXt_text)},
	{"pHYs_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, pHYs_present)},
	{"pHYs_pixelsPerUnitXAxis", "I", nullptr, $PUBLIC, $field(PNGMetadata, pHYs_pixelsPerUnitXAxis)},
	{"pHYs_pixelsPerUnitYAxis", "I", nullptr, $PUBLIC, $field(PNGMetadata, pHYs_pixelsPerUnitYAxis)},
	{"pHYs_unitSpecifier", "I", nullptr, $PUBLIC, $field(PNGMetadata, pHYs_unitSpecifier)},
	{"sBIT_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_present)},
	{"sBIT_colorType", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_colorType)},
	{"sBIT_grayBits", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_grayBits)},
	{"sBIT_redBits", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_redBits)},
	{"sBIT_greenBits", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_greenBits)},
	{"sBIT_blueBits", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_blueBits)},
	{"sBIT_alphaBits", "I", nullptr, $PUBLIC, $field(PNGMetadata, sBIT_alphaBits)},
	{"sPLT_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_present)},
	{"sPLT_paletteName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_paletteName)},
	{"sPLT_sampleDepth", "I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_sampleDepth)},
	{"sPLT_red", "[I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_red)},
	{"sPLT_green", "[I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_green)},
	{"sPLT_blue", "[I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_blue)},
	{"sPLT_alpha", "[I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_alpha)},
	{"sPLT_frequency", "[I", nullptr, $PUBLIC, $field(PNGMetadata, sPLT_frequency)},
	{"sRGB_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, sRGB_present)},
	{"sRGB_renderingIntent", "I", nullptr, $PUBLIC, $field(PNGMetadata, sRGB_renderingIntent)},
	{"tEXt_keyword", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, tEXt_keyword)},
	{"tEXt_text", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, tEXt_text)},
	{"tIME_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, tIME_present)},
	{"tIME_year", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_year)},
	{"tIME_month", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_month)},
	{"tIME_day", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_day)},
	{"tIME_hour", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_hour)},
	{"tIME_minute", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_minute)},
	{"tIME_second", "I", nullptr, $PUBLIC, $field(PNGMetadata, tIME_second)},
	{"creation_time_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_present)},
	{"creation_time_year", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_year)},
	{"creation_time_month", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_month)},
	{"creation_time_day", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_day)},
	{"creation_time_hour", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_hour)},
	{"creation_time_minute", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_minute)},
	{"creation_time_second", "I", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_second)},
	{"creation_time_offset", "Ljava/time/ZoneOffset;", nullptr, $PUBLIC, $field(PNGMetadata, creation_time_offset)},
	{"tEXt_creation_time_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, tEXt_creation_time_present)},
	{"tEXt_creation_time_iter", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<Ljava/lang/String;>;", $PRIVATE, $field(PNGMetadata, tEXt_creation_time_iter)},
	{"tEXt_creationTimeKey", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PNGMetadata, tEXt_creationTimeKey)},
	{"tRNS_present", "Z", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_present)},
	{"tRNS_colorType", "I", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_colorType)},
	{"tRNS_alpha", "[B", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_alpha)},
	{"tRNS_gray", "I", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_gray)},
	{"tRNS_red", "I", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_red)},
	{"tRNS_green", "I", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_green)},
	{"tRNS_blue", "I", nullptr, $PUBLIC, $field(PNGMetadata, tRNS_blue)},
	{"zTXt_keyword", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, zTXt_keyword)},
	{"zTXt_compressionMethod", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Integer;>;", $PUBLIC, $field(PNGMetadata, zTXt_compressionMethod)},
	{"zTXt_text", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, zTXt_text)},
	{"unknownChunkType", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $field(PNGMetadata, unknownChunkType)},
	{"unknownChunkData", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[B>;", $PUBLIC, $field(PNGMetadata, unknownChunkData)},
	{}
};

$MethodInfo _PNGMetadata_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGMetadata::*)()>(&PNGMetadata::init$))},
	{"<init>", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGMetadata::*)($IIOMetadata*)>(&PNGMetadata::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"cloneBytesArrayList", "(Ljava/util/ArrayList;)Ljava/util/ArrayList;", "(Ljava/util/ArrayList<[B>;)Ljava/util/ArrayList<[B>;", $PRIVATE, $method(static_cast<$ArrayList*(PNGMetadata::*)($ArrayList*)>(&PNGMetadata::cloneBytesArrayList))},
	{"decodeImageCreationTimeFromTextChunk", "(Ljava/util/ListIterator;)V", "(Ljava/util/ListIterator<Ljava/lang/String;>;)V", 0},
	{"encodeImageCreationTimeToTextChunk", "()V", nullptr, 0},
	{"fatal", "(Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGMetadata::*)($Node*,$String*)>(&PNGMetadata::fatal)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGMetadata::*)($Node*,$String*,$String*,bool)>(&PNGMetadata::getAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGMetadata::*)($Node*,$String*)>(&PNGMetadata::getAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getBooleanAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZZ)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGMetadata::*)($Node*,$String*,bool,bool)>(&PNGMetadata::getBooleanAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getBooleanAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGMetadata::*)($Node*,$String*)>(&PNGMetadata::getBooleanAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getEncodedTime", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGMetadata::*)()>(&PNGMetadata::getEncodedTime))},
	{"getEnumeratedAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;[Ljava/lang/String;IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGMetadata::*)($Node*,$String*,$StringArray*,int32_t,bool)>(&PNGMetadata::getEnumeratedAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getEnumeratedAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;[Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGMetadata::*)($Node*,$String*,$StringArray*)>(&PNGMetadata::getEnumeratedAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getFloatAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;FZ)F", nullptr, $PRIVATE, $method(static_cast<float(PNGMetadata::*)($Node*,$String*,float,bool)>(&PNGMetadata::getFloatAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getFloatAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)F", nullptr, $PRIVATE, $method(static_cast<float(PNGMetadata::*)($Node*,$String*)>(&PNGMetadata::getFloatAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getIntAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGMetadata::*)($Node*,$String*,int32_t,bool)>(&PNGMetadata::getIntAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getIntAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGMetadata::*)($Node*,$String*)>(&PNGMetadata::getIntAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(PNGMetadata::*)()>(&PNGMetadata::getNativeTree))},
	{"getNumChannels", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGMetadata::*)()>(&PNGMetadata::getNumChannels))},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardDocumentNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PUBLIC},
	{"getStringAttribute", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGMetadata::*)($Node*,$String*,$String*,bool)>(&PNGMetadata::getStringAttribute)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"hasTransparentColor", "()Z", nullptr, 0},
	{"initImageCreationTime", "(Ljava/time/OffsetDateTime;)V", nullptr, 0},
	{"initImageCreationTime", "(IIIIII)V", nullptr, 0},
	{"initialize", "(Ljavax/imageio/ImageTypeSpecifier;I)V", nullptr, $PUBLIC},
	{"isISOLatin", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGMetadata::*)($String*,bool)>(&PNGMetadata::isISOLatin))},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"isValidKeyword", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGMetadata::*)($String*)>(&PNGMetadata::isValidKeyword))},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGMetadata::*)($Node*)>(&PNGMetadata::mergeNativeTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGMetadata::*)($Node*)>(&PNGMetadata::mergeStandardTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"parseEncodedTime", "(Ljava/lang/String;)Ljava/time/OffsetDateTime;", nullptr, $PRIVATE, $method(static_cast<$OffsetDateTime*(PNGMetadata::*)($String*)>(&PNGMetadata::parseEncodedTime))},
	{"repeat", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGMetadata::*)($String*,int32_t)>(&PNGMetadata::repeat))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setCreationTimeChunk", "(Ljava/util/ListIterator;)V", "(Ljava/util/ListIterator<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(PNGMetadata::*)($ListIterator*)>(&PNGMetadata::setCreationTimeChunk))},
	{"setEncodedTime", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGMetadata::*)($String*)>(&PNGMetadata::setEncodedTime))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PNGMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGMetadata",
	"javax.imageio.metadata.IIOMetadata",
	"java.lang.Cloneable",
	_PNGMetadata_FieldInfo_,
	_PNGMetadata_MethodInfo_
};

$Object* allocate$PNGMetadata($Class* clazz) {
	return $of($alloc(PNGMetadata));
}

int32_t PNGMetadata::hashCode() {
	 return this->$IIOMetadata::hashCode();
}

bool PNGMetadata::equals(Object$* arg0) {
	 return this->$IIOMetadata::equals(arg0);
}

$String* PNGMetadata::toString() {
	 return this->$IIOMetadata::toString();
}

void PNGMetadata::finalize() {
	this->$IIOMetadata::finalize();
}

$String* PNGMetadata::nativeMetadataFormatName = nullptr;
$String* PNGMetadata::nativeMetadataFormatClassName = nullptr;
$StringArray* PNGMetadata::IHDR_colorTypeNames = nullptr;
$ints* PNGMetadata::IHDR_numChannels = nullptr;
$StringArray* PNGMetadata::IHDR_bitDepths = nullptr;
$StringArray* PNGMetadata::IHDR_compressionMethodNames = nullptr;
$StringArray* PNGMetadata::IHDR_filterMethodNames = nullptr;
$StringArray* PNGMetadata::IHDR_interlaceMethodNames = nullptr;
$StringArray* PNGMetadata::iCCP_compressionMethodNames = nullptr;
$StringArray* PNGMetadata::zTXt_compressionMethodNames = nullptr;
$StringArray* PNGMetadata::unitSpecifierNames = nullptr;
$StringArray* PNGMetadata::renderingIntentNames = nullptr;
$StringArray* PNGMetadata::colorSpaceTypeNames = nullptr;
$String* PNGMetadata::tEXt_creationTimeKey = nullptr;

void PNGMetadata::init$() {
	$IIOMetadata::init$(true, PNGMetadata::nativeMetadataFormatName, PNGMetadata::nativeMetadataFormatClassName, nullptr, nullptr);
	$set(this, PLTE_order, nullptr);
	$set(this, iTXt_keyword, $new($ArrayList));
	$set(this, iTXt_compressionFlag, $new($ArrayList));
	$set(this, iTXt_compressionMethod, $new($ArrayList));
	$set(this, iTXt_languageTag, $new($ArrayList));
	$set(this, iTXt_translatedKeyword, $new($ArrayList));
	$set(this, iTXt_text, $new($ArrayList));
	$set(this, tEXt_keyword, $new($ArrayList));
	$set(this, tEXt_text, $new($ArrayList));
	$set(this, tEXt_creation_time_iter, nullptr);
	$set(this, zTXt_keyword, $new($ArrayList));
	$set(this, zTXt_compressionMethod, $new($ArrayList));
	$set(this, zTXt_text, $new($ArrayList));
	$set(this, unknownChunkType, $new($ArrayList));
	$set(this, unknownChunkData, $new($ArrayList));
}

void PNGMetadata::init$($IIOMetadata* metadata) {
	$IIOMetadata::init$();
	$set(this, PLTE_order, nullptr);
	$set(this, iTXt_keyword, $new($ArrayList));
	$set(this, iTXt_compressionFlag, $new($ArrayList));
	$set(this, iTXt_compressionMethod, $new($ArrayList));
	$set(this, iTXt_languageTag, $new($ArrayList));
	$set(this, iTXt_translatedKeyword, $new($ArrayList));
	$set(this, iTXt_text, $new($ArrayList));
	$set(this, tEXt_keyword, $new($ArrayList));
	$set(this, tEXt_text, $new($ArrayList));
	$set(this, tEXt_creation_time_iter, nullptr);
	$set(this, zTXt_keyword, $new($ArrayList));
	$set(this, zTXt_compressionMethod, $new($ArrayList));
	$set(this, zTXt_text, $new($ArrayList));
	$set(this, unknownChunkType, $new($ArrayList));
	$set(this, unknownChunkData, $new($ArrayList));
}

void PNGMetadata::initialize($ImageTypeSpecifier* imageType, int32_t numBands) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, colorModel, $nc(imageType)->getColorModel());
	$var($SampleModel, sampleModel, imageType->getSampleModel());
	$var($ints, sampleSize, $nc(sampleModel)->getSampleSize());
	int32_t bitDepth = $nc(sampleSize)->get(0);
	for (int32_t i = 1; i < sampleSize->length; ++i) {
		if (sampleSize->get(i) > bitDepth) {
			bitDepth = sampleSize->get(i);
		}
	}
	if (sampleSize->length > 1 && bitDepth < 8) {
		bitDepth = 8;
	}
	if (bitDepth > 2 && bitDepth < 4) {
		bitDepth = 4;
	} else if (bitDepth > 4 && bitDepth < 8) {
		bitDepth = 8;
	} else if (bitDepth > 8 && bitDepth < 16) {
		bitDepth = 16;
	} else if (bitDepth > 16) {
		$throwNew($RuntimeException, "bitDepth > 16!"_s);
	}
	this->IHDR_bitDepth = bitDepth;
	if ($instanceOf($IndexColorModel, colorModel)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, colorModel));
		int32_t size = $nc(icm)->getMapSize();
		$var($bytes, reds, $new($bytes, size));
		icm->getReds(reds);
		$var($bytes, greens, $new($bytes, size));
		icm->getGreens(greens);
		$var($bytes, blues, $new($bytes, size));
		icm->getBlues(blues);
		bool isGray = false;
		if (!this->IHDR_present || (this->IHDR_colorType != $PNGImageReader::PNG_COLOR_PALETTE)) {
			isGray = true;
			int32_t scale = $div(255, (($sl(1, this->IHDR_bitDepth)) - 1));
			for (int32_t i = 0; i < size; ++i) {
				int8_t red = reds->get(i);
				if ((red != (int8_t)(i * scale)) || (red != greens->get(i)) || (red != blues->get(i))) {
					isGray = false;
					break;
				}
			}
		}
		bool hasAlpha = $nc(colorModel)->hasAlpha();
		$var($bytes, alpha, nullptr);
		if (hasAlpha) {
			$assign(alpha, $new($bytes, size));
			icm->getAlphas(alpha);
		}
		if (isGray && hasAlpha && (bitDepth == 8 || bitDepth == 16)) {
			this->IHDR_colorType = $PNGImageReader::PNG_COLOR_GRAY_ALPHA;
		} else if (isGray && !hasAlpha) {
			this->IHDR_colorType = $PNGImageReader::PNG_COLOR_GRAY;
		} else {
			this->IHDR_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
			this->PLTE_present = true;
			$set(this, PLTE_order, nullptr);
			$set(this, PLTE_red, $cast($bytes, reds->clone()));
			$set(this, PLTE_green, $cast($bytes, greens->clone()));
			$set(this, PLTE_blue, $cast($bytes, blues->clone()));
			if (hasAlpha) {
				this->tRNS_present = true;
				this->tRNS_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
				$set(this, PLTE_order, $new($ints, $nc(alpha)->length));
				$var($bytes, newAlpha, $new($bytes, alpha->length));
				int32_t newIndex = 0;
				for (int32_t i = 0; i < alpha->length; ++i) {
					if (alpha->get(i) != (int8_t)255) {
						$nc(this->PLTE_order)->set(i, newIndex);
						newAlpha->set(newIndex, alpha->get(i));
						++newIndex;
					}
				}
				int32_t numTransparent = newIndex;
				for (int32_t i = 0; i < alpha->length; ++i) {
					if (alpha->get(i) == (int8_t)255) {
						$nc(this->PLTE_order)->set(i, newIndex++);
					}
				}
				$var($bytes, oldRed, this->PLTE_red);
				$var($bytes, oldGreen, this->PLTE_green);
				$var($bytes, oldBlue, this->PLTE_blue);
				int32_t len = $nc(oldRed)->length;
				$set(this, PLTE_red, $new($bytes, len));
				$set(this, PLTE_green, $new($bytes, len));
				$set(this, PLTE_blue, $new($bytes, len));
				for (int32_t i = 0; i < len; ++i) {
					$nc(this->PLTE_red)->set($nc(this->PLTE_order)->get(i), oldRed->get(i));
					$nc(this->PLTE_green)->set($nc(this->PLTE_order)->get(i), $nc(oldGreen)->get(i));
					$nc(this->PLTE_blue)->set($nc(this->PLTE_order)->get(i), $nc(oldBlue)->get(i));
				}
				$set(this, tRNS_alpha, $new($bytes, numTransparent));
				$System::arraycopy(newAlpha, 0, this->tRNS_alpha, 0, numTransparent);
			}
		}
	} else if (numBands == 1) {
		this->IHDR_colorType = $PNGImageReader::PNG_COLOR_GRAY;
	} else if (numBands == 2) {
		this->IHDR_colorType = $PNGImageReader::PNG_COLOR_GRAY_ALPHA;
	} else if (numBands == 3) {
		this->IHDR_colorType = $PNGImageReader::PNG_COLOR_RGB;
	} else if (numBands == 4) {
		this->IHDR_colorType = $PNGImageReader::PNG_COLOR_RGB_ALPHA;
	} else {
		$throwNew($RuntimeException, "Number of bands not 1-4!"_s);
	}
	this->IHDR_present = true;
}

bool PNGMetadata::isReadOnly() {
	return false;
}

$ArrayList* PNGMetadata::cloneBytesArrayList($ArrayList* in) {
	$useLocalCurrentObjectStackCache();
	if (in == nullptr) {
		return nullptr;
	} else {
		$var($ArrayList, list, $new($ArrayList, $nc(in)->size()));
		{
			$var($Iterator, i$, $nc(in)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($bytes, b, $cast($bytes, i$->next()));
				{
					list->add((b == nullptr) ? ($bytes*)nullptr : $cast($bytes, $($nc(b)->clone())));
				}
			}
		}
		return list;
	}
}

$Object* PNGMetadata::clone() {
	$var(PNGMetadata, metadata, nullptr);
	try {
		$assign(metadata, $cast(PNGMetadata, $IIOMetadata::clone()));
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$set($nc(metadata), unknownChunkData, cloneBytesArrayList(this->unknownChunkData));
	return $of(metadata);
}

$Node* PNGMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(PNGMetadata::nativeMetadataFormatName)) {
		return getNativeTree();
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return getStandardTree();
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

$Node* PNGMetadata::getNativeTree() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, nullptr);
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, PNGMetadata::nativeMetadataFormatName));
	if (this->IHDR_present) {
		$var($IIOMetadataNode, IHDR_node, $new($IIOMetadataNode, "IHDR"_s));
		IHDR_node->setAttribute("width"_s, $($Integer::toString(this->IHDR_width)));
		IHDR_node->setAttribute("height"_s, $($Integer::toString(this->IHDR_height)));
		IHDR_node->setAttribute("bitDepth"_s, $($Integer::toString(this->IHDR_bitDepth)));
		IHDR_node->setAttribute("colorType"_s, $nc(PNGMetadata::IHDR_colorTypeNames)->get(this->IHDR_colorType));
		IHDR_node->setAttribute("compressionMethod"_s, $nc(PNGMetadata::IHDR_compressionMethodNames)->get(this->IHDR_compressionMethod));
		IHDR_node->setAttribute("filterMethod"_s, $nc(PNGMetadata::IHDR_filterMethodNames)->get(this->IHDR_filterMethod));
		IHDR_node->setAttribute("interlaceMethod"_s, $nc(PNGMetadata::IHDR_interlaceMethodNames)->get(this->IHDR_interlaceMethod));
		root->appendChild(IHDR_node);
	}
	if (this->PLTE_present) {
		$var($IIOMetadataNode, PLTE_node, $new($IIOMetadataNode, "PLTE"_s));
		int32_t numEntries = $nc(this->PLTE_red)->length;
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "PLTEEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			entry->setAttribute("red"_s, $($Integer::toString((int32_t)($nc(this->PLTE_red)->get(i) & (uint32_t)255))));
			entry->setAttribute("green"_s, $($Integer::toString((int32_t)($nc(this->PLTE_green)->get(i) & (uint32_t)255))));
			entry->setAttribute("blue"_s, $($Integer::toString((int32_t)($nc(this->PLTE_blue)->get(i) & (uint32_t)255))));
			PLTE_node->appendChild(entry);
		}
		root->appendChild(PLTE_node);
	}
	if (this->bKGD_present) {
		$var($IIOMetadataNode, bKGD_node, $new($IIOMetadataNode, "bKGD"_s));
		if (this->bKGD_colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			$assign(node, $new($IIOMetadataNode, "bKGD_Palette"_s));
			node->setAttribute("index"_s, $($Integer::toString(this->bKGD_index)));
		} else if (this->bKGD_colorType == $PNGImageReader::PNG_COLOR_GRAY) {
			$assign(node, $new($IIOMetadataNode, "bKGD_Grayscale"_s));
			node->setAttribute("gray"_s, $($Integer::toString(this->bKGD_gray)));
		} else if (this->bKGD_colorType == $PNGImageReader::PNG_COLOR_RGB) {
			$assign(node, $new($IIOMetadataNode, "bKGD_RGB"_s));
			node->setAttribute("red"_s, $($Integer::toString(this->bKGD_red)));
			node->setAttribute("green"_s, $($Integer::toString(this->bKGD_green)));
			node->setAttribute("blue"_s, $($Integer::toString(this->bKGD_blue)));
		}
		bKGD_node->appendChild(node);
		root->appendChild(bKGD_node);
	}
	if (this->cHRM_present) {
		$var($IIOMetadataNode, cHRM_node, $new($IIOMetadataNode, "cHRM"_s));
		cHRM_node->setAttribute("whitePointX"_s, $($Integer::toString(this->cHRM_whitePointX)));
		cHRM_node->setAttribute("whitePointY"_s, $($Integer::toString(this->cHRM_whitePointY)));
		cHRM_node->setAttribute("redX"_s, $($Integer::toString(this->cHRM_redX)));
		cHRM_node->setAttribute("redY"_s, $($Integer::toString(this->cHRM_redY)));
		cHRM_node->setAttribute("greenX"_s, $($Integer::toString(this->cHRM_greenX)));
		cHRM_node->setAttribute("greenY"_s, $($Integer::toString(this->cHRM_greenY)));
		cHRM_node->setAttribute("blueX"_s, $($Integer::toString(this->cHRM_blueX)));
		cHRM_node->setAttribute("blueY"_s, $($Integer::toString(this->cHRM_blueY)));
		root->appendChild(cHRM_node);
	}
	if (this->gAMA_present) {
		$var($IIOMetadataNode, gAMA_node, $new($IIOMetadataNode, "gAMA"_s));
		gAMA_node->setAttribute("value"_s, $($Integer::toString(this->gAMA_gamma)));
		root->appendChild(gAMA_node);
	}
	if (this->hIST_present) {
		$var($IIOMetadataNode, hIST_node, $new($IIOMetadataNode, "hIST"_s));
		for (int32_t i = 0; i < $nc(this->hIST_histogram)->length; ++i) {
			$var($IIOMetadataNode, hist, $new($IIOMetadataNode, "hISTEntry"_s));
			hist->setAttribute("index"_s, $($Integer::toString(i)));
			hist->setAttribute("value"_s, $($Integer::toString($nc(this->hIST_histogram)->get(i))));
			hIST_node->appendChild(hist);
		}
		root->appendChild(hIST_node);
	}
	if (this->iCCP_present) {
		$var($IIOMetadataNode, iCCP_node, $new($IIOMetadataNode, "iCCP"_s));
		iCCP_node->setAttribute("profileName"_s, this->iCCP_profileName);
		iCCP_node->setAttribute("compressionMethod"_s, $nc(PNGMetadata::iCCP_compressionMethodNames)->get(this->iCCP_compressionMethod));
		$var($Object, profile, this->iCCP_compressedProfile);
		if (profile != nullptr) {
			$assign(profile, $nc(($cast($bytes, profile)))->clone());
		}
		iCCP_node->setUserObject(profile);
		root->appendChild(iCCP_node);
	}
	if ($nc(this->iTXt_keyword)->size() > 0) {
		$var($IIOMetadataNode, iTXt_parent, $new($IIOMetadataNode, "iTXt"_s));
		for (int32_t i = 0; i < $nc(this->iTXt_keyword)->size(); ++i) {
			$var($IIOMetadataNode, iTXt_node, $new($IIOMetadataNode, "iTXtEntry"_s));
			iTXt_node->setAttribute("keyword"_s, $cast($String, $($nc(this->iTXt_keyword)->get(i))));
			iTXt_node->setAttribute("compressionFlag"_s, $nc(($cast($Boolean, $($nc(this->iTXt_compressionFlag)->get(i)))))->booleanValue() ? "TRUE"_s : "FALSE"_s);
			iTXt_node->setAttribute("compressionMethod"_s, $($nc(($cast($Integer, $($nc(this->iTXt_compressionMethod)->get(i)))))->toString()));
			iTXt_node->setAttribute("languageTag"_s, $cast($String, $($nc(this->iTXt_languageTag)->get(i))));
			iTXt_node->setAttribute("translatedKeyword"_s, $cast($String, $($nc(this->iTXt_translatedKeyword)->get(i))));
			iTXt_node->setAttribute("text"_s, $cast($String, $($nc(this->iTXt_text)->get(i))));
			iTXt_parent->appendChild(iTXt_node);
		}
		root->appendChild(iTXt_parent);
	}
	if (this->pHYs_present) {
		$var($IIOMetadataNode, pHYs_node, $new($IIOMetadataNode, "pHYs"_s));
		pHYs_node->setAttribute("pixelsPerUnitXAxis"_s, $($Integer::toString(this->pHYs_pixelsPerUnitXAxis)));
		pHYs_node->setAttribute("pixelsPerUnitYAxis"_s, $($Integer::toString(this->pHYs_pixelsPerUnitYAxis)));
		pHYs_node->setAttribute("unitSpecifier"_s, $nc(PNGMetadata::unitSpecifierNames)->get(this->pHYs_unitSpecifier));
		root->appendChild(pHYs_node);
	}
	if (this->sBIT_present) {
		$var($IIOMetadataNode, sBIT_node, $new($IIOMetadataNode, "sBIT"_s));
		if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_GRAY) {
			$assign(node, $new($IIOMetadataNode, "sBIT_Grayscale"_s));
			node->setAttribute("gray"_s, $($Integer::toString(this->sBIT_grayBits)));
		} else if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
			$assign(node, $new($IIOMetadataNode, "sBIT_GrayAlpha"_s));
			node->setAttribute("gray"_s, $($Integer::toString(this->sBIT_grayBits)));
			node->setAttribute("alpha"_s, $($Integer::toString(this->sBIT_alphaBits)));
		} else if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_RGB) {
			$assign(node, $new($IIOMetadataNode, "sBIT_RGB"_s));
			node->setAttribute("red"_s, $($Integer::toString(this->sBIT_redBits)));
			node->setAttribute("green"_s, $($Integer::toString(this->sBIT_greenBits)));
			node->setAttribute("blue"_s, $($Integer::toString(this->sBIT_blueBits)));
		} else if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_RGB_ALPHA) {
			$assign(node, $new($IIOMetadataNode, "sBIT_RGBAlpha"_s));
			node->setAttribute("red"_s, $($Integer::toString(this->sBIT_redBits)));
			node->setAttribute("green"_s, $($Integer::toString(this->sBIT_greenBits)));
			node->setAttribute("blue"_s, $($Integer::toString(this->sBIT_blueBits)));
			node->setAttribute("alpha"_s, $($Integer::toString(this->sBIT_alphaBits)));
		} else if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			$assign(node, $new($IIOMetadataNode, "sBIT_Palette"_s));
			node->setAttribute("red"_s, $($Integer::toString(this->sBIT_redBits)));
			node->setAttribute("green"_s, $($Integer::toString(this->sBIT_greenBits)));
			node->setAttribute("blue"_s, $($Integer::toString(this->sBIT_blueBits)));
		}
		sBIT_node->appendChild(node);
		root->appendChild(sBIT_node);
	}
	if (this->sPLT_present) {
		$var($IIOMetadataNode, sPLT_node, $new($IIOMetadataNode, "sPLT"_s));
		sPLT_node->setAttribute("name"_s, this->sPLT_paletteName);
		sPLT_node->setAttribute("sampleDepth"_s, $($Integer::toString(this->sPLT_sampleDepth)));
		int32_t numEntries = $nc(this->sPLT_red)->length;
		for (int32_t i = 0; i < numEntries; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "sPLTEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			entry->setAttribute("red"_s, $($Integer::toString($nc(this->sPLT_red)->get(i))));
			entry->setAttribute("green"_s, $($Integer::toString($nc(this->sPLT_green)->get(i))));
			entry->setAttribute("blue"_s, $($Integer::toString($nc(this->sPLT_blue)->get(i))));
			entry->setAttribute("alpha"_s, $($Integer::toString($nc(this->sPLT_alpha)->get(i))));
			entry->setAttribute("frequency"_s, $($Integer::toString($nc(this->sPLT_frequency)->get(i))));
			sPLT_node->appendChild(entry);
		}
		root->appendChild(sPLT_node);
	}
	if (this->sRGB_present) {
		$var($IIOMetadataNode, sRGB_node, $new($IIOMetadataNode, "sRGB"_s));
		sRGB_node->setAttribute("renderingIntent"_s, $nc(PNGMetadata::renderingIntentNames)->get(this->sRGB_renderingIntent));
		root->appendChild(sRGB_node);
	}
	if ($nc(this->tEXt_keyword)->size() > 0) {
		$var($IIOMetadataNode, tEXt_parent, $new($IIOMetadataNode, "tEXt"_s));
		for (int32_t i = 0; i < $nc(this->tEXt_keyword)->size(); ++i) {
			$var($IIOMetadataNode, tEXt_node, $new($IIOMetadataNode, "tEXtEntry"_s));
			tEXt_node->setAttribute("keyword"_s, $cast($String, $($nc(this->tEXt_keyword)->get(i))));
			tEXt_node->setAttribute("value"_s, $cast($String, $($nc(this->tEXt_text)->get(i))));
			tEXt_parent->appendChild(tEXt_node);
		}
		root->appendChild(tEXt_parent);
	}
	if (this->tIME_present) {
		$var($IIOMetadataNode, tIME_node, $new($IIOMetadataNode, "tIME"_s));
		tIME_node->setAttribute("year"_s, $($Integer::toString(this->tIME_year)));
		tIME_node->setAttribute("month"_s, $($Integer::toString(this->tIME_month)));
		tIME_node->setAttribute("day"_s, $($Integer::toString(this->tIME_day)));
		tIME_node->setAttribute("hour"_s, $($Integer::toString(this->tIME_hour)));
		tIME_node->setAttribute("minute"_s, $($Integer::toString(this->tIME_minute)));
		tIME_node->setAttribute("second"_s, $($Integer::toString(this->tIME_second)));
		root->appendChild(tIME_node);
	}
	if (this->tRNS_present) {
		$var($IIOMetadataNode, tRNS_node, $new($IIOMetadataNode, "tRNS"_s));
		if (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			$assign(node, $new($IIOMetadataNode, "tRNS_Palette"_s));
			for (int32_t i = 0; i < $nc(this->tRNS_alpha)->length; ++i) {
				$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "tRNS_PaletteEntry"_s));
				entry->setAttribute("index"_s, $($Integer::toString(i)));
				entry->setAttribute("alpha"_s, $($Integer::toString((int32_t)($nc(this->tRNS_alpha)->get(i) & (uint32_t)255))));
				node->appendChild(entry);
			}
		} else if (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_GRAY) {
			$assign(node, $new($IIOMetadataNode, "tRNS_Grayscale"_s));
			node->setAttribute("gray"_s, $($Integer::toString(this->tRNS_gray)));
		} else if (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_RGB) {
			$assign(node, $new($IIOMetadataNode, "tRNS_RGB"_s));
			node->setAttribute("red"_s, $($Integer::toString(this->tRNS_red)));
			node->setAttribute("green"_s, $($Integer::toString(this->tRNS_green)));
			node->setAttribute("blue"_s, $($Integer::toString(this->tRNS_blue)));
		}
		tRNS_node->appendChild(node);
		root->appendChild(tRNS_node);
	}
	if ($nc(this->zTXt_keyword)->size() > 0) {
		$var($IIOMetadataNode, zTXt_parent, $new($IIOMetadataNode, "zTXt"_s));
		for (int32_t i = 0; i < $nc(this->zTXt_keyword)->size(); ++i) {
			$var($IIOMetadataNode, zTXt_node, $new($IIOMetadataNode, "zTXtEntry"_s));
			zTXt_node->setAttribute("keyword"_s, $cast($String, $($nc(this->zTXt_keyword)->get(i))));
			int32_t cm = $nc(($cast($Integer, $($nc(this->zTXt_compressionMethod)->get(i)))))->intValue();
			zTXt_node->setAttribute("compressionMethod"_s, $nc(PNGMetadata::zTXt_compressionMethodNames)->get(cm));
			zTXt_node->setAttribute("text"_s, $cast($String, $($nc(this->zTXt_text)->get(i))));
			zTXt_parent->appendChild(zTXt_node);
		}
		root->appendChild(zTXt_parent);
	}
	if ($nc(this->unknownChunkType)->size() > 0) {
		$var($IIOMetadataNode, unknown_parent, $new($IIOMetadataNode, "UnknownChunks"_s));
		for (int32_t i = 0; i < $nc(this->unknownChunkType)->size(); ++i) {
			$var($IIOMetadataNode, unknown_node, $new($IIOMetadataNode, "UnknownChunk"_s));
			unknown_node->setAttribute("type"_s, $cast($String, $($nc(this->unknownChunkType)->get(i))));
			unknown_node->setUserObject($($nc(this->unknownChunkData)->get(i)));
			unknown_parent->appendChild(unknown_node);
		}
		root->appendChild(unknown_parent);
	}
	return root;
}

int32_t PNGMetadata::getNumChannels() {
	int32_t numChannels = $nc(PNGMetadata::IHDR_numChannels)->get(this->IHDR_colorType);
	if (this->IHDR_colorType == $PNGImageReader::PNG_COLOR_PALETTE && this->tRNS_present && this->tRNS_colorType == this->IHDR_colorType) {
		numChannels = 4;
	}
	return numChannels;
}

$IIOMetadataNode* PNGMetadata::getStandardChromaNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, chroma_node, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "ColorSpaceType"_s));
	node->setAttribute("name"_s, $nc(PNGMetadata::colorSpaceTypeNames)->get(this->IHDR_colorType));
	chroma_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "NumChannels"_s));
	node->setAttribute("value"_s, $($Integer::toString(getNumChannels())));
	chroma_node->appendChild(node);
	if (this->gAMA_present) {
		$assign(node, $new($IIOMetadataNode, "Gamma"_s));
		node->setAttribute("value"_s, $($Float::toString(this->gAMA_gamma * 1.0E-5f)));
		chroma_node->appendChild(node);
	}
	$assign(node, $new($IIOMetadataNode, "BlackIsZero"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	chroma_node->appendChild(node);
	if (this->PLTE_present) {
		bool hasAlpha = this->tRNS_present && (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_PALETTE);
		$assign(node, $new($IIOMetadataNode, "Palette"_s));
		for (int32_t i = 0; i < $nc(this->PLTE_red)->length; ++i) {
			$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "PaletteEntry"_s));
			entry->setAttribute("index"_s, $($Integer::toString(i)));
			entry->setAttribute("red"_s, $($Integer::toString((int32_t)($nc(this->PLTE_red)->get(i) & (uint32_t)255))));
			entry->setAttribute("green"_s, $($Integer::toString((int32_t)($nc(this->PLTE_green)->get(i) & (uint32_t)255))));
			entry->setAttribute("blue"_s, $($Integer::toString((int32_t)($nc(this->PLTE_blue)->get(i) & (uint32_t)255))));
			if (hasAlpha) {
				int32_t alpha = (i < $nc(this->tRNS_alpha)->length) ? ((int32_t)($nc(this->tRNS_alpha)->get(i) & (uint32_t)255)) : 255;
				entry->setAttribute("alpha"_s, $($Integer::toString(alpha)));
			}
			node->appendChild(entry);
		}
		chroma_node->appendChild(node);
	}
	if (this->bKGD_present) {
		if (this->bKGD_colorType == $PNGImageReader::PNG_COLOR_PALETTE) {
			$assign(node, $new($IIOMetadataNode, "BackgroundIndex"_s));
			node->setAttribute("value"_s, $($Integer::toString(this->bKGD_index)));
		} else {
			$assign(node, $new($IIOMetadataNode, "BackgroundColor"_s));
			int32_t r = 0;
			int32_t g = 0;
			int32_t b = 0;
			if (this->bKGD_colorType == $PNGImageReader::PNG_COLOR_GRAY) {
				r = (g = (b = this->bKGD_gray));
			} else {
				r = this->bKGD_red;
				g = this->bKGD_green;
				b = this->bKGD_blue;
			}
			node->setAttribute("red"_s, $($Integer::toString(r)));
			node->setAttribute("green"_s, $($Integer::toString(g)));
			node->setAttribute("blue"_s, $($Integer::toString(b)));
		}
		chroma_node->appendChild(node);
	}
	return chroma_node;
}

$IIOMetadataNode* PNGMetadata::getStandardCompressionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, compression_node, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "CompressionTypeName"_s));
	node->setAttribute("value"_s, "deflate"_s);
	compression_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "Lossless"_s));
	node->setAttribute("value"_s, "TRUE"_s);
	compression_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "NumProgressiveScans"_s));
	node->setAttribute("value"_s, (this->IHDR_interlaceMethod == 0) ? "1"_s : "7"_s);
	compression_node->appendChild(node);
	return compression_node;
}

$String* PNGMetadata::repeat($String* s, int32_t times) {
	if (times == 1) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, ($nc(s)->length() + 1) * times - 1));
	sb->append(s);
	for (int32_t i = 1; i < times; ++i) {
		sb->append(" "_s);
		sb->append(s);
	}
	return sb->toString();
}

$IIOMetadataNode* PNGMetadata::getStandardDataNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, data_node, $new($IIOMetadataNode, "Data"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "PlanarConfiguration"_s));
	node->setAttribute("value"_s, "PixelInterleaved"_s);
	data_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "SampleFormat"_s));
	node->setAttribute("value"_s, this->IHDR_colorType == $PNGImageReader::PNG_COLOR_PALETTE ? "Index"_s : "UnsignedIntegral"_s);
	data_node->appendChild(node);
	$var($String, bitDepth, $Integer::toString(this->IHDR_bitDepth));
	$assign(node, $new($IIOMetadataNode, "BitsPerSample"_s));
	node->setAttribute("value"_s, $(repeat(bitDepth, getNumChannels())));
	data_node->appendChild(node);
	if (this->sBIT_present) {
		$assign(node, $new($IIOMetadataNode, "SignificantBitsPerSample"_s));
		$var($String, sbits, nullptr);
		if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_GRAY || this->sBIT_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
			$assign(sbits, $Integer::toString(this->sBIT_grayBits));
		} else {
			$var($String, var$2, $$str({$($Integer::toString(this->sBIT_redBits)), " "_s}));
			$var($String, var$1, $$concat(var$2, $($Integer::toString(this->sBIT_greenBits))));
			$var($String, var$0, $$concat(var$1, " "_s));
			$assign(sbits, $concat(var$0, $($Integer::toString(this->sBIT_blueBits))));
		}
		if (this->sBIT_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA || this->sBIT_colorType == $PNGImageReader::PNG_COLOR_RGB_ALPHA) {
			$plusAssign(sbits, $$str({" "_s, $($Integer::toString(this->sBIT_alphaBits))}));
		}
		node->setAttribute("value"_s, sbits);
		data_node->appendChild(node);
	}
	return data_node;
}

$IIOMetadataNode* PNGMetadata::getStandardDimensionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, dimension_node, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "PixelAspectRatio"_s));
	float ratio = this->pHYs_present ? (float)this->pHYs_pixelsPerUnitXAxis / this->pHYs_pixelsPerUnitYAxis : 1.0f;
	node->setAttribute("value"_s, $($Float::toString(ratio)));
	dimension_node->appendChild(node);
	$assign(node, $new($IIOMetadataNode, "ImageOrientation"_s));
	node->setAttribute("value"_s, "Normal"_s);
	dimension_node->appendChild(node);
	if (this->pHYs_present && this->pHYs_unitSpecifier == PNGMetadata::PHYS_UNIT_METER) {
		$assign(node, $new($IIOMetadataNode, "HorizontalPixelSize"_s));
		node->setAttribute("value"_s, $($Float::toString(1000.0f / this->pHYs_pixelsPerUnitXAxis)));
		dimension_node->appendChild(node);
		$assign(node, $new($IIOMetadataNode, "VerticalPixelSize"_s));
		node->setAttribute("value"_s, $($Float::toString(1000.0f / this->pHYs_pixelsPerUnitYAxis)));
		dimension_node->appendChild(node);
	}
	return dimension_node;
}

$IIOMetadataNode* PNGMetadata::getStandardDocumentNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, document_node, nullptr);
	if (this->tIME_present) {
		$assign(document_node, $new($IIOMetadataNode, "Document"_s));
		$var($IIOMetadataNode, node, $new($IIOMetadataNode, "ImageModificationTime"_s));
		node->setAttribute("year"_s, $($Integer::toString(this->tIME_year)));
		node->setAttribute("month"_s, $($Integer::toString(this->tIME_month)));
		node->setAttribute("day"_s, $($Integer::toString(this->tIME_day)));
		node->setAttribute("hour"_s, $($Integer::toString(this->tIME_hour)));
		node->setAttribute("minute"_s, $($Integer::toString(this->tIME_minute)));
		node->setAttribute("second"_s, $($Integer::toString(this->tIME_second)));
		document_node->appendChild(node);
	}
	if (this->creation_time_present) {
		if (document_node == nullptr) {
			$assign(document_node, $new($IIOMetadataNode, "Document"_s));
		}
		$var($IIOMetadataNode, node, $new($IIOMetadataNode, "ImageCreationTime"_s));
		node->setAttribute("year"_s, $($Integer::toString(this->creation_time_year)));
		node->setAttribute("month"_s, $($Integer::toString(this->creation_time_month)));
		node->setAttribute("day"_s, $($Integer::toString(this->creation_time_day)));
		node->setAttribute("hour"_s, $($Integer::toString(this->creation_time_hour)));
		node->setAttribute("minute"_s, $($Integer::toString(this->creation_time_minute)));
		node->setAttribute("second"_s, $($Integer::toString(this->creation_time_second)));
		$nc(document_node)->appendChild(node);
	}
	return document_node;
}

$IIOMetadataNode* PNGMetadata::getStandardTextNode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc(this->tEXt_keyword)->size();
	int32_t var$0 = var$1 + $nc(this->iTXt_keyword)->size();
	int32_t numEntries = var$0 + $nc(this->zTXt_keyword)->size();
	if (numEntries == 0) {
		return nullptr;
	}
	$var($IIOMetadataNode, text_node, $new($IIOMetadataNode, "Text"_s));
	$var($IIOMetadataNode, node, nullptr);
	for (int32_t i = 0; i < $nc(this->tEXt_keyword)->size(); ++i) {
		$assign(node, $new($IIOMetadataNode, "TextEntry"_s));
		node->setAttribute("keyword"_s, $cast($String, $($nc(this->tEXt_keyword)->get(i))));
		node->setAttribute("value"_s, $cast($String, $($nc(this->tEXt_text)->get(i))));
		node->setAttribute("encoding"_s, "ISO-8859-1"_s);
		node->setAttribute("compression"_s, "none"_s);
		text_node->appendChild(node);
	}
	for (int32_t i = 0; i < $nc(this->iTXt_keyword)->size(); ++i) {
		$assign(node, $new($IIOMetadataNode, "TextEntry"_s));
		node->setAttribute("keyword"_s, $cast($String, $($nc(this->iTXt_keyword)->get(i))));
		node->setAttribute("value"_s, $cast($String, $($nc(this->iTXt_text)->get(i))));
		node->setAttribute("language"_s, $cast($String, $($nc(this->iTXt_languageTag)->get(i))));
		if ($nc(($cast($Boolean, $($nc(this->iTXt_compressionFlag)->get(i)))))->booleanValue()) {
			node->setAttribute("compression"_s, "zip"_s);
		} else {
			node->setAttribute("compression"_s, "none"_s);
		}
		text_node->appendChild(node);
	}
	for (int32_t i = 0; i < $nc(this->zTXt_keyword)->size(); ++i) {
		$assign(node, $new($IIOMetadataNode, "TextEntry"_s));
		node->setAttribute("keyword"_s, $cast($String, $($nc(this->zTXt_keyword)->get(i))));
		node->setAttribute("value"_s, $cast($String, $($nc(this->zTXt_text)->get(i))));
		node->setAttribute("compression"_s, "zip"_s);
		text_node->appendChild(node);
	}
	return text_node;
}

$IIOMetadataNode* PNGMetadata::getStandardTransparencyNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, transparency_node, $new($IIOMetadataNode, "Transparency"_s));
	$var($IIOMetadataNode, node, nullptr);
	$assign(node, $new($IIOMetadataNode, "Alpha"_s));
	bool hasAlpha = (this->IHDR_colorType == $PNGImageReader::PNG_COLOR_RGB_ALPHA) || (this->IHDR_colorType == $PNGImageReader::PNG_COLOR_GRAY_ALPHA) || (this->IHDR_colorType == $PNGImageReader::PNG_COLOR_PALETTE && this->tRNS_present && (this->tRNS_colorType == this->IHDR_colorType) && (this->tRNS_alpha != nullptr));
	node->setAttribute("value"_s, hasAlpha ? "nonpremultipled"_s : "none"_s);
	transparency_node->appendChild(node);
	if (this->tRNS_present) {
		$assign(node, $new($IIOMetadataNode, "TransparentColor"_s));
		if (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_RGB) {
			$var($String, var$2, $$str({$($Integer::toString(this->tRNS_red)), " "_s}));
			$var($String, var$1, $$concat(var$2, $($Integer::toString(this->tRNS_green))));
			$var($String, var$0, $$concat(var$1, " "_s));
			node->setAttribute("value"_s, $$concat(var$0, $($Integer::toString(this->tRNS_blue))));
		} else if (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_GRAY) {
			node->setAttribute("value"_s, $($Integer::toString(this->tRNS_gray)));
		}
		transparency_node->appendChild(node);
	}
	return transparency_node;
}

void PNGMetadata::fatal($Node* node, $String* reason) {
	$throwNew($IIOInvalidTreeException, reason, node);
}

$String* PNGMetadata::getStringAttribute($Node* node, $String* name, $String* defaultValue, bool required) {
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	return $nc(attr)->getNodeValue();
}

int32_t PNGMetadata::getIntAttribute($Node* node, $String* name, int32_t defaultValue, bool required) {
	$var($String, value, getStringAttribute(node, name, nullptr, required));
	if (value == nullptr) {
		return defaultValue;
	}
	return $Integer::parseInt(value);
}

float PNGMetadata::getFloatAttribute($Node* node, $String* name, float defaultValue, bool required) {
	$var($String, value, getStringAttribute(node, name, nullptr, required));
	if (value == nullptr) {
		return defaultValue;
	}
	return $Float::parseFloat(value);
}

int32_t PNGMetadata::getIntAttribute($Node* node, $String* name) {
	return getIntAttribute(node, name, -1, true);
}

float PNGMetadata::getFloatAttribute($Node* node, $String* name) {
	return getFloatAttribute(node, name, -1.0f, true);
}

bool PNGMetadata::getBooleanAttribute($Node* node, $String* name, bool defaultValue, bool required) {
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	$var($String, value, $nc(attr)->getNodeValue());
	bool var$0 = $nc(value)->equals("TRUE"_s);
	if (var$0 || $nc(value)->equals("true"_s)) {
		return true;
	} else {
		bool var$2 = value->equals("FALSE"_s);
		if (var$2 || value->equals("false"_s)) {
			return false;
		} else {
			fatal(node, $$str({"Attribute "_s, name, " must be \'TRUE\' or \'FALSE\'!"_s}));
			return false;
		}
	}
}

bool PNGMetadata::getBooleanAttribute($Node* node, $String* name) {
	return getBooleanAttribute(node, name, false, true);
}

int32_t PNGMetadata::getEnumeratedAttribute($Node* node, $String* name, $StringArray* legalNames, int32_t defaultValue, bool required) {
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	$var($String, value, $nc(attr)->getNodeValue());
	for (int32_t i = 0; i < $nc(legalNames)->length; ++i) {
		if ($nc(value)->equals(legalNames->get(i))) {
			return i;
		}
	}
	fatal(node, $$str({"Illegal value for attribute "_s, name, "!"_s}));
	return -1;
}

int32_t PNGMetadata::getEnumeratedAttribute($Node* node, $String* name, $StringArray* legalNames) {
	return getEnumeratedAttribute(node, name, legalNames, -1, true);
}

$String* PNGMetadata::getAttribute($Node* node, $String* name, $String* defaultValue, bool required) {
	$useLocalCurrentObjectStackCache();
	$var($Node, attr, $nc($($nc(node)->getAttributes()))->getNamedItem(name));
	if (attr == nullptr) {
		if (!required) {
			return defaultValue;
		} else {
			fatal(node, $$str({"Required attribute "_s, name, " not present!"_s}));
		}
	}
	return $nc(attr)->getNodeValue();
}

$String* PNGMetadata::getAttribute($Node* node, $String* name) {
	return getAttribute(node, name, nullptr, true);
}

void PNGMetadata::mergeTree($String* formatName, $Node* root) {
	if ($nc(formatName)->equals(PNGMetadata::nativeMetadataFormatName)) {
		if (root == nullptr) {
			$throwNew($IllegalArgumentException, "root == null!"_s);
		}
		mergeNativeTree(root);
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			if (root == nullptr) {
				$throwNew($IllegalArgumentException, "root == null!"_s);
			}
			mergeStandardTree(root);
		} else {
			$throwNew($IllegalArgumentException, "Not a recognized format!"_s);
		}
	}
}

void PNGMetadata::mergeNativeTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, root);
	if (!$nc($($nc(node)->getNodeName()))->equals(PNGMetadata::nativeMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, PNGMetadata::nativeMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("IHDR"_s)) {
			this->IHDR_width = getIntAttribute(node, "width"_s);
			this->IHDR_height = getIntAttribute(node, "height"_s);
			this->IHDR_bitDepth = $nc($($Integer::valueOf($nc(PNGMetadata::IHDR_bitDepths)->get(getEnumeratedAttribute(node, "bitDepth"_s, PNGMetadata::IHDR_bitDepths)))))->intValue();
			this->IHDR_colorType = getEnumeratedAttribute(node, "colorType"_s, PNGMetadata::IHDR_colorTypeNames);
			this->IHDR_compressionMethod = getEnumeratedAttribute(node, "compressionMethod"_s, PNGMetadata::IHDR_compressionMethodNames);
			this->IHDR_filterMethod = getEnumeratedAttribute(node, "filterMethod"_s, PNGMetadata::IHDR_filterMethodNames);
			this->IHDR_interlaceMethod = getEnumeratedAttribute(node, "interlaceMethod"_s, PNGMetadata::IHDR_interlaceMethodNames);
			this->IHDR_present = true;
		} else if (name->equals("PLTE"_s)) {
			$var($bytes, red, $new($bytes, 256));
			$var($bytes, green, $new($bytes, 256));
			$var($bytes, blue, $new($bytes, 256));
			int32_t maxindex = -1;
			$var($Node, PLTE_entry, node->getFirstChild());
			if (PLTE_entry == nullptr) {
				fatal(node, "Palette has no entries!"_s);
			}
			while (PLTE_entry != nullptr) {
				if (!$nc($(PLTE_entry->getNodeName()))->equals("PLTEEntry"_s)) {
					fatal(node, "Only a PLTEEntry may be a child of a PLTE!"_s);
				}
				int32_t index = getIntAttribute(PLTE_entry, "index"_s);
				if (index < 0 || index > 255) {
					fatal(node, "Bad value for PLTEEntry attribute index!"_s);
				}
				if (index > maxindex) {
					maxindex = index;
				}
				red->set(index, (int8_t)getIntAttribute(PLTE_entry, "red"_s));
				green->set(index, (int8_t)getIntAttribute(PLTE_entry, "green"_s));
				blue->set(index, (int8_t)getIntAttribute(PLTE_entry, "blue"_s));
				$assign(PLTE_entry, PLTE_entry->getNextSibling());
			}
			int32_t numEntries = maxindex + 1;
			$set(this, PLTE_red, $new($bytes, numEntries));
			$set(this, PLTE_green, $new($bytes, numEntries));
			$set(this, PLTE_blue, $new($bytes, numEntries));
			$System::arraycopy(red, 0, this->PLTE_red, 0, numEntries);
			$System::arraycopy(green, 0, this->PLTE_green, 0, numEntries);
			$System::arraycopy(blue, 0, this->PLTE_blue, 0, numEntries);
			this->PLTE_present = true;
		} else if (name->equals("bKGD"_s)) {
			this->bKGD_present = false;
			$var($Node, bKGD_node, node->getFirstChild());
			if (bKGD_node == nullptr) {
				fatal(node, "bKGD node has no children!"_s);
			}
			$var($String, bKGD_name, $nc(bKGD_node)->getNodeName());
			if ($nc(bKGD_name)->equals("bKGD_Palette"_s)) {
				this->bKGD_index = getIntAttribute(bKGD_node, "index"_s);
				this->bKGD_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
			} else if (bKGD_name->equals("bKGD_Grayscale"_s)) {
				this->bKGD_gray = getIntAttribute(bKGD_node, "gray"_s);
				this->bKGD_colorType = $PNGImageReader::PNG_COLOR_GRAY;
			} else if (bKGD_name->equals("bKGD_RGB"_s)) {
				this->bKGD_red = getIntAttribute(bKGD_node, "red"_s);
				this->bKGD_green = getIntAttribute(bKGD_node, "green"_s);
				this->bKGD_blue = getIntAttribute(bKGD_node, "blue"_s);
				this->bKGD_colorType = $PNGImageReader::PNG_COLOR_RGB;
			} else {
				fatal(node, "Bad child of a bKGD node!"_s);
			}
			if (bKGD_node->getNextSibling() != nullptr) {
				fatal(node, "bKGD node has more than one child!"_s);
			}
			this->bKGD_present = true;
		} else if (name->equals("cHRM"_s)) {
			this->cHRM_whitePointX = getIntAttribute(node, "whitePointX"_s);
			this->cHRM_whitePointY = getIntAttribute(node, "whitePointY"_s);
			this->cHRM_redX = getIntAttribute(node, "redX"_s);
			this->cHRM_redY = getIntAttribute(node, "redY"_s);
			this->cHRM_greenX = getIntAttribute(node, "greenX"_s);
			this->cHRM_greenY = getIntAttribute(node, "greenY"_s);
			this->cHRM_blueX = getIntAttribute(node, "blueX"_s);
			this->cHRM_blueY = getIntAttribute(node, "blueY"_s);
			this->cHRM_present = true;
		} else if (name->equals("gAMA"_s)) {
			this->gAMA_gamma = getIntAttribute(node, "value"_s);
			this->gAMA_present = true;
		} else if (name->equals("hIST"_s)) {
			$var($chars, hist, $new($chars, 256));
			int32_t maxindex = -1;
			$var($Node, hIST_entry, node->getFirstChild());
			if (hIST_entry == nullptr) {
				fatal(node, "hIST node has no children!"_s);
			}
			while (hIST_entry != nullptr) {
				if (!$nc($(hIST_entry->getNodeName()))->equals("hISTEntry"_s)) {
					fatal(node, "Only a hISTEntry may be a child of a hIST!"_s);
				}
				int32_t index = getIntAttribute(hIST_entry, "index"_s);
				if (index < 0 || index > 255) {
					fatal(node, "Bad value for histEntry attribute index!"_s);
				}
				if (index > maxindex) {
					maxindex = index;
				}
				hist->set(index, (char16_t)getIntAttribute(hIST_entry, "value"_s));
				$assign(hIST_entry, hIST_entry->getNextSibling());
			}
			int32_t numEntries = maxindex + 1;
			$set(this, hIST_histogram, $new($chars, numEntries));
			$System::arraycopy(hist, 0, this->hIST_histogram, 0, numEntries);
			this->hIST_present = true;
		} else if (name->equals("iCCP"_s)) {
			$set(this, iCCP_profileName, getAttribute(node, "profileName"_s));
			this->iCCP_compressionMethod = getEnumeratedAttribute(node, "compressionMethod"_s, PNGMetadata::iCCP_compressionMethodNames);
			$var($Object, compressedProfile, $nc(($cast($IIOMetadataNode, node)))->getUserObject());
			if (compressedProfile == nullptr) {
				fatal(node, "No ICCP profile present in user object!"_s);
			}
			if (!($instanceOf($bytes, compressedProfile))) {
				fatal(node, "User object not a byte array!"_s);
			}
			$set(this, iCCP_compressedProfile, $cast($bytes, $nc(($cast($bytes, compressedProfile)))->clone()));
			this->iCCP_present = true;
		} else if (name->equals("iTXt"_s)) {
			$var($Node, iTXt_node, node->getFirstChild());
			while (iTXt_node != nullptr) {
				if (!$nc($(iTXt_node->getNodeName()))->equals("iTXtEntry"_s)) {
					fatal(node, "Only an iTXtEntry may be a child of an iTXt!"_s);
				}
				$var($String, keyword, getAttribute(iTXt_node, "keyword"_s));
				if (isValidKeyword(keyword)) {
					$nc(this->iTXt_keyword)->add(keyword);
					bool compressionFlag = getBooleanAttribute(iTXt_node, "compressionFlag"_s);
					$nc(this->iTXt_compressionFlag)->add($($Boolean::valueOf(compressionFlag)));
					$var($String, compressionMethod, getAttribute(iTXt_node, "compressionMethod"_s));
					$nc(this->iTXt_compressionMethod)->add($($Integer::valueOf(compressionMethod)));
					$var($String, languageTag, getAttribute(iTXt_node, "languageTag"_s));
					$nc(this->iTXt_languageTag)->add(languageTag);
					$var($String, translatedKeyword, getAttribute(iTXt_node, "translatedKeyword"_s));
					$nc(this->iTXt_translatedKeyword)->add(translatedKeyword);
					$var($String, text, getAttribute(iTXt_node, "text"_s));
					$nc(this->iTXt_text)->add(text);
					if ($nc(keyword)->equals(PNGMetadata::tEXt_creationTimeKey)) {
						int32_t index = $nc(this->iTXt_text)->size() - 1;
						decodeImageCreationTimeFromTextChunk($($nc(this->iTXt_text)->listIterator(index)));
					}
				}
				$assign(iTXt_node, iTXt_node->getNextSibling());
			}
		} else if (name->equals("pHYs"_s)) {
			this->pHYs_pixelsPerUnitXAxis = getIntAttribute(node, "pixelsPerUnitXAxis"_s);
			this->pHYs_pixelsPerUnitYAxis = getIntAttribute(node, "pixelsPerUnitYAxis"_s);
			this->pHYs_unitSpecifier = getEnumeratedAttribute(node, "unitSpecifier"_s, PNGMetadata::unitSpecifierNames);
			this->pHYs_present = true;
		} else if (name->equals("sBIT"_s)) {
			this->sBIT_present = false;
			$var($Node, sBIT_node, node->getFirstChild());
			if (sBIT_node == nullptr) {
				fatal(node, "sBIT node has no children!"_s);
			}
			$var($String, sBIT_name, $nc(sBIT_node)->getNodeName());
			if ($nc(sBIT_name)->equals("sBIT_Grayscale"_s)) {
				this->sBIT_grayBits = getIntAttribute(sBIT_node, "gray"_s);
				this->sBIT_colorType = $PNGImageReader::PNG_COLOR_GRAY;
			} else if (sBIT_name->equals("sBIT_GrayAlpha"_s)) {
				this->sBIT_grayBits = getIntAttribute(sBIT_node, "gray"_s);
				this->sBIT_alphaBits = getIntAttribute(sBIT_node, "alpha"_s);
				this->sBIT_colorType = $PNGImageReader::PNG_COLOR_GRAY_ALPHA;
			} else if (sBIT_name->equals("sBIT_RGB"_s)) {
				this->sBIT_redBits = getIntAttribute(sBIT_node, "red"_s);
				this->sBIT_greenBits = getIntAttribute(sBIT_node, "green"_s);
				this->sBIT_blueBits = getIntAttribute(sBIT_node, "blue"_s);
				this->sBIT_colorType = $PNGImageReader::PNG_COLOR_RGB;
			} else if (sBIT_name->equals("sBIT_RGBAlpha"_s)) {
				this->sBIT_redBits = getIntAttribute(sBIT_node, "red"_s);
				this->sBIT_greenBits = getIntAttribute(sBIT_node, "green"_s);
				this->sBIT_blueBits = getIntAttribute(sBIT_node, "blue"_s);
				this->sBIT_alphaBits = getIntAttribute(sBIT_node, "alpha"_s);
				this->sBIT_colorType = $PNGImageReader::PNG_COLOR_RGB_ALPHA;
			} else if (sBIT_name->equals("sBIT_Palette"_s)) {
				this->sBIT_redBits = getIntAttribute(sBIT_node, "red"_s);
				this->sBIT_greenBits = getIntAttribute(sBIT_node, "green"_s);
				this->sBIT_blueBits = getIntAttribute(sBIT_node, "blue"_s);
				this->sBIT_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
			} else {
				fatal(node, "Bad child of an sBIT node!"_s);
			}
			if (sBIT_node->getNextSibling() != nullptr) {
				fatal(node, "sBIT node has more than one child!"_s);
			}
			this->sBIT_present = true;
		} else if (name->equals("sPLT"_s)) {
			$set(this, sPLT_paletteName, getAttribute(node, "name"_s));
			this->sPLT_sampleDepth = getIntAttribute(node, "sampleDepth"_s);
			$var($ints, red, $new($ints, 256));
			$var($ints, green, $new($ints, 256));
			$var($ints, blue, $new($ints, 256));
			$var($ints, alpha, $new($ints, 256));
			$var($ints, frequency, $new($ints, 256));
			int32_t maxindex = -1;
			$var($Node, sPLT_entry, node->getFirstChild());
			if (sPLT_entry == nullptr) {
				fatal(node, "sPLT node has no children!"_s);
			}
			while (sPLT_entry != nullptr) {
				if (!$nc($(sPLT_entry->getNodeName()))->equals("sPLTEntry"_s)) {
					fatal(node, "Only an sPLTEntry may be a child of an sPLT!"_s);
				}
				int32_t index = getIntAttribute(sPLT_entry, "index"_s);
				if (index < 0 || index > 255) {
					fatal(node, "Bad value for PLTEEntry attribute index!"_s);
				}
				if (index > maxindex) {
					maxindex = index;
				}
				red->set(index, getIntAttribute(sPLT_entry, "red"_s));
				green->set(index, getIntAttribute(sPLT_entry, "green"_s));
				blue->set(index, getIntAttribute(sPLT_entry, "blue"_s));
				alpha->set(index, getIntAttribute(sPLT_entry, "alpha"_s));
				frequency->set(index, getIntAttribute(sPLT_entry, "frequency"_s));
				$assign(sPLT_entry, sPLT_entry->getNextSibling());
			}
			int32_t numEntries = maxindex + 1;
			$set(this, sPLT_red, $new($ints, numEntries));
			$set(this, sPLT_green, $new($ints, numEntries));
			$set(this, sPLT_blue, $new($ints, numEntries));
			$set(this, sPLT_alpha, $new($ints, numEntries));
			$set(this, sPLT_frequency, $new($ints, numEntries));
			$System::arraycopy(red, 0, this->sPLT_red, 0, numEntries);
			$System::arraycopy(green, 0, this->sPLT_green, 0, numEntries);
			$System::arraycopy(blue, 0, this->sPLT_blue, 0, numEntries);
			$System::arraycopy(alpha, 0, this->sPLT_alpha, 0, numEntries);
			$System::arraycopy(frequency, 0, this->sPLT_frequency, 0, numEntries);
			this->sPLT_present = true;
		} else if (name->equals("sRGB"_s)) {
			this->sRGB_renderingIntent = getEnumeratedAttribute(node, "renderingIntent"_s, PNGMetadata::renderingIntentNames);
			this->sRGB_present = true;
		} else if (name->equals("tEXt"_s)) {
			$var($Node, tEXt_node, node->getFirstChild());
			while (tEXt_node != nullptr) {
				if (!$nc($(tEXt_node->getNodeName()))->equals("tEXtEntry"_s)) {
					fatal(node, "Only an tEXtEntry may be a child of an tEXt!"_s);
				}
				$var($String, keyword, getAttribute(tEXt_node, "keyword"_s));
				$nc(this->tEXt_keyword)->add(keyword);
				$var($String, text, getAttribute(tEXt_node, "value"_s));
				$nc(this->tEXt_text)->add(text);
				if ($nc(keyword)->equals(PNGMetadata::tEXt_creationTimeKey)) {
					int32_t index = $nc(this->tEXt_text)->size() - 1;
					decodeImageCreationTimeFromTextChunk($($nc(this->tEXt_text)->listIterator(index)));
				}
				$assign(tEXt_node, tEXt_node->getNextSibling());
			}
		} else if (name->equals("tIME"_s)) {
			this->tIME_year = getIntAttribute(node, "year"_s);
			this->tIME_month = getIntAttribute(node, "month"_s);
			this->tIME_day = getIntAttribute(node, "day"_s);
			this->tIME_hour = getIntAttribute(node, "hour"_s);
			this->tIME_minute = getIntAttribute(node, "minute"_s);
			this->tIME_second = getIntAttribute(node, "second"_s);
			this->tIME_present = true;
		} else if (name->equals("tRNS"_s)) {
			this->tRNS_present = false;
			$var($Node, tRNS_node, node->getFirstChild());
			if (tRNS_node == nullptr) {
				fatal(node, "tRNS node has no children!"_s);
			}
			$var($String, tRNS_name, $nc(tRNS_node)->getNodeName());
			if ($nc(tRNS_name)->equals("tRNS_Palette"_s)) {
				$var($bytes, alpha, $new($bytes, 256));
				int32_t maxindex = -1;
				$var($Node, tRNS_paletteEntry, tRNS_node->getFirstChild());
				if (tRNS_paletteEntry == nullptr) {
					fatal(node, "tRNS_Palette node has no children!"_s);
				}
				while (tRNS_paletteEntry != nullptr) {
					if (!$nc($(tRNS_paletteEntry->getNodeName()))->equals("tRNS_PaletteEntry"_s)) {
						fatal(node, "Only a tRNS_PaletteEntry may be a child of a tRNS_Palette!"_s);
					}
					int32_t index = getIntAttribute(tRNS_paletteEntry, "index"_s);
					if (index < 0 || index > 255) {
						fatal(node, "Bad value for tRNS_PaletteEntry attribute index!"_s);
					}
					if (index > maxindex) {
						maxindex = index;
					}
					alpha->set(index, (int8_t)getIntAttribute(tRNS_paletteEntry, "alpha"_s));
					$assign(tRNS_paletteEntry, tRNS_paletteEntry->getNextSibling());
				}
				int32_t numEntries = maxindex + 1;
				$set(this, tRNS_alpha, $new($bytes, numEntries));
				this->tRNS_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
				$System::arraycopy(alpha, 0, this->tRNS_alpha, 0, numEntries);
			} else if (tRNS_name->equals("tRNS_Grayscale"_s)) {
				this->tRNS_gray = getIntAttribute(tRNS_node, "gray"_s);
				this->tRNS_colorType = $PNGImageReader::PNG_COLOR_GRAY;
			} else if (tRNS_name->equals("tRNS_RGB"_s)) {
				this->tRNS_red = getIntAttribute(tRNS_node, "red"_s);
				this->tRNS_green = getIntAttribute(tRNS_node, "green"_s);
				this->tRNS_blue = getIntAttribute(tRNS_node, "blue"_s);
				this->tRNS_colorType = $PNGImageReader::PNG_COLOR_RGB;
			} else {
				fatal(node, "Bad child of a tRNS node!"_s);
			}
			if (tRNS_node->getNextSibling() != nullptr) {
				fatal(node, "tRNS node has more than one child!"_s);
			}
			this->tRNS_present = true;
		} else if (name->equals("zTXt"_s)) {
			$var($Node, zTXt_node, node->getFirstChild());
			while (zTXt_node != nullptr) {
				if (!$nc($(zTXt_node->getNodeName()))->equals("zTXtEntry"_s)) {
					fatal(node, "Only an zTXtEntry may be a child of an zTXt!"_s);
				}
				$var($String, keyword, getAttribute(zTXt_node, "keyword"_s));
				$nc(this->zTXt_keyword)->add(keyword);
				int32_t compressionMethod = getEnumeratedAttribute(zTXt_node, "compressionMethod"_s, PNGMetadata::zTXt_compressionMethodNames);
				$nc(this->zTXt_compressionMethod)->add($($Integer::valueOf(compressionMethod)));
				$var($String, text, getAttribute(zTXt_node, "text"_s));
				$nc(this->zTXt_text)->add(text);
				if ($nc(keyword)->equals(PNGMetadata::tEXt_creationTimeKey)) {
					int32_t index = $nc(this->zTXt_text)->size() - 1;
					decodeImageCreationTimeFromTextChunk($($nc(this->zTXt_text)->listIterator(index)));
				}
				$assign(zTXt_node, zTXt_node->getNextSibling());
			}
		} else if (name->equals("UnknownChunks"_s)) {
			$var($Node, unknown_node, node->getFirstChild());
			while (unknown_node != nullptr) {
				if (!$nc($(unknown_node->getNodeName()))->equals("UnknownChunk"_s)) {
					fatal(node, "Only an UnknownChunk may be a child of an UnknownChunks!"_s);
				}
				$var($String, chunkType, getAttribute(unknown_node, "type"_s));
				$var($Object, chunkData, $nc(($cast($IIOMetadataNode, unknown_node)))->getUserObject());
				if ($nc(chunkType)->length() != 4) {
					fatal(unknown_node, "Chunk type must be 4 characters!"_s);
				}
				if (chunkData == nullptr) {
					fatal(unknown_node, "No chunk data present in user object!"_s);
				}
				if (!($instanceOf($bytes, chunkData))) {
					fatal(unknown_node, "User object not a byte array!"_s);
				}
				$nc(this->unknownChunkType)->add(chunkType);
				$nc(this->unknownChunkData)->add($cast($bytes, $($nc(($cast($bytes, chunkData)))->clone())));
				$assign(unknown_node, unknown_node->getNextSibling());
			}
		} else {
			fatal(node, "Unknown child of root node!"_s);
		}
		$assign(node, node->getNextSibling());
	}
}

bool PNGMetadata::isValidKeyword($String* s) {
	int32_t len = $nc(s)->length();
	if (len < 1 || len >= 80) {
		return false;
	}
	bool var$1 = s->startsWith(" "_s);
	bool var$0 = var$1 || s->endsWith(" "_s);
	if (var$0 || s->contains("  "_s)) {
		return false;
	}
	return isISOLatin(s, false);
}

bool PNGMetadata::isISOLatin($String* s, bool isLineFeedAllowed) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = s->charAt(i);
		if (c < 32 || c > 255 || (c > 126 && c < 161)) {
			if (!isLineFeedAllowed || c != 16) {
				return false;
			}
		}
	}
	return true;
}

void PNGMetadata::mergeStandardTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, root);
	$init($IIOMetadataFormatImpl);
	if (!$nc($($nc(node)->getNodeName()))->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
		fatal(node, $$str({"Root must be "_s, $IIOMetadataFormatImpl::standardMetadataFormatName}));
	}
	$assign(node, $nc(node)->getFirstChild());
	while (node != nullptr) {
		$var($String, name, node->getNodeName());
		if ($nc(name)->equals("Chroma"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("Gamma"_s)) {
					float gamma = getFloatAttribute(child, "value"_s);
					this->gAMA_present = true;
					this->gAMA_gamma = $cast(int32_t, (gamma * 0x000186A0 + 0.5));
				} else if (childName->equals("Palette"_s)) {
					$var($bytes, red, $new($bytes, 256));
					$var($bytes, green, $new($bytes, 256));
					$var($bytes, blue, $new($bytes, 256));
					int32_t maxindex = -1;
					$var($Node, entry, child->getFirstChild());
					while (entry != nullptr) {
						int32_t index = getIntAttribute(entry, "index"_s);
						if (index >= 0 && index <= 255) {
							red->set(index, (int8_t)getIntAttribute(entry, "red"_s));
							green->set(index, (int8_t)getIntAttribute(entry, "green"_s));
							blue->set(index, (int8_t)getIntAttribute(entry, "blue"_s));
							if (index > maxindex) {
								maxindex = index;
							}
						}
						$assign(entry, entry->getNextSibling());
					}
					int32_t numEntries = maxindex + 1;
					$set(this, PLTE_red, $new($bytes, numEntries));
					$set(this, PLTE_green, $new($bytes, numEntries));
					$set(this, PLTE_blue, $new($bytes, numEntries));
					$System::arraycopy(red, 0, this->PLTE_red, 0, numEntries);
					$System::arraycopy(green, 0, this->PLTE_green, 0, numEntries);
					$System::arraycopy(blue, 0, this->PLTE_blue, 0, numEntries);
					this->PLTE_present = true;
				} else if (childName->equals("BackgroundIndex"_s)) {
					this->bKGD_present = true;
					this->bKGD_colorType = $PNGImageReader::PNG_COLOR_PALETTE;
					this->bKGD_index = getIntAttribute(child, "value"_s);
				} else if (childName->equals("BackgroundColor"_s)) {
					int32_t red = getIntAttribute(child, "red"_s);
					int32_t green = getIntAttribute(child, "green"_s);
					int32_t blue = getIntAttribute(child, "blue"_s);
					if (red == green && red == blue) {
						this->bKGD_colorType = $PNGImageReader::PNG_COLOR_GRAY;
						this->bKGD_gray = red;
					} else {
						this->bKGD_colorType = $PNGImageReader::PNG_COLOR_RGB;
						this->bKGD_red = red;
						this->bKGD_green = green;
						this->bKGD_blue = blue;
					}
					this->bKGD_present = true;
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Compression"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("NumProgressiveScans"_s)) {
					int32_t scans = getIntAttribute(child, "value"_s);
					this->IHDR_interlaceMethod = (scans > 1) ? 1 : 0;
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Data"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("BitsPerSample"_s)) {
					$var($String, s, getAttribute(child, "value"_s));
					$var($StringTokenizer, t, $new($StringTokenizer, s));
					int32_t maxBits = -1;
					while (t->hasMoreTokens()) {
						int32_t bits = $Integer::parseInt($(t->nextToken()));
						if (bits > maxBits) {
							maxBits = bits;
						}
					}
					if (maxBits < 1) {
						maxBits = 1;
					}
					if (maxBits == 3) {
						maxBits = 4;
					}
					if (maxBits > 4 || maxBits < 8) {
						maxBits = 8;
					}
					if (maxBits > 8) {
						maxBits = 16;
					}
					this->IHDR_bitDepth = maxBits;
				} else if (childName->equals("SignificantBitsPerSample"_s)) {
					$var($String, s, getAttribute(child, "value"_s));
					$var($StringTokenizer, t, $new($StringTokenizer, s));
					int32_t numTokens = t->countTokens();
					if (numTokens == 1) {
						this->sBIT_colorType = $PNGImageReader::PNG_COLOR_GRAY;
						this->sBIT_grayBits = $Integer::parseInt($(t->nextToken()));
					} else if (numTokens == 2) {
						this->sBIT_colorType = $PNGImageReader::PNG_COLOR_GRAY_ALPHA;
						this->sBIT_grayBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_alphaBits = $Integer::parseInt($(t->nextToken()));
					} else if (numTokens == 3) {
						this->sBIT_colorType = $PNGImageReader::PNG_COLOR_RGB;
						this->sBIT_redBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_greenBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_blueBits = $Integer::parseInt($(t->nextToken()));
					} else if (numTokens == 4) {
						this->sBIT_colorType = $PNGImageReader::PNG_COLOR_RGB_ALPHA;
						this->sBIT_redBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_greenBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_blueBits = $Integer::parseInt($(t->nextToken()));
						this->sBIT_alphaBits = $Integer::parseInt($(t->nextToken()));
					}
					if (numTokens >= 1 && numTokens <= 4) {
						this->sBIT_present = true;
					}
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Dimension"_s)) {
			bool gotWidth = false;
			bool gotHeight = false;
			bool gotAspectRatio = false;
			float width = -1.0f;
			float height = -1.0f;
			float aspectRatio = -1.0f;
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("PixelAspectRatio"_s)) {
					aspectRatio = getFloatAttribute(child, "value"_s);
					gotAspectRatio = true;
				} else if (childName->equals("HorizontalPixelSize"_s)) {
					width = getFloatAttribute(child, "value"_s);
					gotWidth = true;
				} else if (childName->equals("VerticalPixelSize"_s)) {
					height = getFloatAttribute(child, "value"_s);
					gotHeight = true;
				}
				$assign(child, child->getNextSibling());
			}
			if (gotWidth && gotHeight) {
				this->pHYs_present = true;
				this->pHYs_unitSpecifier = 1;
				this->pHYs_pixelsPerUnitXAxis = $cast(int32_t, (width * 1000 + 0.5f));
				this->pHYs_pixelsPerUnitYAxis = $cast(int32_t, (height * 1000 + 0.5f));
			} else if (gotAspectRatio) {
				this->pHYs_present = true;
				this->pHYs_unitSpecifier = 0;
				int32_t denom = 1;
				for (; denom < 100; ++denom) {
					int32_t num = $cast(int32_t, (aspectRatio * denom));
					if ($Math::abs($div(num, denom) - aspectRatio) < 0.001) {
						break;
					}
				}
				this->pHYs_pixelsPerUnitXAxis = $cast(int32_t, (aspectRatio * denom));
				this->pHYs_pixelsPerUnitYAxis = denom;
			}
		} else if (name->equals("Document"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("ImageModificationTime"_s)) {
					this->tIME_present = true;
					this->tIME_year = getIntAttribute(child, "year"_s);
					this->tIME_month = getIntAttribute(child, "month"_s);
					this->tIME_day = getIntAttribute(child, "day"_s);
					this->tIME_hour = getIntAttribute(child, "hour"_s, 0, false);
					this->tIME_minute = getIntAttribute(child, "minute"_s, 0, false);
					this->tIME_second = getIntAttribute(child, "second"_s, 0, false);
				} else if (childName->equals("ImageCreationTime"_s)) {
					int32_t year = getIntAttribute(child, "year"_s);
					int32_t month = getIntAttribute(child, "month"_s);
					int32_t day = getIntAttribute(child, "day"_s);
					int32_t hour = getIntAttribute(child, "hour"_s, 0, false);
					int32_t mins = getIntAttribute(child, "minute"_s, 0, false);
					int32_t sec = getIntAttribute(child, "second"_s, 0, false);
					initImageCreationTime(year, month, day, hour, mins, sec);
					encodeImageCreationTimeToTextChunk();
				}
				$assign(child, child->getNextSibling());
			}
		} else if (name->equals("Text"_s)) {
			$var($Node, child, node->getFirstChild());
			while (child != nullptr) {
				$var($String, childName, child->getNodeName());
				if ($nc(childName)->equals("TextEntry"_s)) {
					$var($String, keyword, getAttribute(child, "keyword"_s, ""_s, false));
					$var($String, value, getAttribute(child, "value"_s));
					$var($String, language, getAttribute(child, "language"_s, ""_s, false));
					$var($String, compression, getAttribute(child, "compression"_s, "none"_s, false));
					if (!isValidKeyword(keyword)) {
					} else if (isISOLatin(value, true)) {
						if ($nc(compression)->equals("zip"_s)) {
							$nc(this->zTXt_keyword)->add(keyword);
							$nc(this->zTXt_text)->add(value);
							$nc(this->zTXt_compressionMethod)->add($($Integer::valueOf(0)));
						} else {
							$nc(this->tEXt_keyword)->add(keyword);
							$nc(this->tEXt_text)->add(value);
						}
					} else {
						$nc(this->iTXt_keyword)->add(keyword);
						$nc(this->iTXt_compressionFlag)->add($($Boolean::valueOf($nc(compression)->equals("zip"_s))));
						$nc(this->iTXt_compressionMethod)->add($($Integer::valueOf(0)));
						$nc(this->iTXt_languageTag)->add(language);
						$nc(this->iTXt_translatedKeyword)->add(keyword);
						$nc(this->iTXt_text)->add(value);
					}
				}
				$assign(child, child->getNextSibling());
			}
		}
		$assign(node, node->getNextSibling());
	}
}

void PNGMetadata::initImageCreationTime($OffsetDateTime* offsetDateTime) {
	if (offsetDateTime != nullptr) {
		this->creation_time_present = true;
		this->creation_time_year = offsetDateTime->getYear();
		this->creation_time_month = offsetDateTime->getMonthValue();
		this->creation_time_day = offsetDateTime->getDayOfMonth();
		this->creation_time_hour = offsetDateTime->getHour();
		this->creation_time_minute = offsetDateTime->getMinute();
		this->creation_time_second = offsetDateTime->getSecond();
		$set(this, creation_time_offset, offsetDateTime->getOffset());
	}
}

void PNGMetadata::initImageCreationTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t min, int32_t second) {
	$useLocalCurrentObjectStackCache();
	$var($LocalDateTime, locDT, $LocalDateTime::of(year, month, day, hour, min, second));
	$var($ZoneOffset, offset, $nc($($nc($($ZoneId::systemDefault()))->getRules()))->getOffset(locDT));
	$var($OffsetDateTime, offDateTime, $OffsetDateTime::of(locDT, offset));
	initImageCreationTime(offDateTime);
}

void PNGMetadata::decodeImageCreationTimeFromTextChunk($ListIterator* iterChunk) {
	$useLocalCurrentObjectStackCache();
	if (iterChunk != nullptr && iterChunk->hasNext()) {
		setCreationTimeChunk(iterChunk);
		$var($String, encodedTime, getEncodedTime());
		initImageCreationTime($(parseEncodedTime(encodedTime)));
	}
}

void PNGMetadata::encodeImageCreationTimeToTextChunk() {
	$useLocalCurrentObjectStackCache();
	if (this->creation_time_present) {
		if (this->tEXt_creation_time_present == false) {
			$nc(this->tEXt_keyword)->add(PNGMetadata::tEXt_creationTimeKey);
			$nc(this->tEXt_text)->add("Creation Time Place Holder"_s);
			int32_t index = $nc(this->tEXt_text)->size() - 1;
			setCreationTimeChunk($($nc(this->tEXt_text)->listIterator(index)));
		}
		$var($OffsetDateTime, offDateTime, $OffsetDateTime::of(this->creation_time_year, this->creation_time_month, this->creation_time_day, this->creation_time_hour, this->creation_time_minute, this->creation_time_second, 0, this->creation_time_offset));
		$init($DateTimeFormatter);
		$var($DateTimeFormatter, formatter, $DateTimeFormatter::RFC_1123_DATE_TIME);
		$var($String, encodedTime, $nc(offDateTime)->format(formatter));
		setEncodedTime(encodedTime);
	}
}

void PNGMetadata::setCreationTimeChunk($ListIterator* iter) {
	if (iter != nullptr && iter->hasNext()) {
		$set(this, tEXt_creation_time_iter, iter);
		this->tEXt_creation_time_present = true;
	}
}

void PNGMetadata::setEncodedTime($String* encodedTime) {
	if (this->tEXt_creation_time_iter != nullptr && $nc(this->tEXt_creation_time_iter)->hasNext() && encodedTime != nullptr) {
		$nc(this->tEXt_creation_time_iter)->next();
		$nc(this->tEXt_creation_time_iter)->set(encodedTime);
		$nc(this->tEXt_creation_time_iter)->previous();
	}
}

$String* PNGMetadata::getEncodedTime() {
	$var($String, encodedTime, nullptr);
	if (this->tEXt_creation_time_iter != nullptr && $nc(this->tEXt_creation_time_iter)->hasNext()) {
		$assign(encodedTime, $cast($String, $nc(this->tEXt_creation_time_iter)->next()));
		$nc(this->tEXt_creation_time_iter)->previous();
	}
	return encodedTime;
}

$OffsetDateTime* PNGMetadata::parseEncodedTime($String* encodedTime) {
	$useLocalCurrentObjectStackCache();
	$var($OffsetDateTime, retVal, nullptr);
	bool timeDecoded = false;
	try {
		$init($DateTimeFormatter);
		$assign(retVal, $OffsetDateTime::parse(encodedTime, $DateTimeFormatter::RFC_1123_DATE_TIME));
		timeDecoded = true;
	} catch ($DateTimeParseException& exception) {
	}
	if (timeDecoded == false) {
		try {
			$init($DateTimeFormatter);
			$var($DateTimeFormatter, formatter, $DateTimeFormatter::ISO_DATE_TIME);
			$var($TemporalAccessor, dt, $nc(formatter)->parseBest(encodedTime, $$new($TemporalQueryArray, {
				static_cast<$TemporalQuery*>($$new(PNGMetadata$$Lambda$from)),
				static_cast<$TemporalQuery*>($$new(PNGMetadata$$Lambda$from$1))
			})));
			if ($instanceOf($OffsetDateTime, dt)) {
				$assign(retVal, $cast($OffsetDateTime, dt));
			} else if ($instanceOf($LocalDateTime, dt)) {
				$var($LocalDateTime, locDT, $cast($LocalDateTime, dt));
				$init($ZoneOffset);
				$assign(retVal, $OffsetDateTime::of(locDT, $ZoneOffset::UTC));
			}
		} catch ($DateTimeParseException& exception) {
		}
	}
	return retVal;
}

bool PNGMetadata::hasTransparentColor() {
	return this->tRNS_present && (this->tRNS_colorType == $PNGImageReader::PNG_COLOR_RGB || this->tRNS_colorType == $PNGImageReader::PNG_COLOR_GRAY);
}

void PNGMetadata::reset() {
	this->IHDR_present = false;
	this->PLTE_present = false;
	this->bKGD_present = false;
	this->cHRM_present = false;
	this->gAMA_present = false;
	this->hIST_present = false;
	this->iCCP_present = false;
	$set(this, iTXt_keyword, $new($ArrayList));
	$set(this, iTXt_compressionFlag, $new($ArrayList));
	$set(this, iTXt_compressionMethod, $new($ArrayList));
	$set(this, iTXt_languageTag, $new($ArrayList));
	$set(this, iTXt_translatedKeyword, $new($ArrayList));
	$set(this, iTXt_text, $new($ArrayList));
	this->pHYs_present = false;
	this->sBIT_present = false;
	this->sPLT_present = false;
	this->sRGB_present = false;
	$set(this, tEXt_keyword, $new($ArrayList));
	$set(this, tEXt_text, $new($ArrayList));
	this->tIME_present = false;
	this->tEXt_creation_time_present = false;
	$set(this, tEXt_creation_time_iter, nullptr);
	this->creation_time_present = false;
	this->tRNS_present = false;
	$set(this, zTXt_keyword, $new($ArrayList));
	$set(this, zTXt_compressionMethod, $new($ArrayList));
	$set(this, zTXt_text, $new($ArrayList));
	$set(this, unknownChunkType, $new($ArrayList));
	$set(this, unknownChunkData, $new($ArrayList));
}

void clinit$PNGMetadata($Class* class$) {
	$assignStatic(PNGMetadata::nativeMetadataFormatName, "javax_imageio_png_1.0"_s);
	$assignStatic(PNGMetadata::nativeMetadataFormatClassName, "com.sun.imageio.plugins.png.PNGMetadataFormat"_s);
	$assignStatic(PNGMetadata::tEXt_creationTimeKey, "Creation Time"_s);
	$assignStatic(PNGMetadata::IHDR_colorTypeNames, $new($StringArray, {
		"Grayscale"_s,
		($String*)nullptr,
		"RGB"_s,
		"Palette"_s,
		"GrayAlpha"_s,
		($String*)nullptr,
		"RGBAlpha"_s
	}));
	$assignStatic(PNGMetadata::IHDR_numChannels, $new($ints, {
		1,
		0,
		3,
		3,
		2,
		0,
		4
	}));
	$assignStatic(PNGMetadata::IHDR_bitDepths, $new($StringArray, {
		"1"_s,
		"2"_s,
		"4"_s,
		"8"_s,
		"16"_s
	}));
	$assignStatic(PNGMetadata::IHDR_compressionMethodNames, $new($StringArray, {"deflate"_s}));
	$assignStatic(PNGMetadata::IHDR_filterMethodNames, $new($StringArray, {"adaptive"_s}));
	$assignStatic(PNGMetadata::IHDR_interlaceMethodNames, $new($StringArray, {
		"none"_s,
		"adam7"_s
	}));
	$assignStatic(PNGMetadata::iCCP_compressionMethodNames, $new($StringArray, {"deflate"_s}));
	$assignStatic(PNGMetadata::zTXt_compressionMethodNames, $new($StringArray, {"deflate"_s}));
	$assignStatic(PNGMetadata::unitSpecifierNames, $new($StringArray, {
		"unknown"_s,
		"meter"_s
	}));
	$assignStatic(PNGMetadata::renderingIntentNames, $new($StringArray, {
		"Perceptual"_s,
		"Relative colorimetric"_s,
		"Saturation"_s,
		"Absolute colorimetric"_s
	}));
	$assignStatic(PNGMetadata::colorSpaceTypeNames, $new($StringArray, {
		"GRAY"_s,
		($String*)nullptr,
		"RGB"_s,
		"RGB"_s,
		"GRAY"_s,
		($String*)nullptr,
		"RGB"_s
	}));
}

PNGMetadata::PNGMetadata() {
}

$Class* PNGMetadata::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PNGMetadata$$Lambda$from::classInfo$.name)) {
			return PNGMetadata$$Lambda$from::load$(name, initialize);
		}
		if (name->equals(PNGMetadata$$Lambda$from$1::classInfo$.name)) {
			return PNGMetadata$$Lambda$from$1::load$(name, initialize);
		}
	}
	$loadClass(PNGMetadata, name, initialize, &_PNGMetadata_ClassInfo_, clinit$PNGMetadata, allocate$PNGMetadata);
	return class$;
}

$Class* PNGMetadata::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com