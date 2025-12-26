#include <sun/awt/X11/XErrorHandlerUtil.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef RESTORE_XERROR_HANDLER
#undef SAVED_XERROR_HANDLER
#undef WITH_XERROR_HANDLER

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XErrorHandlerUtil_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XErrorHandlerUtil, log)},
	{"display", "J", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandlerUtil, display)},
	{"saved_error_handler", "J", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandlerUtil, saved_error_handler)},
	{"saved_error", "Lsun/awt/X11/XErrorEvent;", nullptr, $STATIC | $VOLATILE, $staticField(XErrorHandlerUtil, saved_error)},
	{"current_error_handler", "Lsun/awt/X11/XErrorHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandlerUtil, current_error_handler)},
	{"noisyAwtHandler", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandlerUtil, noisyAwtHandler)},
	{"initPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandlerUtil, initPassed)},
	{}
};

$MethodInfo _XErrorHandlerUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XErrorHandlerUtil::*)()>(&XErrorHandlerUtil::init$))},
	{"RESTORE_XERROR_HANDLER", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&XErrorHandlerUtil::RESTORE_XERROR_HANDLER))},
	{"SAVED_XERROR_HANDLER", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t,$XErrorEvent*)>(&XErrorHandlerUtil::SAVED_XERROR_HANDLER))},
	{"WITH_XERROR_HANDLER", "(Lsun/awt/X11/XErrorHandler;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($XErrorHandler*)>(&XErrorHandlerUtil::WITH_XERROR_HANDLER))},
	{"XSync", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&XErrorHandlerUtil::XSync))},
	{"globalErrorHandler", "(JJ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&XErrorHandlerUtil::globalErrorHandler))},
	{"init", "(J)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int64_t)>(&XErrorHandlerUtil::init))},
	{}
};

$ClassInfo _XErrorHandlerUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.XErrorHandlerUtil",
	"java.lang.Object",
	nullptr,
	_XErrorHandlerUtil_FieldInfo_,
	_XErrorHandlerUtil_MethodInfo_
};

$Object* allocate$XErrorHandlerUtil($Class* clazz) {
	return $of($alloc(XErrorHandlerUtil));
}

$PlatformLogger* XErrorHandlerUtil::log = nullptr;
int64_t XErrorHandlerUtil::display = 0;
int64_t XErrorHandlerUtil::saved_error_handler = 0;
$volatile($XErrorEvent*) XErrorHandlerUtil::saved_error = nullptr;
$XErrorHandler* XErrorHandlerUtil::current_error_handler = nullptr;
bool XErrorHandlerUtil::noisyAwtHandler = false;
bool XErrorHandlerUtil::initPassed = false;

void XErrorHandlerUtil::init$() {
}

void XErrorHandlerUtil::init(int64_t display) {
	$init(XErrorHandlerUtil);
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!XErrorHandlerUtil::initPassed) {
				XErrorHandlerUtil::display = display;
				XErrorHandlerUtil::saved_error_handler = $XlibWrapper::SetToolkitErrorHandler();
				XErrorHandlerUtil::initPassed = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XErrorHandlerUtil::WITH_XERROR_HANDLER($XErrorHandler* handler) {
	$init(XErrorHandlerUtil);
	XSync();
	$assignStatic(XErrorHandlerUtil::saved_error, nullptr);
	$assignStatic(XErrorHandlerUtil::current_error_handler, handler);
}

void XErrorHandlerUtil::RESTORE_XERROR_HANDLER() {
	$init(XErrorHandlerUtil);
	XSync();
	$assignStatic(XErrorHandlerUtil::current_error_handler, nullptr);
}

int32_t XErrorHandlerUtil::SAVED_XERROR_HANDLER(int64_t display, $XErrorEvent* error) {
	$init(XErrorHandlerUtil);
	$useLocalCurrentObjectStackCache();
	if (XErrorHandlerUtil::saved_error_handler != 0) {
	}
	$init($PlatformLogger$Level);
	if ($nc(XErrorHandlerUtil::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($String, var$6, $$str({"Unhandled XErrorEvent: id="_s, $$str($nc(error)->get_resourceid()), ", serial="_s}));
		$var($String, var$5, $$concat(var$6, $$str(error->get_serial())));
		$var($String, var$4, $$concat(var$5, ", ec="_s));
		$var($String, var$3, $$concat(var$4, $$str(error->get_error_code())));
		$var($String, var$2, $$concat(var$3, ", rc="_s));
		$var($String, var$1, $$concat(var$2, $$str(error->get_request_code())));
		$var($String, var$0, $$concat(var$1, ", mc="_s));
		$nc(XErrorHandlerUtil::log)->fine($$concat(var$0, $$str(error->get_minor_code())));
	}
	return 0;
}

int32_t XErrorHandlerUtil::globalErrorHandler(int64_t display, int64_t event_ptr) {
	$init(XErrorHandlerUtil);
	if (XErrorHandlerUtil::noisyAwtHandler) {
		$XlibWrapper::PrintXErrorEvent(display, event_ptr);
	}
	$var($XErrorEvent, event, $new($XErrorEvent, event_ptr));
	$assignStatic(XErrorHandlerUtil::saved_error, event);
	try {
		if (XErrorHandlerUtil::current_error_handler != nullptr) {
			return $nc(XErrorHandlerUtil::current_error_handler)->handleError(display, event);
		} else {
			return SAVED_XERROR_HANDLER(display, event);
		}
	} catch ($Throwable& z) {
		$nc(XErrorHandlerUtil::log)->fine("Error in GlobalErrorHandler"_s, $cast($Throwable, z));
	}
	return 0;
}

void XErrorHandlerUtil::XSync() {
	$init(XErrorHandlerUtil);
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSync(XErrorHandlerUtil::display, 0);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$XErrorHandlerUtil($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(XErrorHandlerUtil::log, $PlatformLogger::getLogger("sun.awt.X11.XErrorHandlerUtil"_s));
	XErrorHandlerUtil::noisyAwtHandler = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "sun.awt.noisyerrorhandler"_s)))))))->booleanValue();
}

XErrorHandlerUtil::XErrorHandlerUtil() {
}

$Class* XErrorHandlerUtil::load$($String* name, bool initialize) {
	$loadClass(XErrorHandlerUtil, name, initialize, &_XErrorHandlerUtil_ClassInfo_, clinit$XErrorHandlerUtil, allocate$XErrorHandlerUtil);
	return class$;
}

$Class* XErrorHandlerUtil::class$ = nullptr;

		} // X11
	} // awt
} // sun