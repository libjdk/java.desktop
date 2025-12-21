#include <com/sun/accessibility/internal/resources/accessibility_ko.h>

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

$MethodInfo _accessibility_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_ko::*)()>(&accessibility_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_ko_MethodInfo_
};

$Object* allocate$accessibility_ko($Class* clazz) {
	return $of($alloc(accessibility_ko));
}

void accessibility_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of(u"활성"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of(u"경보"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of(u"크기"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of(u"AWT 구성요소"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of(u"사용 중"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of(u"캔버스"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"체크박스"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of(u"선택됨"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"하위 노드"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of(u"축소됨"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"색상 선택기"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of(u"열 머리글"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of(u"콤보 상자"_s)
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
			$of(u"바탕화면 아이콘"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of(u"바탕화면 창"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"대화상자"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of(u"디렉토리 창"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of(u"편집 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"편집 도구"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"포함 주체"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"포함"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of(u"사용"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"확장 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"확장됨"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"파일 선택기"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"필러"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"흐름 출처"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"흐름 대상"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of(u"포커스 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of(u"포커스됨"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"바닥글"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of(u"프레임"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of(u"글래스 창"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of(u"머리글"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of(u"가로"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of(u"HTML 컨테이너"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of(u"아이콘화됨"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"확정되지 않음"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of(u"내부 프레임"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of(u"레이블"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"레이블 대상"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of(u"레이블 지정자"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of(u"계층적 창"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of(u"목록"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of(u"목록 항목"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of(u"종속 항목 관리"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of(u"소속 그룹"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"메뉴"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"메뉴 표시줄"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"메뉴 항목"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of(u"모달"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"복수 행"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"다중 선택 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of(u"불투명"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of(u"옵션 창"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"페이지 탭"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"페이지 탭 목록"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of(u"패널"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"단락"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"상위 창"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"비밀번호 텍스트"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"팝업 메뉴"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"누름"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"진행 모니터"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of(u"진행 막대"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"누름 단추"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"라디오 단추"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"크기 조정 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"루트 창"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of(u"행 머리글"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of(u"눈금자"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of(u"스크롤 막대"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of(u"스크롤 창"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"선택 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"선택됨"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of(u"구분 기호"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of(u"표시"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"한 줄"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of(u"슬라이더"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"분할 창"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"하위 창"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of(u"회전 구성요소"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of(u"테이블"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of(u"텍스트"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"토글 단추"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"토글 확장"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of(u"도구 모음"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of(u"도구 설명"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"일시"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"트리"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of(u"잘림"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"알 수 없음"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of(u"세로"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of(u"뷰포트"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of(u"표시 가능"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"창"_s)
		})
	});
}

accessibility_ko::accessibility_ko() {
}

$Class* accessibility_ko::load$($String* name, bool initialize) {
	$loadClass(accessibility_ko, name, initialize, &_accessibility_ko_ClassInfo_, allocate$accessibility_ko);
	return class$;
}

$Class* accessibility_ko::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com