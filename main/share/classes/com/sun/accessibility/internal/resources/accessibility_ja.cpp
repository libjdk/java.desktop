#include <com/sun/accessibility/internal/resources/accessibility_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

$MethodInfo _accessibility_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_ja::*)()>(&accessibility_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_ja_MethodInfo_
};

$Object* allocate$accessibility_ja($Class* clazz) {
	return $of($alloc(accessibility_ja));
}

void accessibility_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"アクティブ"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"アラート"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"作動準備完了"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWTコンポーネント"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"ビジー"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"キャンバス"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"チェック・ボックス"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"チェック"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("child node of"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"短縮"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"カラー・チューザ"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"列ヘッダー"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"コンボ・ボックス"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of("controlledBy"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of("controllerFor"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"デスクトップ・アイコン"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"デスクトップ区画"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"ダイアログ"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"ディレクトリ区画"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"編集可能"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"編集バー"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("embedded by"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"埋込み"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"有効"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"展開可能"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"展開"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"ファイル・チューザ"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"フィラー"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("flows from"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("flows to"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"フォーカス可能"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"フォーカス"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"フッター"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"フレーム"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"ガラス区画"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"ヘッダー"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"水平"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTMLコンテナ"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"アイコン化"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"不確定"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"内部フレーム"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"ラベル"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of("label for"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("labeled by"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"階層化された区画"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"リスト"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"リスト項目"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"子孫を管理"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("member of"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"メニュー"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"メニュー・バー"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"メニュー項目"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"モーダル"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"複数行"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"複数選択可能"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"不透明"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"オプション区画"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"ページ・タブ"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"ページ・タブ・リスト"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"パネル"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"段落"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of("parent window of"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"パスワード・テキスト"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"ポップアップ・メニュー"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"押下"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"進捗モニター"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"進捗バー"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"プッシュ・ボタン"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"ラジオ・ボタン"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"サイズ変更可能"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"ルート区画"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"行ヘッダー"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"ルーラー"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"スクロール・バー"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"スクロール区画"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"選択可能"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"選択"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"セパレータ"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"表示"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"単一行"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"スライダ"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"分割区画"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("subwindow of"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"Swingコンポーネント"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"表"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"テキスト"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"トグル・ボタン"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"展開のトグル"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"ツールバー"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"ツールチップ"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"一時"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"ツリー"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"不完全"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"不明"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"垂直"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"ビューポート"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"可視"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"ウィンドウ"_s)
		})
	});
}

accessibility_ja::accessibility_ja() {
}

$Class* accessibility_ja::load$($String* name, bool initialize) {
	$loadClass(accessibility_ja, name, initialize, &_accessibility_ja_ClassInfo_, allocate$accessibility_ja);
	return class$;
}

$Class* accessibility_ja::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com