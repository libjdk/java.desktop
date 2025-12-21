#include <sun/font/TrueTypeGlyphMapper.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Locale.h>
#include <sun/font/CMap$CMapFormat10.h>
#include <sun/font/CMap$CMapFormat12.h>
#include <sun/font/CMap$CMapFormat8.h>
#include <sun/font/CMap$NullCMapClass.h>
#include <sun/font/CMap.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FileFont.h>
#include <sun/font/FileFontStrike.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/SunFontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPHS
#undef INVISIBLE_GLYPH_ID
#undef JAPAN
#undef JA_YEN
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef MIN_LAYOUT_CHARCODE
#undef REVERSE_SOLIDUS

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Locale = ::java::util::Locale;
using $CMap = ::sun::font::CMap;
using $CMap$CMapFormat10 = ::sun::font::CMap$CMapFormat10;
using $CMap$CMapFormat12 = ::sun::font::CMap$CMapFormat12;
using $CMap$CMapFormat8 = ::sun::font::CMap$CMapFormat8;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FileFont = ::sun::font::FileFont;
using $FileFontStrike = ::sun::font::FileFontStrike;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $SunFontManager = ::sun::font::SunFontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _TrueTypeGlyphMapper_FieldInfo_[] = {
	{"REVERSE_SOLIDUS", "C", nullptr, $STATIC | $FINAL, $constField(TrueTypeGlyphMapper, REVERSE_SOLIDUS)},
	{"JA_YEN", "C", nullptr, $STATIC | $FINAL, $constField(TrueTypeGlyphMapper, JA_YEN)},
	{"isJAlocale", "Z", nullptr, $STATIC | $FINAL, $staticField(TrueTypeGlyphMapper, isJAlocale)},
	{"font", "Lsun/font/TrueTypeFont;", nullptr, 0, $field(TrueTypeGlyphMapper, font)},
	{"cmap", "Lsun/font/CMap;", nullptr, 0, $field(TrueTypeGlyphMapper, cmap)},
	{"numGlyphs", "I", nullptr, 0, $field(TrueTypeGlyphMapper, numGlyphs)},
	{}
};

$MethodInfo _TrueTypeGlyphMapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/TrueTypeFont;)V", nullptr, $PUBLIC, $method(static_cast<void(TrueTypeGlyphMapper::*)($TrueTypeFont*)>(&TrueTypeGlyphMapper::init$))},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC},
	{"charToVariationGlyph", "(II)I", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC},
	{"getGlyphFromCMAP", "(I)C", nullptr, $PRIVATE, $method(static_cast<char16_t(TrueTypeGlyphMapper::*)(int32_t)>(&TrueTypeGlyphMapper::getGlyphFromCMAP))},
	{"getGlyphFromCMAP", "(II)C", nullptr, $PRIVATE, $method(static_cast<char16_t(TrueTypeGlyphMapper::*)(int32_t,int32_t)>(&TrueTypeGlyphMapper::getGlyphFromCMAP))},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"handleBadCMAP", "()V", nullptr, $PRIVATE, $method(static_cast<void(TrueTypeGlyphMapper::*)()>(&TrueTypeGlyphMapper::handleBadCMAP))},
	{"hasSupplementaryChars", "()Z", nullptr, 0},
	{"remapJAChar", "(C)C", nullptr, $PRIVATE, $method(static_cast<char16_t(TrueTypeGlyphMapper::*)(char16_t)>(&TrueTypeGlyphMapper::remapJAChar))},
	{"remapJAIntChar", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TrueTypeGlyphMapper::*)(int32_t)>(&TrueTypeGlyphMapper::remapJAIntChar))},
	{}
};

$ClassInfo _TrueTypeGlyphMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.TrueTypeGlyphMapper",
	"sun.font.CharToGlyphMapper",
	nullptr,
	_TrueTypeGlyphMapper_FieldInfo_,
	_TrueTypeGlyphMapper_MethodInfo_
};

$Object* allocate$TrueTypeGlyphMapper($Class* clazz) {
	return $of($alloc(TrueTypeGlyphMapper));
}

bool TrueTypeGlyphMapper::isJAlocale = false;

void TrueTypeGlyphMapper::init$($TrueTypeFont* font) {
	$CharToGlyphMapper::init$();
	$set(this, font, font);
	try {
		$set(this, cmap, $CMap::initialize(font));
	} catch ($Exception& e) {
		$set(this, cmap, nullptr);
	}
	if (this->cmap == nullptr) {
		handleBadCMAP();
	}
	this->missingGlyph = 0;
	$var($ByteBuffer, buffer, $nc(font)->getTableBuffer($TrueTypeFont::maxpTag));
	if (buffer != nullptr && buffer->capacity() >= 6) {
		this->numGlyphs = buffer->getChar(4);
	} else {
		handleBadCMAP();
	}
}

int32_t TrueTypeGlyphMapper::getNumGlyphs() {
	return this->numGlyphs;
}

