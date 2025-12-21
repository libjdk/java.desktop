#include <sun/awt/resources/awt_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_pt_BR::*)()>(&awt_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_pt_BR_MethodInfo_
};

$Object* allocate$awt_pt_BR($Class* clazz) {
	return $of($alloc(awt_pt_BR));
}

void awt_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of("Janela de Entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of("Cursor em Forma de Cruz"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"Cursor Padrão"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"Cursor Padrão de Arrastar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"Cursor Padrão de Soltar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"Cursor Padrão sem Arrastar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"Cursor de Seta Que Aponta à Direita"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"Cursor em Forma de Mão"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"Métodos de Entrada do Sistema"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"Pode ser que as operações baseadas em texto não funcionem corretamente devido a um conjunto incoerente de bibliotecas de vinculação dinâmica (DLLs) instalado no seu sistema. Para obter mais informações sobre este problema e uma solução recomendada, consulte as Notas de Versão do Java(TM) 2 SDK, Standard Edition, em java.sun.com."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"Não foi possível criar {0}. Motivo: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"Japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of("Coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"Chinês"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"Chinês Simplificado"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"Chinês Tradicional"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"Selecionar Método de Entrada"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Menos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of("Cursor de Movimento"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Nordeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Cima"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Noroeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Sudeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Baixo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of("Cursor de Seta Que Aponta para Sudoeste"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of("Cursor de Texto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"Cursor de Seta Que Aponta à Esquerda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of("Cursor em Forma de Ampulheta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of("Aceitar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of(u"Teclado Numérico +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of("Novamente"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of("Todos os Candidatos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"Alfanumérico"_s)
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
			$of("E Comercial"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisco"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("Arroba"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Crase"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Barra Invertida"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"Começar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Chave Esquerda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Chave Direta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Cancelar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Circunflexo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Limpar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"Parêntese de Fechamento"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"Entrada de Código"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(u"Vírgula"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(u"Vírgula"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of("Compor"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Menu de Contexto"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of("Converter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of("Copiar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of("Recortar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Ponto em Cima"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of(u"Símbolo de Grau"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Acento Agudo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Braquia"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Acento Circunflexo Invertido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Cedilha"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Acento Circunflexo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of("Trema"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Acento Agudo Duplo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Acento Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Lota"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of(u"Mácron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of(u"Gancho Polonês"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Surdo (Som)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Til"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Sonoro (Som)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of(u"Teclado Numérico ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Excluir"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of(u"Teclado Numérico /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of(u"Dólar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Abaixo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("Fim"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Enter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Igual"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Escape"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"Ponto de Exclamação"_s)
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
			$of("Localizar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Largura Total"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of("Maior"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Meia Largura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Ajuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of(u"Início"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"Método de Entrada Ativado/Desativado"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"Ponto de Exclamação Invertido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"Hiragana Japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"Katakana Japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"Romano Japonês"_s)
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
			$of("Esquerda"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"Parêntese Esquerdo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Menos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"Alteração de Modo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of(u"Teclado Numérico *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"Não Converter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"Sinal Numérico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of(u"Teclado Numérico"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"Parêntese de Abertura"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of("Colar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pausar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Ponto Final"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of(u"Página Abaixo"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of(u"Página Acima"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("Mais"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of("Candidato Anterior"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Sustentar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Aspas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Aspas Duplas"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Direita"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"Parêntese Direito"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of("Caracteres Romanos"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(u"Ponto-e-Vírgula"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of(u"Teclado Numérico ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of(u"Teclado Numérico ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of("Shift"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Barra"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"Espaço"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of("Interromper"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of(u"Teclado Numérico -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Guia"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of("Indefinido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Sublinhado"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of("Desfazer"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of("Desconhecido"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Acima"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.windows"_s),
			$of("Janelas"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.def.delay"_s),
			$of("30"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im.style"_s),
			$of("no momento"_s)
		})
	});
}

awt_pt_BR::awt_pt_BR() {
}

$Class* awt_pt_BR::load$($String* name, bool initialize) {
	$loadClass(awt_pt_BR, name, initialize, &_awt_pt_BR_ClassInfo_, allocate$awt_pt_BR);
	return class$;
}

$Class* awt_pt_BR::class$ = nullptr;

		} // resources
	} // awt
} // sun