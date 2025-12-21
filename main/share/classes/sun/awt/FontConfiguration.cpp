#include <sun/awt/FontConfiguration.h>

#include <java/awt/Font.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Constructor.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <sun/awt/FontConfiguration$1.h>
#include <sun/awt/FontConfiguration$2.h>
#include <sun/awt/FontConfiguration$3.h>
#include <sun/awt/FontConfiguration$PropertiesHandler.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/CompositeFontDescriptor.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/SunFontManager.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BOLD
#undef DIALOG
#undef DIALOG_INPUT
#undef EMPTY_INT_ARRAY
#undef EMPTY_SHORT_ARRAY
#undef EMPTY_STRING_ARRAY
#undef ENGLISH
#undef FALSE
#undef HEAD_LENGTH
#undef INDEX_TABLEEND
#undef ITALIC
#undef MONOSPACED
#undef NUM_FONTS
#undef NUM_STYLES
#undef PLAIN
#undef SANS_SERIF
#undef SERIF
#undef TRUE
#undef UNDEFINED_COMPONENT_FONT

using $ShortArray = $Array<::java::lang::Short>;
using $FontDescriptorArray = $Array<::sun::awt::FontDescriptor>;
using $CompositeFontDescriptorArray = $Array<::sun::font::CompositeFontDescriptor>;
using $intArray2 = $Array<int32_t, 2>;
using $intArray3 = $Array<int32_t, 3>;
using $FontDescriptorArray3 = $Array<::sun::awt::FontDescriptor, 3>;
using $shortArray3 = $Array<int16_t, 3>;
using $Font = ::java::awt::Font;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Constructor = ::java::lang::reflect::Constructor;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $FontConfiguration$1 = ::sun::awt::FontConfiguration$1;
using $FontConfiguration$2 = ::sun::awt::FontConfiguration$2;
using $FontConfiguration$3 = ::sun::awt::FontConfiguration$3;
using $FontConfiguration$PropertiesHandler = ::sun::awt::FontConfiguration$PropertiesHandler;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $CompositeFontDescriptor = ::sun::font::CompositeFontDescriptor;
using $FontUtilities = ::sun::font::FontUtilities;
using $SunFontManager = ::sun::font::SunFontManager;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

$FieldInfo _FontConfiguration_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FontConfiguration, $assertionsDisabled)},
	{"osVersion", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, osVersion)},
	{"osName", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, osName)},
	{"encoding", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, encoding)},
	{"startupLocale", "Ljava/util/Locale;", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, startupLocale)},
	{"localeMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED | $STATIC, $staticField(FontConfiguration, localeMap)},
	{"fontConfig", "Lsun/awt/FontConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, fontConfig)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, logger)},
	{"isProperties", "Z", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, isProperties)},
	{"fontManager", "Lsun/font/SunFontManager;", nullptr, $PROTECTED, $field(FontConfiguration, fontManager)},
	{"preferLocaleFonts", "Z", nullptr, $PROTECTED, $field(FontConfiguration, preferLocaleFonts)},
	{"preferPropFonts", "Z", nullptr, $PROTECTED, $field(FontConfiguration, preferPropFonts)},
	{"fontConfigFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(FontConfiguration, fontConfigFile)},
	{"foundOsSpecificFile", "Z", nullptr, $PRIVATE, $field(FontConfiguration, foundOsSpecificFile$)},
	{"inited", "Z", nullptr, $PRIVATE, $field(FontConfiguration, inited)},
	{"javaLib", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration, javaLib)},
	{"stringIDNum", "S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, stringIDNum)},
	{"stringIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, stringIDs)},
	{"stringTable", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, stringTable)},
	{"verbose", "Z", nullptr, $PUBLIC | $STATIC, $staticField(FontConfiguration, verbose)},
	{"initELC", "S", nullptr, $PRIVATE, $field(FontConfiguration, initELC)},
	{"initLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(FontConfiguration, initLocale)},
	{"initEncoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration, initEncoding)},
	{"alphabeticSuffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration, alphabeticSuffix)},
	{"compFontNameIDs", "[[[S", nullptr, $PRIVATE, $field(FontConfiguration, compFontNameIDs)},
	{"compExclusions", "[[[I", nullptr, $PRIVATE, $field(FontConfiguration, compExclusions)},
	{"compCoreNum", "[I", nullptr, $PRIVATE, $field(FontConfiguration, compCoreNum)},
	{"coreFontNameIDs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration, coreFontNameIDs)},
	{"fallbackFontNameIDs", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration, fallbackFontNameIDs)},
	{"NUM_FONTS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FontConfiguration, NUM_FONTS)},
	{"NUM_STYLES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(FontConfiguration, NUM_STYLES)},
	{"fontNames", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FontConfiguration, fontNames)},
	{"publicFontNames", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FontConfiguration, publicFontNames)},
	{"styleNames", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(FontConfiguration, styleNames)},
	{"installedFallbackFontFiles", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, installedFallbackFontFiles)},
	{"reorderMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(FontConfiguration, reorderMap)},
	{"charsetRegistry", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/nio/charset/Charset;>;", $PRIVATE, $field(FontConfiguration, charsetRegistry)},
	{"fontDescriptors", "[[[Lsun/awt/FontDescriptor;", nullptr, $PRIVATE, $field(FontConfiguration, fontDescriptors)},
	{"existsMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;", 0, $field(FontConfiguration, existsMap)},
	{"numCoreFonts", "I", nullptr, $PRIVATE, $field(FontConfiguration, numCoreFonts)},
	{"componentFonts", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(FontConfiguration, componentFonts)},
	{"filenamesMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(FontConfiguration, filenamesMap)},
	{"coreFontFileNames", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/lang/String;>;", 0, $field(FontConfiguration, coreFontFileNames)},
	{"HEAD_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, HEAD_LENGTH)},
	{"INDEX_scriptIDs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_scriptIDs)},
	{"INDEX_scriptFonts", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_scriptFonts)},
	{"INDEX_elcIDs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_elcIDs)},
	{"INDEX_sequences", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_sequences)},
	{"INDEX_fontfileNameIDs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_fontfileNameIDs)},
	{"INDEX_componentFontNameIDs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_componentFontNameIDs)},
	{"INDEX_filenames", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_filenames)},
	{"INDEX_awtfontpaths", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_awtfontpaths)},
	{"INDEX_exclusions", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_exclusions)},
	{"INDEX_proportionals", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_proportionals)},
	{"INDEX_scriptFontsMotif", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_scriptFontsMotif)},
	{"INDEX_alphabeticSuffix", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_alphabeticSuffix)},
	{"INDEX_stringIDs", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_stringIDs)},
	{"INDEX_stringTable", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_stringTable)},
	{"INDEX_TABLEEND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_TABLEEND)},
	{"INDEX_fallbackScripts", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_fallbackScripts)},
	{"INDEX_appendedfontpath", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_appendedfontpath)},
	{"INDEX_version", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontConfiguration, INDEX_version)},
	{"head", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, head)},
	{"table_scriptIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_scriptIDs)},
	{"table_scriptFonts", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_scriptFonts)},
	{"table_elcIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_elcIDs)},
	{"table_sequences", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_sequences)},
	{"table_fontfileNameIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_fontfileNameIDs)},
	{"table_componentFontNameIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_componentFontNameIDs)},
	{"table_filenames", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_filenames)},
	{"table_awtfontpaths", "[S", nullptr, $PROTECTED | $STATIC, $staticField(FontConfiguration, table_awtfontpaths)},
	{"table_exclusions", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_exclusions)},
	{"table_proportionals", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_proportionals)},
	{"table_scriptFontsMotif", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_scriptFontsMotif)},
	{"table_alphabeticSuffix", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_alphabeticSuffix)},
	{"table_stringIDs", "[S", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_stringIDs)},
	{"table_stringTable", "[C", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, table_stringTable)},
	{"reorderScripts", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(FontConfiguration, reorderScripts)},
	{"stringCache", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(FontConfiguration, stringCache)},
	{"EMPTY_INT_ARRAY", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontConfiguration, EMPTY_INT_ARRAY)},
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontConfiguration, EMPTY_STRING_ARRAY)},
	{"EMPTY_SHORT_ARRAY", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontConfiguration, EMPTY_SHORT_ARRAY)},
	{"UNDEFINED_COMPONENT_FONT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontConfiguration, UNDEFINED_COMPONENT_FONT)},
	{}
};

