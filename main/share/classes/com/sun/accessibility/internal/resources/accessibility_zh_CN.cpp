#include <com/sun/accessibility/internal/resources/accessibility_zh_CN.h>

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

$MethodInfo _accessibility_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_zh_CN::*)()>(&accessibility_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_zh_CN_MethodInfo_
};

$Object* allocate$accessibility_zh_CN($Class* clazz) {
	return $of($alloc(accessibility_zh_CN));
}

void accessibility_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"活动"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"预警"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"待命"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT 组件"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"忙"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"画布"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"复选框"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"已选中"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"子节点"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"已收缩"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"颜色选择器"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"列标题"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"组合框"_s)
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
			$of(u"桌面图标"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"桌面窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"对话"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"目录窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"可编辑"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"编辑栏"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"嵌入者"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"嵌入项"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"启用"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"可展开"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"已展开"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"文件选择器"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"漏斗"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"流自"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"流向"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"可集中"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"已集中"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"页脚"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"框架"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"玻璃窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"页眉"_s)
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
			$of(u"图标式"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"不确定"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"内部框架"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"标签"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"标签属于"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"标签制作者"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"分层窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"列表"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"列表项"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"管理子项"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"属于"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"菜单"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"菜单栏"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"菜单项"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"模态"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"多行"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"多选择"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"不透明"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"选项窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"页标签"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"页标签列表"_s)
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
			$of(u"父窗口"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"口令文本"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"弹出式菜单"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"已按下"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"进度监视器"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"进度栏"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"按钮"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"单选按钮"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"可调整大小"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"根窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"行标题"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"标尺"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"滚动条"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"滚动窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"可选择"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"所选"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"分隔条"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"正在显示"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"单行"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"滑块"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"拆分窗格"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"子窗口"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"旋转组件"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"表"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"文本"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"切换按钮"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"切换展开"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"工具栏"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"工具提示"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"瞬时"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"树"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"已截断"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"未知"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"垂直"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"视窗"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"可见"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"窗口"_s)
		})
	});
}

accessibility_zh_CN::accessibility_zh_CN() {
}

$Class* accessibility_zh_CN::load$($String* name, bool initialize) {
	$loadClass(accessibility_zh_CN, name, initialize, &_accessibility_zh_CN_ClassInfo_, allocate$accessibility_zh_CN);
	return class$;
}

$Class* accessibility_zh_CN::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com