#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>

#include <com/sun/imageio/plugins/bmp/BMPCompressionTypes.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/IllegalStateException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $BMPCompressionTypes = ::com::sun::imageio::plugins::bmp::BMPCompressionTypes;
using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPMetadata_FieldInfo_[] = {
	{"nativeMetadataFormatName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPMetadata, nativeMetadataFormatName)},
	{"bmpVersion", "Ljava/lang/String;", nullptr, $PUBLIC, $field(BMPMetadata, bmpVersion)},
	{"width", "I", nullptr, $PUBLIC, $field(BMPMetadata, width)},
	{"height", "I", nullptr, $PUBLIC, $field(BMPMetadata, height)},
	{"bitsPerPixel", "S", nullptr, $PUBLIC, $field(BMPMetadata, bitsPerPixel)},
	{"compression", "I", nullptr, $PUBLIC, $field(BMPMetadata, compression)},
	{"imageSize", "I", nullptr, $PUBLIC, $field(BMPMetadata, imageSize)},
	{"xPixelsPerMeter", "I", nullptr, $PUBLIC, $field(BMPMetadata, xPixelsPerMeter)},
	{"yPixelsPerMeter", "I", nullptr, $PUBLIC, $field(BMPMetadata, yPixelsPerMeter)},
	{"colorsUsed", "I", nullptr, $PUBLIC, $field(BMPMetadata, colorsUsed)},
	{"colorsImportant", "I", nullptr, $PUBLIC, $field(BMPMetadata, colorsImportant)},
	{"redMask", "I", nullptr, $PUBLIC, $field(BMPMetadata, redMask)},
	{"greenMask", "I", nullptr, $PUBLIC, $field(BMPMetadata, greenMask)},
	{"blueMask", "I", nullptr, $PUBLIC, $field(BMPMetadata, blueMask)},
	{"alphaMask", "I", nullptr, $PUBLIC, $field(BMPMetadata, alphaMask)},
	{"colorSpace", "I", nullptr, $PUBLIC, $field(BMPMetadata, colorSpace)},
	{"redX", "D", nullptr, $PUBLIC, $field(BMPMetadata, redX)},
	{"redY", "D", nullptr, $PUBLIC, $field(BMPMetadata, redY)},
	{"redZ", "D", nullptr, $PUBLIC, $field(BMPMetadata, redZ)},
	{"greenX", "D", nullptr, $PUBLIC, $field(BMPMetadata, greenX)},
	{"greenY", "D", nullptr, $PUBLIC, $field(BMPMetadata, greenY)},
	{"greenZ", "D", nullptr, $PUBLIC, $field(BMPMetadata, greenZ)},
	{"blueX", "D", nullptr, $PUBLIC, $field(BMPMetadata, blueX)},
	{"blueY", "D", nullptr, $PUBLIC, $field(BMPMetadata, blueY)},
	{"blueZ", "D", nullptr, $PUBLIC, $field(BMPMetadata, blueZ)},
	{"gammaRed", "I", nullptr, $PUBLIC, $field(BMPMetadata, gammaRed)},
	{"gammaGreen", "I", nullptr, $PUBLIC, $field(BMPMetadata, gammaGreen)},
	{"gammaBlue", "I", nullptr, $PUBLIC, $field(BMPMetadata, gammaBlue)},
	{"intent", "I", nullptr, $PUBLIC, $field(BMPMetadata, intent)},
	{"palette", "[B", nullptr, $PUBLIC, $field(BMPMetadata, palette)},
	{"paletteSize", "I", nullptr, $PUBLIC, $field(BMPMetadata, paletteSize)},
	{"red", "I", nullptr, $PUBLIC, $field(BMPMetadata, red)},
	{"green", "I", nullptr, $PUBLIC, $field(BMPMetadata, green)},
	{"blue", "I", nullptr, $PUBLIC, $field(BMPMetadata, blue)},
	{}
};

$MethodInfo _BMPMetadata_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPMetadata::*)()>(&BMPMetadata::init$))},
	{"addChildNode", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljava/lang/String;Ljava/lang/Object;)Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataNode*(BMPMetadata::*)($IIOMetadataNode*,$String*,Object$*)>(&BMPMetadata::addChildNode))},
	{"addXYZPoints", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljava/lang/String;DDD)V", nullptr, $PRIVATE, $method(static_cast<void(BMPMetadata::*)($IIOMetadataNode*,$String*,double,double,double)>(&BMPMetadata::addXYZPoints))},
	{"countBits", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BMPMetadata::*)(int32_t)>(&BMPMetadata::countBits))},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNativeTree", "()Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $method(static_cast<$Node*(BMPMetadata::*)()>(&BMPMetadata::getNativeTree))},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardDataNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"toISO8859", "([B)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BMPMetadata::*)($bytes*)>(&BMPMetadata::toISO8859))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BMPMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPMetadata",
	"javax.imageio.metadata.IIOMetadata",
	"com.sun.imageio.plugins.bmp.BMPConstants",
	_BMPMetadata_FieldInfo_,
	_BMPMetadata_MethodInfo_
};

