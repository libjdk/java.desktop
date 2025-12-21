#include <sun/awt/windows/awtLocalization_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_zh_CN::*)()>(&awtLocalization_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_zh_CN_MethodInfo_
};

$Object* allocate$awtLocalization_zh_CN($Class* clazz) {
	return $of($alloc(awtLocalization_zh_CN));
}

void awtLocalization_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of(u"所有文件"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_zh_CN::awtLocalization_zh_CN() {
}

$Class* awtLocalization_zh_CN::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_zh_CN, name, initialize, &_awtLocalization_zh_CN_ClassInfo_, allocate$awtLocalization_zh_CN);
	return class$;
}

$Class* awtLocalization_zh_CN::class$ = nullptr;

		} // windows
	} // awt
} // sun