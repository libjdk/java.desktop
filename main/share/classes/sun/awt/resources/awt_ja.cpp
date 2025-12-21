#include <sun/awt/resources/awt_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_ja::*)()>(&awt_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_ja_MethodInfo_
};

$Object* allocate$awt_ja($Class* clazz) {
	return $of($alloc(awt_ja));
}

void awt_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"入力ウィンドウ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"十字カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"デフォルトのカーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"デフォルトのドラッグ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"デフォルトのドロップ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"デフォルトのドラッグ禁止カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"東方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"指型カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"システム入力メソッド"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"システムにインストールされている一連のダイナミック・リンク・ライブラリ(DLL)に矛盾があるため、テキスト・ベースの操作が正しく動作しません。この問題の詳細と回避策は、java.sun.com上にあるJava(TM) 2 SDK, Standard Editionのリリース・ノートを参照してください。"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"{0}を作成できませんでした。理由: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"日本語"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"韓国語"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"中国語"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"中国語(簡体字)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"中国語(繁体字)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"入力メソッドの選択"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of(u"より小さい"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"移動カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"北東方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"北方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"北西方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"南東方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"南方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"南西方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"テキスト・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"西方向のリサイズ・カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"待機カーソル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"確定"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"再度"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"全候補"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"英数字"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of(u"Altグラフ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of(u"アンパサンド"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of(u"アスタリスク"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of(u"アット"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"逆引用符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"バックスラッシュ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"開始"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of(u"左中カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of(u"右中カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of(u"曲折アクセント記号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of(u"クリア"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"右大カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"コード入力"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(u"コロン"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(u"カンマ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"作成"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"コンテキスト・メニュー"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"変換"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"コピー"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"切取り"_s)
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
			$of("NumPad ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Delete"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of("NumPad /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of(u"ドル"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"下"_s)
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
			$of(u"等号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Esc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of(u"ユーロ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"感嘆符"_s)
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
			$of(u"最終"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"検索"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of(u"全角"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"より大きい"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of(u"半角"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of(u"ヘルプ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"ひらがな"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"入力メソッドOn-Off"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"逆感嘆符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"日本語のひらがな"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"日本語のカタカナ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"日本語のローマ字"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"かな"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of(u"カナ・ロック"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"漢字"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"カタカナ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"左"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"左丸カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of(u"メタ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of(u"マイナス"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"モード変更"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"無変換"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"番号記号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"左大カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"貼付け"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of(u"一時停止"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of(u"ピリオド"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of("Page Down"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of("Page Up"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of(u"プラス"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"前候補"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of(u"プロパティ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of(u"引用符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of(u"二重引用符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"右"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"右丸カッコ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"ローマ字"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(u"セミコロン"_s)
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
			$of("Shift"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of(u"スラッシュ"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"スペース"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of(u"停止"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of("NumPad -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tab"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of(u"未定義"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of(u"アンダースコア"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"元に戻す"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"不明"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of(u"上"_s)
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
			$of(u"即座"_s)
		})
	});
}

awt_ja::awt_ja() {
}

$Class* awt_ja::load$($String* name, bool initialize) {
	$loadClass(awt_ja, name, initialize, &_awt_ja_ClassInfo_, allocate$awt_ja);
	return class$;
}

$Class* awt_ja::class$ = nullptr;

		} // resources
	} // awt
} // sun