$Object* allocate$BMPMetadata($Class* clazz) {
	return $of($alloc(BMPMetadata));
}

int32_t BMPMetadata::hashCode() {
	 return this->$IIOMetadata::hashCode();
}

bool BMPMetadata::equals(Object$* arg0) {
	 return this->$IIOMetadata::equals(arg0);
}

$Object* BMPMetadata::clone() {
	 return this->$IIOMetadata::clone();
}

$String* BMPMetadata::toString() {
	 return this->$IIOMetadata::toString();
}

void BMPMetadata::finalize() {
	this->$IIOMetadata::finalize();
}

$String* BMPMetadata::nativeMetadataFormatName = nullptr;

void BMPMetadata::init$() {
	$IIOMetadata::init$(true, BMPMetadata::nativeMetadataFormatName, "com.sun.imageio.plugins.bmp.BMPMetadataFormat"_s, nullptr, nullptr);
	$set(this, palette, nullptr);
}

bool BMPMetadata::isReadOnly() {
	return true;
}

$Node* BMPMetadata::getAsTree($String* formatName) {
	if ($nc(formatName)->equals(BMPMetadata::nativeMetadataFormatName)) {
		return getNativeTree();
	} else {
		$init($IIOMetadataFormatImpl);
		if (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return getStandardTree();
		} else {
			$throwNew($IllegalArgumentException, $($I18N::getString("BMPMetadata0"_s)));
		}
	}
}

$String* BMPMetadata::toISO8859($bytes* data) {
	try {
		return $new($String, data, "ISO-8859-1"_s);
	} catch ($UnsupportedEncodingException& e) {
		return ""_s;
	}
	$shouldNotReachHere();
}