$MethodInfo _FontConfiguration_MethodInfo_[] = {
	{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, $PUBLIC, $method(static_cast<void(FontConfiguration::*)($SunFontManager*)>(&FontConfiguration::init$))},
	{"<init>", "(Lsun/font/SunFontManager;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(FontConfiguration::*)($SunFontManager*,bool,bool)>(&FontConfiguration::init$))},
	{"buildFontDescriptors", "(II)[Lsun/awt/FontDescriptor;", nullptr, $PROTECTED},
	{"contains", "([SSI)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($shorts*,int16_t,int32_t)>(&FontConfiguration::contains))},
	{"dump", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FontConfiguration::dump))},
	{"findFontConfigFile", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)()>(&FontConfiguration::findFontConfigFile))},
	{"findFontConfigFile", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE, $method(static_cast<$File*(FontConfiguration::*)($String*)>(&FontConfiguration::findFontConfigFile))},
	{"findImpl", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE, $method(static_cast<$File*(FontConfiguration::*)($String*)>(&FontConfiguration::findImpl))},
	{"fontFilesArePresent", "()Z", nullptr, $PUBLIC},
	{"foundOsSpecificFile", "()Z", nullptr, $PUBLIC},
	{"get2DCompositeFontInfo", "()[Lsun/font/CompositeFontDescriptor;", nullptr, $PUBLIC},
	{"getAWTFontPathSet", "()Ljava/util/HashSet;", "()Ljava/util/HashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getArrayIndex", "([Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($StringArray*,$String*)>(&FontConfiguration::getArrayIndex))},
	{"getCompatibilityFamilyName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getComponentFileID", "(S)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&FontConfiguration::getComponentFileID))},
	{"getComponentFileName", "(S)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&FontConfiguration::getComponentFileName))},
	{"getComponentFontID", "(SII)S", nullptr, $PROTECTED | $STATIC, $method(static_cast<int16_t(*)(int16_t,int32_t,int32_t)>(&FontConfiguration::getComponentFontID))},
	{"getComponentFontIDMotif", "(SII)S", nullptr, $PROTECTED | $STATIC, $method(static_cast<int16_t(*)(int16_t,int32_t,int32_t)>(&FontConfiguration::getComponentFontIDMotif))},
	{"getComponentFontName", "(S)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&FontConfiguration::getComponentFontName))},
	{"getCoreScripts", "(I)[S", nullptr, $PROTECTED},
	{"getDefaultFontCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PROTECTED | $ABSTRACT},
	{"getEncoding", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getExclusionRanges", "(S)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)(int16_t)>(&FontConfiguration::getExclusionRanges))},
	{"getExtraFontPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFaceNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getFallbackFamilyName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFallbackScripts", "()[S", nullptr, $PRIVATE | $STATIC, $method(static_cast<$shorts*(*)()>(&FontConfiguration::getFallbackScripts))},
	{"getFileNameFromComponentFontName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getFileNameFromPlatformName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFontCharsetEncoder", "(Ljava/lang/String;Ljava/lang/String;)Ljava/nio/charset/CharsetEncoder;", nullptr, $PRIVATE, $method(static_cast<$CharsetEncoder*(FontConfiguration::*)($String*,$String*)>(&FontConfiguration::getFontCharsetEncoder))},
	{"getFontConfiguration", "()Lsun/awt/FontConfiguration;", nullptr, $PROTECTED | $STATIC, $method(static_cast<FontConfiguration*(*)()>(&FontConfiguration::getFontConfiguration))},
	{"getFontDescriptors", "(Ljava/lang/String;I)[Lsun/awt/FontDescriptor;", nullptr, $PUBLIC},
	{"getFontDescriptors", "(II)[Lsun/awt/FontDescriptor;", nullptr, $PRIVATE, $method(static_cast<$FontDescriptorArray*(FontConfiguration::*)(int32_t,int32_t)>(&FontConfiguration::getFontDescriptors))},
	{"getFontIndex", "(Ljava/lang/String;)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FontConfiguration::getFontIndex))},
	{"getFontName", "(I)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&FontConfiguration::getFontName))},
	{"getInitELC", "()S", nullptr, $PRIVATE, $method(static_cast<int16_t(FontConfiguration::*)()>(&FontConfiguration::getInitELC))},
	{"getInstalledFallbackFonts", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"getLogicalFontFaceName", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&FontConfiguration::getLogicalFontFaceName))},
	{"getNumberCoreFonts", "()I", nullptr, $PUBLIC},
	{"getPlatformFontNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReorderSequence", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&FontConfiguration::getReorderSequence))},
	{"getScriptName", "(S)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&FontConfiguration::getScriptName))},
	{"getShortArray", "(S)[S", nullptr, $PRIVATE | $STATIC, $method(static_cast<$shorts*(*)(int16_t)>(&FontConfiguration::getShortArray))},
	{"getShortArrayID", "([S)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)($shorts*)>(&FontConfiguration::getShortArrayID))},
	{"getString", "(S)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)(int16_t)>(&FontConfiguration::getString))},
	{"getStringID", "(Ljava/lang/String;)S", nullptr, $PRIVATE | $STATIC, $method(static_cast<int16_t(*)($String*)>(&FontConfiguration::getStringID))},
	{"getStyleIndex", "(Ljava/lang/String;)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FontConfiguration::getStyleIndex))},
	{"getStyleIndex", "(I)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&FontConfiguration::getStyleIndex))},
	{"getStyleName", "(I)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&FontConfiguration::getStyleName))},
	{"getStyleString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&FontConfiguration::getStyleString))},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasMonoToPropMap", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&FontConfiguration::hasMonoToPropMap))},
	{"init", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initAllComponentFonts", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)()>(&FontConfiguration::initAllComponentFonts))},
	{"initFontConfig", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)()>(&FontConfiguration::initFontConfig))},
	{"initReorderMap", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"isEmpty", "([S)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($shorts*)>(&FontConfiguration::isEmpty))},
	{"isLogicalFontFaceName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&FontConfiguration::isLogicalFontFaceName))},
	{"isLogicalFontFaceNameLC", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&FontConfiguration::isLogicalFontFaceNameLC))},
	{"isLogicalFontFamilyName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&FontConfiguration::isLogicalFontFamilyName))},
	{"isLogicalFontFamilyNameLC", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&FontConfiguration::isLogicalFontFamilyNameLC))},
	{"isLogicalFontStyleName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&FontConfiguration::isLogicalFontStyleName))},
	{"loadBinary", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($InputStream*)>(&FontConfiguration::loadBinary)), "java.io.IOException"},
	{"loadProperties", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($InputStream*)>(&FontConfiguration::loadProperties)), "java.io.IOException"},
	{"makeAWTFontName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"mapFileName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"needToSearchForFile", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"printTable", "([SI)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($shorts*,int32_t)>(&FontConfiguration::printTable))},
	{"readFontConfigFile", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)($File*)>(&FontConfiguration::readFontConfigFile))},
	{"readShortTable", "(Ljava/io/DataInputStream;I)[S", nullptr, $PRIVATE | $STATIC, $method(static_cast<$shorts*(*)($DataInputStream*,int32_t)>(&FontConfiguration::readShortTable)), "java.io.IOException"},
	{"remapLocaleMap", "(IISS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(FontConfiguration::*)(int32_t,int32_t,int16_t,int16_t)>(&FontConfiguration::remapLocaleMap))},
	{"remapProportional", "(IS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(FontConfiguration::*)(int32_t,int16_t)>(&FontConfiguration::remapProportional))},
	{"reorderSequenceForLocale", "([Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)($StringArray*)>(&FontConfiguration::reorderSequenceForLocale))},
	{"sanityCheck", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FontConfiguration::sanityCheck))},
	{"saveBinary", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*)>(&FontConfiguration::saveBinary)), "java.io.IOException"},
	{"setEncoding", "()V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)()>(&FontConfiguration::setEncoding))},
	{"setFontConfiguration", "()V", nullptr, $PROTECTED},
	{"setOsNameAndVersion", "()V", nullptr, $PROTECTED},
	{"shuffle", "([Ljava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(FontConfiguration::*)($StringArray*,int32_t,int32_t)>(&FontConfiguration::shuffle))},
	{"split", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"splitSequence", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)($String*)>(&FontConfiguration::splitSequence))},
	{"toList", "(Ljava/util/HashMap;)[S", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Short;>;)[S", $PRIVATE | $STATIC, $method(static_cast<$shorts*(*)($HashMap*)>(&FontConfiguration::toList))},
	{"willReorderForStartupLocale", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&FontConfiguration::willReorderForStartupLocale))},
	{"writeShortTable", "(Ljava/io/DataOutputStream;[S)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DataOutputStream*,$shorts*)>(&FontConfiguration::writeShortTable)), "java.io.IOException"},
	{}
};

$InnerClassInfo _FontConfiguration_InnerClassesInfo_[] = {
	{"sun.awt.FontConfiguration$PropertiesHandler", "sun.awt.FontConfiguration", "PropertiesHandler", $STATIC},
	{"sun.awt.FontConfiguration$3", nullptr, nullptr, 0},
	{"sun.awt.FontConfiguration$2", nullptr, nullptr, 0},
	{"sun.awt.FontConfiguration$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.FontConfiguration",
	"java.lang.Object",
	nullptr,
	_FontConfiguration_FieldInfo_,
	_FontConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_FontConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.FontConfiguration$PropertiesHandler,sun.awt.FontConfiguration$PropertiesHandler$FontProperties,sun.awt.FontConfiguration$3,sun.awt.FontConfiguration$2,sun.awt.FontConfiguration$1"
};

$Object* allocate$FontConfiguration($Class* clazz) {
	return $of($alloc(FontConfiguration));
}

bool FontConfiguration::$assertionsDisabled = false;
$String* FontConfiguration::osVersion = nullptr;
$String* FontConfiguration::osName = nullptr;
$String* FontConfiguration::encoding = nullptr;
$Locale* FontConfiguration::startupLocale = nullptr;
$Hashtable* FontConfiguration::localeMap = nullptr;
FontConfiguration* FontConfiguration::fontConfig = nullptr;
$PlatformLogger* FontConfiguration::logger = nullptr;
bool FontConfiguration::isProperties = false;
int16_t FontConfiguration::stringIDNum = 0;
$shorts* FontConfiguration::stringIDs = nullptr;
$StringBuilder* FontConfiguration::stringTable = nullptr;
bool FontConfiguration::verbose = false;
$StringArray* FontConfiguration::fontNames = nullptr;
$StringArray* FontConfiguration::publicFontNames = nullptr;
$StringArray* FontConfiguration::styleNames = nullptr;
$StringArray* FontConfiguration::installedFallbackFontFiles = nullptr;
$shorts* FontConfiguration::head = nullptr;
$shorts* FontConfiguration::table_scriptIDs = nullptr;
$shorts* FontConfiguration::table_scriptFonts = nullptr;
$shorts* FontConfiguration::table_elcIDs = nullptr;
$shorts* FontConfiguration::table_sequences = nullptr;
$shorts* FontConfiguration::table_fontfileNameIDs = nullptr;
$shorts* FontConfiguration::table_componentFontNameIDs = nullptr;
$shorts* FontConfiguration::table_filenames = nullptr;
$shorts* FontConfiguration::table_awtfontpaths = nullptr;
$shorts* FontConfiguration::table_exclusions = nullptr;
$shorts* FontConfiguration::table_proportionals = nullptr;
$shorts* FontConfiguration::table_scriptFontsMotif = nullptr;
$shorts* FontConfiguration::table_alphabeticSuffix = nullptr;
$shorts* FontConfiguration::table_stringIDs = nullptr;
$chars* FontConfiguration::table_stringTable = nullptr;
$StringArray* FontConfiguration::stringCache = nullptr;
$ints* FontConfiguration::EMPTY_INT_ARRAY = nullptr;
$StringArray* FontConfiguration::EMPTY_STRING_ARRAY = nullptr;
$shorts* FontConfiguration::EMPTY_SHORT_ARRAY = nullptr;
$String* FontConfiguration::UNDEFINED_COMPONENT_FONT = nullptr;

void FontConfiguration::init$($SunFontManager* fm) {
	this->initELC = (int16_t)-1;
	$set(this, compFontNameIDs, $new($shortArray3, FontConfiguration::NUM_FONTS, FontConfiguration::NUM_STYLES));
	$set(this, compExclusions, $new($intArray3, FontConfiguration::NUM_FONTS));
	$set(this, compCoreNum, $new($ints, FontConfiguration::NUM_FONTS));
	$set(this, coreFontNameIDs, $new($HashSet));
	$set(this, fallbackFontNameIDs, $new($HashSet));
	$set(this, reorderMap, nullptr);
	$set(this, charsetRegistry, $new($Hashtable, 5));
	$set(this, fontDescriptors, $new($FontDescriptorArray3, FontConfiguration::NUM_FONTS, FontConfiguration::NUM_STYLES));
	this->numCoreFonts = -1;
	$set(this, componentFonts, nullptr);
	$set(this, filenamesMap, $new($HashMap));
	$set(this, coreFontFileNames, $new($HashSet));
	if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo("Creating standard Font Configuration"_s);
	}
	if ($FontUtilities::debugFonts() && FontConfiguration::logger == nullptr) {
		$assignStatic(FontConfiguration::logger, $PlatformLogger::getLogger("sun.awt.FontConfiguration"_s));
	}
	$set(this, fontManager, fm);
	setOsNameAndVersion();
	setEncoding();
	findFontConfigFile();
}

