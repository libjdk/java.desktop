#include <java/awt/RenderingHints$Key.h>

#include <java/awt/RenderingHints.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $HashMap = ::java::util::HashMap;

namespace java {
	namespace awt {

$FieldInfo _RenderingHints$Key_FieldInfo_[] = {
	{"identitymap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(RenderingHints$Key, identitymap)},
	{"privatekey", "I", nullptr, $PRIVATE, $field(RenderingHints$Key, privatekey)},
	{}
};

$MethodInfo _RenderingHints$Key_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(RenderingHints$Key::*)(int32_t)>(&RenderingHints$Key::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getIdentity", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(RenderingHints$Key::*)()>(&RenderingHints$Key::getIdentity))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"intKey", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(RenderingHints$Key::*)()>(&RenderingHints$Key::intKey))},
	{"isCompatibleValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"recordIdentity", "(Ljava/awt/RenderingHints$Key;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(RenderingHints$Key*)>(&RenderingHints$Key::recordIdentity))},
	{}
};

$InnerClassInfo _RenderingHints$Key_InnerClassesInfo_[] = {
	{"java.awt.RenderingHints$Key", "java.awt.RenderingHints", "Key", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RenderingHints$Key_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.RenderingHints$Key",
	"java.lang.Object",
	nullptr,
	_RenderingHints$Key_FieldInfo_,
	_RenderingHints$Key_MethodInfo_,
	nullptr,
	nullptr,
	_RenderingHints$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.RenderingHints"
};

$Object* allocate$RenderingHints$Key($Class* clazz) {
	return $of($alloc(RenderingHints$Key));
}

$HashMap* RenderingHints$Key::identitymap = nullptr;

$String* RenderingHints$Key::getIdentity() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$($of(this)->getClass()->getName()), "@"_s}));
	$var($String, var$1, $$concat(var$2, $($Integer::toHexString($System::identityHashCode($of(this)->getClass())))));
	$var($String, var$0, $$concat(var$1, ":"_s));
	return $concat(var$0, $($Integer::toHexString(this->privatekey)));
}

void RenderingHints$Key::recordIdentity(RenderingHints$Key* k) {
	$load(RenderingHints$Key);
	$synchronized(class$) {
		$init(RenderingHints$Key);
		$useLocalCurrentObjectStackCache();
		$var($Object, identity, $nc(k)->getIdentity());
		$var($Object, otherref, $nc(RenderingHints$Key::identitymap)->get(identity));
		if (otherref != nullptr) {
			$var(RenderingHints$Key, otherkey, $cast(RenderingHints$Key, $nc(($cast($WeakReference, otherref)))->get()));
			bool var$0 = otherkey != nullptr;
			if (var$0) {
				var$0 = $of(otherkey)->getClass() == $of(k)->getClass();
			}
			if (var$0) {
				$throwNew($IllegalArgumentException, $$str({identity, " already registered"_s}));
			}
		}
		$nc(RenderingHints$Key::identitymap)->put(identity, $$new($WeakReference, k));
	}
}

void RenderingHints$Key::init$(int32_t privatekey) {
	this->privatekey = privatekey;
	recordIdentity(this);
}

int32_t RenderingHints$Key::intKey() {
	return this->privatekey;
}

int32_t RenderingHints$Key::hashCode() {
	return $Object::hashCode();
}

bool RenderingHints$Key::equals(Object$* o) {
	return $equals(this, o);
}

void clinit$RenderingHints$Key($Class* class$) {
	$assignStatic(RenderingHints$Key::identitymap, $new($HashMap, 17));
}

RenderingHints$Key::RenderingHints$Key() {
}

$Class* RenderingHints$Key::load$($String* name, bool initialize) {
	$loadClass(RenderingHints$Key, name, initialize, &_RenderingHints$Key_ClassInfo_, clinit$RenderingHints$Key, allocate$RenderingHints$Key);
	return class$;
}

$Class* RenderingHints$Key::class$ = nullptr;

	} // awt
} // java