char16_t TrueTypeGlyphMapper::getGlyphFromCMAP(int32_t charCode) {
	$useLocalCurrentObjectStackCache();
	try {
		char16_t glyphCode = $nc(this->cmap)->getGlyph(charCode);
		if (glyphCode < this->numGlyphs || glyphCode >= $FileFontStrike::INVISIBLE_GLYPHS) {
			return glyphCode;
		} else {
			if ($FontUtilities::isLogging()) {
				$var($String, var$2, $$str({this->font, " out of range glyph id="_s}));
				$var($String, var$1, $$concat(var$2, $($Integer::toHexString((int32_t)glyphCode))));
				$var($String, var$0, $$concat(var$1, " for char "_s));
				$FontUtilities::logWarning($$concat(var$0, $($Integer::toHexString(charCode))));
			}
			return (char16_t)this->missingGlyph;
		}
	} catch ($Exception& e) {
		handleBadCMAP();
		return (char16_t)this->missingGlyph;
	}
	$shouldNotReachHere();
}

char16_t TrueTypeGlyphMapper::getGlyphFromCMAP(int32_t charCode, int32_t variationSelector) {
	$useLocalCurrentObjectStackCache();
	if (variationSelector == 0) {
		return getGlyphFromCMAP(charCode);
	}
	try {
		char16_t glyphCode = $nc(this->cmap)->getVariationGlyph(charCode, variationSelector);
		if (glyphCode < this->numGlyphs || glyphCode >= $FileFontStrike::INVISIBLE_GLYPHS) {
			return glyphCode;
		} else {
			if ($FontUtilities::isLogging()) {
				$var($String, var$4, $$str({this->font, " out of range glyph id="_s}));
				$var($String, var$3, $$concat(var$4, $($Integer::toHexString((int32_t)glyphCode))));
				$var($String, var$2, $$concat(var$3, " for char "_s));
				$var($String, var$1, $$concat(var$2, $($Integer::toHexString(charCode))));
				$var($String, var$0, $$concat(var$1, " for vs "_s));
				$FontUtilities::logWarning($$concat(var$0, $($Integer::toHexString(variationSelector))));
			}
			return (char16_t)this->missingGlyph;
		}
	} catch ($Exception& e) {
		handleBadCMAP();
		return (char16_t)this->missingGlyph;
	}
	$shouldNotReachHere();
}

void TrueTypeGlyphMapper::handleBadCMAP() {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::isLogging()) {
		$FontUtilities::logSevere($$str({"Null Cmap for "_s, this->font, "substituting for this font"_s}));
	}
	$nc($($SunFontManager::getInstance()))->deRegisterBadFont(this->font);
	$init($CMap);
	$set(this, cmap, $CMap::theNullCmap);
}

char16_t TrueTypeGlyphMapper::remapJAChar(char16_t unicode) {
	return (unicode == TrueTypeGlyphMapper::REVERSE_SOLIDUS) ? TrueTypeGlyphMapper::JA_YEN : unicode;
}

int32_t TrueTypeGlyphMapper::remapJAIntChar(int32_t unicode) {
	return (unicode == TrueTypeGlyphMapper::REVERSE_SOLIDUS) ? (int32_t)TrueTypeGlyphMapper::JA_YEN : unicode;
}

int32_t TrueTypeGlyphMapper::charToGlyph(char16_t unicode) {
	int32_t glyph = getGlyphFromCMAP(unicode);
	return glyph;
}

int32_t TrueTypeGlyphMapper::charToGlyph(int32_t unicode) {
	int32_t glyph = getGlyphFromCMAP(unicode);
	return glyph;
}

int32_t TrueTypeGlyphMapper::charToVariationGlyph(int32_t unicode, int32_t variationSelector) {
	int32_t glyph = getGlyphFromCMAP(unicode, variationSelector);
	return glyph;
}

void TrueTypeGlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		$nc(glyphs)->set(i, getGlyphFromCMAP($nc(unicodes)->get(i)));
	}
}

void TrueTypeGlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i, getGlyphFromCMAP(code));
				i += 1;
				glyphs->set(i, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
				continue;
			}
		}
		$nc(glyphs)->set(i, getGlyphFromCMAP(code));
	}
}

bool TrueTypeGlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i + 1, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
			}
		}
		$nc(glyphs)->set(i, getGlyphFromCMAP(code));
		if (code < $FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else {
			bool var$1 = $FontUtilities::isComplexCharCode(code);
			if (var$1 || $CharToGlyphMapper::isVariationSelector(code)) {
				return true;
			} else if (code >= 0x00010000) {
				i += 1;
				continue;
			}
		}
	}
	return false;
}

bool TrueTypeGlyphMapper::hasSupplementaryChars() {
	return $instanceOf($CMap$CMapFormat8, this->cmap) || $instanceOf($CMap$CMapFormat10, this->cmap) || $instanceOf($CMap$CMapFormat12, this->cmap);
}

void clinit$TrueTypeGlyphMapper($Class* class$) {
	$init($Locale);
	TrueTypeGlyphMapper::isJAlocale = $nc($Locale::JAPAN)->equals($($Locale::getDefault()));
}

TrueTypeGlyphMapper::TrueTypeGlyphMapper() {
}

$Class* TrueTypeGlyphMapper::load$($String* name, bool initialize) {
	$loadClass(TrueTypeGlyphMapper, name, initialize, &_TrueTypeGlyphMapper_ClassInfo_, clinit$TrueTypeGlyphMapper, allocate$TrueTypeGlyphMapper);
	return class$;
}

$Class* TrueTypeGlyphMapper::class$ = nullptr;

	} // font
} // sun