bool FontConfiguration::init() {
	$synchronized(this) {
		if (!this->inited) {
			this->preferLocaleFonts = false;
			this->preferPropFonts = false;
			setFontConfiguration();
			readFontConfigFile(this->fontConfigFile);
			initFontConfig();
			this->inited = true;
		}
		return true;
	}
}

void FontConfiguration::init$($SunFontManager* fm, bool preferLocaleFonts, bool preferPropFonts) {
	this->initELC = (int16_t)-1;
	$set(this, compFontNameIDs, $new($shortArray3, FontConfiguration::NUM_FONTS, FontConfiguration::NUM_STYLES));
	$set(this, compExclusions, $new($intArray3, FontConfiguration::NUM_FONTS));
	$set(this, compCoreNum, $new($ints, FontConfiguration::NUM_FONTS));
	$set(this, coreFontNameIDs, $new($HashSet));
	$set(this, fallbackFontNameIDs, $new($HashSet));
	$set(this, reorderMap, nullptr);
	$set(this, charsetRegistry, $new($Hashtable, 5));
	$set(this, fontDescriptors, $new($FontDescriptorArray3, FontConfiguration::NUM_FONTS, FontConfiguration::NUM_STYLES));
	this->numCoreFonts = -1;
	$set(this, componentFonts, nullptr);
	$set(this, filenamesMap, $new($HashMap));
	$set(this, coreFontFileNames, $new($HashSet));
	$set(this, fontManager, fm);
	if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo("Creating alternate Font Configuration"_s);
	}
	this->preferLocaleFonts = preferLocaleFonts;
	this->preferPropFonts = preferPropFonts;
	initFontConfig();
}

void FontConfiguration::setOsNameAndVersion() {
	$assignStatic(FontConfiguration::osName, $System::getProperty("os.name"_s));
	$assignStatic(FontConfiguration::osVersion, $System::getProperty("os.version"_s));
}

void FontConfiguration::setEncoding() {
	$assignStatic(FontConfiguration::encoding, $nc($($Charset::defaultCharset()))->name());
	$assignStatic(FontConfiguration::startupLocale, $SunToolkit::getStartupLocale());
}

bool FontConfiguration::foundOsSpecificFile() {
	return this->foundOsSpecificFile$;
}

bool FontConfiguration::fontFilesArePresent() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	init();
	int16_t fontNameID = $nc($nc($nc(this->compFontNameIDs)->get(0))->get(0))->get(0);
	int16_t fileNameID = getComponentFileID(fontNameID);
	$var($String, fileName, mapFileName($(getComponentFileName(fileNameID))));
	$var($Boolean, exists, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontConfiguration$1, this, fileName)))));
	return $nc(exists)->booleanValue();
}

void FontConfiguration::findFontConfigFile() {
	$useLocalCurrentObjectStackCache();
	this->foundOsSpecificFile$ = true;
	$var($String, javaHome, $System::getProperty("java.home"_s));
	if (javaHome == nullptr) {
		$throwNew($Error, "java.home property not set"_s);
	}
	$init($File);
	$set(this, javaLib, $str({javaHome, $File::separator, "lib"_s}));
	$var($String, javaConfFonts, $str({javaHome, $File::separator, "conf"_s, $File::separator, "fonts"_s}));
	$var($String, userConfigFile, $System::getProperty("sun.awt.fontconfig"_s));
	if (userConfigFile != nullptr) {
		$set(this, fontConfigFile, $new($File, userConfigFile));
	} else {
		$set(this, fontConfigFile, findFontConfigFile(javaConfFonts));
		if (this->fontConfigFile == nullptr) {
			$set(this, fontConfigFile, findFontConfigFile(this->javaLib));
		}
	}
}

void FontConfiguration::readFontConfigFile($File* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$var($InputStream, in, $ref(FontConfiguration::class$->getResourceAsStream("/fontconfig.bfc"_s)));
		try {
			loadBinary(in);
			in->close();
		} catch ($IOException&) {
		}
		return;
	}
	getInstalledFallbackFonts(this->javaLib);
	if (f != nullptr) {
		try {
			$var($FileInputStream, in, $new($FileInputStream, $(f->getPath())));
			if (FontConfiguration::isProperties) {
				loadProperties(in);
			} else {
				loadBinary(in);
			}
			in->close();
			if ($FontUtilities::debugFonts()) {
				$nc(FontConfiguration::logger)->config($$str({"Read logical font configuration from "_s, f}));
			}
		} catch ($IOException& e) {
			if ($FontUtilities::debugFonts()) {
				$nc(FontConfiguration::logger)->config($$str({"Failed to read logical font configuration from "_s, f}));
			}
		}
	}
	$var($String, version, getVersion());
	bool var$0 = !"1"_s->equals(version);
	if (var$0 && $FontUtilities::debugFonts()) {
		$nc(FontConfiguration::logger)->config($$str({"Unsupported fontconfig version: "_s, version}));
	}
}

void FontConfiguration::getInstalledFallbackFonts($String* javaLib) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($String, fallbackDirName, $str({javaLib, $File::separator, "fonts"_s, $File::separator, "fallback"_s}));
	$var($File, fallbackDir, $new($File, fallbackDirName));
	bool var$0 = fallbackDir->exists();
	if (var$0 && fallbackDir->isDirectory()) {
		$var($StringArray, ttfs, fallbackDir->list($($nc(this->fontManager)->getTrueTypeFilter())));
		$var($StringArray, t1s, fallbackDir->list($($nc(this->fontManager)->getType1Filter())));
		int32_t numTTFs = (ttfs == nullptr) ? 0 : $nc(ttfs)->length;
		int32_t numT1s = (t1s == nullptr) ? 0 : $nc(t1s)->length;
		int32_t len = numTTFs + numT1s;
		if (numTTFs + numT1s == 0) {
			return;
		}
		$assignStatic(FontConfiguration::installedFallbackFontFiles, $new($StringArray, len));
		for (int32_t i = 0; i < numTTFs; ++i) {
			$nc(FontConfiguration::installedFallbackFontFiles)->set(i, $$str({fallbackDir, $File::separator, ttfs->get(i)}));
		}
		for (int32_t i = 0; i < numT1s; ++i) {
			$nc(FontConfiguration::installedFallbackFontFiles)->set(i + numTTFs, $$str({fallbackDir, $File::separator, t1s->get(i)}));
		}
		$nc(this->fontManager)->registerFontsInDir(fallbackDirName);
	}
}

$File* FontConfiguration::findImpl($String* fname) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $$str({fname, ".properties"_s})));
	if ($FontUtilities::debugFonts()) {
		$nc(FontConfiguration::logger)->info($$str({"Looking for text fontconfig file : "_s, f}));
	}
	if (f->canRead()) {
		if ($FontUtilities::debugFonts()) {
			$nc(FontConfiguration::logger)->info($$str({"Found file : "_s, f}));
		}
		FontConfiguration::isProperties = true;
		return f;
	}
	$assign(f, $new($File, $$str({fname, ".bfc"_s})));
	if ($FontUtilities::debugFonts()) {
		$nc(FontConfiguration::logger)->info($$str({"Looking for binary fontconfig file : "_s, f}));
	}
	if (f->canRead()) {
		if ($FontUtilities::debugFonts()) {
			$nc(FontConfiguration::logger)->info($$str({"Found file : "_s, f}));
		}
		FontConfiguration::isProperties = false;
		return f;
	}
	return nullptr;
}

$File* FontConfiguration::findFontConfigFile($String* dir) {
	$useLocalCurrentObjectStackCache();
	if (!($$new($File, dir))->exists()) {
		return nullptr;
	}
	$var($String, baseName, $str({dir, $File::separator, "fontconfig"_s}));
	$var($File, configFile, nullptr);
	$var($String, osMajorVersion, nullptr);
	if (FontConfiguration::osVersion != nullptr && FontConfiguration::osName != nullptr) {
		$assign(configFile, findImpl($$str({baseName, "."_s, FontConfiguration::osName, "."_s, FontConfiguration::osVersion})));
		if (configFile != nullptr) {
			return configFile;
		}
		int32_t decimalPointIndex = $nc(FontConfiguration::osVersion)->indexOf((int32_t)u'.');
		if (decimalPointIndex != -1) {
			$assign(osMajorVersion, $nc(FontConfiguration::osVersion)->substring(0, $nc(FontConfiguration::osVersion)->indexOf((int32_t)u'.')));
			$assign(configFile, findImpl($$str({baseName, "."_s, FontConfiguration::osName, "."_s, osMajorVersion})));
			if (configFile != nullptr) {
				return configFile;
			}
		}
	}
	if (FontConfiguration::osName != nullptr) {
		$assign(configFile, findImpl($$str({baseName, "."_s, FontConfiguration::osName})));
		if (configFile != nullptr) {
			return configFile;
		}
	}
	if (FontConfiguration::osVersion != nullptr) {
		$assign(configFile, findImpl($$str({baseName, "."_s, FontConfiguration::osVersion})));
		if (configFile != nullptr) {
			return configFile;
		}
		if (osMajorVersion != nullptr) {
			$assign(configFile, findImpl($$str({baseName, "."_s, osMajorVersion})));
			if (configFile != nullptr) {
				return configFile;
			}
		}
	}
	this->foundOsSpecificFile$ = false;
	$assign(configFile, findImpl(baseName));
	if (configFile != nullptr) {
		return configFile;
	}
	if ($FontUtilities::debugFonts()) {
		$nc(FontConfiguration::logger)->info("Did not find a fontconfig file."_s);
	}
	return nullptr;
}

