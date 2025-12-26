#include <sun/awt/AppContext$4.h>

#include <java/awt/Window.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AppContext$4$1.h>
#include <sun/awt/AppContext.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $WindowArray = $Array<::java::awt::Window>;
using $Window = ::java::awt::Window;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AppContext = ::sun::awt::AppContext;
using $AppContext$4$1 = ::sun::awt::AppContext$4$1;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

$FieldInfo _AppContext$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, this$0)},
	{"val$notificationLock", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, val$notificationLock)},
	{"val$changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(AppContext$4, val$changeSupport)},
	{}
};

$MethodInfo _AppContext$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/AppContext;Ljava/beans/PropertyChangeSupport;Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(AppContext$4::*)($AppContext*,$PropertyChangeSupport*,Object$*)>(&AppContext$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AppContext$4_EnclosingMethodInfo_ = {
	"sun.awt.AppContext",
	"dispose",
	"()V"
};

$InnerClassInfo _AppContext$4_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$4", nullptr, nullptr, 0},
	{"sun.awt.AppContext$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.AppContext$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_AppContext$4_FieldInfo_,
	_AppContext$4_MethodInfo_,
	nullptr,
	&_AppContext$4_EnclosingMethodInfo_,
	_AppContext$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AppContext"
};

$Object* allocate$AppContext$4($Class* clazz) {
	return $of($alloc(AppContext$4));
}

void AppContext$4::init$($AppContext* this$0, $PropertyChangeSupport* val$changeSupport, Object$* val$notificationLock) {
	$set(this, this$0, this$0);
	$set(this, val$changeSupport, val$changeSupport);
	$set(this, val$notificationLock, val$notificationLock);
}

void AppContext$4::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($WindowArray, windowsToDispose, $Window::getOwnerlessWindows());
	{
		$var($WindowArray, arr$, windowsToDispose);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				try {
					$nc(w)->dispose();
				} catch ($Throwable& t) {
					$init($AppContext);
					$nc($AppContext::log)->finer("exception occurred while disposing app context"_s, $cast($Throwable, t));
				}
			}
		}
	}
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppContext$4$1, this)));
	if (this->val$changeSupport != nullptr) {
		$nc(this->val$changeSupport)->firePropertyChange("guidisposed"_s, false, true);
	}
	$synchronized(this->val$notificationLock) {
		$nc($of(this->val$notificationLock))->notifyAll();
	}
}

AppContext$4::AppContext$4() {
}

$Class* AppContext$4::load$($String* name, bool initialize) {
	$loadClass(AppContext$4, name, initialize, &_AppContext$4_ClassInfo_, allocate$AppContext$4);
	return class$;
}

$Class* AppContext$4::class$ = nullptr;

	} // awt
} // sun