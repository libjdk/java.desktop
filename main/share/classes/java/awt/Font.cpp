#include <java/awt/Font.h>

#include <java/awt/Font$1.h>
#include <java/awt/Font$2.h>
#include <java/awt/Font$3.h>
#include <java/awt/Font$FontAccessImpl.h>
#include <java/awt/FontFormatException.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GlyphVector.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Point2D$Float.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/peer/FontPeer.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ref/SoftReference.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/CharacterIterator.h>
#include <java/util/AbstractMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/font/AttributeMap.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/EAttribute.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <sun/font/FontAccess.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/font/FontLineMetrics.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/GlyphLayout$LayoutEngineFactory.h>
#include <sun/font/GlyphLayout.h>
#include <sun/font/StandardGlyphVector.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BIDI_EMBEDDING
#undef BOLD
#undef CENTER_BASELINE
#undef CHAR_REPLACEMENT
#undef DIALOG
#undef DIALOG_INPUT
#undef EBACKGROUND
#undef EBIDI_EMBEDDING
#undef ECHAR_REPLACEMENT
#undef EFAMILY
#undef EFONT
#undef EFOREGROUND
#undef EINPUT_METHOD_HIGHLIGHT
#undef EINPUT_METHOD_UNDERLINE
#undef EJUSTIFICATION
#undef EKERNING
#undef ELIGATURES
#undef ENGLISH
#undef ENUMERIC_SHAPING
#undef EPOSTURE
#undef ERUN_DIRECTION
#undef ESIZE
#undef ESTRIKETHROUGH
#undef ESUPERSCRIPT
#undef ESWAP_COLORS
#undef ETRACKING
#undef ETRANSFORM
#undef EUNDERLINE
#undef EWEIGHT
#undef EWIDTH
#undef EXTRA_MASK
#undef FAMILY
#undef FONT
#undef FOREGROUND
#undef HANGING_BASELINE
#undef INPUT_METHOD_HIGHLIGHT
#undef INPUT_METHOD_UNDERLINE
#undef ITALIC
#undef JUSTIFICATION
#undef KERNING
#undef LAYOUT_LEFT_TO_RIGHT
#undef LAYOUT_MASK
#undef LAYOUT_NO_LIMIT_CONTEXT
#undef LAYOUT_NO_START_CONTEXT
#undef LAYOUT_RIGHT_TO_LEFT
#undef LIGATURES
#undef LOGICAL_FALLBACK
#undef MASK_ALL
#undef MAX_FILE_SIZE
#undef MAX_TOTAL_BYTES
#undef MONOSPACED
#undef NUMERIC_SHAPING
#undef PLAIN
#undef POSTURE
#undef PRIMARY_MASK
#undef RECOGNIZED_MASK
#undef ROMAN_BASELINE
#undef RUN_DIRECTION
#undef SANS_SERIF
#undef SECONDARY_MASK
#undef SERIF
#undef SIZE
#undef STRIKETHROUGH
#undef SUPERSCRIPT
#undef SWAP_COLORS
#undef TRACKING
#undef TRANSFORM
#undef TRUETYPE_FONT
#undef TYPE1_FONT
#undef UNDERLINE
#undef VALUE_FRACTIONALMETRICS_OFF
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef WEIGHT
#undef WIDTH

using $FontArray = $Array<::java::awt::Font>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $EAttributeArray = $Array<::sun::font::EAttribute>;
using $Font2DArray = $Array<::sun::font::Font2D>;
using $Font$1 = ::java::awt::Font$1;
using $Font$2 = ::java::awt::Font$2;
using $Font$3 = ::java::awt::Font$3;
using $Font$FontAccessImpl = ::java::awt::Font$FontAccessImpl;
using $FontFormatException = ::java::awt::FontFormatException;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GlyphVector = ::java::awt::font::GlyphVector;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextLayout = ::java::awt::font::TextLayout;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Float = ::java::awt::geom::Point2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $FontPeer = ::java::awt::peer::FontPeer;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $CharacterIterator = ::java::text::CharacterIterator;
using $AbstractMap = ::java::util::AbstractMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $AttributeMap = ::sun::font::AttributeMap;
using $AttributeValues = ::sun::font::AttributeValues;
using $CompositeFont = ::sun::font::CompositeFont;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $EAttribute = ::sun::font::EAttribute;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;
using $FontAccess = ::sun::font::FontAccess;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $FontLineMetrics = ::sun::font::FontLineMetrics;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory = ::sun::font::FontManagerFactory;
using $FontUtilities = ::sun::font::FontUtilities;
using $GlyphLayout = ::sun::font::GlyphLayout;
using $GlyphLayout$LayoutEngineFactory = ::sun::font::GlyphLayout$LayoutEngineFactory;
using $StandardGlyphVector = ::sun::font::StandardGlyphVector;