void FontConfiguration::loadBinary($InputStream* inStream) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, in, $new($DataInputStream, inStream));
	$assignStatic(FontConfiguration::head, readShortTable(in, FontConfiguration::HEAD_LENGTH));
	$var($ints, tableSizes, $new($ints, FontConfiguration::INDEX_TABLEEND));
	for (int32_t i = 0; i < FontConfiguration::INDEX_TABLEEND; ++i) {
		tableSizes->set(i, $nc(FontConfiguration::head)->get(i + 1) - $nc(FontConfiguration::head)->get(i));
	}
	$assignStatic(FontConfiguration::table_scriptIDs, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_scriptIDs)));
	$assignStatic(FontConfiguration::table_scriptFonts, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_scriptFonts)));
	$assignStatic(FontConfiguration::table_elcIDs, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_elcIDs)));
	$assignStatic(FontConfiguration::table_sequences, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_sequences)));
	$assignStatic(FontConfiguration::table_fontfileNameIDs, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_fontfileNameIDs)));
	$assignStatic(FontConfiguration::table_componentFontNameIDs, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_componentFontNameIDs)));
	$assignStatic(FontConfiguration::table_filenames, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_filenames)));
	$assignStatic(FontConfiguration::table_awtfontpaths, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_awtfontpaths)));
	$assignStatic(FontConfiguration::table_exclusions, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_exclusions)));
	$assignStatic(FontConfiguration::table_proportionals, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_proportionals)));
	$assignStatic(FontConfiguration::table_scriptFontsMotif, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_scriptFontsMotif)));
	$assignStatic(FontConfiguration::table_alphabeticSuffix, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_alphabeticSuffix)));
	$assignStatic(FontConfiguration::table_stringIDs, readShortTable(in, tableSizes->get(FontConfiguration::INDEX_stringIDs)));
	$assignStatic(FontConfiguration::stringCache, $new($StringArray, $nc(FontConfiguration::table_stringIDs)->length + 1));
	int32_t len = tableSizes->get(FontConfiguration::INDEX_stringTable);
	$var($bytes, bb, $new($bytes, len * 2));
	$assignStatic(FontConfiguration::table_stringTable, $new($chars, len));
	in->read(bb);
	int32_t i = 0;
	int32_t j = 0;
	while (i < len) {
		int32_t var$0 = bb->get(j++) << 8;
		$nc(FontConfiguration::table_stringTable)->set(i++, (char16_t)(var$0 | ((int32_t)(bb->get(j++) & (uint32_t)255))));
	}
	if (FontConfiguration::verbose) {
		dump();
	}
}

void FontConfiguration::saveBinary($OutputStream* out) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	sanityCheck();
	$var($DataOutputStream, dataOut, $new($DataOutputStream, out));
	writeShortTable(dataOut, FontConfiguration::head);
	writeShortTable(dataOut, FontConfiguration::table_scriptIDs);
	writeShortTable(dataOut, FontConfiguration::table_scriptFonts);
	writeShortTable(dataOut, FontConfiguration::table_elcIDs);
	writeShortTable(dataOut, FontConfiguration::table_sequences);
	writeShortTable(dataOut, FontConfiguration::table_fontfileNameIDs);
	writeShortTable(dataOut, FontConfiguration::table_componentFontNameIDs);
	writeShortTable(dataOut, FontConfiguration::table_filenames);
	writeShortTable(dataOut, FontConfiguration::table_awtfontpaths);
	writeShortTable(dataOut, FontConfiguration::table_exclusions);
	writeShortTable(dataOut, FontConfiguration::table_proportionals);
	writeShortTable(dataOut, FontConfiguration::table_scriptFontsMotif);
	writeShortTable(dataOut, FontConfiguration::table_alphabeticSuffix);
	writeShortTable(dataOut, FontConfiguration::table_stringIDs);
	dataOut->writeChars($$new($String, FontConfiguration::table_stringTable));
	$nc(out)->close();
	if (FontConfiguration::verbose) {
		dump();
	}
}

void FontConfiguration::loadProperties($InputStream* in) {
	$init(FontConfiguration);
	FontConfiguration::stringIDNum = (int16_t)1;
	$assignStatic(FontConfiguration::stringIDs, $new($shorts, 1000));
	$assignStatic(FontConfiguration::stringTable, $new($StringBuilder, 4096));
	if (FontConfiguration::verbose && FontConfiguration::logger == nullptr) {
		$assignStatic(FontConfiguration::logger, $PlatformLogger::getLogger("sun.awt.FontConfiguration"_s));
	}
	$$new($FontConfiguration$PropertiesHandler)->load(in);
	$assignStatic(FontConfiguration::stringIDs, nullptr);
	$assignStatic(FontConfiguration::stringTable, nullptr);
}

void FontConfiguration::initFontConfig() {
	$set(this, initLocale, FontConfiguration::startupLocale);
	$set(this, initEncoding, FontConfiguration::encoding);
	if (this->preferLocaleFonts && !willReorderForStartupLocale()) {
		this->preferLocaleFonts = false;
	}
	this->initELC = getInitELC();
	initAllComponentFonts();
}

int16_t FontConfiguration::getInitELC() {
	$useLocalCurrentObjectStackCache();
	if (this->initELC != -1) {
		return this->initELC;
	}
	$var($HashMap, elcIDs, $new($HashMap));
	for (int32_t i = 0; i < $nc(FontConfiguration::table_elcIDs)->length; ++i) {
		$var($Object, var$0, $of(getString($nc(FontConfiguration::table_elcIDs)->get(i))));
		elcIDs->put(var$0, $($Integer::valueOf(i)));
	}
	$var($String, language, $nc(this->initLocale)->getLanguage());
	$var($String, country, $nc(this->initLocale)->getCountry());
	$var($String, elc, nullptr);
	bool var$2 = elcIDs->containsKey($assign(elc, $str({this->initEncoding, "."_s, language, "."_s, country})));
	bool var$1 = var$2 || elcIDs->containsKey($assign(elc, $str({this->initEncoding, "."_s, language})));
	if (var$1 || elcIDs->containsKey($assign(elc, this->initEncoding))) {
		this->initELC = $nc(($cast($Integer, $(elcIDs->get(elc)))))->shortValue();
	} else {
		this->initELC = $nc(($cast($Integer, $(elcIDs->get("NULL.NULL.NULL"_s)))))->shortValue();
	}
	int32_t i = 0;
	while (i < $nc(FontConfiguration::table_alphabeticSuffix)->length) {
		if (this->initELC == $nc(FontConfiguration::table_alphabeticSuffix)->get(i)) {
			$set(this, alphabeticSuffix, getString($nc(FontConfiguration::table_alphabeticSuffix)->get(i + 1)));
			return this->initELC;
		}
		i += 2;
	}
	return this->initELC;
}

void FontConfiguration::initAllComponentFonts() {
	$useLocalCurrentObjectStackCache();
	$var($shorts, fallbackScripts, getFallbackScripts());
	for (int32_t fontIndex = 0; fontIndex < FontConfiguration::NUM_FONTS; ++fontIndex) {
		$var($shorts, coreScripts, getCoreScripts(fontIndex));
		$nc(this->compCoreNum)->set(fontIndex, $nc(coreScripts)->length);
		$var($intArray2, exclusions, $new($intArray2, coreScripts->length));
		for (int32_t i = 0; i < coreScripts->length; ++i) {
			exclusions->set(i, $(getExclusionRanges(coreScripts->get(i))));
		}
		$nc(this->compExclusions)->set(fontIndex, exclusions);
		for (int32_t styleIndex = 0; styleIndex < FontConfiguration::NUM_STYLES; ++styleIndex) {
			int32_t index = 0;
			$var($shorts, nameIDs, $new($shorts, coreScripts->length + $nc(fallbackScripts)->length));
			for (index = 0; index < coreScripts->length; ++index) {
				nameIDs->set(index, getComponentFontID(coreScripts->get(index), fontIndex, styleIndex));
				if (this->preferLocaleFonts && FontConfiguration::localeMap != nullptr && $nc(this->fontManager)->usingAlternateFontforJALocales()) {
					nameIDs->set(index, remapLocaleMap(fontIndex, styleIndex, coreScripts->get(index), nameIDs->get(index)));
				}
				if (this->preferPropFonts) {
					nameIDs->set(index, remapProportional(fontIndex, nameIDs->get(index)));
				}
				$nc(this->coreFontNameIDs)->add($($Short::valueOf(nameIDs->get(index))));
			}
			for (int32_t i = 0; i < fallbackScripts->length; ++i) {
				int16_t id = getComponentFontID(fallbackScripts->get(i), fontIndex, styleIndex);
				if (this->preferLocaleFonts && FontConfiguration::localeMap != nullptr && $nc(this->fontManager)->usingAlternateFontforJALocales()) {
					id = remapLocaleMap(fontIndex, styleIndex, fallbackScripts->get(i), id);
				}
				if (this->preferPropFonts) {
					id = remapProportional(fontIndex, id);
				}
				if (contains(nameIDs, id, index)) {
					continue;
				}
				$nc(this->fallbackFontNameIDs)->add($($Short::valueOf(id)));
				nameIDs->set(index++, id);
			}
			if (index < nameIDs->length) {
				$var($shorts, newNameIDs, $new($shorts, index));
				$System::arraycopy(nameIDs, 0, newNameIDs, 0, index);
				$assign(nameIDs, newNameIDs);
			}
			$nc($nc(this->compFontNameIDs)->get(fontIndex))->set(styleIndex, nameIDs);
		}
	}
}

