#include <sun/awt/windows/awtLocalization_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _awtLocalization_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awtLocalization_ja::*)()>(&awtLocalization_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awtLocalization_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.windows.awtLocalization_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awtLocalization_ja_MethodInfo_
};

$Object* allocate$awtLocalization_ja($Class* clazz) {
	return $of($alloc(awtLocalization_ja));
}

void awtLocalization_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("allFiles"_s),
			$of(u"すべてのファイル"_s)
		}),
		$$new($ObjectArray, {
			$of("menuFont"_s),
			$of("SansSerif-plain-11"_s)
		})
	});
}

awtLocalization_ja::awtLocalization_ja() {
}

$Class* awtLocalization_ja::load$($String* name, bool initialize) {
	$loadClass(awtLocalization_ja, name, initialize, &_awtLocalization_ja_ClassInfo_, allocate$awtLocalization_ja);
	return class$;
}

$Class* awtLocalization_ja::class$ = nullptr;

		} // windows
	} // awt
} // sun