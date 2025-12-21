#include <sun/lwawt/macosx/CInputMethodDescriptor.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/lwawt/macosx/CInputMethod.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $CInputMethod = ::sun::lwawt::macosx::CInputMethod;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CInputMethodDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CInputMethodDescriptor::*)()>(&CInputMethodDescriptor::init$))},
	{"createInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC},
	{"getAvailableLocalesInternal", "()[Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$ObjectArray*(*)()>(&CInputMethodDescriptor::getAvailableLocalesInternal))},
	{"getInputMethodDisplayName", "(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInputMethodIcon", "(Ljava/util/Locale;)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"hasDynamicLocaleList", "()Z", nullptr, $PUBLIC},
	{"nativeGetAvailableLocales", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$List*(*)()>(&CInputMethodDescriptor::nativeGetAvailableLocales))},
	{"nativeInit", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&CInputMethodDescriptor::nativeInit))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeGetAvailableLocales 7
#define _METHOD_INDEX_nativeInit 8

$ClassInfo _CInputMethodDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CInputMethodDescriptor",
	"java.lang.Object",
	"java.awt.im.spi.InputMethodDescriptor",
	nullptr,
	_CInputMethodDescriptor_MethodInfo_
};

$Object* allocate$CInputMethodDescriptor($Class* clazz) {
	return $of($alloc(CInputMethodDescriptor));
}

void CInputMethodDescriptor::init$() {
}

$LocaleArray* CInputMethodDescriptor::getAvailableLocales() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, locales, getAvailableLocalesInternal());
	$var($LocaleArray, tmp, $new($LocaleArray, $nc(locales)->length));
	$System::arraycopy(locales, 0, tmp, 0, locales->length);
	return tmp;
}

$ObjectArray* CInputMethodDescriptor::getAvailableLocalesInternal() {
	$init(CInputMethodDescriptor);
	$useLocalCurrentObjectStackCache();
	$var($List, workList, nativeGetAvailableLocales());
	$var($Locale, currentLocale, $CInputMethod::getNativeLocale());
	if (workList == nullptr || $nc(workList)->isEmpty()) {
		return $new($ObjectArray, {currentLocale != nullptr ? $of(currentLocale) : $($of($Locale::getDefault()))});
	} else {
		if (currentLocale != nullptr && !workList->contains(currentLocale)) {
			workList->add(currentLocale);
		}
		return workList->toArray();
	}
}

bool CInputMethodDescriptor::hasDynamicLocaleList() {
	return false;
}

$String* CInputMethodDescriptor::getInputMethodDisplayName($Locale* inputLocale, $Locale* displayLanguage) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, name, "System Input Methods"_s);
		if ($nc($($Locale::getDefault()))->equals(displayLanguage)) {
			$assign(name, $Toolkit::getProperty("AWT.HostInputMethodDisplayName"_s, name));
		}
		return name;
	}
}

$Image* CInputMethodDescriptor::getInputMethodIcon($Locale* inputLocale) {
	return nullptr;
}

$InputMethod* CInputMethodDescriptor::createInputMethod() {
	return $new($CInputMethod);
}

$String* CInputMethodDescriptor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($LocaleArray, loc, getAvailableLocales());
	$var($String, locnames, nullptr);
	for (int32_t i = 0; i < $nc(loc)->length; ++i) {
		if (locnames == nullptr) {
			$assign(locnames, $nc(loc->get(i))->toString());
		} else {
			$plusAssign(locnames, $$str({","_s, loc->get(i)}));
		}
	}
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "[locales="_s, locnames, ",localelist="_s}));
	$var($String, var$0, $$concat(var$1, (hasDynamicLocaleList() ? "dynamic"_s : "static"_s)));
	return $concat(var$0, "]"_s);
}

void CInputMethodDescriptor::nativeInit() {
	$init(CInputMethodDescriptor);
	$prepareNativeStatic(CInputMethodDescriptor, nativeInit, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$List* CInputMethodDescriptor::nativeGetAvailableLocales() {
	$init(CInputMethodDescriptor);
	$var($List, $ret, nullptr);
	$prepareNativeStatic(CInputMethodDescriptor, nativeGetAvailableLocales, $List*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

void clinit$CInputMethodDescriptor($Class* class$) {
	{
		CInputMethodDescriptor::nativeInit();
	}
}

CInputMethodDescriptor::CInputMethodDescriptor() {
}

$Class* CInputMethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(CInputMethodDescriptor, name, initialize, &_CInputMethodDescriptor_ClassInfo_, clinit$CInputMethodDescriptor, allocate$CInputMethodDescriptor);
	return class$;
}

$Class* CInputMethodDescriptor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun