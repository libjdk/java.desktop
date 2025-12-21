#include <sun/awt/resources/awtosx.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awtosx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtosx::*)()>(&awtosx::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtosx_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awtosx",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtosx_MethodInfo_
};

$Object* allocate$awtosx($Class* clazz) {
	return $of($alloc(awtosx));
}

void awtosx::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtosx::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("<"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of(u"⌨ +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of(u"⌥"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of(u"⌥"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("&"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("*"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("@"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("`"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("\\"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of(u"⌫"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("["_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("]"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of(u"⎋"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of(u"⇪"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("^"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of(u"⌧"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("]"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(","_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of(u"⌃"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of(u"⌨ ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of(u"⌦"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of(u"⌨ /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"↓"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of(u"↘"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of(u"⏎"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("="_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of(u"⎋"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of("!"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(">"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of(u"↖"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"¡"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"←"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of("("_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of(u"⌘"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("-"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of(u"⌨ *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("#"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of(u"⌨"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("["_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of(u"⇟"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of(u"⇞"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("+"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of(u"⎙"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("\'"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("\""_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"→"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(")"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(";"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of(u"⌨ ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of(u"⌨ ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of(u"⇧"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("/"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"␣"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of(u"⌨ -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of(u"⇥"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("_"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of(u"↑"_s)
		})
	});
}

awtosx::awtosx() {
}

$Class* awtosx::load$($String* name, bool initialize) {
	$loadClass(awtosx, name, initialize, &_awtosx_ClassInfo_, allocate$awtosx);
	return class$;
}

$Class* awtosx::class$ = nullptr;

		} // resources
	} // awt
} // sun