$Node* BMPMetadata::getNativeTree() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, root, $new($IIOMetadataNode, BMPMetadata::nativeMetadataFormatName));
	addChildNode(root, "BMPVersion"_s, this->bmpVersion);
	addChildNode(root, "Width"_s, $($Integer::valueOf(this->width)));
	addChildNode(root, "Height"_s, $($Integer::valueOf(this->height)));
	addChildNode(root, "BitsPerPixel"_s, $($Short::valueOf(this->bitsPerPixel)));
	addChildNode(root, "Compression"_s, $($Integer::valueOf(this->compression)));
	addChildNode(root, "ImageSize"_s, $($Integer::valueOf(this->imageSize)));
	$var($IIOMetadataNode, node, addChildNode(root, "PixelsPerMeter"_s, nullptr));
	addChildNode(node, "X"_s, $($Integer::valueOf(this->xPixelsPerMeter)));
	addChildNode(node, "Y"_s, $($Integer::valueOf(this->yPixelsPerMeter)));
	addChildNode(root, "ColorsUsed"_s, $($Integer::valueOf(this->colorsUsed)));
	addChildNode(root, "ColorsImportant"_s, $($Integer::valueOf(this->colorsImportant)));
	int32_t version = 0;
	for (int32_t i = 0; i < $nc(this->bmpVersion)->length(); ++i) {
		if ($Character::isDigit($nc(this->bmpVersion)->charAt(i))) {
			version = $nc(this->bmpVersion)->charAt(i) - u'0';
		}
	}
	if (version >= 4) {
		$assign(node, addChildNode(root, "Mask"_s, nullptr));
		addChildNode(node, "Red"_s, $($Integer::valueOf(this->redMask)));
		addChildNode(node, "Green"_s, $($Integer::valueOf(this->greenMask)));
		addChildNode(node, "Blue"_s, $($Integer::valueOf(this->blueMask)));
		addChildNode(node, "Alpha"_s, $($Integer::valueOf(this->alphaMask)));
		addChildNode(root, "ColorSpaceType"_s, $($Integer::valueOf(this->colorSpace)));
		$assign(node, addChildNode(root, "CIEXYZEndPoints"_s, nullptr));
		addXYZPoints(node, "Red"_s, this->redX, this->redY, this->redZ);
		addXYZPoints(node, "Green"_s, this->greenX, this->greenY, this->greenZ);
		addXYZPoints(node, "Blue"_s, this->blueX, this->blueY, this->blueZ);
		$assign(node, addChildNode(root, "Intent"_s, $($Integer::valueOf(this->intent))));
	}
	if ((this->palette != nullptr) && (this->paletteSize > 0)) {
		$assign(node, addChildNode(root, "Palette"_s, nullptr));
		int32_t numComps = $div($nc(this->palette)->length, this->paletteSize);
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < this->paletteSize; ++i) {
				$var($IIOMetadataNode, entry, addChildNode(node, "PaletteEntry"_s, nullptr));
				this->red = (int32_t)($nc(this->palette)->get(j++) & (uint32_t)255);
				this->green = (int32_t)($nc(this->palette)->get(j++) & (uint32_t)255);
				this->blue = (int32_t)($nc(this->palette)->get(j++) & (uint32_t)255);
				addChildNode(entry, "Red"_s, $($Byte::valueOf((int8_t)this->red)));
				addChildNode(entry, "Green"_s, $($Byte::valueOf((int8_t)this->green)));
				addChildNode(entry, "Blue"_s, $($Byte::valueOf((int8_t)this->blue)));
				if (numComps == 4) {
					addChildNode(entry, "Alpha"_s, $($Byte::valueOf((int8_t)((int32_t)($nc(this->palette)->get(j++) & (uint32_t)255)))));
				}
			}
		}
	}
	return root;
}

$IIOMetadataNode* BMPMetadata::getStandardChromaNode() {
	$useLocalCurrentObjectStackCache();
	if ((this->palette != nullptr) && (this->paletteSize > 0)) {
		$var($IIOMetadataNode, node, $new($IIOMetadataNode, "Chroma"_s));
		$var($IIOMetadataNode, subNode, $new($IIOMetadataNode, "Palette"_s));
		int32_t numComps = $div($nc(this->palette)->length, this->paletteSize);
		subNode->setAttribute("value"_s, $$str({""_s, $$str(numComps)}));
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < this->paletteSize; ++i) {
				$var($IIOMetadataNode, subNode1, $new($IIOMetadataNode, "PaletteEntry"_s));
				subNode1->setAttribute("index"_s, $$str({""_s, $$str(i)}));
				subNode1->setAttribute("red"_s, $$str({""_s, $$str($nc(this->palette)->get(j++))}));
				subNode1->setAttribute("green"_s, $$str({""_s, $$str($nc(this->palette)->get(j++))}));
				subNode1->setAttribute("blue"_s, $$str({""_s, $$str($nc(this->palette)->get(j++))}));
				if (numComps == 4 && $nc(this->palette)->get(j) != 0) {
					subNode1->setAttribute("alpha"_s, $$str({""_s, $$str($nc(this->palette)->get(j++))}));
				}
				subNode->appendChild(subNode1);
			}
		}
		node->appendChild(subNode);
		return node;
	}
	return nullptr;
}

$IIOMetadataNode* BMPMetadata::getStandardCompressionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, subNode, $new($IIOMetadataNode, "CompressionTypeName"_s));
	subNode->setAttribute("value"_s, $($BMPCompressionTypes::getName(this->compression)));
	node->appendChild(subNode);
	return node;
}

