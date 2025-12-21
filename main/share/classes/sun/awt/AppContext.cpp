#include <sun/awt/AppContext.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalThreadStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/SoftReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/access/JavaAWTAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/awt/AppContext$1.h>
#include <sun/awt/AppContext$2.h>
#include <sun/awt/AppContext$3.h>
#include <sun/awt/AppContext$4.h>
#include <sun/awt/AppContext$5.h>
#include <sun/awt/AppContext$6.h>
#include <sun/awt/AppContext$CreateThreadAction.h>
#include <sun/awt/AppContext$GetAppContextLock.h>
#include <sun/awt/AppContext$PostShutdownEventRunnable.h>
#include <sun/awt/AppContext$State.h>
#include <sun/awt/MostRecentKeyValue.h>
#include <sun/awt/SunToolkit.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BEING_DISPOSED
#undef DISPOSAL_TIMEOUT
#undef DISPOSED
#undef DISPOSED_PROPERTY_NAME
#undef EVENT_QUEUE_COND_KEY
#undef EVENT_QUEUE_KEY
#undef EVENT_QUEUE_LOCK_KEY
#undef GUI_DISPOSED
#undef THREAD_INTERRUPT_TIMEOUT
#undef VALID

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $ThreadGroupArray = $Array<::java::lang::ThreadGroup>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Toolkit = ::java::awt::Toolkit;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalThreadStateException = ::java::lang::IllegalThreadStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Supplier = ::java::util::function::Supplier;
using $JavaAWTAccess = ::jdk::internal::access::JavaAWTAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $AppContext$1 = ::sun::awt::AppContext$1;
using $AppContext$2 = ::sun::awt::AppContext$2;
using $AppContext$3 = ::sun::awt::AppContext$3;
using $AppContext$4 = ::sun::awt::AppContext$4;
using $AppContext$5 = ::sun::awt::AppContext$5;
using $AppContext$6 = ::sun::awt::AppContext$6;
using $AppContext$CreateThreadAction = ::sun::awt::AppContext$CreateThreadAction;
using $AppContext$GetAppContextLock = ::sun::awt::AppContext$GetAppContextLock;
using $AppContext$PostShutdownEventRunnable = ::sun::awt::AppContext$PostShutdownEventRunnable;
using $AppContext$State = ::sun::awt::AppContext$State;
using $MostRecentKeyValue = ::sun::awt::MostRecentKeyValue;
using $SunToolkit = ::sun::awt::SunToolkit;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {

class AppContext$$Lambda$lambda$dispose$0 : public $PrivilegedAction {
	$class(AppContext$$Lambda$lambda$dispose$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(AppContext* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$dispose$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AppContext$$Lambda$lambda$dispose$0>());
	}
	AppContext* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AppContext$$Lambda$lambda$dispose$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AppContext$$Lambda$lambda$dispose$0, inst$)},
	{}
};
$MethodInfo AppContext$$Lambda$lambda$dispose$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/AppContext;)V", nullptr, $PUBLIC, $method(static_cast<void(AppContext$$Lambda$lambda$dispose$0::*)(AppContext*)>(&AppContext$$Lambda$lambda$dispose$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AppContext$$Lambda$lambda$dispose$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.AppContext$$Lambda$lambda$dispose$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* AppContext$$Lambda$lambda$dispose$0::load$($String* name, bool initialize) {
	$loadClass(AppContext$$Lambda$lambda$dispose$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AppContext$$Lambda$lambda$dispose$0::class$ = nullptr;

$FieldInfo _AppContext_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AppContext, log)},
	{"EVENT_QUEUE_KEY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppContext, EVENT_QUEUE_KEY)},
	{"EVENT_QUEUE_LOCK_KEY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppContext, EVENT_QUEUE_LOCK_KEY)},
	{"EVENT_QUEUE_COND_KEY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppContext, EVENT_QUEUE_COND_KEY)},
	{"threadGroup2appContext", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ThreadGroup;Lsun/awt/AppContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AppContext, threadGroup2appContext)},
	{"mainAppContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(AppContext, mainAppContext)},
	{"getAppContextLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AppContext, getAppContextLock)},
	{"table", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AppContext, table)},
	{"threadGroup", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $FINAL, $field(AppContext, threadGroup)},
	{"changeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(AppContext, changeSupport)},
	{"DISPOSED_PROPERTY_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppContext, DISPOSED_PROPERTY_NAME)},
	{"GUI_DISPOSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppContext, GUI_DISPOSED)},
	{"state", "Lsun/awt/AppContext$State;", nullptr, $PRIVATE | $VOLATILE, $field(AppContext, state)},
	{"numAppContexts", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AppContext, numAppContexts)},
	{"contextClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(AppContext, contextClassLoader)},
	{"threadAppContext", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lsun/awt/AppContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AppContext, threadAppContext)},
	{"DISPOSAL_TIMEOUT", "J", nullptr, $PRIVATE, $field(AppContext, DISPOSAL_TIMEOUT)},
	{"THREAD_INTERRUPT_TIMEOUT", "J", nullptr, $PRIVATE, $field(AppContext, THREAD_INTERRUPT_TIMEOUT)},
	{"mostRecentKeyValue", "Lsun/awt/MostRecentKeyValue;", nullptr, $PRIVATE, $field(AppContext, mostRecentKeyValue)},
	{"shadowMostRecentKeyValue", "Lsun/awt/MostRecentKeyValue;", nullptr, $PRIVATE, $field(AppContext, shadowMostRecentKeyValue)},
	{}
};

$MethodInfo _AppContext_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(static_cast<void(AppContext::*)($ThreadGroup*)>(&AppContext::init$))},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(AppContext::*)($String*,$PropertyChangeListener*)>(&AppContext::addPropertyChangeListener))},
	{"dispose", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppContext::*)()>(&AppContext::dispose)), "java.lang.IllegalThreadStateException"},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AppContext::*)(Object$*)>(&AppContext::get))},
	{"getAppContext", "()Lsun/awt/AppContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AppContext*(*)()>(&AppContext::getAppContext))},
	{"getAppContexts", "()Ljava/util/Set;", "()Ljava/util/Set<Lsun/awt/AppContext;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)()>(&AppContext::getAppContexts))},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $method(static_cast<$ClassLoader*(AppContext::*)()>(&AppContext::getContextClassLoader))},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$PropertyChangeListenerArray*(AppContext::*)()>(&AppContext::getPropertyChangeListeners))},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$PropertyChangeListenerArray*(AppContext::*)($String*)>(&AppContext::getPropertyChangeListeners))},
	{"getSoftReferenceValue", "(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljava/util/function/Supplier<TT;>;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Supplier*)>(&AppContext::getSoftReferenceValue))},
	{"getThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $method(static_cast<$ThreadGroup*(AppContext::*)()>(&AppContext::getThreadGroup))},
	{"initMainAppContext", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&AppContext::initMainAppContext))},
	{"isDisposed", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(AppContext::*)()>(&AppContext::isDisposed))},
	{"isMainContext", "(Lsun/awt/AppContext;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(AppContext*)>(&AppContext::isMainContext))},
	{"lambda$dispose$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(AppContext::*)()>(&AppContext::lambda$dispose$0))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AppContext::*)(Object$*,Object$*)>(&AppContext::put))},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(AppContext::*)(Object$*)>(&AppContext::remove))},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(AppContext::*)($String*,$PropertyChangeListener*)>(&AppContext::removePropertyChangeListener))},
	{"stopEventDispatchThreads", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&AppContext::stopEventDispatchThreads))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AppContext_InnerClassesInfo_[] = {
	{"sun.awt.AppContext$CreateThreadAction", "sun.awt.AppContext", "CreateThreadAction", $STATIC | $FINAL},
	{"sun.awt.AppContext$PostShutdownEventRunnable", "sun.awt.AppContext", "PostShutdownEventRunnable", $STATIC | $FINAL},
	{"sun.awt.AppContext$State", "sun.awt.AppContext", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"sun.awt.AppContext$GetAppContextLock", "sun.awt.AppContext", "GetAppContextLock", $PRIVATE | $STATIC},
	{"sun.awt.AppContext$6", nullptr, nullptr, 0},
	{"sun.awt.AppContext$5", nullptr, nullptr, 0},
	{"sun.awt.AppContext$4", nullptr, nullptr, 0},
	{"sun.awt.AppContext$3", nullptr, nullptr, 0},
	{"sun.awt.AppContext$2", nullptr, nullptr, 0},
	{"sun.awt.AppContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AppContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.AppContext",
	"java.lang.Object",
	nullptr,
	_AppContext_FieldInfo_,
	_AppContext_MethodInfo_,
	nullptr,
	nullptr,
	_AppContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.AppContext$CreateThreadAction,sun.awt.AppContext$PostShutdownEventRunnable,sun.awt.AppContext$State,sun.awt.AppContext$GetAppContextLock,sun.awt.AppContext$6,sun.awt.AppContext$6$1,sun.awt.AppContext$5,sun.awt.AppContext$4,sun.awt.AppContext$4$1,sun.awt.AppContext$3,sun.awt.AppContext$2,sun.awt.AppContext$1"
};

$Object* allocate$AppContext($Class* clazz) {
	return $of($alloc(AppContext));
}

$PlatformLogger* AppContext::log = nullptr;
$Object* AppContext::EVENT_QUEUE_KEY = nullptr;
$Object* AppContext::EVENT_QUEUE_LOCK_KEY = nullptr;
$Object* AppContext::EVENT_QUEUE_COND_KEY = nullptr;
$Map* AppContext::threadGroup2appContext = nullptr;
$volatile(AppContext*) AppContext::mainAppContext = nullptr;
$Object* AppContext::getAppContextLock = nullptr;
$String* AppContext::DISPOSED_PROPERTY_NAME = nullptr;
$String* AppContext::GUI_DISPOSED = nullptr;
$AtomicInteger* AppContext::numAppContexts = nullptr;
$ThreadLocal* AppContext::threadAppContext = nullptr;

$Set* AppContext::getAppContexts() {
	$init(AppContext);
	$synchronized(AppContext::threadGroup2appContext) {
		return $new($HashSet, $($nc(AppContext::threadGroup2appContext)->values()));
	}
}

bool AppContext::isDisposed() {
	$init($AppContext$State);
	return this->state == $AppContext$State::DISPOSED;
}

void AppContext::init$($ThreadGroup* threadGroup) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, table, $new($HashMap));
	$set(this, changeSupport, nullptr);
	$init($AppContext$State);
	$set(this, state, $AppContext$State::VALID);
	this->DISPOSAL_TIMEOUT = 5000;
	this->THREAD_INTERRUPT_TIMEOUT = 1000;
	$set(this, mostRecentKeyValue, nullptr);
	$set(this, shadowMostRecentKeyValue, nullptr);
	$nc(AppContext::numAppContexts)->incrementAndGet();
	$set(this, threadGroup, threadGroup);
	$nc(AppContext::threadGroup2appContext)->put(threadGroup, this);
	$set(this, contextClassLoader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppContext$1, this)))));
	$var($Lock, eventQueuePushPopLock, $new($ReentrantLock));
	put(AppContext::EVENT_QUEUE_LOCK_KEY, eventQueuePushPopLock);
	$var($Condition, eventQueuePushPopCond, eventQueuePushPopLock->newCondition());
	put(AppContext::EVENT_QUEUE_COND_KEY, eventQueuePushPopCond);
}

