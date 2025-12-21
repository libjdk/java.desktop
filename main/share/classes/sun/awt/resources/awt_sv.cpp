#include <sun/awt/resources/awt_sv.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_sv::*)()>(&awt_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_sv_MethodInfo_
};

$Object* allocate$awt_sv($Class* clazz) {
	return $of($alloc(awt_sv));
}

void awt_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"Inmatningsfönster"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"Hårkorsmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"Standardmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"Standarddragmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"Standardsläppmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"Standardmarkör (ej drag)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"Markör för storleksändring (öst)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"Handmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of("Systeminmatningsmetoder"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"Textbaserade åtgärder kanske inte fungerar korrekt på grund av en inkonsekvent uppsättning dynamiskt länkade bibliotek (DLL) som är installerade i systemet. För mer information om detta problem och en tillfällig lösning, se Java(TM) 2 SDK, Standard Edition Release Notes på java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of("Kan inte skapa {0}.  Orsak: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of("Japanska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of("Koreanska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of("Kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"Förenklad kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of("Traditionell kinesiska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"Välj inmatningsmetod"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Mindre"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"Flyttmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"Markör för storleksändring (nordost)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"Markör för storleksändring (nord)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"Markör för storleksändring (nordväst)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"Markör för storleksändring (sydost)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"Markör för storleksändring (syd)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"Markör för storleksändring (sydväst)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"Textmarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"Markör för storleksändring (väst)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"Väntemarkör"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Acceptera"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NUM +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of("Upprepa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Alla kandidater"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of("Alfanumerisk"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of("Alt Graph"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("Et-tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisk"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("Vid"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"Vänster citattecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"Omvänt snedstreck"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backsteg"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Begin"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of(u"Vänster klammerparentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of(u"Höger klammerparentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Avbryt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Cirkumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Rensa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("Hakparentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of("Kodindata"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Kolon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Kommatecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Skriv"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Snabbmeny"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Konvertera"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Kopiera"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Klipp ut"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Dead Above Dot"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of("Dead Above Ring"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Dead Acute"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Dead Breve"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Dead Caron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Dead Cedilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Dead Circumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of("Dead Diaeresis"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Dead Double Acute"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Dead Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Dead Iota"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of("Dead Macron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of("Dead Ogonek"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Dead Semivoiced Sound"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Dead Tilde"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Dead Voiced Sound"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of("NUM ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Ta bort"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of("NUM /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Nedpil"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("End"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Enter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Lika med"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Esc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of("Utropstecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f1"_s),
			$of("F1"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f10"_s),
			$of("F10"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f11"_s),
			$of("F11"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f12"_s),
			$of("F12"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f13"_s),
			$of("F13"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f14"_s),
			$of("F14"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f15"_s),
			$of("F15"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f16"_s),
			$of("F16"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f17"_s),
			$of("F17"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f18"_s),
			$of("F18"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f19"_s),
			$of("F19"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f2"_s),
			$of("F2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f20"_s),
			$of("F20"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f21"_s),
			$of("F21"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f22"_s),
			$of("F22"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f23"_s),
			$of("F23"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f24"_s),
			$of("F24"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f3"_s),
			$of("F3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f4"_s),
			$of("F4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f5"_s),
			$of("F5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f6"_s),
			$of("F6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f7"_s),
			$of("F7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f8"_s),
			$of("F8"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f9"_s),
			$of("F9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.final"_s),
			$of("Slutlig"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"Sök"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Full bredd"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"Större"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Halv bredd"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of(u"Hjälp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Hem"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"Indatametod på/av"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of("Inverterat utropstecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of("Japansk Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of("Japansk Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of("Japanska-latinska"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of(u"Kana-lås"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of("Kanji"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"Vänster"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"Vänsterparentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Minus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"Ändring av läge"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NUM *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of("Ingen konvertering"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("Nummertecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("Parentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of("Klistra in"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Paus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Punkt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of("Sida ned"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of("Sida upp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("Plus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"Föregående kandidat"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of(u"Skärmutskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Egenskaper"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Citattecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Dubbelt citattecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"Höger"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"Högerparentes"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of("Latinska tecken"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Semikolon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of("NUM ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of("NUM ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of("Skift"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Snedstreck"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Blanksteg"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of("Stopp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of("NUM -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tabb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of("Odefinierad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Understreck"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"Ångra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"Okänd"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Upp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.windows"_s),
			$of("Windows"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.def.delay"_s),
			$of("30"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im.style"_s),
			$of(u"på stället"_s)
		})
	});
}

awt_sv::awt_sv() {
}

$Class* awt_sv::load$($String* name, bool initialize) {
	$loadClass(awt_sv, name, initialize, &_awt_sv_ClassInfo_, allocate$awt_sv);
	return class$;
}

$Class* awt_sv::class$ = nullptr;

		} // resources
	} // awt
} // sun