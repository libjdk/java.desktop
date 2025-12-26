#include <com/sun/imageio/plugins/common/I18NImpl.h>

#include <java/io/InputStream.h>
#include <java/util/PropertyResourceBundle.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PropertyResourceBundle = ::java::util::PropertyResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$MethodInfo _I18NImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(I18NImpl::*)()>(&I18NImpl::init$))},
	{"getString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&I18NImpl::getString))},
	{}
};

$ClassInfo _I18NImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.I18NImpl",
	"java.lang.Object",
	nullptr,
	nullptr,
	_I18NImpl_MethodInfo_
};

$Object* allocate$I18NImpl($Class* clazz) {
	return $of($alloc(I18NImpl));
}

void I18NImpl::init$() {
}

$String* I18NImpl::getString($String* className, $String* resource_name, $String* key) {
	$load(I18NImpl);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PropertyResourceBundle, bundle, nullptr);
	try {
		$var($InputStream, stream, $Class::forName(className)->getResourceAsStream(resource_name));
		$assign(bundle, $new($PropertyResourceBundle, stream));
	} catch ($Throwable& e) {
		$throwNew($RuntimeException, $cast($Throwable, e));
	}
	return $cast($String, $nc(bundle)->handleGetObject(key));
}

I18NImpl::I18NImpl() {
}

$Class* I18NImpl::load$($String* name, bool initialize) {
	$loadClass(I18NImpl, name, initialize, &_I18NImpl_ClassInfo_, allocate$I18NImpl);
	return class$;
}

$Class* I18NImpl::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com