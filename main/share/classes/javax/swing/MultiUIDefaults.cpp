#include <javax/swing/MultiUIDefaults.h>

#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator$Type.h>
#include <javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef ELEMENTS
#undef KEYS

using $UIDefaultsArray = $Array<::javax::swing::UIDefaults>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $MultiUIDefaults$MultiUIDefaultsEnumerator = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator;
using $MultiUIDefaults$MultiUIDefaultsEnumerator$Type = ::javax::swing::MultiUIDefaults$MultiUIDefaultsEnumerator$Type;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

$FieldInfo _MultiUIDefaults_FieldInfo_[] = {
	{"tables", "[Ljavax/swing/UIDefaults;", nullptr, $PRIVATE, $field(MultiUIDefaults, tables)},
	{}
};

$MethodInfo _MultiUIDefaults_MethodInfo_[] = {
	{"<init>", "([Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiUIDefaults::*)($UIDefaultsArray*)>(&MultiUIDefaults::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiUIDefaults::*)()>(&MultiUIDefaults::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _MultiUIDefaults_InnerClassesInfo_[] = {
	{"javax.swing.MultiUIDefaults$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator", "javax.swing.MultiUIDefaults", "MultiUIDefaultsEnumerator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MultiUIDefaults_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.MultiUIDefaults",
	"javax.swing.UIDefaults",
	nullptr,
	_MultiUIDefaults_FieldInfo_,
	_MultiUIDefaults_MethodInfo_,
	nullptr,
	nullptr,
	_MultiUIDefaults_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.MultiUIDefaults$1,javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator,javax.swing.MultiUIDefaults$MultiUIDefaultsEnumerator$Type"
};

$Object* allocate$MultiUIDefaults($Class* clazz) {
	return $of($alloc(MultiUIDefaults));
}

void MultiUIDefaults::init$($UIDefaultsArray* defaults) {
	$UIDefaults::init$();
	$set(this, tables, defaults);
}

void MultiUIDefaults::init$() {
	$UIDefaults::init$();
	$set(this, tables, $new($UIDefaultsArray, 0));
}

$Object* MultiUIDefaults::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $UIDefaults::get(key));
	if (value != nullptr) {
		return $of(value);
	}
	{
		$var($UIDefaultsArray, arr$, this->tables);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			{
				$assign(value, (table != nullptr) ? $nc(table)->get(key) : ($Object*)nullptr);
				if (value != nullptr) {
					return $of(value);
				}
			}
		}
	}
	return $of(nullptr);
}

$Object* MultiUIDefaults::get(Object$* key, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $UIDefaults::get(key, l));
	if (value != nullptr) {
		return $of(value);
	}
	{
		$var($UIDefaultsArray, arr$, this->tables);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			{
				$assign(value, (table != nullptr) ? $nc(table)->get(key, l) : ($Object*)nullptr);
				if (value != nullptr) {
					return $of(value);
				}
			}
		}
	}
	return $of(nullptr);
}

int32_t MultiUIDefaults::size() {
	return $nc($(entrySet()))->size();
}

bool MultiUIDefaults::isEmpty() {
	return size() == 0;
}

$Enumeration* MultiUIDefaults::keys() {
	$init($MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator, $MultiUIDefaults$MultiUIDefaultsEnumerator$Type::KEYS, $(entrySet()));
}

$Set* MultiUIDefaults::keySet() {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($HashSet));
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if ($nc(this->tables)->get(i) != nullptr) {
			set->addAll($($nc($nc(this->tables)->get(i))->keySet()));
		}
	}
	set->addAll($($UIDefaults::keySet()));
	return set;
}

$Enumeration* MultiUIDefaults::elements() {
	$init($MultiUIDefaults$MultiUIDefaultsEnumerator$Type);
	return $new($MultiUIDefaults$MultiUIDefaultsEnumerator, $MultiUIDefaults$MultiUIDefaultsEnumerator$Type::ELEMENTS, $(entrySet()));
}

$Set* MultiUIDefaults::entrySet() {
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($HashSet));
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if ($nc(this->tables)->get(i) != nullptr) {
			set->addAll($($nc($nc(this->tables)->get(i))->entrySet()));
		}
	}
	set->addAll($($UIDefaults::entrySet()));
	return set;
}

void MultiUIDefaults::getUIError($String* msg) {
	if (this->tables != nullptr && $nc(this->tables)->length > 0 && $nc(this->tables)->get(0) != nullptr) {
		$nc($nc(this->tables)->get(0))->getUIError(msg);
	} else {
		$UIDefaults::getUIError(msg);
	}
}

$Object* MultiUIDefaults::remove(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, nullptr);
	for (int32_t i = $nc(this->tables)->length - 1; i >= 0; --i) {
		if ($nc(this->tables)->get(i) != nullptr) {
			$var($Object, v, $nc($nc(this->tables)->get(i))->remove(key));
			if (v != nullptr) {
				$assign(value, v);
			}
		}
	}
	$var($Object, v, $UIDefaults::remove(key));
	if (v != nullptr) {
		$assign(value, v);
	}
	return $of(value);
}

void MultiUIDefaults::clear() {
	$useLocalCurrentObjectStackCache();
	$UIDefaults::clear();
	{
		$var($UIDefaultsArray, arr$, this->tables);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIDefaults, table, arr$->get(i$));
			{
				if (table != nullptr) {
					table->clear();
				}
			}
		}
	}
}

$String* MultiUIDefaults::toString() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("{"_s);
		$var($Enumeration, keys, this->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($Object, key, keys->nextElement());
			$var($String, var$1, $$str({key, "="_s}));
			$var($String, var$0, $$concat(var$1, $(get(key))));
			sb->append($$concat(var$0, ", "_s));
		}
		int32_t length = sb->length();
		if (length > 1) {
			sb->delete$(length - 2, length);
		}
		sb->append("}"_s);
		return sb->toString();
	}
}

MultiUIDefaults::MultiUIDefaults() {
}

$Class* MultiUIDefaults::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaults, name, initialize, &_MultiUIDefaults_ClassInfo_, allocate$MultiUIDefaults);
	return class$;
}

$Class* MultiUIDefaults::class$ = nullptr;

	} // swing
} // javax