int16_t FontConfiguration::remapLocaleMap(int32_t fontIndex, int32_t styleIndex, int16_t scriptID, int16_t fontID) {
	$useLocalCurrentObjectStackCache();
	$var($String, scriptName, getString($nc(FontConfiguration::table_scriptIDs)->get(scriptID)));
	$var($String, value, $cast($String, $nc(FontConfiguration::localeMap)->get(scriptName)));
	if (value == nullptr) {
		$var($String, fontName, $nc(FontConfiguration::fontNames)->get(fontIndex));
		$var($String, styleName, $nc(FontConfiguration::styleNames)->get(styleIndex));
		$assign(value, $cast($String, $nc(FontConfiguration::localeMap)->get($$str({fontName, "."_s, styleName, "."_s, scriptName}))));
	}
	if (value == nullptr) {
		return fontID;
	}
	for (int32_t i = 0; i < $nc(FontConfiguration::table_componentFontNameIDs)->length; ++i) {
		$var($String, name, getString($nc(FontConfiguration::table_componentFontNameIDs)->get(i)));
		if ($nc(value)->equalsIgnoreCase(name)) {
			fontID = (int16_t)i;
			break;
		}
	}
	return fontID;
}

bool FontConfiguration::hasMonoToPropMap() {
	$init(FontConfiguration);
	return FontConfiguration::table_proportionals != nullptr && $nc(FontConfiguration::table_proportionals)->length != 0;
}

int16_t FontConfiguration::remapProportional(int32_t fontIndex, int16_t id) {
	if (this->preferPropFonts && $nc(FontConfiguration::table_proportionals)->length != 0 && fontIndex != 2 && fontIndex != 4) {
		int32_t i = 0;
		while (i < $nc(FontConfiguration::table_proportionals)->length) {
			if ($nc(FontConfiguration::table_proportionals)->get(i) == id) {
				return $nc(FontConfiguration::table_proportionals)->get(i + 1);
			}
			i += 2;
		}
	}
	return id;
}

bool FontConfiguration::isLogicalFontFamilyName($String* fontName) {
	$init(FontConfiguration);
	$init($Locale);
	return isLogicalFontFamilyNameLC($($nc(fontName)->toLowerCase($Locale::ENGLISH)));
}

bool FontConfiguration::isLogicalFontFamilyNameLC($String* fontName) {
	$init(FontConfiguration);
	for (int32_t i = 0; i < $nc(FontConfiguration::fontNames)->length; ++i) {
		if ($nc(fontName)->equals($nc(FontConfiguration::fontNames)->get(i))) {
			return true;
		}
	}
	return false;
}

bool FontConfiguration::isLogicalFontStyleName($String* styleName) {
	$init(FontConfiguration);
	for (int32_t i = 0; i < $nc(FontConfiguration::styleNames)->length; ++i) {
		if ($nc(styleName)->equals($nc(FontConfiguration::styleNames)->get(i))) {
			return true;
		}
	}
	return false;
}

bool FontConfiguration::isLogicalFontFaceName($String* fontName) {
	$init(FontConfiguration);
	$init($Locale);
	return isLogicalFontFaceNameLC($($nc(fontName)->toLowerCase($Locale::ENGLISH)));
}

bool FontConfiguration::isLogicalFontFaceNameLC($String* fontName) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	int32_t period = $nc(fontName)->indexOf((int32_t)u'.');
	if (period >= 0) {
		$var($String, familyName, fontName->substring(0, period));
		$var($String, styleName, fontName->substring(period + 1));
		bool var$0 = isLogicalFontFamilyName(familyName);
		return var$0 && isLogicalFontStyleName(styleName);
	} else {
		return isLogicalFontFamilyName(fontName);
	}
}

int32_t FontConfiguration::getFontIndex($String* fontName) {
	$init(FontConfiguration);
	return getArrayIndex(FontConfiguration::fontNames, fontName);
}

int32_t FontConfiguration::getStyleIndex($String* styleName) {
	$init(FontConfiguration);
	return getArrayIndex(FontConfiguration::styleNames, styleName);
}

int32_t FontConfiguration::getArrayIndex($StringArray* names, $String* name) {
	$init(FontConfiguration);
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		if ($nc(name)->equals(names->get(i))) {
			return i;
		}
	}
	if (!FontConfiguration::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return 0;
}

int32_t FontConfiguration::getStyleIndex(int32_t style) {
	$init(FontConfiguration);
	do {
		if (style == $Font::PLAIN) {
			goto case$0;
		}
		if (style == $Font::BOLD) {
			goto case$1;
		}
		if (style == $Font::ITALIC) {
			goto case$2;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$3;
		}
		goto case$4;
case$0:
		// Font.PLAIN
		{
			return 0;
		}
case$1:
		// Font.BOLD
		{
			return 1;
		}
case$2:
		// Font.ITALIC
		{
			return 2;
		}
case$3:
		// Font.BOLD | Font.ITALIC
		{
			return 3;
		}
case$4:
		// default
		{
			return 0;
		}
	} while (false);
}

$String* FontConfiguration::getFontName(int32_t fontIndex) {
	$init(FontConfiguration);
	return $nc(FontConfiguration::fontNames)->get(fontIndex);
}

$String* FontConfiguration::getStyleName(int32_t styleIndex) {
	$init(FontConfiguration);
	return $nc(FontConfiguration::styleNames)->get(styleIndex);
}

$String* FontConfiguration::getLogicalFontFaceName($String* familyName, int32_t style) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	if (!FontConfiguration::$assertionsDisabled && !isLogicalFontFamilyName(familyName)) {
		$throwNew($AssertionError);
	}
	$init($Locale);
	$var($String, var$0, $$str({$($nc(familyName)->toLowerCase($Locale::ENGLISH)), "."_s}));
	return $concat(var$0, $(getStyleString(style)));
}

$String* FontConfiguration::getStyleString(int32_t style) {
	$init(FontConfiguration);
	return getStyleName(getStyleIndex(style));
}

$String* FontConfiguration::getCompatibilityFamilyName($String* fontName$renamed) {
	$var($String, fontName, fontName$renamed);
	$init($Locale);
	$assign(fontName, $nc(fontName)->toLowerCase($Locale::ENGLISH));
	if (fontName->equals("timesroman"_s)) {
		return "serif"_s;
	} else if (fontName->equals("helvetica"_s)) {
		return "sansserif"_s;
	} else if (fontName->equals("courier"_s)) {
		return "monospaced"_s;
	}
	return nullptr;
}

$String* FontConfiguration::mapFileName($String* fileName) {
	return fileName;
}

void FontConfiguration::shuffle($StringArray* seq, int32_t src, int32_t dst) {
	if (dst >= src) {
		return;
	}
	$var($String, tmp, $nc(seq)->get(src));
	for (int32_t i = src; i > dst; --i) {
		seq->set(i, seq->get(i - 1));
	}
	seq->set(dst, tmp);
}

bool FontConfiguration::willReorderForStartupLocale() {
	$init(FontConfiguration);
	return getReorderSequence() != nullptr;
}

$Object* FontConfiguration::getReorderSequence() {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	if ($nc(FontConfiguration::fontConfig)->reorderMap == nullptr) {
		$nc(FontConfiguration::fontConfig)->initReorderMap();
	}
	$var($HashMap, reorderMap, $nc(FontConfiguration::fontConfig)->reorderMap);
	$var($String, language, $nc(FontConfiguration::startupLocale)->getLanguage());
	$var($String, country, $nc(FontConfiguration::startupLocale)->getCountry());
	$var($Object, val, $nc(reorderMap)->get($$str({FontConfiguration::encoding, "."_s, language, "."_s, country})));
	if (val == nullptr) {
		$assign(val, reorderMap->get($$str({FontConfiguration::encoding, "."_s, language})));
	}
	if (val == nullptr) {
		$assign(val, reorderMap->get(FontConfiguration::encoding));
	}
	return $of(val);
}

void FontConfiguration::reorderSequenceForLocale($StringArray* seq) {
	$useLocalCurrentObjectStackCache();
	$var($Object, val, getReorderSequence());
	if ($instanceOf($String, val)) {
		for (int32_t i = 0; i < $nc(seq)->length; ++i) {
			if ($nc(seq->get(i))->equals(val)) {
				shuffle(seq, i, 0);
				return;
			}
		}
	} else if ($instanceOf($StringArray, val)) {
		$var($StringArray, fontLangs, $cast($StringArray, val));
		for (int32_t l = 0; l < $nc(fontLangs)->length; ++l) {
			for (int32_t i = 0; i < $nc(seq)->length; ++i) {
				if ($nc(seq->get(i))->equals(fontLangs->get(l))) {
					shuffle(seq, i, l);
				}
			}
		}
	}
}

$Vector* FontConfiguration::splitSequence($String* sequence) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$var($Vector, parts, $new($Vector));
	int32_t start = 0;
	int32_t end = 0;
	while ((end = $nc(sequence)->indexOf((int32_t)u',', start)) >= 0) {
		parts->add($(sequence->substring(start, end)));
		start = end + 1;
	}
	if ($nc(sequence)->length() > start) {
		parts->add($(sequence->substring(start, sequence->length())));
	}
	return parts;
}

$StringArray* FontConfiguration::split($String* sequence) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, v, splitSequence(sequence));
	return $fcast($StringArray, $nc(v)->toArray($$new($StringArray, 0)));
}

$FontDescriptorArray* FontConfiguration::getFontDescriptors($String* fontName$renamed, int32_t style) {
	$var($String, fontName, fontName$renamed);
	if (!FontConfiguration::$assertionsDisabled && !isLogicalFontFamilyName(fontName)) {
		$throwNew($AssertionError);
	}
	$init($Locale);
	$assign(fontName, $nc(fontName)->toLowerCase($Locale::ENGLISH));
	int32_t fontIndex = getFontIndex(fontName);
	int32_t styleIndex = getStyleIndex(style);
	return getFontDescriptors(fontIndex, styleIndex);
}

$FontDescriptorArray* FontConfiguration::getFontDescriptors(int32_t fontIndex, int32_t styleIndex) {
	$var($FontDescriptorArray, descriptors, $nc($nc(this->fontDescriptors)->get(fontIndex))->get(styleIndex));
	if (descriptors == nullptr) {
		$assign(descriptors, buildFontDescriptors(fontIndex, styleIndex));
		$nc($nc(this->fontDescriptors)->get(fontIndex))->set(styleIndex, descriptors);
	}
	return descriptors;
}