namespace java {
	namespace awt {

$FieldInfo _Font_FieldInfo_[] = {
	{"fRequestedAttributes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(Font, fRequestedAttributes)},
	{"DIALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Font, DIALOG)},
	{"DIALOG_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Font, DIALOG_INPUT)},
	{"SANS_SERIF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Font, SANS_SERIF)},
	{"SERIF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Font, SERIF)},
	{"MONOSPACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Font, MONOSPACED)},
	{"PLAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, PLAIN)},
	{"BOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, BOLD)},
	{"ITALIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, ITALIC)},
	{"ROMAN_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, ROMAN_BASELINE)},
	{"CENTER_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, CENTER_BASELINE)},
	{"HANGING_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, HANGING_BASELINE)},
	{"TRUETYPE_FONT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, TRUETYPE_FONT)},
	{"TYPE1_FONT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, TYPE1_FONT)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Font, name)},
	{"style", "I", nullptr, $PROTECTED, $field(Font, style)},
	{"size", "I", nullptr, $PROTECTED, $field(Font, size)},
	{"pointSize", "F", nullptr, $PROTECTED, $field(Font, pointSize)},
	{"peer", "Ljava/awt/peer/FontPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(Font, peer)},
	{"pData", "J", nullptr, $PRIVATE | $TRANSIENT, $field(Font, pData)},
	{"font2DHandle", "Lsun/font/Font2DHandle;", nullptr, $PRIVATE | $TRANSIENT, $field(Font, font2DHandle)},
	{"values", "Lsun/font/AttributeValues;", nullptr, $PRIVATE | $TRANSIENT, $field(Font, values)},
	{"hasLayoutAttributes", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Font, hasLayoutAttributes$)},
	{"createdFont", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Font, createdFont)},
	{"nonIdentityTx", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(Font, nonIdentityTx)},
	{"identityTx", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, identityTx)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Font, serialVersionUID)},
	{"RECOGNIZED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, RECOGNIZED_MASK)},
	{"PRIMARY_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, PRIMARY_MASK)},
	{"SECONDARY_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, SECONDARY_MASK)},
	{"LAYOUT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, LAYOUT_MASK)},
	{"EXTRA_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, EXTRA_MASK)},
	{"ssinfo", "[F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Font, ssinfo)},
	{"hash", "I", nullptr, $TRANSIENT, $field(Font, hash)},
	{"fontSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Font, fontSerializedDataVersion)},
	{"flmref", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Lsun/font/FontLineMetrics;>;", $PRIVATE | $TRANSIENT, $field(Font, flmref)},
	{"LAYOUT_LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, LAYOUT_LEFT_TO_RIGHT)},
	{"LAYOUT_RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, LAYOUT_RIGHT_TO_LEFT)},
	{"LAYOUT_NO_START_CONTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, LAYOUT_NO_START_CONTEXT)},
	{"LAYOUT_NO_LIMIT_CONTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Font, LAYOUT_NO_LIMIT_CONTEXT)},
	{}
};

$MethodInfo _Font_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(Font::*)($String*,int32_t,int32_t)>(&Font::init$))},
	{"<init>", "(Ljava/lang/String;IF)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($String*,int32_t,float)>(&Font::init$))},
	{"<init>", "(Ljava/lang/String;IFZLsun/font/Font2DHandle;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($String*,int32_t,float,bool,$Font2DHandle*)>(&Font::init$))},
	{"<init>", "(Ljava/io/File;IZLsun/font/CreatedFontTracker;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($File*,int32_t,bool,$CreatedFontTracker*)>(&Font::init$)), "java.awt.FontFormatException"},
	{"<init>", "(Lsun/font/AttributeValues;Ljava/lang/String;IZLsun/font/Font2DHandle;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($AttributeValues*,$String*,int32_t,bool,$Font2DHandle*)>(&Font::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)V", $PUBLIC, $method(static_cast<void(Font::*)($Map*)>(&Font::init$))},
	{"<init>", "(Ljava/awt/Font;)V", nullptr, $PROTECTED, $method(static_cast<void(Font::*)(Font*)>(&Font::init$))},
	{"<init>", "(Lsun/font/Font2D;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($Font2D*)>(&Font::init$))},
	{"applyStyle", "(ILsun/font/AttributeValues;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$AttributeValues*)>(&Font::applyStyle))},
	{"applyTransform", "(Ljava/awt/geom/AffineTransform;Lsun/font/AttributeValues;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AffineTransform*,$AttributeValues*)>(&Font::applyTransform))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"canDisplay", "(I)Z", nullptr, $PUBLIC},
	{"canDisplayUpTo", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"canDisplayUpTo", "([CII)I", nullptr, $PUBLIC},
	{"canDisplayUpTo", "(Ljava/text/CharacterIterator;II)I", nullptr, $PUBLIC},
	{"checkFontFile", "(ILjava/io/File;)Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)(int32_t,$File*)>(&Font::checkFontFile)), "java.awt.FontFormatException,java.io.IOException"},
	{"createFont", "(ILjava/io/InputStream;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Font*(*)(int32_t,$InputStream*)>(&Font::createFont)), "java.awt.FontFormatException,java.io.IOException"},
	{"createFont", "(ILjava/io/File;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Font*(*)(int32_t,$File*)>(&Font::createFont)), "java.awt.FontFormatException,java.io.IOException"},
	{"createFont0", "(ILjava/io/InputStream;ZLsun/font/CreatedFontTracker;)[Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FontArray*(*)(int32_t,$InputStream*,bool,$CreatedFontTracker*)>(&Font::createFont0)), "java.awt.FontFormatException,java.io.IOException"},
	{"createFonts", "(Ljava/io/InputStream;)[Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontArray*(*)($InputStream*)>(&Font::createFonts)), "java.awt.FontFormatException,java.io.IOException"},
	{"createFonts", "(Ljava/io/File;)[Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontArray*(*)($File*)>(&Font::createFonts)), "java.awt.FontFormatException,java.io.IOException"},
	{"createGlyphVector", "(Ljava/awt/font/FontRenderContext;Ljava/lang/String;)Ljava/awt/font/GlyphVector;", nullptr, $PUBLIC},
	{"createGlyphVector", "(Ljava/awt/font/FontRenderContext;[C)Ljava/awt/font/GlyphVector;", nullptr, $PUBLIC},
	{"createGlyphVector", "(Ljava/awt/font/FontRenderContext;Ljava/text/CharacterIterator;)Ljava/awt/font/GlyphVector;", nullptr, $PUBLIC},
	{"createGlyphVector", "(Ljava/awt/font/FontRenderContext;[I)Ljava/awt/font/GlyphVector;", nullptr, $PUBLIC},
	{"decode", "(Ljava/lang/String;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Font*(*)($String*)>(&Font::decode))},
	{"defaultLineMetrics", "(Ljava/awt/font/FontRenderContext;)Lsun/font/FontLineMetrics;", nullptr, $PRIVATE, $method(static_cast<$FontLineMetrics*(Font::*)($FontRenderContext*)>(&Font::defaultLineMetrics))},
	{"deriveFont", "(IF)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(ILjava/awt/geom/AffineTransform;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(F)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(Ljava/awt/geom/AffineTransform;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(I)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"deriveFont", "(Ljava/util/Map;)Ljava/awt/Font;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/Font;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttributeValues", "()Lsun/font/AttributeValues;", nullptr, $PRIVATE, $method(static_cast<$AttributeValues*(Font::*)()>(&Font::getAttributeValues))},
	{"getAttributes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/font/TextAttribute;*>;", $PUBLIC},
	{"getAvailableAttributes", "()[Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PUBLIC},
	{"getBaselineFor", "(C)B", nullptr, $PUBLIC},
	{"getFamily", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFamily", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFamily_NoClientCode", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(Font::*)()>(&Font::getFamily_NoClientCode))},
	{"getFont", "(Ljava/util/Map;)Ljava/awt/Font;", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)Ljava/awt/Font;", $PUBLIC | $STATIC, $method(static_cast<Font*(*)($Map*)>(&Font::getFont))},
	{"getFont", "(Ljava/lang/String;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Font*(*)($String*)>(&Font::getFont))},
	{"getFont", "(Ljava/lang/String;Ljava/awt/Font;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Font*(*)($String*,Font*)>(&Font::getFont))},
	{"getFont2D", "()Lsun/font/Font2D;", nullptr, $PRIVATE, $method(static_cast<$Font2D*(Font::*)()>(&Font::getFont2D))},
	{"getFontName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontPeer", "()Ljava/awt/peer/FontPeer;", nullptr, $PRIVATE, $method(static_cast<$FontPeer*(Font::*)()>(&Font::getFontPeer))},
	{"getItalicAngle", "()F", nullptr, $PUBLIC},
	{"getItalicAngle", "(Ljava/awt/font/FontRenderContext;)F", nullptr, $PRIVATE, $method(static_cast<float(Font::*)($FontRenderContext*)>(&Font::getItalicAngle))},
	{"getLineMetrics", "(Ljava/lang/String;Ljava/awt/font/FontRenderContext;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC},
	{"getLineMetrics", "(Ljava/lang/String;IILjava/awt/font/FontRenderContext;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC},
	{"getLineMetrics", "([CIILjava/awt/font/FontRenderContext;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC},
	{"getLineMetrics", "(Ljava/text/CharacterIterator;IILjava/awt/font/FontRenderContext;)Ljava/awt/font/LineMetrics;", nullptr, $PUBLIC},
	{"getMaxCharBounds", "(Ljava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"getPSName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"getSize2D", "()F", nullptr, $PUBLIC},
	{"getStringBounds", "(Ljava/lang/String;Ljava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getStringBounds", "(Ljava/lang/String;IILjava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getStringBounds", "([CIILjava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getStringBounds", "(Ljava/text/CharacterIterator;IILjava/awt/font/FontRenderContext;)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC},
	{"getStyle", "()I", nullptr, $PUBLIC},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"hasLayoutAttributes", "()Z", nullptr, $PUBLIC},
	{"hasTempPermission", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Font::hasTempPermission))},
	{"hasUniformLineMetrics", "()Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initFromValues", "(Lsun/font/AttributeValues;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($AttributeValues*)>(&Font::initFromValues))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Font::initIDs))},
	{"isBold", "()Z", nullptr, $PUBLIC},
	{"isItalic", "()Z", nullptr, $PUBLIC},
	{"isPlain", "()Z", nullptr, $PUBLIC},
	{"isTransformed", "()Z", nullptr, $PUBLIC},
	{"layoutGlyphVector", "(Ljava/awt/font/FontRenderContext;[CIII)Ljava/awt/font/GlyphVector;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($ObjectInputStream*)>(&Font::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"textRequiresLayout", "([CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&Font::textRequiresLayout))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Font::*)($ObjectOutputStream*)>(&Font::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 72

$InnerClassInfo _Font_InnerClassesInfo_[] = {
	{"java.awt.Font$FontAccessImpl", "java.awt.Font", "FontAccessImpl", $PRIVATE | $STATIC},
	{"java.awt.Font$3", nullptr, nullptr, 0},
	{"java.awt.Font$2", nullptr, nullptr, 0},
	{"java.awt.Font$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Font_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Font",
	"java.lang.Object",
	"java.io.Serializable",
	_Font_FieldInfo_,
	_Font_MethodInfo_,
	nullptr,
	nullptr,
	_Font_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Font$FontAccessImpl,java.awt.Font$3,java.awt.Font$2,java.awt.Font$1"
};

$Object* allocate$Font($Class* clazz) {
	return $of($alloc(Font));
}

$String* Font::DIALOG = nullptr;
$String* Font::DIALOG_INPUT = nullptr;
$String* Font::SANS_SERIF = nullptr;
$String* Font::SERIF = nullptr;
$String* Font::MONOSPACED = nullptr;
$AffineTransform* Font::identityTx = nullptr;
int32_t Font::RECOGNIZED_MASK = 0;
int32_t Font::PRIMARY_MASK = 0;
int32_t Font::SECONDARY_MASK = 0;
int32_t Font::LAYOUT_MASK = 0;
int32_t Font::EXTRA_MASK = 0;
$floats* Font::ssinfo = nullptr;

$FontPeer* Font::getFontPeer() {
	if (this->peer == nullptr) {
		$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
		if ($instanceOf($ComponentFactory, tk)) {
			$set(this, peer, $nc(($cast($ComponentFactory, tk)))->getFontPeer(this->name, this->style));
		}
	}
	return this->peer;
}

$AttributeValues* Font::getAttributeValues() {
	if (this->values == nullptr) {
		$var($AttributeValues, valuesTmp, $new($AttributeValues));
		valuesTmp->setFamily(this->name);
		valuesTmp->setSize(this->pointSize);
		if (((int32_t)(this->style & (uint32_t)Font::BOLD)) != 0) {
			valuesTmp->setWeight((float)2);
		}
		if (((int32_t)(this->style & (uint32_t)Font::ITALIC)) != 0) {
			valuesTmp->setPosture(0.2f);
		}
		valuesTmp->defineAll(Font::PRIMARY_MASK);
		$set(this, values, valuesTmp);
	}
	return this->values;
}

$Font2D* Font::getFont2D() {
	$useLocalCurrentObjectStackCache();
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	if (this->font2DHandle == nullptr) {
		$set(this, font2DHandle, $nc($($nc(fm)->findFont2D(this->name, this->style, $FontManager::LOGICAL_FALLBACK)))->handle);
	}
	return $nc(this->font2DHandle)->font2D;
}

void Font::init$($String* name, int32_t style, int32_t size) {
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	$set(this, name, (name != nullptr) ? name : "Default"_s);
	this->style = ((int32_t)(style & (uint32_t)~3)) == 0 ? style : 0;
	this->size = size;
	this->pointSize = (float)size;
}

void Font::init$($String* name, int32_t style, float sizePts) {
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	$set(this, name, (name != nullptr) ? name : "Default"_s);
	this->style = ((int32_t)(style & (uint32_t)~3)) == 0 ? style : 0;
	this->size = $cast(int32_t, (sizePts + 0.5));
	this->pointSize = sizePts;
}

void Font::init$($String* name, int32_t style, float sizePts, bool created, $Font2DHandle* handle) {
	Font::init$(name, style, sizePts);
	this->createdFont = created;
	if (created) {
		if ($instanceOf($CompositeFont, $nc(handle)->font2D) && $nc(handle->font2D)->getStyle() != style) {
			$var($FontManager, fm, $FontManagerFactory::getInstance());
			$set(this, font2DHandle, $nc(fm)->getNewComposite(nullptr, style, handle));
		} else {
			$set(this, font2DHandle, handle);
		}
	}
}

void Font::init$($File* fontFile, int32_t fontFormat, bool isCopy, $CreatedFontTracker* tracker) {
	$useLocalCurrentObjectStackCache();
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	this->createdFont = true;
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$var($Font2DArray, fonts, $nc(fm)->createFont2D(fontFile, fontFormat, false, isCopy, tracker));
	$set(this, font2DHandle, $nc($nc(fonts)->get(0))->handle);
	$set(this, name, $nc($nc(this->font2DHandle)->font2D)->getFontName($($Locale::getDefault())));
	this->style = Font::PLAIN;
	this->size = 1;
	this->pointSize = 1.0f;
}

void Font::init$($AttributeValues* values, $String* oldName, int32_t oldStyle, bool created, $Font2DHandle* handle) {
	$useLocalCurrentObjectStackCache();
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	this->createdFont = created;
	if (created) {
		$set(this, font2DHandle, handle);
		$var($String, newName, nullptr);
		if (oldName != nullptr) {
			$assign(newName, $nc(values)->getFamily());
			if (oldName->equals(newName)) {
				$assign(newName, nullptr);
			}
		}
		int32_t newStyle = 0;
		if (oldStyle == -1) {
			newStyle = -1;
		} else {
			if ($nc(values)->getWeight() >= 2.0f) {
				newStyle = Font::BOLD;
			}
			if ($nc(values)->getPosture() >= 0.2f) {
				newStyle |= Font::ITALIC;
			}
			if (oldStyle == newStyle) {
				newStyle = -1;
			}
		}
		if ($instanceOf($CompositeFont, $nc(handle)->font2D)) {
			if (newStyle != -1 || newName != nullptr) {
				$var($FontManager, fm, $FontManagerFactory::getInstance());
				$set(this, font2DHandle, $nc(fm)->getNewComposite(newName, newStyle, handle));
			}
		} else if (newName != nullptr) {
			this->createdFont = false;
			$set(this, font2DHandle, nullptr);
		}
	}
	initFromValues(values);
}

void Font::init$($Map* attributes) {
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	initFromValues($($AttributeValues::fromMap(attributes, Font::RECOGNIZED_MASK)));
}

void Font::init$(Font* font) {
	$useLocalCurrentObjectStackCache();
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	if ($nc(font)->values != nullptr) {
		initFromValues($($nc($(font->getAttributeValues()))->clone()));
	} else {
		$set(this, name, font->name);
		this->style = font->style;
		this->size = font->size;
		this->pointSize = font->pointSize;
	}
	$set(this, font2DHandle, $nc(font)->font2DHandle);
	this->createdFont = font->createdFont;
}

void Font::initFromValues($AttributeValues* values) {
	$set(this, values, values);
	$nc(values)->defineAll(Font::PRIMARY_MASK);
	$set(this, name, values->getFamily());
	this->pointSize = values->getSize();
	this->size = $cast(int32_t, (values->getSize() + 0.5));
	if (values->getWeight() >= 2.0f) {
		this->style |= Font::BOLD;
	}
	if (values->getPosture() >= 0.2f) {
		this->style |= Font::ITALIC;
	}
	this->nonIdentityTx = values->anyNonDefault(Font::EXTRA_MASK);
	this->hasLayoutAttributes$ = values->anyNonDefault(Font::LAYOUT_MASK);
}

bool Font::textRequiresLayout($chars* chars, int32_t start, int32_t end) {
	$init(Font);
	if (chars == nullptr) {
		$throwNew($NullPointerException, "null char array"_s);
	}
	if (start < 0 || end > $nc(chars)->length) {
		$throwNew($ArrayIndexOutOfBoundsException, "start < 0 or end > len"_s);
	}
	return $FontUtilities::isComplexScript(chars, start, end);
}

Font* Font::getFont($Map* attributes) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AttributeMap, attributes) && $nc(($cast($AttributeMap, attributes)))->getValues() != nullptr) {
		$var($AttributeValues, values, ($cast($AttributeMap, attributes))->getValues());
		$init($EAttribute);
		if ($nc(values)->isNonDefault($EAttribute::EFONT)) {
			$var(Font, font, values->getFont());
			if (!values->anyDefined(Font::SECONDARY_MASK)) {
				return font;
			}
			$assign(values, $nc($($nc(font)->getAttributeValues()))->clone());
			$nc(values)->merge(attributes, Font::SECONDARY_MASK);
			return $new(Font, values, font->name, font->style, font->createdFont, font->font2DHandle);
		}
		return $new(Font, attributes);
	}
	$init($TextAttribute);
	$var(Font, font, $cast(Font, $nc(attributes)->get($TextAttribute::FONT)));
	if (font != nullptr) {
		if (attributes->size() > 1) {
			$var($AttributeValues, values, $nc($(font->getAttributeValues()))->clone());
			$nc(values)->merge(attributes, Font::SECONDARY_MASK);
			return $new(Font, values, font->name, font->style, font->createdFont, font->font2DHandle);
		}
		return font;
	}
	return $new(Font, attributes);
}

bool Font::hasTempPermission() {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	if ($System::getSecurityManager() == nullptr) {
		return true;
	}
	$var($File, f, nullptr);
	bool hasPerm = false;
	try {
		$assign(f, $nc($($Files::createTempFile("+~JT"_s, ".tmp"_s, $$new($FileAttributeArray, 0))))->toFile());
		$nc(f)->delete$();
		$assign(f, nullptr);
		hasPerm = true;
	} catch ($Throwable& t) {
	}
	return hasPerm;
}

$FontArray* Font::createFonts($InputStream* fontStream) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	int32_t fontFormat = Font::TRUETYPE_FONT;
	if (hasTempPermission()) {
		return createFont0(fontFormat, fontStream, true, nullptr);
	}
	$var($CreatedFontTracker, tracker, $CreatedFontTracker::getTracker());
	bool acquired = false;
	{
		$var($Throwable, var$0, nullptr);
		$var($FontArray, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				acquired = $nc(tracker)->acquirePermit();
				if (!acquired) {
					$throwNew($IOException, "Timed out waiting for resources."_s);
				}
				$assign(var$2, createFont0(fontFormat, fontStream, true, tracker));
				return$1 = true;
				goto $finally;
			} catch ($InterruptedException& e) {
				$throwNew($IOException, "Problem reading font data."_s);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (acquired) {
				$nc(tracker)->releasePermit();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void Font::init$($Font2D* font2D) {
	this->createdFont = false;
	this->fontSerializedDataVersion = 1;
	this->createdFont = true;
	$set(this, font2DHandle, $nc(font2D)->handle);
	$set(this, name, font2D->getFontName($($Locale::getDefault())));
	this->style = Font::PLAIN;
	this->size = 1;
	this->pointSize = 1.0f;
}

$FontArray* Font::createFonts($File* fontFile$renamed) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	$var($File, fontFile, fontFile$renamed);
	int32_t fontFormat = Font::TRUETYPE_FONT;
	$assign(fontFile, checkFontFile(fontFormat, fontFile));
	$var($FontManager, fm, $FontManagerFactory::getInstance());
	$var($Font2DArray, font2DArr, $nc(fm)->createFont2D(fontFile, fontFormat, true, false, nullptr));
	int32_t num = $nc(font2DArr)->length;
	$var($FontArray, fonts, $new($FontArray, num));
	for (int32_t i = 0; i < num; ++i) {
		fonts->set(i, $$new(Font, font2DArr->get(i)));
	}
	return fonts;
}

Font* Font::createFont(int32_t fontFormat, $InputStream* fontStream) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	if (hasTempPermission()) {
		return $nc($(createFont0(fontFormat, fontStream, false, nullptr)))->get(0);
	}
	$var($CreatedFontTracker, tracker, $CreatedFontTracker::getTracker());
	bool acquired = false;
	{
		$var($Throwable, var$0, nullptr);
		$var(Font, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				acquired = $nc(tracker)->acquirePermit();
				if (!acquired) {
					$throwNew($IOException, "Timed out waiting for resources."_s);
				}
				$assign(var$2, $nc($(createFont0(fontFormat, fontStream, false, tracker)))->get(0));
				return$1 = true;
				goto $finally;
			} catch ($InterruptedException& e) {
				$throwNew($IOException, "Problem reading font data."_s);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (acquired) {
				$nc(tracker)->releasePermit();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$FontArray* Font::createFont0(int32_t fontFormat, $InputStream* fontStream, bool allFonts, $CreatedFontTracker* tracker) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (fontFormat != Font::TRUETYPE_FONT && fontFormat != Font::TYPE1_FONT) {
		$throwNew($IllegalArgumentException, "font format not recognized"_s);
	}
	bool copiedFontData = false;
	try {
		$var($File, tFile, $cast($File, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Font$1)))));
		if (tracker != nullptr) {
			tracker->add(tFile);
		}
		int32_t totalSize = 0;
		{
			$var($Throwable, var$0, nullptr);
			$var($FontArray, var$2, nullptr);
			bool return$1 = false;
			try {
				$var($OutputStream, outStream, $cast($OutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Font$2, tFile)))));
				if (tracker != nullptr) {
					tracker->set(tFile, outStream);
				}
				{
					$var($Throwable, var$3, nullptr);
					try {
						$var($bytes, buf, $new($bytes, 8192));
						for (;;) {
							int32_t bytesRead = $nc(fontStream)->read(buf);
							if (bytesRead < 0) {
								break;
							}
							if (tracker != nullptr) {
								if (totalSize + bytesRead > $CreatedFontTracker::MAX_FILE_SIZE) {
									$throwNew($IOException, "File too big."_s);
								}
								if (totalSize + tracker->getNumBytes() > $CreatedFontTracker::MAX_TOTAL_BYTES) {
									$throwNew($IOException, "Total files too big."_s);
								}
								totalSize += bytesRead;
								tracker->addBytes(bytesRead);
							}
							$nc(outStream)->write(buf, 0, bytesRead);
						}
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						$nc(outStream)->close();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
				copiedFontData = true;
				$var($FontManager, fm, $FontManagerFactory::getInstance());
				$var($Font2DArray, font2DArr, $nc(fm)->createFont2D(tFile, fontFormat, allFonts, true, tracker));
				int32_t num = $nc(font2DArr)->length;
				$var($FontArray, fonts, $new($FontArray, num));
				for (int32_t i = 0; i < num; ++i) {
					fonts->set(i, $$new(Font, font2DArr->get(i)));
				}
				$assign(var$2, fonts);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$5) {
				$assign(var$0, var$5);
			} $finally: {
				if (tracker != nullptr) {
					tracker->remove(tFile);
				}
				if (!copiedFontData) {
					if (tracker != nullptr) {
						tracker->subBytes(totalSize);
					}
					$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Font$3, tFile)));
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($Throwable& t) {
		if ($instanceOf($FontFormatException, t)) {
			$throw($cast($FontFormatException, t));
		}
		if ($instanceOf($IOException, t)) {
			$throw($cast($IOException, t));
		}
		$var($Throwable, cause, t->getCause());
		if ($instanceOf($FontFormatException, cause)) {
			$throw($cast($FontFormatException, cause));
		}
		$throwNew($IOException, "Problem reading font data."_s);
	}
	$shouldNotReachHere();
}

Font* Font::createFont(int32_t fontFormat, $File* fontFile$renamed) {
	$init(Font);
	$var($File, fontFile, fontFile$renamed);
	$assign(fontFile, checkFontFile(fontFormat, fontFile));
	return $new(Font, fontFile, fontFormat, false, nullptr);
}

$File* Font::checkFontFile(int32_t fontFormat, $File* fontFile$renamed) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	$var($File, fontFile, fontFile$renamed);
	$assign(fontFile, $new($File, $($nc(fontFile)->getPath())));
	if (fontFormat != Font::TRUETYPE_FONT && fontFormat != Font::TYPE1_FONT) {
		$throwNew($IllegalArgumentException, "font format not recognized"_s);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($FilePermission, filePermission, $new($FilePermission, $(fontFile->getPath()), "read"_s));
		sm->checkPermission(filePermission);
	}
	if (!fontFile->canRead()) {
		$throwNew($IOException, $$str({"Can\'t read "_s, fontFile}));
	}
	return fontFile;
}

$AffineTransform* Font::getTransform() {
	$useLocalCurrentObjectStackCache();
	if (this->nonIdentityTx) {
		$var($AttributeValues, values, getAttributeValues());
		$init($EAttribute);
		$var($AffineTransform, at, $nc(values)->isNonDefault($EAttribute::ETRANSFORM) ? $new($AffineTransform, $($nc(values)->getTransform())) : $new($AffineTransform));
		if ($nc(values)->getSuperscript() != 0) {
			int32_t superscript = values->getSuperscript();
			double trans = (double)0;
			int32_t n = 0;
			bool up = superscript > 0;
			int32_t sign = up ? -1 : 1;
			int32_t ss = up ? superscript : -superscript;
			while (((int32_t)(ss & (uint32_t)7)) > n) {
				int32_t newn = (int32_t)(ss & (uint32_t)7);
				trans += sign * ($nc(Font::ssinfo)->get(newn) - $nc(Font::ssinfo)->get(n));
				ss >>= 3;
				sign = -sign;
				n = newn;
			}
			trans *= this->pointSize;
			double scale = $Math::pow(2.0 / 3.0, (double)n);
			$nc(at)->preConcatenate($($AffineTransform::getTranslateInstance((double)0, trans)));
			at->scale(scale, scale);
		}
		if ($nc(values)->isNonDefault($EAttribute::EWIDTH)) {
			$nc(at)->scale(values->getWidth(), 1.0f);
		}
		return at;
	}
	return $new($AffineTransform);
}

$String* Font::getFamily() {
	return getFamily_NoClientCode();
}

$String* Font::getFamily_NoClientCode() {
	return getFamily($($Locale::getDefault()));
}

$String* Font::getFamily($Locale* l) {
	if (l == nullptr) {
		$throwNew($NullPointerException, "null locale doesn\'t mean default"_s);
	}
	return $nc($(getFont2D()))->getFamilyName(l);
}

$String* Font::getPSName() {
	return $nc($(getFont2D()))->getPostscriptName();
}

$String* Font::getName() {
	return this->name;
}

$String* Font::getFontName() {
	return getFontName($($Locale::getDefault()));
}

$String* Font::getFontName($Locale* l) {
	if (l == nullptr) {
		$throwNew($NullPointerException, "null locale doesn\'t mean default"_s);
	}
	return $nc($(getFont2D()))->getFontName(l);
}

int32_t Font::getStyle() {
	return this->style;
}

int32_t Font::getSize() {
	return this->size;
}

float Font::getSize2D() {
	return this->pointSize;
}

bool Font::isPlain() {
	return this->style == 0;
}

bool Font::isBold() {
	return ((int32_t)(this->style & (uint32_t)Font::BOLD)) != 0;
}

bool Font::isItalic() {
	return ((int32_t)(this->style & (uint32_t)Font::ITALIC)) != 0;
}

bool Font::isTransformed() {
	return this->nonIdentityTx;
}

bool Font::hasLayoutAttributes() {
	return this->hasLayoutAttributes$;
}

Font* Font::getFont($String* nm) {
	$init(Font);
	return getFont(nm, nullptr);
}

Font* Font::decode($String* str) {
	$init(Font);
	$useLocalCurrentObjectStackCache();
	$var($String, fontName, str);
	$var($String, styleName, ""_s);
	int32_t fontSize = 12;
	int32_t fontStyle = Font::PLAIN;
	if (str == nullptr) {
		return $new(Font, Font::DIALOG, fontStyle, fontSize);
	}
	int32_t lastHyphen = $nc(str)->lastIndexOf((int32_t)u'-');
	int32_t lastSpace = str->lastIndexOf((int32_t)u' ');
	char16_t sepChar = (lastHyphen > lastSpace) ? u'-' : u' ';
	int32_t sizeIndex = str->lastIndexOf((int32_t)sepChar);
	int32_t styleIndex = str->lastIndexOf((int32_t)sepChar, sizeIndex - 1);
	int32_t strlen = str->length();
	if (sizeIndex > 0 && sizeIndex + 1 < strlen) {
		try {
			fontSize = $nc($($Integer::valueOf($(str->substring(sizeIndex + 1)))))->intValue();
			if (fontSize <= 0) {
				fontSize = 12;
			}
		} catch ($NumberFormatException& e) {
			styleIndex = sizeIndex;
			sizeIndex = strlen;
			if (str->charAt(sizeIndex - 1) == sepChar) {
				--sizeIndex;
			}
		}
	}
	if (styleIndex >= 0 && styleIndex + 1 < strlen) {
		$assign(styleName, str->substring(styleIndex + 1, sizeIndex));
		$init($Locale);
		$assign(styleName, styleName->toLowerCase($Locale::ENGLISH));
		if (styleName->equals("bolditalic"_s)) {
			fontStyle = Font::BOLD | Font::ITALIC;
		} else if (styleName->equals("italic"_s)) {
			fontStyle = Font::ITALIC;
		} else if (styleName->equals("bold"_s)) {
			fontStyle = Font::BOLD;
		} else if (styleName->equals("plain"_s)) {
			fontStyle = Font::PLAIN;
		} else {
			styleIndex = sizeIndex;
			if (str->charAt(styleIndex - 1) == sepChar) {
				--styleIndex;
			}
		}
		$assign(fontName, str->substring(0, styleIndex));
	} else {
		int32_t fontEnd = strlen;
		if (styleIndex > 0) {
			fontEnd = styleIndex;
		} else if (sizeIndex > 0) {
			fontEnd = sizeIndex;
		}
		if (fontEnd > 0 && str->charAt(fontEnd - 1) == sepChar) {
			--fontEnd;
		}
		$assign(fontName, str->substring(0, fontEnd));
	}
	return $new(Font, fontName, fontStyle, fontSize);
}

Font* Font::getFont($String* nm, Font* font) {
	$init(Font);
	$var($String, str, nullptr);
	try {
		$assign(str, $System::getProperty(nm));
	} catch ($SecurityException& e) {
	}
	if (str == nullptr) {
		return font;
	}
	return decode(str);
}

int32_t Font::hashCode() {
	if (this->hash == 0) {
		this->hash = ($nc(this->name)->hashCode() ^ this->style) ^ this->size;
		if (this->nonIdentityTx && this->values != nullptr && $nc(this->values)->getTransform() != nullptr) {
			this->hash ^= $nc($($nc(this->values)->getTransform()))->hashCode();
		}
	}
	return this->hash;
}

bool Font::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	if ($instanceOf(Font, obj)) {
		$var(Font, font, $cast(Font, obj));
		if (this->size == $nc(font)->size && this->style == font->style && this->nonIdentityTx == font->nonIdentityTx && this->hasLayoutAttributes$ == font->hasLayoutAttributes$ && this->pointSize == font->pointSize && $nc(this->name)->equals(font->name)) {
			if (this->values == nullptr) {
				if (font->values == nullptr) {
					return true;
				} else {
					return $nc($(getAttributeValues()))->equals(font->values);
				}
			} else {
				return $nc(this->values)->equals($(font->getAttributeValues()));
			}
		}
	}
	return false;
}

$String* Font::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, strStyle, nullptr);
	if (isBold()) {
		$assign(strStyle, isItalic() ? "bolditalic"_s : "bold"_s);
	} else {
		$assign(strStyle, isItalic() ? "italic"_s : "plain"_s);
	}
	$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "[family="_s}));
	$var($String, var$6, $$concat(var$7, $(getFamily())));
	$var($String, var$5, $$concat(var$6, ",name="_s));
	$var($String, var$4, $$concat(var$5, this->name));
	$var($String, var$3, $$concat(var$4, ",style="_s));
	$var($String, var$2, $$concat(var$3, strStyle));
	$var($String, var$1, $$concat(var$2, ",size="_s));
	$var($String, var$0, $$concat(var$1, $$str(this->size)));
	return $concat(var$0, "]"_s);
}

void Font::writeObject($ObjectOutputStream* s) {
	if (this->values != nullptr) {
		$synchronized(this->values) {
			$set(this, fRequestedAttributes, $nc(this->values)->toSerializableHashtable());
			$nc(s)->defaultWriteObject();
			$set(this, fRequestedAttributes, nullptr);
		}
	} else {
		$nc(s)->defaultWriteObject();
	}
}

void Font::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	if (this->pointSize == 0) {
		this->pointSize = (float)this->size;
	}
	if (this->fRequestedAttributes != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$set(this, values, getAttributeValues());
					$var($AttributeValues, extras, $AttributeValues::fromSerializableHashtable(this->fRequestedAttributes));
					if (!$AttributeValues::is16Hashtable(this->fRequestedAttributes)) {
						$nc(extras)->unsetDefault();
					}
					$set(this, values, $nc($(getAttributeValues()))->merge(extras));
					this->nonIdentityTx = $nc(this->values)->anyNonDefault(Font::EXTRA_MASK);
					this->hasLayoutAttributes$ = $nc(this->values)->anyNonDefault(Font::LAYOUT_MASK);
				} catch ($Throwable& t) {
					$throwNew($IOException, t);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, fRequestedAttributes, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

int32_t Font::getNumGlyphs() {
	return $nc($(getFont2D()))->getNumGlyphs();
}

int32_t Font::getMissingGlyphCode() {
	return $nc($(getFont2D()))->getMissingGlyphCode();
}

int8_t Font::getBaselineFor(char16_t c) {
	return $nc($(getFont2D()))->getBaselineFor(c);
}

$Map* Font::getAttributes() {
	return $new($AttributeMap, $(getAttributeValues()));
}

$AttributedCharacterIterator$AttributeArray* Font::getAvailableAttributes() {
	$init($TextAttribute);
	$var($AttributedCharacterIterator$AttributeArray, attributes, $new($AttributedCharacterIterator$AttributeArray, {
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::FAMILY),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::WEIGHT),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::WIDTH),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::POSTURE),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::SIZE),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::TRANSFORM),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::SUPERSCRIPT),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::CHAR_REPLACEMENT),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::FOREGROUND),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::BACKGROUND),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::UNDERLINE),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::STRIKETHROUGH),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::RUN_DIRECTION),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::BIDI_EMBEDDING),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::JUSTIFICATION),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::INPUT_METHOD_HIGHLIGHT),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::INPUT_METHOD_UNDERLINE),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::SWAP_COLORS),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::NUMERIC_SHAPING),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::KERNING),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::LIGATURES),
		static_cast<$AttributedCharacterIterator$Attribute*>($TextAttribute::TRACKING)
	}));
	return attributes;
}

Font* Font::deriveFont(int32_t style, float size) {
	$useLocalCurrentObjectStackCache();
	if (this->values == nullptr) {
		return $new(Font, this->name, style, size, this->createdFont, this->font2DHandle);
	}
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	int32_t oldStyle = (this->style != style) ? this->style : -1;
	applyStyle(style, newValues);
	$nc(newValues)->setSize(size);
	return $new(Font, newValues, ($String*)nullptr, oldStyle, this->createdFont, this->font2DHandle);
}

Font* Font::deriveFont(int32_t style, $AffineTransform* trans) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	int32_t oldStyle = (this->style != style) ? this->style : -1;
	applyStyle(style, newValues);
	applyTransform(trans, newValues);
	return $new(Font, newValues, ($String*)nullptr, oldStyle, this->createdFont, this->font2DHandle);
}

Font* Font::deriveFont(float size) {
	$useLocalCurrentObjectStackCache();
	if (this->values == nullptr) {
		return $new(Font, this->name, this->style, size, this->createdFont, this->font2DHandle);
	}
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	$nc(newValues)->setSize(size);
	return $new(Font, newValues, ($String*)nullptr, -1, this->createdFont, this->font2DHandle);
}

Font* Font::deriveFont($AffineTransform* trans) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	applyTransform(trans, newValues);
	return $new(Font, newValues, ($String*)nullptr, -1, this->createdFont, this->font2DHandle);
}

Font* Font::deriveFont(int32_t style) {
	$useLocalCurrentObjectStackCache();
	if (this->values == nullptr) {
		return $new(Font, this->name, style, (float)this->size, this->createdFont, this->font2DHandle);
	}
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	int32_t oldStyle = (this->style != style) ? this->style : -1;
	applyStyle(style, newValues);
	return $new(Font, newValues, ($String*)nullptr, oldStyle, this->createdFont, this->font2DHandle);
}

Font* Font::deriveFont($Map* attributes) {
	$useLocalCurrentObjectStackCache();
	if (attributes == nullptr) {
		return this;
	}
	$var($AttributeValues, newValues, $nc($(getAttributeValues()))->clone());
	$nc(newValues)->merge(attributes, Font::RECOGNIZED_MASK);
	return $new(Font, newValues, this->name, this->style, this->createdFont, this->font2DHandle);
}

bool Font::canDisplay(char16_t c) {
	return $nc($(getFont2D()))->canDisplay(c);
}

bool Font::canDisplay(int32_t codePoint) {
	$useLocalCurrentObjectStackCache();
	if (!$Character::isValidCodePoint(codePoint)) {
		$throwNew($IllegalArgumentException, $$str({"invalid code point: "_s, $($Integer::toHexString(codePoint))}));
	}
	return $nc($(getFont2D()))->canDisplay(codePoint);
}

int32_t Font::canDisplayUpTo($String* str) {
	$var($Font2D, font2d, getFont2D());
	int32_t len = $nc(str)->length();
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = str->charAt(i);
		if ($nc(font2d)->canDisplay(c)) {
			continue;
		}
		if (!$Character::isHighSurrogate(c)) {
			return i;
		}
		if (!$nc(font2d)->canDisplay(str->codePointAt(i))) {
			return i;
		}
		++i;
	}
	return -1;
}

int32_t Font::canDisplayUpTo($chars* text, int32_t start, int32_t limit) {
	$var($Font2D, font2d, getFont2D());
	for (int32_t i = start; i < limit; ++i) {
		char16_t c = $nc(text)->get(i);
		if ($nc(font2d)->canDisplay(c)) {
			continue;
		}
		if (!$Character::isHighSurrogate(c)) {
			return i;
		}
		if (!$nc(font2d)->canDisplay($Character::codePointAt(text, i, limit))) {
			return i;
		}
		++i;
	}
	return -1;
}

int32_t Font::canDisplayUpTo($CharacterIterator* iter, int32_t start, int32_t limit) {
	$var($Font2D, font2d, getFont2D());
	char16_t c = $nc(iter)->setIndex(start);
	for (int32_t i = start; i < limit; ++i, c = iter->next()) {
		if ($nc(font2d)->canDisplay(c)) {
			continue;
		}
		if (!$Character::isHighSurrogate(c)) {
			return i;
		}
		char16_t c2 = iter->next();
		if (!$Character::isLowSurrogate(c2)) {
			return i;
		}
		if (!$nc(font2d)->canDisplay($Character::toCodePoint(c, c2))) {
			return i;
		}
		++i;
	}
	return -1;
}

float Font::getItalicAngle() {
	return getItalicAngle(nullptr);
}

float Font::getItalicAngle($FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	$var($Object, aa, nullptr);
	$var($Object, fm, nullptr);
	if (frc == nullptr) {
		$init($RenderingHints);
		$assign(aa, $RenderingHints::VALUE_TEXT_ANTIALIAS_OFF);
		$assign(fm, $RenderingHints::VALUE_FRACTIONALMETRICS_OFF);
	} else {
		$assign(aa, $nc(frc)->getAntiAliasingHint());
		$assign(fm, frc->getFractionalMetricsHint());
	}
	return $nc($(getFont2D()))->getItalicAngle(this, Font::identityTx, aa, fm);
}

bool Font::hasUniformLineMetrics() {
	return false;
}

$FontLineMetrics* Font::defaultLineMetrics($FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	$var($FontLineMetrics, flm, nullptr);
	bool var$0 = this->flmref == nullptr || ($assign(flm, $cast($FontLineMetrics, $nc(this->flmref)->get()))) == nullptr;
	if (var$0 || !$nc($nc(flm)->frc)->equals(frc)) {
		$var($floats, metrics, $new($floats, 8));
		$var($AffineTransform, var$1, Font::identityTx);
		$var($Object, var$2, $nc(frc)->getAntiAliasingHint());
		$nc($(getFont2D()))->getFontMetrics(this, var$1, var$2, $(frc->getFractionalMetricsHint()), metrics);
		float ascent = metrics->get(0);
		float descent = metrics->get(1);
		float leading = metrics->get(2);
		float ssOffset = (float)0;
		if (this->values != nullptr && $nc(this->values)->getSuperscript() != 0) {
			ssOffset = (float)$nc($(getTransform()))->getTranslateY();
			ascent -= ssOffset;
			descent += ssOffset;
		}
		float height = ascent + descent + leading;
		int32_t baselineIndex = 0;
		$var($floats, baselineOffsets, $new($floats, {
			(float)0,
			(descent / 2.0f - ascent) / 2.0f,
			-ascent
		}));
		float strikethroughOffset = metrics->get(4);
		float strikethroughThickness = metrics->get(5);
		float underlineOffset = metrics->get(6);
		float underlineThickness = metrics->get(7);
		float italicAngle = getItalicAngle(frc);
		if (isTransformed()) {
			$var($AffineTransform, ctx, $nc(this->values)->getCharTransform());
			if (ctx != nullptr) {
				$var($Point2D$Float, pt, $new($Point2D$Float));
				pt->setLocation((float)0, strikethroughOffset);
				ctx->deltaTransform(pt, pt);
				strikethroughOffset = pt->y;
				pt->setLocation((float)0, strikethroughThickness);
				ctx->deltaTransform(pt, pt);
				strikethroughThickness = pt->y;
				pt->setLocation((float)0, underlineOffset);
				ctx->deltaTransform(pt, pt);
				underlineOffset = pt->y;
				pt->setLocation((float)0, underlineThickness);
				ctx->deltaTransform(pt, pt);
				underlineThickness = pt->y;
			}
		}
		strikethroughOffset += ssOffset;
		underlineOffset += ssOffset;
		$var($CoreMetrics, cm, $new($CoreMetrics, ascent, descent, leading, height, baselineIndex, baselineOffsets, strikethroughOffset, strikethroughThickness, underlineOffset, underlineThickness, ssOffset, italicAngle));
		$assign(flm, $new($FontLineMetrics, 0, cm, frc));
		$set(this, flmref, $new($SoftReference, flm));
	}
	return $cast($FontLineMetrics, $nc(flm)->clone());
}

$LineMetrics* Font::getLineMetrics($String* str, $FontRenderContext* frc) {
	$var($FontLineMetrics, flm, defaultLineMetrics(frc));
	$nc(flm)->numchars = $nc(str)->length();
	return flm;
}

$LineMetrics* Font::getLineMetrics($String* str, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$var($FontLineMetrics, flm, defaultLineMetrics(frc));
	int32_t numChars = limit - beginIndex;
	$nc(flm)->numchars = (numChars < 0) ? 0 : numChars;
	return flm;
}

$LineMetrics* Font::getLineMetrics($chars* chars, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$var($FontLineMetrics, flm, defaultLineMetrics(frc));
	int32_t numChars = limit - beginIndex;
	$nc(flm)->numchars = (numChars < 0) ? 0 : numChars;
	return flm;
}

$LineMetrics* Font::getLineMetrics($CharacterIterator* ci, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$var($FontLineMetrics, flm, defaultLineMetrics(frc));
	int32_t numChars = limit - beginIndex;
	$nc(flm)->numchars = (numChars < 0) ? 0 : numChars;
	return flm;
}

$Rectangle2D* Font::getStringBounds($String* str, $FontRenderContext* frc) {
	$var($chars, array, $nc(str)->toCharArray());
	return getStringBounds(array, 0, array->length, frc);
}

$Rectangle2D* Font::getStringBounds($String* str, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$var($String, substr, $nc(str)->substring(beginIndex, limit));
	return getStringBounds(substr, frc);
}

$Rectangle2D* Font::getStringBounds($chars* chars, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	if (beginIndex < 0) {
		$throwNew($IndexOutOfBoundsException, $$str({"beginIndex: "_s, $$str(beginIndex)}));
	}
	if (limit > $nc(chars)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"limit: "_s, $$str(limit)}));
	}
	if (beginIndex > limit) {
		$throwNew($IndexOutOfBoundsException, $$str({"range length: "_s, $$str((limit - beginIndex))}));
	}
	bool var$0 = this->values == nullptr;
	if (!var$0) {
		bool var$2 = $nc(this->values)->getKerning() == 0;
		bool var$1 = var$2 && $nc(this->values)->getLigatures() == 0;
		var$0 = (var$1 && $nc(this->values)->getBaselineTransform() == nullptr);
	}
	bool simple = var$0;
	if (simple) {
		simple = !$FontUtilities::isComplexText(chars, beginIndex, limit);
	}
	if (simple || ((limit - beginIndex) == 0)) {
		$var($FontDesignMetrics, metrics, $FontDesignMetrics::getMetrics(this, frc));
		return $nc(metrics)->getSimpleBounds(chars, beginIndex, limit - beginIndex);
	} else {
		$var($String, str, $new($String, chars, beginIndex, limit - beginIndex));
		$var($TextLayout, tl, $new($TextLayout, str, this, frc));
		float var$3 = -tl->getAscent();
		float var$4 = tl->getAdvance();
		float var$6 = tl->getAscent();
		float var$5 = var$6 + tl->getDescent();
		return $new($Rectangle2D$Float, (float)0, var$3, var$4, var$5 + tl->getLeading());
	}
}

$Rectangle2D* Font::getStringBounds($CharacterIterator* ci, int32_t beginIndex, int32_t limit, $FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	int32_t start = $nc(ci)->getBeginIndex();
	int32_t end = ci->getEndIndex();
	if (beginIndex < start) {
		$throwNew($IndexOutOfBoundsException, $$str({"beginIndex: "_s, $$str(beginIndex)}));
	}
	if (limit > end) {
		$throwNew($IndexOutOfBoundsException, $$str({"limit: "_s, $$str(limit)}));
	}
	if (beginIndex > limit) {
		$throwNew($IndexOutOfBoundsException, $$str({"range length: "_s, $$str((limit - beginIndex))}));
	}
	$var($chars, arr, $new($chars, limit - beginIndex));
	ci->setIndex(beginIndex);
	for (int32_t idx = 0; idx < arr->length; ++idx) {
		arr->set(idx, ci->current());
		ci->next();
	}
	return getStringBounds(arr, 0, arr->length, frc);
}

$Rectangle2D* Font::getMaxCharBounds($FontRenderContext* frc) {
	$useLocalCurrentObjectStackCache();
	$var($floats, metrics, $new($floats, 4));
	$nc($(getFont2D()))->getFontMetrics(this, frc, metrics);
	return $new($Rectangle2D$Float, (float)0, -metrics->get(0), metrics->get(3), metrics->get(0) + metrics->get(1) + metrics->get(2));
}

$GlyphVector* Font::createGlyphVector($FontRenderContext* frc, $String* str) {
	return static_cast<$GlyphVector*>($new($StandardGlyphVector, this, str, frc));
}

$GlyphVector* Font::createGlyphVector($FontRenderContext* frc, $chars* chars) {
	return static_cast<$GlyphVector*>($new($StandardGlyphVector, this, chars, frc));
}

$GlyphVector* Font::createGlyphVector($FontRenderContext* frc, $CharacterIterator* ci) {
	return static_cast<$GlyphVector*>($new($StandardGlyphVector, this, ci, frc));
}

$GlyphVector* Font::createGlyphVector($FontRenderContext* frc, $ints* glyphCodes) {
	return static_cast<$GlyphVector*>($new($StandardGlyphVector, this, glyphCodes, frc));
}

$GlyphVector* Font::layoutGlyphVector($FontRenderContext* frc, $chars* text, int32_t start, int32_t limit, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	$var($GlyphLayout, gl, $GlyphLayout::get(nullptr));
	$var($StandardGlyphVector, gv, $nc(gl)->layout(this, frc, text, start, limit - start, flags, nullptr));
	$GlyphLayout::done(gl);
	return gv;
}

void Font::applyTransform($AffineTransform* trans, $AttributeValues* values) {
	$init(Font);
	if (trans == nullptr) {
		$throwNew($IllegalArgumentException, "transform must not be null"_s);
	}
	$nc(values)->setTransform(trans);
}

void Font::applyStyle(int32_t style, $AttributeValues* values) {
	$init(Font);
	$nc(values)->setWeight(((int32_t)(style & (uint32_t)Font::BOLD)) != 0 ? 2.0f : 1.0f);
	values->setPosture(((int32_t)(style & (uint32_t)Font::ITALIC)) != 0 ? 0.2f : 0.0f);
}

void Font::initIDs() {
	$init(Font);
	$prepareNativeStatic(Font, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$Font($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Font::DIALOG, "Dialog"_s);
	$assignStatic(Font::DIALOG_INPUT, "DialogInput"_s);
	$assignStatic(Font::SANS_SERIF, "SansSerif"_s);
	$assignStatic(Font::SERIF, "Serif"_s);
	$assignStatic(Font::MONOSPACED, "Monospaced"_s);
	{
		$Toolkit::loadLibraries();
		Font::initIDs();
		$FontAccess::setFontAccess($$new($Font$FontAccessImpl));
	}
	$assignStatic(Font::identityTx, $new($AffineTransform));
	$init($AttributeValues);
	$init($EAttribute);
	Font::RECOGNIZED_MASK = (int32_t)($AttributeValues::MASK_ALL & (uint32_t)~$AttributeValues::getMask($EAttribute::EFONT));
	Font::PRIMARY_MASK = $AttributeValues::getMask($$new($EAttributeArray, {
		$EAttribute::EFAMILY,
		$EAttribute::EWEIGHT,
		$EAttribute::EWIDTH,
		$EAttribute::EPOSTURE,
		$EAttribute::ESIZE,
		$EAttribute::ETRANSFORM,
		$EAttribute::ESUPERSCRIPT,
		$EAttribute::ETRACKING
	}));
	Font::SECONDARY_MASK = (int32_t)(Font::RECOGNIZED_MASK & (uint32_t)~Font::PRIMARY_MASK);
	Font::LAYOUT_MASK = $AttributeValues::getMask($$new($EAttributeArray, {
		$EAttribute::ECHAR_REPLACEMENT,
		$EAttribute::EFOREGROUND,
		$EAttribute::EBACKGROUND,
		$EAttribute::EUNDERLINE,
		$EAttribute::ESTRIKETHROUGH,
		$EAttribute::ERUN_DIRECTION,
		$EAttribute::EBIDI_EMBEDDING,
		$EAttribute::EJUSTIFICATION,
		$EAttribute::EINPUT_METHOD_HIGHLIGHT,
		$EAttribute::EINPUT_METHOD_UNDERLINE,
		$EAttribute::ESWAP_COLORS,
		$EAttribute::ENUMERIC_SHAPING,
		$EAttribute::EKERNING,
		$EAttribute::ELIGATURES,
		$EAttribute::ETRACKING,
		$EAttribute::ESUPERSCRIPT
	}));
	Font::EXTRA_MASK = $AttributeValues::getMask($$new($EAttributeArray, {
		$EAttribute::ETRANSFORM,
		$EAttribute::ESUPERSCRIPT,
		$EAttribute::EWIDTH
	}));
	$assignStatic(Font::ssinfo, $new($floats, {
		0.0f,
		0.375f,
		0.625f,
		0.7916667f,
		0.9027778f,
		0.9768519f,
		1.0262346f,
		1.0591564f
	}));
}

Font::Font() {
}

$Class* Font::load$($String* name, bool initialize) {
	$loadClass(Font, name, initialize, &_Font_ClassInfo_, clinit$Font, allocate$Font);
	return class$;
}

$Class* Font::class$ = nullptr;

	} // awt
} // java