void AppContext::initMainAppContext() {
	$init(AppContext);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppContext$2)));
}

AppContext* AppContext::getAppContext() {
	$init(AppContext);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(AppContext::numAppContexts)->get() == 1 && AppContext::mainAppContext != nullptr) {
		return AppContext::mainAppContext;
	}
	$var(AppContext, appContext, $cast(AppContext, $nc(AppContext::threadAppContext)->get()));
	if (nullptr == appContext) {
		$assign(appContext, $cast(AppContext, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AppContext$3)))));
	}
	return appContext;
}

bool AppContext::isMainContext(AppContext* ctx) {
	$init(AppContext);
	return (ctx != nullptr && ctx == AppContext::mainAppContext);
}

void AppContext::dispose() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->threadGroup)->parentOf($($($Thread::currentThread())->getThreadGroup()))) {
		$throwNew($IllegalThreadStateException, "Current Thread is contained within AppContext to be disposed."_s);
	}
	$synchronized(this) {
		$init($AppContext$State);
		if (this->state != $AppContext$State::VALID) {
			return;
		}
		$set(this, state, $AppContext$State::BEING_DISPOSED);
	}
	$var($PropertyChangeSupport, changeSupport, this->changeSupport);
	if (changeSupport != nullptr) {
		changeSupport->firePropertyChange(AppContext::DISPOSED_PROPERTY_NAME, false, true);
	}
	$var($Object, notificationLock, $new($Object));
	$var($Runnable, runnable, $new($AppContext$4, this, changeSupport, notificationLock));
	$synchronized(notificationLock) {
		$SunToolkit::postEvent(this, $$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), runnable));
		try {
			$of(notificationLock)->wait(this->DISPOSAL_TIMEOUT);
		} catch ($InterruptedException& e) {
		}
	}
	$assign(runnable, $new($AppContext$5, this, notificationLock));
	$synchronized(notificationLock) {
		$SunToolkit::postEvent(this, $$new($InvocationEvent, $($Toolkit::getDefaultToolkit()), runnable));
		try {
			$of(notificationLock)->wait(this->DISPOSAL_TIMEOUT);
		} catch ($InterruptedException& e) {
		}
	}
	$synchronized(this) {
		$init($AppContext$State);
		$set(this, state, $AppContext$State::DISPOSED);
	}
	$nc(this->threadGroup)->interrupt();
	int64_t startTime = $System::currentTimeMillis();
	int64_t endTime = startTime + this->THREAD_INTERRUPT_TIMEOUT;
	while (true) {
		bool var$0 = ($nc(this->threadGroup)->activeCount() > 0);
		if (!(var$0 && ($System::currentTimeMillis() < endTime))) {
			break;
		}
		{
			try {
				$Thread::sleep(10);
			} catch ($InterruptedException& e) {
			}
		}
	}
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(AppContext$$Lambda$lambda$dispose$0, this)));
	startTime = $System::currentTimeMillis();
	endTime = startTime + this->THREAD_INTERRUPT_TIMEOUT;
	while (true) {
		bool var$1 = ($nc(this->threadGroup)->activeCount() > 0);
		if (!(var$1 && ($System::currentTimeMillis() < endTime))) {
			break;
		}
		{
			try {
				$Thread::sleep(10);
			} catch ($InterruptedException& e) {
			}
		}
	}
	int32_t numSubGroups = $nc(this->threadGroup)->activeGroupCount();
	if (numSubGroups > 0) {
		$var($ThreadGroupArray, subGroups, $new($ThreadGroupArray, numSubGroups));
		numSubGroups = $nc(this->threadGroup)->enumerate(subGroups);
		for (int32_t subGroup = 0; subGroup < numSubGroups; ++subGroup) {
			$nc(AppContext::threadGroup2appContext)->remove(subGroups->get(subGroup));
		}
	}
	$nc(AppContext::threadGroup2appContext)->remove(this->threadGroup);
	$nc(AppContext::threadAppContext)->set(nullptr);
	try {
		$nc(this->threadGroup)->destroy();
	} catch ($IllegalThreadStateException& e) {
	}
	$synchronized(this->table) {
		$nc(this->table)->clear();
	}
	$nc(AppContext::numAppContexts)->decrementAndGet();
	$set(this, mostRecentKeyValue, nullptr);
}