$FontDescriptorArray* FontConfiguration::buildFontDescriptors(int32_t fontIndex, int32_t styleIndex) {
	$useLocalCurrentObjectStackCache();
	$var($String, fontName, $nc(FontConfiguration::fontNames)->get(fontIndex));
	$var($String, styleName, $nc(FontConfiguration::styleNames)->get(styleIndex));
	$var($shorts, scriptIDs, getCoreScripts(fontIndex));
	$var($shorts, nameIDs, $nc($nc(this->compFontNameIDs)->get(fontIndex))->get(styleIndex));
	$var($StringArray, sequence, $new($StringArray, $nc(scriptIDs)->length));
	$var($StringArray, names, $new($StringArray, scriptIDs->length));
	for (int32_t i = 0; i < sequence->length; ++i) {
		names->set(i, $(getComponentFontName($nc(nameIDs)->get(i))));
		sequence->set(i, $(getScriptName(scriptIDs->get(i))));
		if (this->alphabeticSuffix != nullptr && "alphabetic"_s->equals(sequence->get(i))) {
			sequence->set(i, $$str({sequence->get(i), "/"_s, this->alphabeticSuffix}));
		}
	}
	$var($intArray2, fontExclusionRanges, $nc(this->compExclusions)->get(fontIndex));
	$var($FontDescriptorArray, descriptors, $new($FontDescriptorArray, names->length));
	for (int32_t i = 0; i < names->length; ++i) {
		$var($String, awtFontName, nullptr);
		$var($String, encoding, nullptr);
		$assign(awtFontName, makeAWTFontName(names->get(i), sequence->get(i)));
		$assign(encoding, getEncoding(names->get(i), sequence->get(i)));
		if (encoding == nullptr) {
			$assign(encoding, "default"_s);
		}
		$var($CharsetEncoder, enc, getFontCharsetEncoder($($nc(encoding)->trim()), awtFontName));
		$var($ints, exclusionRanges, $nc(fontExclusionRanges)->get(i));
		descriptors->set(i, $$new($FontDescriptor, awtFontName, enc, exclusionRanges));
	}
	return descriptors;
}

$String* FontConfiguration::makeAWTFontName($String* platformFontName, $String* characterSubsetName) {
	return platformFontName;
}

$CharsetEncoder* FontConfiguration::getFontCharsetEncoder($String* charsetName, $String* fontName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Charset, fc, nullptr);
	if ($nc(charsetName)->equals("default"_s)) {
		$assign(fc, $cast($Charset, $nc(this->charsetRegistry)->get(fontName)));
	} else {
		$assign(fc, $cast($Charset, $nc(this->charsetRegistry)->get(charsetName)));
	}
	if (fc != nullptr) {
		return fc->newEncoder();
	}
	bool var$0 = !$nc(charsetName)->startsWith("sun.awt."_s);
	if (var$0 && !charsetName->equals("default"_s)) {
		$assign(fc, $Charset::forName(charsetName));
	} else {
		$Class* fcc = $cast($Class, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontConfiguration$2, this, charsetName))));
		if (fcc != nullptr) {
			try {
				$assign(fc, $cast($Charset, $nc($(fcc->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
			} catch ($Exception& e) {
			}
		}
	}
	if (fc == nullptr) {
		$assign(fc, getDefaultFontCharset(fontName));
	}
	if ($nc(charsetName)->equals("default"_s)) {
		$nc(this->charsetRegistry)->put(fontName, fc);
	} else {
		$nc(this->charsetRegistry)->put(charsetName, fc);
	}
	return $nc(fc)->newEncoder();
}

$HashSet* FontConfiguration::getAWTFontPathSet() {
	return nullptr;
}

$CompositeFontDescriptorArray* FontConfiguration::get2DCompositeFontInfo() {
	$useLocalCurrentObjectStackCache();
	$var($CompositeFontDescriptorArray, result, $new($CompositeFontDescriptorArray, FontConfiguration::NUM_FONTS * FontConfiguration::NUM_STYLES));
	$var($String, defaultFontFile, $nc(this->fontManager)->getDefaultFontFile());
	$var($String, defaultFontFaceName, $nc(this->fontManager)->getDefaultFontFaceName());
	for (int32_t fontIndex = 0; fontIndex < FontConfiguration::NUM_FONTS; ++fontIndex) {
		$var($String, fontName, $nc(FontConfiguration::publicFontNames)->get(fontIndex));
		$var($intArray2, exclusions, $nc(this->compExclusions)->get(fontIndex));
		int32_t numExclusionRanges = 0;
		for (int32_t i = 0; i < $nc(exclusions)->length; ++i) {
			numExclusionRanges += $nc(exclusions->get(i))->length;
		}
		$var($ints, exclusionRanges, $new($ints, numExclusionRanges));
		$var($ints, exclusionRangeLimits, $new($ints, $nc(exclusions)->length));
		int32_t exclusionRangeIndex = 0;
		int32_t exclusionRangeLimitIndex = 0;
		for (int32_t i = 0; i < exclusions->length; ++i) {
			$var($ints, componentRanges, exclusions->get(i));
			for (int32_t j = 0; j < $nc(componentRanges)->length;) {
				int32_t value = componentRanges->get(j);
				exclusionRanges->set(exclusionRangeIndex++, componentRanges->get(j++));
				exclusionRanges->set(exclusionRangeIndex++, componentRanges->get(j++));
			}
			exclusionRangeLimits->set(i, exclusionRangeIndex);
		}
		for (int32_t styleIndex = 0; styleIndex < FontConfiguration::NUM_STYLES; ++styleIndex) {
			int32_t maxComponentFontCount = $nc($nc($nc(this->compFontNameIDs)->get(fontIndex))->get(styleIndex))->length;
			if (FontConfiguration::installedFallbackFontFiles != nullptr) {
				maxComponentFontCount += $nc(FontConfiguration::installedFallbackFontFiles)->length;
			}
			$var($String, faceName, $str({fontName, "."_s, $nc(FontConfiguration::styleNames)->get(styleIndex)}));
			$var($StringArray, componentFaceNames, $new($StringArray, maxComponentFontCount));
			$var($StringArray, componentFileNames, $new($StringArray, maxComponentFontCount));
			int32_t index = 0;
			for (index = 0; index < $nc($nc($nc(this->compFontNameIDs)->get(fontIndex))->get(styleIndex))->length; ++index) {
				int16_t fontNameID = $nc($nc($nc(this->compFontNameIDs)->get(fontIndex))->get(styleIndex))->get(index);
				int16_t fileNameID = getComponentFileID(fontNameID);
				componentFaceNames->set(index, $(getFaceNameFromComponentFontName($(getComponentFontName(fontNameID)))));
				componentFileNames->set(index, $(mapFileName($(getComponentFileName(fileNameID)))));
				if (componentFileNames->get(index) == nullptr || needToSearchForFile(componentFileNames->get(index))) {
					componentFileNames->set(index, $(getFileNameFromComponentFontName($(getComponentFontName(fontNameID)))));
				}
			}
			if (FontConfiguration::installedFallbackFontFiles != nullptr) {
				for (int32_t ifb = 0; ifb < $nc(FontConfiguration::installedFallbackFontFiles)->length; ++ifb) {
					componentFaceNames->set(index, nullptr);
					componentFileNames->set(index, $nc(FontConfiguration::installedFallbackFontFiles)->get(ifb));
					++index;
				}
			}
			if (index < maxComponentFontCount) {
				$var($StringArray, newComponentFaceNames, $new($StringArray, index));
				$System::arraycopy(componentFaceNames, 0, newComponentFaceNames, 0, index);
				$assign(componentFaceNames, newComponentFaceNames);
				$var($StringArray, newComponentFileNames, $new($StringArray, index));
				$System::arraycopy(componentFileNames, 0, newComponentFileNames, 0, index);
				$assign(componentFileNames, newComponentFileNames);
			}
			$var($ints, clippedExclusionRangeLimits, exclusionRangeLimits);
			if (index != clippedExclusionRangeLimits->length) {
				int32_t len = exclusionRangeLimits->length;
				$assign(clippedExclusionRangeLimits, $new($ints, index));
				$System::arraycopy(exclusionRangeLimits, 0, clippedExclusionRangeLimits, 0, len);
				for (int32_t i = len; i < index; ++i) {
					clippedExclusionRangeLimits->set(i, exclusionRanges->length);
				}
			}
			result->set(fontIndex * FontConfiguration::NUM_STYLES + styleIndex, $$new($CompositeFontDescriptor, faceName, $nc(this->compCoreNum)->get(fontIndex), componentFaceNames, componentFileNames, exclusionRanges, clippedExclusionRangeLimits));
		}
	}
	return result;
}

bool FontConfiguration::needToSearchForFile($String* fileName) {
	$useLocalCurrentObjectStackCache();
	$init($FontUtilities);
	if (!$FontUtilities::isLinux) {
		return false;
	} else if (this->existsMap == nullptr) {
		$set(this, existsMap, $new($HashMap));
	}
	$var($Boolean, exists, $cast($Boolean, $nc(this->existsMap)->get(fileName)));
	if (exists == nullptr) {
		getNumberCoreFonts();
		if (!$nc(this->coreFontFileNames)->contains(fileName)) {
			$init($Boolean);
			$assign(exists, $Boolean::TRUE);
		} else {
			$assign(exists, $Boolean::valueOf(($$new($File, fileName))->exists()));
			$nc(this->existsMap)->put(fileName, exists);
			if ($FontUtilities::debugFonts() && exists == $Boolean::FALSE) {
				$nc(FontConfiguration::logger)->warning($$str({"Couldn\'t locate font file "_s, fileName}));
			}
		}
	}
	$init($Boolean);
	return exists == $Boolean::FALSE;
}

int32_t FontConfiguration::getNumberCoreFonts() {
	$useLocalCurrentObjectStackCache();
	if (this->numCoreFonts == -1) {
		this->numCoreFonts = $nc(this->coreFontNameIDs)->size();
		$var($ShortArray, emptyShortArray, $new($ShortArray, 0));
		$var($ShortArray, core, $fcast($ShortArray, $nc(this->coreFontNameIDs)->toArray(emptyShortArray)));
		$var($ShortArray, fallback, $fcast($ShortArray, $nc(this->fallbackFontNameIDs)->toArray(emptyShortArray)));
		int32_t numFallbackFonts = 0;
		int32_t i = 0;
		for (i = 0; i < $nc(fallback)->length; ++i) {
			if ($nc(this->coreFontNameIDs)->contains(fallback->get(i))) {
				fallback->set(i, nullptr);
				continue;
			}
			++numFallbackFonts;
		}
		$set(this, componentFonts, $new($StringArray, this->numCoreFonts + numFallbackFonts));
		$var($String, filename, nullptr);
		for (i = 0; i < $nc(core)->length; ++i) {
			int16_t fontid = $nc(core->get(i))->shortValue();
			int16_t fileid = getComponentFileID(fontid);
			$nc(this->componentFonts)->set(i, $(getComponentFontName(fontid)));
			$var($String, compFileName, getComponentFileName(fileid));
			if (compFileName != nullptr) {
				$nc(this->coreFontFileNames)->add(compFileName);
			}
			$nc(this->filenamesMap)->put($nc(this->componentFonts)->get(i), $(mapFileName(compFileName)));
		}
		for (int32_t j = 0; j < $nc(fallback)->length; ++j) {
			if (fallback->get(j) != nullptr) {
				int16_t fontid = $nc(fallback->get(j))->shortValue();
				int16_t fileid = getComponentFileID(fontid);
				$nc(this->componentFonts)->set(i, $(getComponentFontName(fontid)));
				$nc(this->filenamesMap)->put($nc(this->componentFonts)->get(i), $(mapFileName($(getComponentFileName(fileid)))));
				++i;
			}
		}
	}
	return this->numCoreFonts;
}

$StringArray* FontConfiguration::getPlatformFontNames() {
	if (this->numCoreFonts == -1) {
		getNumberCoreFonts();
	}
	return this->componentFonts;
}

$String* FontConfiguration::getFileNameFromPlatformName($String* platformName) {
	return $cast($String, $nc(this->filenamesMap)->get(platformName));
}

$String* FontConfiguration::getExtraFontPath() {
	return getString($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_appendedfontpath));
}

$String* FontConfiguration::getVersion() {
	return getString($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_version));
}

