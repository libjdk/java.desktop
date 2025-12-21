#include <sun/awt/resources/awt_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_ko::*)()>(&awt_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_ko_MethodInfo_
};

$Object* allocate$awt_ko($Class* clazz) {
	return $of($alloc(awt_ko));
}

void awt_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"입력 창"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"십자 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"기본 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"기본 끌기 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"기본 놓기 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"기본 NoDrag 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"동쪽 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"손 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"시스템 입력 방법"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"시스템에 설치된 DLL(Dynamic Linking Libraries) 집합이 일치하지 않아 텍스트 기반 작업이 제대로 작동하지 않을 수 있습니다. 이 문제에 대한 자세한 내용과 해결 방법 제안 사항은 java.sun.com의 Java(TM) 2 SDK, Standard Edition Release Notes를 참조하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"{0}을(를) 생성할 수 없습니다. 원인: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"일본어"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"한국어"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"중국어"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"중국어 간체"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"중국어 번체"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"입력 방법 선택"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Less"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"이동 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"북동 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"북쪽 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"북서 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"남동 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"남쪽 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"남서 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"텍스트 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"서쪽 방향 크기 조정 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"대기 커서"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"동의"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"다시"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"모든 후보"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"영숫자"_s)
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
			$of("Ampersand"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisk"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("At"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Back Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Back Slash"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Begin"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Left Brace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Right Brace"_s)
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
			$of("Circumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Clear"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("Close Bracket"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"코드 입력"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Comma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"구성"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Context Menu"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"변환"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"복사"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"잘라내기"_s)
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
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Down"_s)
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
			$of("Equals"_s)
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
			$of("Exclamation Mark"_s)
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
			$of(u"찾기"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Full-Width"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of("Greater"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Half-Width"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Help"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"히라가나"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"입력 방법 설정/해제"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of("Inverted Exclamation Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"일본어 히라가나"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"일본어 가타카나"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"일본어 로마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"가나"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of(u"가나 잠금"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"간지"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"가타카나"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of("Left"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of("Left Parenthesis"_s)
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
			$of(u"모드 변경"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"변환 안함"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("Number Sign"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("Open Bracket"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"붙여넣기"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Period"_s)
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
			$of("Plus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"이전 후보"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Props"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Double Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Right"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of("Right Parenthesis"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"로마 문자"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Semicolon"_s)
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
			$of("Slash"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Space"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of(u"정지"_s)
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
			$of(u"정의되지 않음"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Underscore"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"실행 취소"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"알 수 없음"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Up"_s)
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

awt_ko::awt_ko() {
}

$Class* awt_ko::load$($String* name, bool initialize) {
	$loadClass(awt_ko, name, initialize, &_awt_ko_ClassInfo_, allocate$awt_ko);
	return class$;
}

$Class* awt_ko::class$ = nullptr;

		} // resources
	} // awt
} // sun