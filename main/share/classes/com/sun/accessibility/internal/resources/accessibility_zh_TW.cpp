#include <com/sun/accessibility/internal/resources/accessibility_zh_TW.h>

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

$MethodInfo _accessibility_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_zh_TW::*)()>(&accessibility_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_zh_TW_MethodInfo_
};

$Object* allocate$accessibility_zh_TW($Class* clazz) {
	return $of($alloc(accessibility_zh_TW));
}

void accessibility_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"作用中"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"警示"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"已配備"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT 元件"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"忙碌中"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"畫布"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"核取方塊"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"已核選"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"子節點"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"已收縮"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"色彩選擇器"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"直欄標題"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"下拉式清單方塊"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of(u"控制者"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of(u"控制對象"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of(u"桌面圖示"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"桌面窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"對話方塊"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"目錄窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"可編輯"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"編輯列"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"內嵌者"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"內嵌"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"已啟用"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"可擴展"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"已擴展"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"檔案選擇器"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"填充物"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"流動自"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"流動至"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"可聚焦"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"已聚焦"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"頁尾"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"框架"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"檢視窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"頁首"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"水平"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTML 容器"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"已圖示化"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"不確定"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"內部框架"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"標籤"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"標示對象"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"標示者"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"分層窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"清單"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"清單項目"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"管理子代"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"所屬成員"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"功能表"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"功能表列"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"功能表項目"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"模態"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"多行"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"可多重選取"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"不透明"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"選項窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"頁面頁籤"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"頁面頁籤清單"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"面板"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"段落"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"父系視窗"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"密碼文字"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"即現式功能表"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"已按下"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"進度監視器"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"進度列"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"下壓按鈕"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"圓鈕"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"可調整大小"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"root 窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"列標題"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"尺規"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"捲軸"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"捲動窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"可選取"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"已選取"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"分隔元"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"顯示"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"單行"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"滑動軸"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"分割窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"子視窗"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"Swing 元件"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"表格"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"文字"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"切換按鈕"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"切換擴展"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"工具列"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"工具提示"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"暫時的"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"樹狀結構"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"已截斷"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"不明的"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"垂直"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"檢視區"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"可見的"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"視窗"_s)
		})
	});
}

accessibility_zh_TW::accessibility_zh_TW() {
}

$Class* accessibility_zh_TW::load$($String* name, bool initialize) {
	$loadClass(accessibility_zh_TW, name, initialize, &_accessibility_zh_TW_ClassInfo_, allocate$accessibility_zh_TW);
	return class$;
}

$Class* accessibility_zh_TW::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com