void AppContext::stopEventDispatchThreads() {
	$init(AppContext);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($Iterator, i$, $nc($(getAppContexts()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(AppContext, appContext, $cast(AppContext, i$->next()));
			{
				if ($nc(appContext)->isDisposed()) {
					continue;
				}
				$var($Runnable, r, $new($AppContext$PostShutdownEventRunnable, appContext));
				if (appContext != AppContext::getAppContext()) {
					$var($PrivilegedAction, action, $new($AppContext$CreateThreadAction, appContext, r));
					$var($Thread, thread, $cast($Thread, $AccessController::doPrivileged(action)));
					$nc(thread)->start();
				} else {
					r->run();
				}
			}
		}
	}
}

$Object* AppContext::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->table) {
		$var($MostRecentKeyValue, recent, this->mostRecentKeyValue);
		if ((recent != nullptr) && ($equals(recent->key, key))) {
			return $of(recent->value);
		}
		$var($Object, value, $nc(this->table)->get(key));
		if (this->mostRecentKeyValue == nullptr) {
			$set(this, mostRecentKeyValue, $new($MostRecentKeyValue, key, value));
			$set(this, shadowMostRecentKeyValue, $new($MostRecentKeyValue, key, value));
		} else {
			$var($MostRecentKeyValue, auxKeyValue, this->mostRecentKeyValue);
			$nc(this->shadowMostRecentKeyValue)->setPair(key, value);
			$set(this, mostRecentKeyValue, this->shadowMostRecentKeyValue);
			$set(this, shadowMostRecentKeyValue, auxKeyValue);
		}
		return $of(value);
	}
}