$IIOMetadataNode* BMPMetadata::getStandardDataNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "Data"_s));
	$var($String, bits, ""_s);
	if (this->bitsPerPixel == 24) {
		$assign(bits, "8 8 8 "_s);
	} else if (this->bitsPerPixel == 16 || this->bitsPerPixel == 32) {
		$var($String, var$3, $$str({""_s, $(countBits(this->redMask)), " "_s}));
		$var($String, var$2, $$concat(var$3, $(countBits(this->greenMask))));
		$var($String, var$1, $$concat(var$2, $(countBits(this->blueMask))));
		$var($String, var$0, $$concat(var$1, ""_s));
		$assign(bits, $concat(var$0, $(countBits(this->alphaMask))));
	}
	$var($IIOMetadataNode, subNode, $new($IIOMetadataNode, "BitsPerSample"_s));
	subNode->setAttribute("value"_s, bits);
	node->appendChild(subNode);
	return node;
}

$IIOMetadataNode* BMPMetadata::getStandardDimensionNode() {
	$useLocalCurrentObjectStackCache();
	if (this->yPixelsPerMeter > 0.0f && this->xPixelsPerMeter > 0.0f) {
		$var($IIOMetadataNode, node, $new($IIOMetadataNode, "Dimension"_s));
		float ratio = (float)($div(this->yPixelsPerMeter, this->xPixelsPerMeter));
		$var($IIOMetadataNode, subNode, $new($IIOMetadataNode, "PixelAspectRatio"_s));
		subNode->setAttribute("value"_s, $$str({""_s, $$str(ratio)}));
		node->appendChild(subNode);
		$assign(subNode, $new($IIOMetadataNode, "HorizontalPhysicalPixelSpacing"_s));
		subNode->setAttribute("value"_s, $$str({""_s, $$str((1000.0f / this->xPixelsPerMeter))}));
		node->appendChild(subNode);
		$assign(subNode, $new($IIOMetadataNode, "VerticalPhysicalPixelSpacing"_s));
		subNode->setAttribute("value"_s, $$str({""_s, $$str((1000.0f / this->yPixelsPerMeter))}));
		node->appendChild(subNode);
		return node;
	}
	return nullptr;
}

void BMPMetadata::setFromTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, $($I18N::getString("BMPMetadata1"_s)));
}

void BMPMetadata::mergeTree($String* formatName, $Node* root) {
	$throwNew($IllegalStateException, $($I18N::getString("BMPMetadata1"_s)));
}

void BMPMetadata::reset() {
	$throwNew($IllegalStateException, $($I18N::getString("BMPMetadata1"_s)));
}

$String* BMPMetadata::countBits(int32_t num) {
	int32_t count = 0;
	while (num > 0) {
		if (((int32_t)(num & (uint32_t)1)) == 1) {
			++count;
		}
		$usrAssign(num, 1);
	}
	return count == 0 ? ""_s : $str({""_s, $$str(count)});
}

void BMPMetadata::addXYZPoints($IIOMetadataNode* root, $String* name, double x, double y, double z) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, addChildNode(root, name, nullptr));
	addChildNode(node, "X"_s, $($Double::valueOf(x)));
	addChildNode(node, "Y"_s, $($Double::valueOf(y)));
	addChildNode(node, "Z"_s, $($Double::valueOf(z)));
}

$IIOMetadataNode* BMPMetadata::addChildNode($IIOMetadataNode* root, $String* name, Object$* object) {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, child, $new($IIOMetadataNode, name));
	if (object != nullptr) {
		child->setUserObject(object);
		child->setNodeValue($($ImageUtil::convertObjectToString(object)));
	}
	$nc(root)->appendChild(child);
	return child;
}

BMPMetadata::BMPMetadata() {
}

void clinit$BMPMetadata($Class* class$) {
	$assignStatic(BMPMetadata::nativeMetadataFormatName, "javax_imageio_bmp_1.0"_s);
}

$Class* BMPMetadata::load$($String* name, bool initialize) {
	$loadClass(BMPMetadata, name, initialize, &_BMPMetadata_ClassInfo_, clinit$BMPMetadata, allocate$BMPMetadata);
	return class$;
}

$Class* BMPMetadata::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com