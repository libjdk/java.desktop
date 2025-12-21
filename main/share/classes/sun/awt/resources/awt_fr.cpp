#include <sun/awt/resources/awt_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_fr::*)()>(&awt_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_fr_MethodInfo_
};

$Object* allocate$awt_fr($Class* clazz) {
	return $of($alloc(awt_fr));
}

void awt_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"Fenêtre d\'entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"Curseur réticulaire"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"Curseur par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"Curseur de déplacement par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"Curseur de pose par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"Curseur non déplaçant par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of("Curseur de redimensionnement est"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of("Curseur en forme de main"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"Méthodes d\'entrée système"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"Il se peut que les opérations liées au texte ne fonctionnent pas correctement lorsqu\'un ensemble incohérent de DLL est installé sur le système. Vous trouverez plus de détails sur ce problème et sur sa solution dans le document Java(TM) 2 SDK, Standard Edition Release Notes sur java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"Impossible de créer {0}.  Raison : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of("Japonais"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"Coréen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of("Chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"Chinois simplifié"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of("Chinois traditionnel"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"Sélectionner la méthode d\'entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of(u"Inférieur à"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"Curseur de déplacement"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of("Curseur de redimensionnement nord-est"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of("Curseur de redimensionnement nord"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of("Curseur de redimensionnement nord-ouest"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of("Curseur de redimensionnement sud-est"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of("Curseur de redimensionnement sud"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of("Curseur de redimensionnement sud-ouest"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of("Curseur de texte"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of("Curseur de redimensionnement ouest"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of("Curseur d\'attente"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Accepter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of(u"Pavé numérique +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"Répéter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Tous les candidats"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"Alphanumérique"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of("Alt graphique"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("Esperluette"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of(u"Astérisque"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("A commercial"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Accent grave avec chasse"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Barre oblique inverse"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of(u"Retour arrière"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"Début"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Accolade ouvrante"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Accolade fermante"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Verrouillage des majuscules"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Circonflexe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Effacer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("Crochet fermant"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"Entrée de code"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Deux-points"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Virgule"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Composer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Menu contextuel"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Convertir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Copier"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Couper"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Point en chef"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of("Anneau en chef"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Accent aigu"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Dead Breve"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Caron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of(u"Cédille"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Accent circonflexe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of(u"Tréma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Double accent aigu"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Accent grave"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Iota"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of("Macron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of("Ogonek"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of(u"Son semi-voisé"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Tilde"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of(u"Son voisé"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of(u"Pavé numérique ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Supprimer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of(u"Pavé numérique /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Bas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("Fin"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of(u"Entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Egal"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Echap"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of("Point d\'exclamation"_s)
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
			$of("Final"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of("Rechercher"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Pleine largeur"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"Supérieur à"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Demi-largeur"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Aide"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Origine"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"Activation/désactivation de la méthode d\'entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of(u"Insérer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"Point d\'exclamation inversé"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of("Japonais Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of("Japonais Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of("Japonais romain"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of("Kana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Verrouiller Kana"_s)
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
			$of("Gauche"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"Parenthèse ouvrante"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of(u"Méta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Moins"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of("Changement de mode"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of(u"Pavé numérique *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of("Ne pas convertir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of(u"Verrouillage du pavé numérique"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"Dièse"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of(u"Pavé numérique"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("Crochet ouvrant"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of("Coller"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Point"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of("Page suivante"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of(u"Page précédente"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("Plus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"Candidat précédent"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of(u"Impression d\'écran"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Props"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Apostrophe"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Guillemets"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Droite"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"Parenthèse fermante"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"Caractères romains"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of(u"Verrouillage du défilement"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Point-virgule"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of(u"Pavé numérique ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of(u"Pavé numérique ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of("Maj"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Barre oblique"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Espace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of(u"Arrêter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of(u"Pavé numérique -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tab"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of(u"Non défini"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Trait de soulignement"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of("Inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Haut"_s)
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
			$of("sur place"_s)
		})
	});
}

awt_fr::awt_fr() {
}

$Class* awt_fr::load$($String* name, bool initialize) {
	$loadClass(awt_fr, name, initialize, &_awt_fr_ClassInfo_, allocate$awt_fr);
	return class$;
}

$Class* awt_fr::class$ = nullptr;

		} // resources
	} // awt
} // sun