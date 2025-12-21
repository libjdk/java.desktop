#include <sun/awt/resources/awt_it.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_it::*)()>(&awt_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_it_MethodInfo_
};

$Object* allocate$awt_it($Class* clazz) {
	return $of($alloc(awt_it));
}

void awt_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of("Finestra di immissione"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of("Puntatore a croce"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of("Cursore predefinito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of("Cursore di trascinamento predefinito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of("Cursore di rilasciamento predefinito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of("Cursore NoDrag predefinito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of("Cursore di ridimensionamento orientale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of("Cursore mano"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of("Metodi di immissione di sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of("Le operazioni sul testo possono non funzionare correttamente, a causa di una serie non coerente di DLL installate sul sistema. Per ulteriori informazioni su questo problema e per la soluzione suggerita, vedere le note di rilascio di Java(TM) 2 SDK, Standard Edition su java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of("Impossibile creare {0}.  Motivo: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of("Giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of("Coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of("Cinese"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of("Cinese semplificato"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of("Cinese tradizionale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of("Seleziona metodo di immissione"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Minore"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of("Sposta cursore"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of("Cursore di ridimensionamento nordorientale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of("Cursore di ridimensionamento settentrionale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of("Cursore di ridimensionamento nordoccidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of("Cursore di ridimensionamento sudorientale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of("Cursore di ridimensionamento meridionale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of("Cursore di ridimensionamento sudoccidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of("Cursore testo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of("Cursore di ridimensionamento occidentale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of("Cursore attesa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Accetto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of("Ancora"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Tutti i candidati"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of("Alfanumerico"_s)
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
			$of("E commerciale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisco"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("Chiocciola"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Apice invertito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Barra rovesciata"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Inizio"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Parentesi graffa aperta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Parentesi graffa chiusa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Annulla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Bloc Maiusc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Circonflesso"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Cancella"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("Parentesi quadra chiusa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of("Immissione codice"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Due punti"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Virgola"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Componi"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Menu di scelta rapida"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Converti"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Copia"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Taglia"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Punto superiore non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of("Cerchio superiore non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Acuto non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Breve non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Caron non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Cediglia non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Circonflesso non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of("Dieresi non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Acuto doppio non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Grave non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Iota non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of("Macron non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of("Ogonek non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Suono semivocalizzato non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Tilde non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Suono vocalizzato non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of("NumPad ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Elimina"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of("NumPad /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("Dollaro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"Giù"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("Fine"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Invio"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Uguale"_s)
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
			$of("Punto esclamativo"_s)
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
			$of("Finale"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of("Trova"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Spessore pieno"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of("Maggiore"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Spessore ridotto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("?"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of("Metodo immissione On/Off"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Ins"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of("Punto esclamativo invertito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of("Hiragana giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of("Katakana giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of("Romano Giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Blocco Kana"_s)
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
			$of("Sinistra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of("Parentesi aperta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Meno"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"Modifica modalità"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of("Non convertire"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Bloc Num"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("Cancelletto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("Parentesi quadra aperta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of("Incolla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Sospendi"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Punto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of(u"Pg Giù"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of("Pg Su"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of(u"Più"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of("Candidato precedente"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Stamp"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of(u"Proprietà"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Apice"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Virgolette"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Destra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of("Parentesi chiusa"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of("Caratteri romani"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Bloc Scorr"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Punto e virgola"_s)
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
			$of("Maiusc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Barra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Barra spaziatrice"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of("Arresta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of("NumPad -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tabulazione"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of("Non definito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Sottolineatura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of("Annulla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of("Sconosciuto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Su"_s)
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
			$of("immediato"_s)
		})
	});
}

awt_it::awt_it() {
}

$Class* awt_it::load$($String* name, bool initialize) {
	$loadClass(awt_it, name, initialize, &_awt_it_ClassInfo_, allocate$awt_it);
	return class$;
}

$Class* awt_it::class$ = nullptr;

		} // resources
	} // awt
} // sun