#include <bug4966171.h>

#include <java/awt/EventQueue.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef SECONDS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFileChooser = ::javax::swing::JFileChooser;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4966171$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4966171$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4966171::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4966171$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4966171$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4966171$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo bug4966171$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4966171$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&bug4966171$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4966171$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4966171$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4966171$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4966171$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4966171$$Lambda$lambda$main$0::class$ = nullptr;

class bug4966171$$Lambda$test$1 : public $Runnable {
	$class(bug4966171$$Lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4966171::test();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4966171$$Lambda$test$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4966171$$Lambda$test$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4966171$$Lambda$test$1::*)()>(&bug4966171$$Lambda$test$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4966171$$Lambda$test$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4966171$$Lambda$test$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4966171$$Lambda$test$1::load$($String* name, bool initialize) {
	$loadClass(bug4966171$$Lambda$test$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4966171$$Lambda$test$1::class$ = nullptr;

$MethodInfo _bug4966171_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4966171::*)()>(&bug4966171::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4966171::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4966171::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4966171::setLookAndFeel))},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4966171::test))},
	{}
};

$ClassInfo _bug4966171_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"bug4966171",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4966171_MethodInfo_
};

$Object* allocate$bug4966171($Class* clazz) {
	return $of($alloc(bug4966171));
}

void bug4966171::init$() {
}

void bug4966171::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4966171$$Lambda$lambda$main$0, laf)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4966171$$Lambda$test$1)));
			}
		}
	}
}

void bug4966171::test() {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = $System::nanoTime();
	$init($TimeUnit);
	int64_t endtime = var$0 + $TimeUnit::SECONDS->toNanos(10);
	while ($System::nanoTime() < endtime) {
		try {
			$var($ByteArrayOutputStream, byteOut, $new($ByteArrayOutputStream));
			{
				$var($ObjectOutputStream, out, $new($ObjectOutputStream, byteOut));
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							out->writeObject($$new($JFileChooser));
						} catch ($Throwable& t$) {
							try {
								out->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						out->close();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
			$var($ByteArrayInputStream, byteIn, $new($ByteArrayInputStream, $(byteOut->toByteArray())));
			{
				$var($ObjectInputStream, in, $new($ObjectInputStream, byteIn));
				{
					$var($Throwable, var$3, nullptr);
					try {
						try {
							$var($JFileChooser, readFc, $cast($JFileChooser, in->readObject()));
						} catch ($Throwable& t$) {
							try {
								in->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$4) {
						$assign(var$3, var$4);
					} /*finally*/ {
						in->close();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
				}
			}
		} catch ($Throwable& e) {
			$throwNew($RuntimeException, $cast($Throwable, e));
		}
	}
}

void bug4966171::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4966171::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4966171::bug4966171() {
}

$Class* bug4966171::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4966171$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4966171$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4966171$$Lambda$test$1::classInfo$.name)) {
			return bug4966171$$Lambda$test$1::load$(name, initialize);
		}
	}
	$loadClass(bug4966171, name, initialize, &_bug4966171_ClassInfo_, allocate$bug4966171);
	return class$;
}

$Class* bug4966171::class$ = nullptr;