FontConfiguration* FontConfiguration::getFontConfiguration() {
	$init(FontConfiguration);
	return FontConfiguration::fontConfig;
}

void FontConfiguration::setFontConfiguration() {
	$assignStatic(FontConfiguration::fontConfig, this);
}

void FontConfiguration::sanityCheck() {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	$var($String, osName, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FontConfiguration$3)))));
	for (int32_t ii = 1; ii < $nc(FontConfiguration::table_filenames)->length; ++ii) {
		if ($nc(FontConfiguration::table_filenames)->get(ii) == -1) {
			if ($nc(osName)->contains("Windows"_s)) {
				$nc($System::err)->println($$str({"\n Error: <filename."_s, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get(ii))), "> entry is missing!!!"_s}));
				++errors;
			} else {
				if (FontConfiguration::verbose && !isEmpty(FontConfiguration::table_filenames)) {
					$nc($System::err)->println($$str({"\n Note: \'filename\' entry is undefined for \""_s, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get(ii))), "\""_s}));
				}
			}
		}
	}
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_scriptIDs)->length; ++ii) {
		int16_t fid = $nc(FontConfiguration::table_scriptFonts)->get(ii);
		if (fid == 0) {
			$nc($System::out)->println($$str({"\n Error: <allfonts."_s, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ii))), "> entry is missing!!!"_s}));
			++errors;
			continue;
		} else if (fid < 0) {
			fid = (int16_t)-fid;
			for (int32_t iii = 0; iii < FontConfiguration::NUM_FONTS; ++iii) {
				for (int32_t iij = 0; iij < FontConfiguration::NUM_STYLES; ++iij) {
					int32_t jj = iii * FontConfiguration::NUM_STYLES + iij;
					int16_t ffid = $nc(FontConfiguration::table_scriptFonts)->get(fid + jj);
					if (ffid == 0) {
						$var($String, var$3, $$str({"\n Error: <"_s, $(getFontName(iii)), "."_s}));
						$var($String, var$2, $$concat(var$3, $(getStyleName(iij))));
						$var($String, var$1, $$concat(var$2, "."_s));
						$var($String, var$0, $$concat(var$1, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ii)))));
						$nc($System::err)->println($$concat(var$0, "> entry is missing!!!"_s));
						++errors;
					}
				}
			}
		}
	}
	if (errors != 0) {
		$nc($System::err)->println($$str({"!!THERE ARE "_s, $$str(errors), " ERROR(S) IN THE FONTCONFIG FILE, PLEASE CHECK ITS CONTENT!!\n"_s}));
		$System::exit(1);
	}
}

bool FontConfiguration::isEmpty($shorts* a) {
	$init(FontConfiguration);
	{
		$var($shorts, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int16_t s = arr$->get(i$);
			{
				if (s != -1) {
					return false;
				}
			}
		}
	}
	return true;
}

void FontConfiguration::dump() {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("\n----Head Table------------"_s);
	for (int32_t ii = 0; ii < FontConfiguration::HEAD_LENGTH; ++ii) {
		$nc($System::out)->println($$str({"  "_s, $$str(ii), " : "_s, $$str($nc(FontConfiguration::head)->get(ii))}));
	}
	$nc($System::out)->println("\n----scriptIDs-------------"_s);
	printTable(FontConfiguration::table_scriptIDs, 0);
	$nc($System::out)->println("\n----scriptFonts----------------"_s);
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_scriptIDs)->length; ++ii) {
		int16_t fid = $nc(FontConfiguration::table_scriptFonts)->get(ii);
		if (fid >= 0) {
			$var($String, var$0, $$str({"  allfonts."_s, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ii))), "="_s}));
			$nc($System::out)->println($$concat(var$0, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get(fid)))));
		}
	}
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_scriptIDs)->length; ++ii) {
		int16_t fid = $nc(FontConfiguration::table_scriptFonts)->get(ii);
		if (fid < 0) {
			fid = (int16_t)-fid;
			for (int32_t iii = 0; iii < FontConfiguration::NUM_FONTS; ++iii) {
				for (int32_t iij = 0; iij < FontConfiguration::NUM_STYLES; ++iij) {
					int32_t jj = iii * FontConfiguration::NUM_STYLES + iij;
					int16_t ffid = $nc(FontConfiguration::table_scriptFonts)->get(fid + jj);
					$var($String, var$5, $$str({"  "_s, $(getFontName(iii)), "."_s}));
					$var($String, var$4, $$concat(var$5, $(getStyleName(iij))));
					$var($String, var$3, $$concat(var$4, "."_s));
					$var($String, var$2, $$concat(var$3, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ii)))));
					$var($String, var$1, $$concat(var$2, "="_s));
					$nc($System::out)->println($$concat(var$1, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get(ffid)))));
				}
			}
		}
	}
	$nc($System::out)->println("\n----elcIDs----------------"_s);
	printTable(FontConfiguration::table_elcIDs, 0);
	$nc($System::out)->println("\n----sequences-------------"_s);
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_elcIDs)->length; ++ii) {
		$nc($System::out)->println($$str({"  "_s, $$str(ii), "/"_s, $(getString($nc(FontConfiguration::table_elcIDs)->get(ii)))}));
		$var($shorts, ss, getShortArray($nc(FontConfiguration::table_sequences)->get(ii * FontConfiguration::NUM_FONTS + 0)));
		for (int32_t jj = 0; jj < $nc(ss)->length; ++jj) {
			$nc($System::out)->println($$str({"     "_s, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ss->get(jj))))}));
		}
	}
	$nc($System::out)->println("\n----fontfileNameIDs-------"_s);
	printTable(FontConfiguration::table_fontfileNameIDs, 0);
	$nc($System::out)->println("\n----componentFontNameIDs--"_s);
	printTable(FontConfiguration::table_componentFontNameIDs, 1);
	$nc($System::out)->println("\n----filenames-------------"_s);
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_filenames)->length; ++ii) {
		if ($nc(FontConfiguration::table_filenames)->get(ii) == -1) {
			$nc($System::out)->println($$str({"  "_s, $$str(ii), " : null"_s}));
		} else {
			$nc($System::out)->println($$str({"  "_s, $$str(ii), " : "_s, $(getString($nc(FontConfiguration::table_fontfileNameIDs)->get($nc(FontConfiguration::table_filenames)->get(ii))))}));
		}
	}
	$nc($System::out)->println("\n----awtfontpaths---------"_s);
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_awtfontpaths)->length; ++ii) {
		$var($String, var$6, $$str({"  "_s, $(getString($nc(FontConfiguration::table_scriptIDs)->get(ii))), " : "_s}));
		$nc($System::out)->println($$concat(var$6, $(getString($nc(FontConfiguration::table_awtfontpaths)->get(ii)))));
	}
	$nc($System::out)->println("\n----proportionals--------"_s);
	for (int32_t ii = 0; ii < $nc(FontConfiguration::table_proportionals)->length; ++ii) {
		$var($String, var$7, $$str({"  "_s, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get($nc(FontConfiguration::table_proportionals)->get(ii++)))), " -> "_s}));
		$nc($System::out)->println($$concat(var$7, $(getString($nc(FontConfiguration::table_componentFontNameIDs)->get($nc(FontConfiguration::table_proportionals)->get(ii))))));
	}
	int32_t i = 0;
	$nc($System::out)->println("\n----alphabeticSuffix----"_s);
	while (i < $nc(FontConfiguration::table_alphabeticSuffix)->length) {
		$var($String, var$8, $$str({"    "_s, $(getString($nc(FontConfiguration::table_elcIDs)->get($nc(FontConfiguration::table_alphabeticSuffix)->get(i++)))), " -> "_s}));
		$nc($System::out)->println($$concat(var$8, $(getString($nc(FontConfiguration::table_alphabeticSuffix)->get(i++)))));
	}
	$nc($System::out)->println("\n----String Table---------"_s);
	$nc($System::out)->println($$str({"    stringID:    Num ="_s, $$str($nc(FontConfiguration::table_stringIDs)->length)}));
	$nc($System::out)->println($$str({"    stringTable: Size="_s, $$str($nc(FontConfiguration::table_stringTable)->length * 2)}));
	$nc($System::out)->println("\n----fallbackScriptIDs---"_s);
	$var($shorts, fbsIDs, getShortArray($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_fallbackScripts)));
	for (int32_t ii = 0; ii < $nc(fbsIDs)->length; ++ii) {
		$nc($System::out)->println($$str({"  "_s, $(getString($nc(FontConfiguration::table_scriptIDs)->get(fbsIDs->get(ii))))}));
	}
	$nc($System::out)->println("\n----appendedfontpath-----"_s);
	$nc($System::out)->println($$str({"  "_s, $(getString($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_appendedfontpath)))}));
	$nc($System::out)->println("\n----Version--------------"_s);
	$nc($System::out)->println($$str({"  "_s, $(getString($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_version)))}));
}