$Object* AppContext::put(Object$* key, Object$* value) {
	$synchronized(this->table) {
		$var($MostRecentKeyValue, recent, this->mostRecentKeyValue);
		if ((recent != nullptr) && ($equals(recent->key, key))) {
			$set(recent, value, value);
		}
		return $of($nc(this->table)->put(key, value));
	}
}

$Object* AppContext::remove(Object$* key) {
	$synchronized(this->table) {
		$var($MostRecentKeyValue, recent, this->mostRecentKeyValue);
		if ((recent != nullptr) && ($equals(recent->key, key))) {
			$set(recent, value, nullptr);
		}
		return $of($nc(this->table)->remove(key));
	}
}

$ThreadGroup* AppContext::getThreadGroup() {
	return this->threadGroup;
}

$ClassLoader* AppContext::getContextClassLoader() {
	return this->contextClassLoader;
}

$String* AppContext::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "[threadGroup="_s}));
	$var($String, var$0, $$concat(var$1, $($nc(this->threadGroup)->getName())));
	return $concat(var$0, "]"_s);
}

$PropertyChangeListenerArray* AppContext::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

void AppContext::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($PropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(propertyName, listener);
	}
}

void AppContext::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->changeSupport == nullptr) {
			return;
		}
		$nc(this->changeSupport)->removePropertyChangeListener(propertyName, listener);
	}
}

