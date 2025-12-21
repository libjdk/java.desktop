#include <sun/awt/resources/awt_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_zh_CN::*)()>(&awt_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_zh_CN_MethodInfo_
};

$Object* allocate$awt_zh_CN($Class* clazz) {
	return $of($alloc(awt_zh_CN));
}

void awt_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"输入窗口"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"十字光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"默认光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"默认拖动光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"默认放置光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"默认无拖动光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"“向东调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"手型光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"系统输入法"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"基于文本的操作可能不能正常运行, 因为系统上安装了一套不一致的动态链接库 (DLL)。有关此问题的详细信息和建议的解决方案, 请参阅 java.sun.com 网站上的 Java(TM) 2 SDK, 标准版发行说明。"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"无法创建{0}。原因: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"日文"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"朝鲜文"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"中文"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"简体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"繁体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"选择输入窗口"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of(u"小于号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"移动光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"“向东北方向调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"“向北调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"“向西北方向调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"“向东南方向调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"“向南调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"“向西南方向调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"文本光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"“向西调整大小”光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"沙漏光标"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"接受"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"重新"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"所有候选项"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"字母数字"_s)
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
			$of(u"& 符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of(u"星号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of(u"@ 符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"后引号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"反斜杠"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"开始"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of(u"左花括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of(u"右花括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Cancel"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of(u"抑扬符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Clear"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"右方括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"代码输入"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(u"冒号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(u"逗号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"编写"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"上下文菜单"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"转换"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"复制"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"剪切"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of(u"上标点"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of(u"上标圆圈"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of(u"带尖音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of(u"短音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of(u"倒置音调符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of(u"变音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of(u"带抑扬符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of(u"分音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of(u"双尖音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of(u"抑音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of(u"阿尔塔符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of(u"长音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of(u"反尾形符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of(u"半浊音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of(u"腭化符号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of(u"浊音符号"_s)
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
			$of(u"美元"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"向下箭头"_s)
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
			$of(u"欧元"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"感叹号"_s)
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
			$of(u"最终"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"查找"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of(u"全角"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"大于号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of(u"半角"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of(u"帮助"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"打开/关闭输入方法"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"倒置感叹号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"日语平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"日语片假名"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"日语罗马字符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"假名"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Kana Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"日本汉字"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"片假名"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"向左箭头"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"左括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of(u"减号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"模式更改"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"不转换"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"井号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"左方括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"粘贴"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of(u"句点"_s)
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
			$of(u"加号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"上一个候选项"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of(u"小道具"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of(u"引号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of(u"双引号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"向右箭头"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"右括号"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"罗马字符"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(u"分号"_s)
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
			$of(u"斜杠"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"空格"_s)
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
			$of(u"未定义"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of(u"下划线"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"撤消"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"未知"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of(u"向上箭头"_s)
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
			$of("on-the-spot"_s)
		})
	});
}

awt_zh_CN::awt_zh_CN() {
}

$Class* awt_zh_CN::load$($String* name, bool initialize) {
	$loadClass(awt_zh_CN, name, initialize, &_awt_zh_CN_ClassInfo_, allocate$awt_zh_CN);
	return class$;
}

$Class* awt_zh_CN::class$ = nullptr;

		} // resources
	} // awt
} // sun