int16_t FontConfiguration::getComponentFontID(int16_t scriptID, int32_t fontIndex, int32_t styleIndex) {
	$init(FontConfiguration);
	int16_t fid = $nc(FontConfiguration::table_scriptFonts)->get(scriptID);
	if (fid >= 0) {
		return fid;
	} else {
		return $nc(FontConfiguration::table_scriptFonts)->get(-fid + fontIndex * FontConfiguration::NUM_STYLES + styleIndex);
	}
}

int16_t FontConfiguration::getComponentFontIDMotif(int16_t scriptID, int32_t fontIndex, int32_t styleIndex) {
	$init(FontConfiguration);
	if ($nc(FontConfiguration::table_scriptFontsMotif)->length == 0) {
		return (int16_t)0;
	}
	int16_t fid = $nc(FontConfiguration::table_scriptFontsMotif)->get(scriptID);
	if (fid >= 0) {
		return fid;
	} else {
		return $nc(FontConfiguration::table_scriptFontsMotif)->get(-fid + fontIndex * FontConfiguration::NUM_STYLES + styleIndex);
	}
}

$ints* FontConfiguration::getExclusionRanges(int16_t scriptID) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	int16_t exID = $nc(FontConfiguration::table_exclusions)->get(scriptID);
	if (exID == 0) {
		return FontConfiguration::EMPTY_INT_ARRAY;
	} else {
		$var($chars, exChar, $nc($(getString(exID)))->toCharArray());
		$var($ints, exInt, $new($ints, exChar->length / 2));
		int32_t i = 0;
		for (int32_t j = 0; j < exInt->length; ++j) {
			int32_t var$0 = (exChar->get(i++) << 16);
			exInt->set(j, var$0 + ((int32_t)(exChar->get(i++) & (uint32_t)0x0000FFFF)));
		}
		return exInt;
	}
}

bool FontConfiguration::contains($shorts* IDs, int16_t id, int32_t limit) {
	$init(FontConfiguration);
	for (int32_t i = 0; i < limit; ++i) {
		if ($nc(IDs)->get(i) == id) {
			return true;
		}
	}
	return false;
}

$String* FontConfiguration::getComponentFontName(int16_t id) {
	$init(FontConfiguration);
	if (id < 0) {
		return nullptr;
	}
	return getString($nc(FontConfiguration::table_componentFontNameIDs)->get(id));
}

$String* FontConfiguration::getComponentFileName(int16_t id) {
	$init(FontConfiguration);
	if (id < 0) {
		return nullptr;
	}
	return getString($nc(FontConfiguration::table_fontfileNameIDs)->get(id));
}

int16_t FontConfiguration::getComponentFileID(int16_t nameID) {
	$init(FontConfiguration);
	return $nc(FontConfiguration::table_filenames)->get(nameID);
}

$String* FontConfiguration::getScriptName(int16_t scriptID) {
	$init(FontConfiguration);
	return getString($nc(FontConfiguration::table_scriptIDs)->get(scriptID));
}

$shorts* FontConfiguration::getCoreScripts(int32_t fontIndex) {
	$useLocalCurrentObjectStackCache();
	int16_t elc = getInitELC();
	$var($shorts, scripts, getShortArray($nc(FontConfiguration::table_sequences)->get(elc * FontConfiguration::NUM_FONTS + fontIndex)));
	if (this->preferLocaleFonts) {
		if (this->reorderScripts == nullptr) {
			$set(this, reorderScripts, $new($HashMap));
		}
		$var($StringArray, ss, $new($StringArray, $nc(scripts)->length));
		for (int32_t i = 0; i < ss->length; ++i) {
			ss->set(i, $(getScriptName(scripts->get(i))));
			$nc(this->reorderScripts)->put(ss->get(i), $($Short::valueOf(scripts->get(i))));
		}
		reorderSequenceForLocale(ss);
		for (int32_t i = 0; i < ss->length; ++i) {
			scripts->set(i, $nc(($cast($Short, $($nc(this->reorderScripts)->get(ss->get(i))))))->shortValue());
		}
	}
	return scripts;
}

$shorts* FontConfiguration::getFallbackScripts() {
	$init(FontConfiguration);
	return getShortArray($nc(FontConfiguration::head)->get(FontConfiguration::INDEX_fallbackScripts));
}

void FontConfiguration::printTable($shorts* list, int32_t start) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = start; i < $nc(list)->length; ++i) {
		$nc($System::out)->println($$str({"  "_s, $$str(i), " : "_s, $(getString(list->get(i)))}));
	}
}

$shorts* FontConfiguration::readShortTable($DataInputStream* in, int32_t len) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		return FontConfiguration::EMPTY_SHORT_ARRAY;
	}
	$var($shorts, data, $new($shorts, len));
	$var($bytes, bb, $new($bytes, len * 2));
	$nc(in)->read(bb);
	int32_t i = 0;
	int32_t j = 0;
	while (i < len) {
		int32_t var$0 = bb->get(j++) << 8;
		data->set(i++, (int16_t)(var$0 | ((int32_t)(bb->get(j++) & (uint32_t)255))));
	}
	return data;
}

void FontConfiguration::writeShortTable($DataOutputStream* out, $shorts* data) {
	$init(FontConfiguration);
	{
		$var($shorts, arr$, data);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int16_t val = arr$->get(i$);
			{
				$nc(out)->writeShort(val);
			}
		}
	}
}

$shorts* FontConfiguration::toList($HashMap* map) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$var($shorts, list, $new($shorts, $nc(map)->size()));
	$Arrays::fill(list, (int16_t)-1);
	{
		$var($Iterator, i$, $nc($(map->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				int16_t var$0 = $nc(($cast($Short, $($nc(entry)->getValue()))))->shortValue();
				list->set(var$0, getStringID($cast($String, $(entry->getKey()))));
			}
		}
	}
	return list;
}

$String* FontConfiguration::getString(int16_t stringID) {
	$init(FontConfiguration);
	if (stringID == 0) {
		return nullptr;
	}
	if ($nc(FontConfiguration::stringCache)->get(stringID) == nullptr) {
		$nc(FontConfiguration::stringCache)->set(stringID, $$new($String, FontConfiguration::table_stringTable, (int32_t)$nc(FontConfiguration::table_stringIDs)->get(stringID), $nc(FontConfiguration::table_stringIDs)->get(stringID + 1) - $nc(FontConfiguration::table_stringIDs)->get(stringID)));
	}
	return $nc(FontConfiguration::stringCache)->get(stringID);
}

$shorts* FontConfiguration::getShortArray(int16_t shortArrayID) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$var($String, s, getString(shortArrayID));
	$var($chars, cc, $nc(s)->toCharArray());
	$var($shorts, ss, $new($shorts, cc->length));
	for (int32_t i = 0; i < cc->length; ++i) {
		ss->set(i, (int16_t)((int32_t)(cc->get(i) & (uint32_t)0x0000FFFF)));
	}
	return ss;
}

int16_t FontConfiguration::getStringID($String* s) {
	$init(FontConfiguration);
	if (s == nullptr) {
		return (int16_t)0;
	}
	int16_t pos0 = (int16_t)$nc(FontConfiguration::stringTable)->length();
	$nc(FontConfiguration::stringTable)->append(s);
	int16_t pos1 = (int16_t)$nc(FontConfiguration::stringTable)->length();
	$nc(FontConfiguration::stringIDs)->set(FontConfiguration::stringIDNum, pos0);
	$nc(FontConfiguration::stringIDs)->set(FontConfiguration::stringIDNum + 1, pos1);
	++FontConfiguration::stringIDNum;
	if (FontConfiguration::stringIDNum + 1 >= $nc(FontConfiguration::stringIDs)->length) {
		$var($shorts, tmp, $new($shorts, FontConfiguration::stringIDNum + 1000));
		$System::arraycopy(FontConfiguration::stringIDs, 0, tmp, 0, FontConfiguration::stringIDNum);
		$assignStatic(FontConfiguration::stringIDs, tmp);
	}
	return (int16_t)(FontConfiguration::stringIDNum - 1);
}

int16_t FontConfiguration::getShortArrayID($shorts* sa) {
	$init(FontConfiguration);
	$useLocalCurrentObjectStackCache();
	$var($chars, cc, $new($chars, $nc(sa)->length));
	for (int32_t i = 0; i < sa->length; ++i) {
		cc->set(i, (char16_t)sa->get(i));
	}
	$var($String, s, $new($String, cc));
	return getStringID(s);
}

void clinit$FontConfiguration($Class* class$) {
	$assignStatic(FontConfiguration::UNDEFINED_COMPONENT_FONT, "unknown"_s);
	FontConfiguration::$assertionsDisabled = !FontConfiguration::class$->desiredAssertionStatus();
	$assignStatic(FontConfiguration::startupLocale, nullptr);
	$assignStatic(FontConfiguration::localeMap, nullptr);
	FontConfiguration::isProperties = true;
	$assignStatic(FontConfiguration::fontNames, $new($StringArray, {
		"serif"_s,
		"sansserif"_s,
		"monospaced"_s,
		"dialog"_s,
		"dialoginput"_s
	}));
	$init($Font);
	$assignStatic(FontConfiguration::publicFontNames, $new($StringArray, {
		$Font::SERIF,
		$Font::SANS_SERIF,
		$Font::MONOSPACED,
		$Font::DIALOG,
		$Font::DIALOG_INPUT
	}));
	$assignStatic(FontConfiguration::styleNames, $new($StringArray, {
		"plain"_s,
		"bold"_s,
		"italic"_s,
		"bolditalic"_s
	}));
	$assignStatic(FontConfiguration::installedFallbackFontFiles, nullptr);
	$assignStatic(FontConfiguration::EMPTY_INT_ARRAY, $new($ints, 0));
	$assignStatic(FontConfiguration::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	$assignStatic(FontConfiguration::EMPTY_SHORT_ARRAY, $new($shorts, 0));
}

FontConfiguration::FontConfiguration() {
}

$Class* FontConfiguration::load$($String* name, bool initialize) {
	$loadClass(FontConfiguration, name, initialize, &_FontConfiguration_ClassInfo_, clinit$FontConfiguration, allocate$FontConfiguration);
	return class$;
}

$Class* FontConfiguration::class$ = nullptr;

	} // awt
} // sun