#include <sun/awt/windows/awtLocalization_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_ko::*)()>(&awtLocalization_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_ko_MethodInfo_
};

$Object* allocate$awtLocalization_ko($Class* clazz) {
	return $of($alloc(awtLocalization_ko));
}

void awtLocalization_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of(u"모든 파일"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_ko::awtLocalization_ko() {
}

$Class* awtLocalization_ko::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_ko, name, initialize, &_awtLocalization_ko_ClassInfo_, allocate$awtLocalization_ko);
	return class$;
}

$Class* awtLocalization_ko::class$ = nullptr;

		} // windows
	} // awt
} // sun