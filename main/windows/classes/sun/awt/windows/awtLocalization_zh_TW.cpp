#include <sun/awt/windows/awtLocalization_zh_TW.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_zh_TW::*)()>(&awtLocalization_zh_TW::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_zh_TW_MethodInfo_
};

$Object* allocate$awtLocalization_zh_TW($Class* clazz) {
	return $of($alloc(awtLocalization_zh_TW));
}

void awtLocalization_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of(u"所有檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-12"_s)
		})
	});
}

awtLocalization_zh_TW::awtLocalization_zh_TW() {
}

$Class* awtLocalization_zh_TW::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_zh_TW, name, initialize, &_awtLocalization_zh_TW_ClassInfo_, allocate$awtLocalization_zh_TW);
	return class$;
}

$Class* awtLocalization_zh_TW::class$ = nullptr;

		} // windows
	} // awt
} // sun