#include <sun/font/FontFamily.h>

#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Math.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FileFont.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef BOLD
#undef DEFAULT_RANK
#undef ENGLISH
#undef FWEIGHT_BOLD
#undef FWEIGHT_NORMAL
#undef FWIDTH_NORMAL
#undef ITALIC
#undef PLAIN

using $FontFamilyArray = $Array<::sun::font::FontFamily>;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $CompositeFont = ::sun::font::CompositeFont;
using $FileFont = ::sun::font::FileFont;
using $Font2D = ::sun::font::Font2D;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FieldInfo _FontFamily_FieldInfo_[] = {
	{"familyNameMap", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/font/FontFamily;>;", $PRIVATE | $STATIC, $staticField(FontFamily, familyNameMap)},
	{"allLocaleNames", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lsun/font/FontFamily;>;", $PRIVATE | $STATIC, $staticField(FontFamily, allLocaleNames)},
	{"familyName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(FontFamily, familyName)},
	{"plain", "Lsun/font/Font2D;", nullptr, $PROTECTED, $field(FontFamily, plain)},
	{"bold", "Lsun/font/Font2D;", nullptr, $PROTECTED, $field(FontFamily, bold)},
	{"italic", "Lsun/font/Font2D;", nullptr, $PROTECTED, $field(FontFamily, italic)},
	{"bolditalic", "Lsun/font/Font2D;", nullptr, $PROTECTED, $field(FontFamily, bolditalic)},
	{"logicalFont", "Z", nullptr, $PROTECTED, $field(FontFamily, logicalFont)},
	{"familyRank", "I", nullptr, $PROTECTED, $field(FontFamily, familyRank)},
	{"familyWidth", "I", nullptr, $PRIVATE, $field(FontFamily, familyWidth)},
	{}
};

$MethodInfo _FontFamily_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ZI)V", nullptr, $PUBLIC, $method(static_cast<void(FontFamily::*)($String*,bool,int32_t)>(&FontFamily::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FontFamily::*)($String*)>(&FontFamily::init$))},
	{"addLocaleNames", "(Lsun/font/FontFamily;[Ljava/lang/String;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(FontFamily*,$StringArray*)>(&FontFamily::addLocaleNames))},
	{"closerWeight", "(Lsun/font/Font2D;Lsun/font/Font2D;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(FontFamily::*)($Font2D*,$Font2D*,int32_t)>(&FontFamily::closerWeight))},
	{"getAllFamilyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&FontFamily::getAllFamilyNames))},
	{"getAllFontFamilies", "()[Lsun/font/FontFamily;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FontFamilyArray*(*)()>(&FontFamily::getAllFontFamilies))},
	{"getClosestStyle", "(I)Lsun/font/Font2D;", nullptr, 0},
	{"getFamily", "(Ljava/lang/String;)Lsun/font/FontFamily;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FontFamily*(*)($String*)>(&FontFamily::getFamily))},
	{"getFamilyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFont", "(I)Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"getFontWithExactStyleMatch", "(I)Lsun/font/Font2D;", nullptr, $PUBLIC},
	{"getLocaleFamily", "(Ljava/lang/String;)Lsun/font/FontFamily;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<FontFamily*(*)($String*)>(&FontFamily::getLocaleFamily))},
	{"getRank", "()I", nullptr, $PUBLIC},
	{"isFromSameSource", "(Lsun/font/Font2D;)Z", nullptr, $PRIVATE, $method(static_cast<bool(FontFamily::*)($Font2D*)>(&FontFamily::isFromSameSource))},
	{"preferredWidth", "(Lsun/font/Font2D;)Z", nullptr, $PRIVATE, $method(static_cast<bool(FontFamily::*)($Font2D*)>(&FontFamily::preferredWidth))},
	{"remove", "(Lsun/font/Font2D;)V", nullptr, $STATIC, $method(static_cast<void(*)($Font2D*)>(&FontFamily::remove))},
	{"setFont", "(Lsun/font/Font2D;I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FontFamily_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.FontFamily",
	"java.lang.Object",
	nullptr,
	_FontFamily_FieldInfo_,
	_FontFamily_MethodInfo_
};

$Object* allocate$FontFamily($Class* clazz) {
	return $of($alloc(FontFamily));
}

$ConcurrentHashMap* FontFamily::familyNameMap = nullptr;
$HashMap* FontFamily::allLocaleNames = nullptr;

FontFamily* FontFamily::getFamily($String* name) {
	$init(FontFamily);
	$init($Locale);
	return $cast(FontFamily, $nc(FontFamily::familyNameMap)->get($($nc(name)->toLowerCase($Locale::ENGLISH))));
}

$StringArray* FontFamily::getAllFamilyNames() {
	$init(FontFamily);
	return nullptr;
}

void FontFamily::remove($Font2D* font2D) {
	$init(FontFamily);
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($String, name, $nc(font2D)->getFamilyName($Locale::ENGLISH));
	$var(FontFamily, family, getFamily(name));
	if (family == nullptr) {
		return;
	}
	if ($nc(family)->plain == font2D) {
		$set(family, plain, nullptr);
	}
	if ($nc(family)->bold == font2D) {
		$set(family, bold, nullptr);
	}
	if ($nc(family)->italic == font2D) {
		$set(family, italic, nullptr);
	}
	if ($nc(family)->bolditalic == font2D) {
		$set(family, bolditalic, nullptr);
	}
	if ($nc(family)->plain == nullptr && family->bold == nullptr && family->italic == nullptr && family->bolditalic == nullptr) {
		$nc(FontFamily::familyNameMap)->remove(name);
	}
}

void FontFamily::init$($String* name, bool isLogFont, int32_t rank) {
	this->logicalFont = false;
	this->familyWidth = 0;
	this->logicalFont = isLogFont;
	$set(this, familyName, name);
	this->familyRank = rank;
	$init($Locale);
	$nc(FontFamily::familyNameMap)->put($($nc(name)->toLowerCase($Locale::ENGLISH)), this);
}

void FontFamily::init$($String* name) {
	this->logicalFont = false;
	this->familyWidth = 0;
	this->logicalFont = false;
	$set(this, familyName, name);
	this->familyRank = $Font2D::DEFAULT_RANK;
}

$String* FontFamily::getFamilyName() {
	return this->familyName;
}

int32_t FontFamily::getRank() {
	return this->familyRank;
}

bool FontFamily::isFromSameSource($Font2D* font) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($FileFont, font))) {
		return false;
	}
	$var($FileFont, existingFont, nullptr);
	if ($instanceOf($FileFont, this->plain)) {
		$assign(existingFont, $cast($FileFont, this->plain));
	} else if ($instanceOf($FileFont, this->bold)) {
		$assign(existingFont, $cast($FileFont, this->bold));
	} else if ($instanceOf($FileFont, this->italic)) {
		$assign(existingFont, $cast($FileFont, this->italic));
	} else if ($instanceOf($FileFont, this->bolditalic)) {
		$assign(existingFont, $cast($FileFont, this->bolditalic));
	}
	if (existingFont == nullptr) {
		return false;
	}
	$var($File, existDir, ($$new($File, $nc(existingFont)->platName))->getParentFile());
	$var($FileFont, newFont, $cast($FileFont, font));
	$var($File, newDir, ($$new($File, $nc(newFont)->platName))->getParentFile());
	if (existDir != nullptr) {
		try {
			$assign(existDir, existDir->getCanonicalFile());
		} catch ($IOException& ignored) {
		}
	}
	if (newDir != nullptr) {
		try {
			$assign(newDir, newDir->getCanonicalFile());
		} catch ($IOException& ignored) {
		}
	}
	return $Objects::equals(newDir, existDir);
}

bool FontFamily::preferredWidth($Font2D* font) {
	$useLocalCurrentObjectStackCache();
	int32_t newWidth = $nc(font)->getWidth();
	if (this->familyWidth == 0) {
		this->familyWidth = newWidth;
		return true;
	}
	if (newWidth == this->familyWidth) {
		return true;
	}
	int32_t var$0 = $Math::abs($Font2D::FWIDTH_NORMAL - newWidth);
	if (var$0 < $Math::abs($Font2D::FWIDTH_NORMAL - this->familyWidth)) {
		if ($FontUtilities::debugFonts()) {
			$FontUtilities::logInfo($$str({"Found more preferred width. New width = "_s, $$str(newWidth), " Old width = "_s, $$str(this->familyWidth), " in font "_s, font, " nulling out fonts plain: "_s, this->plain, " bold: "_s, this->bold, " italic: "_s, this->italic, " bolditalic: "_s, this->bolditalic}));
		}
		this->familyWidth = newWidth;
		$set(this, plain, ($set(this, bold, ($set(this, italic, ($set(this, bolditalic, nullptr)))))));
		return true;
	} else if ($FontUtilities::debugFonts()) {
		$FontUtilities::logInfo($$str({"Family rejecting font "_s, font, " of less preferred width "_s, $$str(newWidth)}));
	}
	return false;
}

bool FontFamily::closerWeight($Font2D* currFont, $Font2D* font, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if (this->familyWidth != $nc(font)->getWidth()) {
		return false;
	}
	if (currFont == nullptr) {
		return true;
	}
	if ($FontUtilities::debugFonts()) {
		$var($String, var$2, $$str({"New weight for style "_s, $$str(style), ". Curr.font="_s, currFont, " New font="_s, font, " Curr.weight="_s}));
		$var($String, var$1, $$concat(var$2, $$str(+$nc(currFont)->getWeight())));
		$var($String, var$0, $$concat(var$1, " New weight="_s));
		$FontUtilities::logInfo($$concat(var$0, $$str($nc(font)->getWeight())));
	}
	int32_t newWeight = $nc(font)->getWeight();
	do {
		if (style == $Font::PLAIN) {
			goto case$0;
		}
		if (style == $Font::ITALIC) {
			goto case$1;
		}
		if (style == $Font::BOLD) {
			goto case$2;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$3;
		}
		goto case$4;
case$0:
		// Font.PLAIN
		{
		}
case$1:
		// Font.ITALIC
		{
			return (newWeight <= $Font2D::FWEIGHT_NORMAL && newWeight > $nc(currFont)->getWeight());
		}
case$2:
		// Font.BOLD
		{
		}
case$3:
		// Font.BOLD | Font.ITALIC
		{
			int32_t var$3 = $Math::abs(newWeight - $Font2D::FWEIGHT_BOLD);
			return (var$3 < $Math::abs($nc(currFont)->getWeight() - $Font2D::FWEIGHT_BOLD));
		}
case$4:
		// default
		{
			return false;
		}
	} while (false);
}

void FontFamily::setFont($Font2D* font, int32_t style) {
	$useLocalCurrentObjectStackCache();
	if ($FontUtilities::isLogging()) {
		$var($String, msg, nullptr);
		if ($instanceOf($CompositeFont, font)) {
			$assign(msg, $str({"Request to add "_s, $($nc(font)->getFamilyName(nullptr)), " with style "_s, $$str(style), " to family "_s, this->familyName}));
		} else {
			$assign(msg, $str({"Request to add "_s, font, " with style "_s, $$str(style), " to family "_s, this}));
		}
		$FontUtilities::logInfo(msg);
	}
	bool var$0 = ($nc(font)->getRank() > this->familyRank);
	if (var$0 && !isFromSameSource(font)) {
		if ($FontUtilities::isLogging()) {
			$var($String, var$5, $$str({"Rejecting adding "_s, font, " of lower rank "_s}));
			$var($String, var$4, $$concat(var$5, $$str(font->getRank())));
			$var($String, var$3, $$concat(var$4, " to family "_s));
			$var($String, var$2, $$concat(var$3, this));
			$var($String, var$1, $$concat(var$2, " of rank "_s));
			$FontUtilities::logWarning($$concat(var$1, $$str(this->familyRank)));
		}
		return;
	}
	do {
		if (style == $Font::PLAIN) {
			goto case$5;
		}
		if (style == $Font::BOLD) {
			goto case$6;
		}
		if (style == $Font::ITALIC) {
			goto case$7;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$8;
		}
		goto case$9;
case$5:
		// Font.PLAIN
		{
			bool var$6 = preferredWidth(font);
			if (var$6 && closerWeight(this->plain, font, style)) {
				$set(this, plain, font);
			}
			break;
		}
case$6:
		// Font.BOLD
		{
			bool var$7 = preferredWidth(font);
			if (var$7 && closerWeight(this->bold, font, style)) {
				$set(this, bold, font);
			}
			break;
		}
case$7:
		// Font.ITALIC
		{
			bool var$8 = preferredWidth(font);
			if (var$8 && closerWeight(this->italic, font, style)) {
				$set(this, italic, font);
			}
			break;
		}
case$8:
		// Font.BOLD | Font.ITALIC
		{
			bool var$9 = preferredWidth(font);
			if (var$9 && closerWeight(this->bolditalic, font, style)) {
				$set(this, bolditalic, font);
			}
			break;
		}
case$9:
		// default
		{
			break;
		}
	} while (false);
}

$Font2D* FontFamily::getFontWithExactStyleMatch(int32_t style) {
	do {
		if (style == $Font::PLAIN) {
			goto case$10;
		}
		if (style == $Font::BOLD) {
			goto case$11;
		}
		if (style == $Font::ITALIC) {
			goto case$12;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$13;
		}
		goto case$14;
case$10:
		// Font.PLAIN
		{
			return this->plain;
		}
case$11:
		// Font.BOLD
		{
			return this->bold;
		}
case$12:
		// Font.ITALIC
		{
			return this->italic;
		}
case$13:
		// Font.BOLD | Font.ITALIC
		{
			return this->bolditalic;
		}
case$14:
		// default
		{
			return nullptr;
		}
	} while (false);
}

$Font2D* FontFamily::getFont(int32_t style) {
	do {
		if (style == $Font::PLAIN) {
			goto case$15;
		}
		if (style == $Font::BOLD) {
			goto case$16;
		}
		if (style == $Font::ITALIC) {
			goto case$17;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$18;
		}
		goto case$19;
case$15:
		// Font.PLAIN
		{
			return this->plain;
		}
case$16:
		// Font.BOLD
		{
			if (this->bold != nullptr) {
				return this->bold;
			} else if (this->plain != nullptr && $nc(this->plain)->canDoStyle(style)) {
				return this->plain;
			} else {
				return nullptr;
			}
		}
case$17:
		// Font.ITALIC
		{
			if (this->italic != nullptr) {
				return this->italic;
			} else if (this->plain != nullptr && $nc(this->plain)->canDoStyle(style)) {
				return this->plain;
			} else {
				return nullptr;
			}
		}
case$18:
		// Font.BOLD | Font.ITALIC
		{
			if (this->bolditalic != nullptr) {
				return this->bolditalic;
			} else if (this->bold != nullptr && $nc(this->bold)->canDoStyle(style)) {
				return this->bold;
			} else if (this->italic != nullptr && $nc(this->italic)->canDoStyle(style)) {
				return this->italic;
			} else if (this->plain != nullptr && $nc(this->plain)->canDoStyle(style)) {
				return this->plain;
			} else {
				return nullptr;
			}
		}
case$19:
		// default
		{
			return nullptr;
		}
	} while (false);
}

$Font2D* FontFamily::getClosestStyle(int32_t style) {
	do {
		if (style == $Font::PLAIN) {
			goto case$20;
		}
		if (style == $Font::BOLD) {
			goto case$21;
		}
		if (style == $Font::ITALIC) {
			goto case$22;
		}
		if (style == ($Font::BOLD | $Font::ITALIC)) {
			goto case$23;
		}
		break;
case$20:
		// Font.PLAIN
		{
			if (this->bold != nullptr) {
				return this->bold;
			} else if (this->italic != nullptr) {
				return this->italic;
			} else {
				return this->bolditalic;
			}
		}
case$21:
		// Font.BOLD
		{
			if (this->plain != nullptr) {
				return this->plain;
			} else if (this->bolditalic != nullptr) {
				return this->bolditalic;
			} else {
				return this->italic;
			}
		}
case$22:
		// Font.ITALIC
		{
			if (this->bolditalic != nullptr) {
				return this->bolditalic;
			} else if (this->plain != nullptr) {
				return this->plain;
			} else {
				return this->bold;
			}
		}
case$23:
		// Font.BOLD | Font.ITALIC
		{
			if (this->italic != nullptr) {
				return this->italic;
			} else if (this->bold != nullptr) {
				return this->bold;
			} else {
				return this->plain;
			}
		}
	} while (false);
	return nullptr;
}

void FontFamily::addLocaleNames(FontFamily* family, $StringArray* names) {
	$load(FontFamily);
	$synchronized(class$) {
		$init(FontFamily);
		$useLocalCurrentObjectStackCache();
		if (FontFamily::allLocaleNames == nullptr) {
			$assignStatic(FontFamily::allLocaleNames, $new($HashMap));
		}
		for (int32_t i = 0; i < $nc(names)->length; ++i) {
			$nc(FontFamily::allLocaleNames)->put($($nc(names->get(i))->toLowerCase()), family);
		}
	}
}

FontFamily* FontFamily::getLocaleFamily($String* name) {
	$load(FontFamily);
	$synchronized(class$) {
		$init(FontFamily);
		if (FontFamily::allLocaleNames == nullptr) {
			return nullptr;
		}
		return $cast(FontFamily, $nc(FontFamily::allLocaleNames)->get($($nc(name)->toLowerCase())));
	}
}

$FontFamilyArray* FontFamily::getAllFontFamilies() {
	$init(FontFamily);
	$useLocalCurrentObjectStackCache();
	$var($Collection, families, $nc(FontFamily::familyNameMap)->values());
	return $fcast($FontFamilyArray, $nc(families)->toArray($$new($FontFamilyArray, 0)));
}

$String* FontFamily::toString() {
	return $str({"Font family: "_s, this->familyName, " plain="_s, this->plain, " bold="_s, this->bold, " italic="_s, this->italic, " bolditalic="_s, this->bolditalic});
}

void clinit$FontFamily($Class* class$) {
	$assignStatic(FontFamily::familyNameMap, $new($ConcurrentHashMap));
}

FontFamily::FontFamily() {
}

$Class* FontFamily::load$($String* name, bool initialize) {
	$loadClass(FontFamily, name, initialize, &_FontFamily_ClassInfo_, clinit$FontFamily, allocate$FontFamily);
	return class$;
}

$Class* FontFamily::class$ = nullptr;

	} // font
} // sun