$PropertyChangeListenerArray* AppContext::getPropertyChangeListeners($String* propertyName) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners(propertyName);
	}
}

$Object* AppContext::getSoftReferenceValue(Object$* key, $Supplier* supplier) {
	$init(AppContext);
	$useLocalCurrentObjectStackCache();
	$var(AppContext, appContext, AppContext::getAppContext());
	$var($SoftReference, ref, $cast($SoftReference, $nc(appContext)->get(key)));
	if (ref != nullptr) {
		$var($Object, object, ref->get());
		if (object != nullptr) {
			return $of(object);
		}
	}
	$var($Object, object, $nc(supplier)->get());
	$assign(ref, $new($SoftReference, object));
	appContext->put(key, ref);
	return $of(object);
}

$Void* AppContext::lambda$dispose$0() {
	$nc(this->threadGroup)->stop();
	return nullptr;
}

void clinit$AppContext($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AppContext::DISPOSED_PROPERTY_NAME, "disposed"_s);
	$assignStatic(AppContext::GUI_DISPOSED, "guidisposed"_s);
	$assignStatic(AppContext::log, $PlatformLogger::getLogger("sun.awt.AppContext"_s));
	$assignStatic(AppContext::EVENT_QUEUE_KEY, $new($StringBuffer, "EventQueue"_s));
	$assignStatic(AppContext::EVENT_QUEUE_LOCK_KEY, $new($StringBuilder, "EventQueue.Lock"_s));
	$assignStatic(AppContext::EVENT_QUEUE_COND_KEY, $new($StringBuilder, "EventQueue.Condition"_s));
	$assignStatic(AppContext::threadGroup2appContext, $Collections::synchronizedMap($$new($IdentityHashMap)));
	$assignStatic(AppContext::mainAppContext, nullptr);
	$assignStatic(AppContext::getAppContextLock, $new($AppContext$GetAppContextLock));
	$assignStatic(AppContext::numAppContexts, $new($AtomicInteger));
	$assignStatic(AppContext::threadAppContext, $new($ThreadLocal));
	{
		$SharedSecrets::setJavaAWTAccess($$new($AppContext$6));
	}
}

AppContext::AppContext() {
}

$Class* AppContext::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AppContext$$Lambda$lambda$dispose$0::classInfo$.name)) {
			return AppContext$$Lambda$lambda$dispose$0::load$(name, initialize);
		}
	}
	$loadClass(AppContext, name, initialize, &_AppContext_ClassInfo_, clinit$AppContext, allocate$AppContext);
	return class$;
}

$Class* AppContext::class$ = nullptr;

	} // awt
} // sun