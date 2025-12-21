#include <sun/awt/resources/awt_de.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_de::*)()>(&awt_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_de_MethodInfo_
};

$Object* allocate$awt_de($Class* clazz) {
	return $of($alloc(awt_de));
}

void awt_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of("Eingabefenster"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of("Fadenkreuzcursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of("Standardcursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of("Standardcursor beim Ziehen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of("Standardcursor beim Ablegen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of("Standardcursor NoDrag"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of("Skaliercursor nach rechts"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of("Handcursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of("Systemeingabemethoden"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"Textbasierte Vorgänge funktionieren möglicherweise nicht richtig, weil inkonsistente Dynamic Linking Librarys (DLLs) auf dem System installiert sind. Weitere Informationen zu diesem Problem sowie eine Empfehlung zu der Umgehung finden Sie in den Java(TM) 2 SDK, Standard Edition Release Notes unter java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of("{0} konnte nicht erstellt werden.  Grund: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of("Japanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of("Koreanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of("Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of("Vereinfachtes Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of("Traditionelles Chinesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"Eingabemethode auswählen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Kleiner als"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of("Verschiebecursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of("Skaliercursor nach oben/rechts"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of("Skaliercursor nach oben"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of("Skaliercursor nach oben/links"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of("Skaliercursor nach unten/rechts"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of("Skaliercursor nach unten"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of("Skaliercursor nach unten/links"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of("Textcursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of("Skaliercursor nach links"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of("Wartecursor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Akzeptieren"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of("Wiederholen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Alle Kandidaten"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of("Alphanumerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of("Alt Gr"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("Et-Zeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Sternchen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("Klammeraffe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"Schließendes Anführungszeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"Umgekehrter Schrägstrich"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of(u"Rücktaste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Anfang"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Linke geschweifte Klammer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Rechte geschweifte Klammer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Feststelltaste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Zirkumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of(u"Löschen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"Schließende Klammer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of("Codeeingabe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Doppelpunkt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Komma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Verfassen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"Kontextmenü"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Strg"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Konvertieren"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Kopieren"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Ausschneiden"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Oberer Punkt (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of("Oberer Ring (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Akut (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Breve (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Caron (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Cedille (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Zirkumflex (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of("Trema (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Doppelakut (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Gravis (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Iota (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of("Macron (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of("Ogonek (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Halbstimmhaft (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Tilde (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Stimmhaft (Dead)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of("NumPad ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Entf"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of("NumPad /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("Dollarzeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Unten"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("Ende"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Eingabe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Entspricht"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("ESC"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of("Ausrufezeichen"_s)
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
			$of("Abschluss"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of("Suchen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Volle Breite"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"Größer als"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Halbe Breite"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Hilfe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Pos 1"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of("Eingabemethode ein/aus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Einfg"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of("Umgekehrtes Ausrufezeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of("Japanisch (Hiragana)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of("Japanisch (Katakana)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of("Japanisch (Latein)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Kana Lock"_s)
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
			$of("Links"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of("Linke Klammer"_s)
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
			$of(u"Modusänderung"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of("Nicht konvertieren"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("Nummernzeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"Öffnende Klammer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"Einfügen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Punkt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of("Bild ab"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of("Bild auf"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("Plus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of("Vorheriger Kandidat"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Druck"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Eigenschaften"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of(u"Anführungszeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of(u"Doppelte Anführungszeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Rechts"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of("Rechte Klammer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of("Lateinische Zeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Rollen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Semikolon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of("NumPad ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of("NumPad ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of("Umschalt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of(u"Schrägstrich"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Leertaste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of("Stopp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of("NumPad -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tabulator"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of("Undefiniert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Unterstrich"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"Rückgängig"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of("Unbekannt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Oben"_s)
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
			$of("On-the-Spot"_s)
		})
	});
}

awt_de::awt_de() {
}

$Class* awt_de::load$($String* name, bool initialize) {
	$loadClass(awt_de, name, initialize, &_awt_de_ClassInfo_, allocate$awt_de);
	return class$;
}

$Class* awt_de::class$ = nullptr;

		} // resources
	} // awt
} // sun