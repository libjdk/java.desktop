#include <java/awt/RenderingHints.h>

#include <java/awt/RenderingHints$Key.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/InternalError.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints.h>
#include <jcpp.h>

#undef KEY_ALPHA_INTERPOLATION
#undef KEY_ANTIALIASING
#undef KEY_COLOR_RENDERING
#undef KEY_DITHERING
#undef KEY_FRACTIONALMETRICS
#undef KEY_INTERPOLATION
#undef KEY_RENDERING
#undef KEY_RESOLUTION_VARIANT
#undef KEY_STROKE_CONTROL
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_ANTIALIAS_LCD_CONTRAST
#undef KEY_TEXT_LCD_CONTRAST
#undef VALUE_ALPHA_INTERPOLATION_DEFAULT
#undef VALUE_ALPHA_INTERPOLATION_QUALITY
#undef VALUE_ALPHA_INTERPOLATION_SPEED
#undef VALUE_ANTIALIAS_DEFAULT
#undef VALUE_ANTIALIAS_OFF
#undef VALUE_ANTIALIAS_ON
#undef VALUE_COLOR_RENDER_DEFAULT
#undef VALUE_COLOR_RENDER_QUALITY
#undef VALUE_COLOR_RENDER_SPEED
#undef VALUE_DITHER_DEFAULT
#undef VALUE_DITHER_DISABLE
#undef VALUE_DITHER_ENABLE
#undef VALUE_FRACTIONALMETRICS_DEFAULT
#undef VALUE_FRACTIONALMETRICS_OFF
#undef VALUE_FRACTIONALMETRICS_ON
#undef VALUE_INTERPOLATION_BICUBIC
#undef VALUE_INTERPOLATION_BILINEAR
#undef VALUE_INTERPOLATION_NEAREST_NEIGHBOR
#undef VALUE_RENDER_DEFAULT
#undef VALUE_RENDER_QUALITY
#undef VALUE_RENDER_SPEED
#undef VALUE_RESOLUTION_VARIANT_BASE
#undef VALUE_RESOLUTION_VARIANT_DEFAULT
#undef VALUE_RESOLUTION_VARIANT_DPI_FIT
#undef VALUE_RESOLUTION_VARIANT_SIZE_FIT
#undef VALUE_STROKE_DEFAULT
#undef VALUE_STROKE_NORMALIZE
#undef VALUE_STROKE_PURE
#undef VALUE_TEXT_ANTIALIAS_DEFAULT
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef VALUE_TEXT_ANTIALIAS_ON

using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $SunHints = ::sun::awt::SunHints;

namespace java {
	namespace awt {

$FieldInfo _RenderingHints_FieldInfo_[] = {
	{"hintmap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/lang/Object;>;", 0, $field(RenderingHints, hintmap)},
	{"KEY_ANTIALIASING", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_ANTIALIASING)},
	{"VALUE_ANTIALIAS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ANTIALIAS_ON)},
	{"VALUE_ANTIALIAS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ANTIALIAS_OFF)},
	{"VALUE_ANTIALIAS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ANTIALIAS_DEFAULT)},
	{"KEY_RENDERING", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_RENDERING)},
	{"VALUE_RENDER_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RENDER_SPEED)},
	{"VALUE_RENDER_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RENDER_QUALITY)},
	{"VALUE_RENDER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RENDER_DEFAULT)},
	{"KEY_DITHERING", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_DITHERING)},
	{"VALUE_DITHER_DISABLE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_DITHER_DISABLE)},
	{"VALUE_DITHER_ENABLE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_DITHER_ENABLE)},
	{"VALUE_DITHER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_DITHER_DEFAULT)},
	{"KEY_TEXT_ANTIALIASING", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_TEXT_ANTIALIASING)},
	{"VALUE_TEXT_ANTIALIAS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_ON)},
	{"VALUE_TEXT_ANTIALIAS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_OFF)},
	{"VALUE_TEXT_ANTIALIAS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_DEFAULT)},
	{"VALUE_TEXT_ANTIALIAS_GASP", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_GASP)},
	{"VALUE_TEXT_ANTIALIAS_LCD_HRGB", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_LCD_HRGB)},
	{"VALUE_TEXT_ANTIALIAS_LCD_HBGR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_LCD_HBGR)},
	{"VALUE_TEXT_ANTIALIAS_LCD_VRGB", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_LCD_VRGB)},
	{"VALUE_TEXT_ANTIALIAS_LCD_VBGR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_TEXT_ANTIALIAS_LCD_VBGR)},
	{"KEY_TEXT_LCD_CONTRAST", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_TEXT_LCD_CONTRAST)},
	{"KEY_FRACTIONALMETRICS", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_FRACTIONALMETRICS)},
	{"VALUE_FRACTIONALMETRICS_OFF", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_FRACTIONALMETRICS_OFF)},
	{"VALUE_FRACTIONALMETRICS_ON", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_FRACTIONALMETRICS_ON)},
	{"VALUE_FRACTIONALMETRICS_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_FRACTIONALMETRICS_DEFAULT)},
	{"KEY_INTERPOLATION", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_INTERPOLATION)},
	{"VALUE_INTERPOLATION_NEAREST_NEIGHBOR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_INTERPOLATION_NEAREST_NEIGHBOR)},
	{"VALUE_INTERPOLATION_BILINEAR", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_INTERPOLATION_BILINEAR)},
	{"VALUE_INTERPOLATION_BICUBIC", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_INTERPOLATION_BICUBIC)},
	{"KEY_ALPHA_INTERPOLATION", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_ALPHA_INTERPOLATION)},
	{"VALUE_ALPHA_INTERPOLATION_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ALPHA_INTERPOLATION_SPEED)},
	{"VALUE_ALPHA_INTERPOLATION_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ALPHA_INTERPOLATION_QUALITY)},
	{"VALUE_ALPHA_INTERPOLATION_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_ALPHA_INTERPOLATION_DEFAULT)},
	{"KEY_COLOR_RENDERING", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_COLOR_RENDERING)},
	{"VALUE_COLOR_RENDER_SPEED", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_COLOR_RENDER_SPEED)},
	{"VALUE_COLOR_RENDER_QUALITY", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_COLOR_RENDER_QUALITY)},
	{"VALUE_COLOR_RENDER_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_COLOR_RENDER_DEFAULT)},
	{"KEY_STROKE_CONTROL", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_STROKE_CONTROL)},
	{"VALUE_STROKE_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_STROKE_DEFAULT)},
	{"VALUE_STROKE_NORMALIZE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_STROKE_NORMALIZE)},
	{"VALUE_STROKE_PURE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_STROKE_PURE)},
	{"KEY_RESOLUTION_VARIANT", "Ljava/awt/RenderingHints$Key;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, KEY_RESOLUTION_VARIANT)},
	{"VALUE_RESOLUTION_VARIANT_DEFAULT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RESOLUTION_VARIANT_DEFAULT)},
	{"VALUE_RESOLUTION_VARIANT_BASE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RESOLUTION_VARIANT_BASE)},
	{"VALUE_RESOLUTION_VARIANT_SIZE_FIT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RESOLUTION_VARIANT_SIZE_FIT)},
	{"VALUE_RESOLUTION_VARIANT_DPI_FIT", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RenderingHints, VALUE_RESOLUTION_VARIANT_DPI_FIT)},
	{}
};

$MethodInfo _RenderingHints_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/awt/RenderingHints$Key;*>;)V", $PUBLIC, $method(static_cast<void(RenderingHints::*)($Map*)>(&RenderingHints::init$))},
	{"<init>", "(Ljava/awt/RenderingHints$Key;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(RenderingHints::*)($RenderingHints$Key*,Object$*)>(&RenderingHints::init$))},
	{"add", "(Ljava/awt/RenderingHints;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$InnerClassInfo _RenderingHints_InnerClassesInfo_[] = {
	{"java.awt.RenderingHints$Key", "java.awt.RenderingHints", "Key", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RenderingHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.RenderingHints",
	"java.lang.Object",
	"java.util.Map,java.lang.Cloneable",
	_RenderingHints_FieldInfo_,
	_RenderingHints_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Cloneable;",
	nullptr,
	_RenderingHints_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.RenderingHints$Key"
};

$Object* allocate$RenderingHints($Class* clazz) {
	return $of($alloc(RenderingHints));
}

void RenderingHints::finalize() {
	this->$Map::finalize();
}

$RenderingHints$Key* RenderingHints::KEY_ANTIALIASING = nullptr;
$Object* RenderingHints::VALUE_ANTIALIAS_ON = nullptr;
$Object* RenderingHints::VALUE_ANTIALIAS_OFF = nullptr;
$Object* RenderingHints::VALUE_ANTIALIAS_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_RENDERING = nullptr;
$Object* RenderingHints::VALUE_RENDER_SPEED = nullptr;
$Object* RenderingHints::VALUE_RENDER_QUALITY = nullptr;
$Object* RenderingHints::VALUE_RENDER_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_DITHERING = nullptr;
$Object* RenderingHints::VALUE_DITHER_DISABLE = nullptr;
$Object* RenderingHints::VALUE_DITHER_ENABLE = nullptr;
$Object* RenderingHints::VALUE_DITHER_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_TEXT_ANTIALIASING = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_ON = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_OFF = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_GASP = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB = nullptr;
$Object* RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR = nullptr;
$RenderingHints$Key* RenderingHints::KEY_TEXT_LCD_CONTRAST = nullptr;
$RenderingHints$Key* RenderingHints::KEY_FRACTIONALMETRICS = nullptr;
$Object* RenderingHints::VALUE_FRACTIONALMETRICS_OFF = nullptr;
$Object* RenderingHints::VALUE_FRACTIONALMETRICS_ON = nullptr;
$Object* RenderingHints::VALUE_FRACTIONALMETRICS_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_INTERPOLATION = nullptr;
$Object* RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR = nullptr;
$Object* RenderingHints::VALUE_INTERPOLATION_BILINEAR = nullptr;
$Object* RenderingHints::VALUE_INTERPOLATION_BICUBIC = nullptr;
$RenderingHints$Key* RenderingHints::KEY_ALPHA_INTERPOLATION = nullptr;
$Object* RenderingHints::VALUE_ALPHA_INTERPOLATION_SPEED = nullptr;
$Object* RenderingHints::VALUE_ALPHA_INTERPOLATION_QUALITY = nullptr;
$Object* RenderingHints::VALUE_ALPHA_INTERPOLATION_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_COLOR_RENDERING = nullptr;
$Object* RenderingHints::VALUE_COLOR_RENDER_SPEED = nullptr;
$Object* RenderingHints::VALUE_COLOR_RENDER_QUALITY = nullptr;
$Object* RenderingHints::VALUE_COLOR_RENDER_DEFAULT = nullptr;
$RenderingHints$Key* RenderingHints::KEY_STROKE_CONTROL = nullptr;
$Object* RenderingHints::VALUE_STROKE_DEFAULT = nullptr;
$Object* RenderingHints::VALUE_STROKE_NORMALIZE = nullptr;
$Object* RenderingHints::VALUE_STROKE_PURE = nullptr;
$RenderingHints$Key* RenderingHints::KEY_RESOLUTION_VARIANT = nullptr;
$Object* RenderingHints::VALUE_RESOLUTION_VARIANT_DEFAULT = nullptr;
$Object* RenderingHints::VALUE_RESOLUTION_VARIANT_BASE = nullptr;
$Object* RenderingHints::VALUE_RESOLUTION_VARIANT_SIZE_FIT = nullptr;
$Object* RenderingHints::VALUE_RESOLUTION_VARIANT_DPI_FIT = nullptr;

void RenderingHints::init$($Map* init) {
	$set(this, hintmap, $new($HashMap, 7));
	if (init != nullptr) {
		$nc(this->hintmap)->putAll(init);
	}
}

void RenderingHints::init$($RenderingHints$Key* key, Object$* value) {
	$set(this, hintmap, $new($HashMap, 7));
	$nc(this->hintmap)->put(key, value);
}

int32_t RenderingHints::size() {
	return $nc(this->hintmap)->size();
}

bool RenderingHints::isEmpty() {
	return $nc(this->hintmap)->isEmpty();
}

bool RenderingHints::containsKey(Object$* key) {
	return $nc(this->hintmap)->containsKey($cast($RenderingHints$Key, key));
}

bool RenderingHints::containsValue(Object$* value) {
	return $nc(this->hintmap)->containsValue(value);
}

$Object* RenderingHints::get(Object$* key) {
	return $of($nc(this->hintmap)->get($cast($RenderingHints$Key, key)));
}

$Object* RenderingHints::put(Object$* key, Object$* value) {
	if (!$nc(($cast($RenderingHints$Key, key)))->isCompatibleValue(value)) {
		$throwNew($IllegalArgumentException, $$str({value, " incompatible with "_s, key}));
	}
	return $of($nc(this->hintmap)->put($cast($RenderingHints$Key, key), value));
}

void RenderingHints::add(RenderingHints* hints) {
	$nc(this->hintmap)->putAll($nc(hints)->hintmap);
}

void RenderingHints::clear() {
	$nc(this->hintmap)->clear();
}

$Object* RenderingHints::remove(Object$* key) {
	return $of($nc(this->hintmap)->remove($cast($RenderingHints$Key, key)));
}

void RenderingHints::putAll($Map* m) {
	$useLocalCurrentObjectStackCache();
	if (RenderingHints::class$->isInstance(m)) {
		{
			$var($Iterator, i$, $nc($($nc(m)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				$var($Object, var$0, $nc(entry)->getKey());
				$nc(this->hintmap)->put(var$0, $(entry->getValue()));
			}
		}
	} else {
		{
			$var($Iterator, i$, $nc($($nc(m)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				$var($Object, var$1, $nc(entry)->getKey());
				put(var$1, $(entry->getValue()));
			}
		}
	}
}

$Set* RenderingHints::keySet() {
	return $nc(this->hintmap)->keySet();
}

$Collection* RenderingHints::values() {
	return $nc(this->hintmap)->values();
}

$Set* RenderingHints::entrySet() {
	return $nc($($Collections::unmodifiableMap(this->hintmap)))->entrySet();
}

bool RenderingHints::equals(Object$* o) {
	if ($instanceOf(RenderingHints, o)) {
		return $nc(this->hintmap)->equals($nc(($cast(RenderingHints, o)))->hintmap);
	} else if ($instanceOf($Map, o)) {
		return $nc(this->hintmap)->equals(o);
	}
	return false;
}

int32_t RenderingHints::hashCode() {
	return $nc(this->hintmap)->hashCode();
}

$Object* RenderingHints::clone() {
	$var(RenderingHints, rh, nullptr);
	try {
		$assign(rh, $cast(RenderingHints, $Map::clone()));
		if (this->hintmap != nullptr) {
			$set($nc(rh), hintmap, $cast($HashMap, $nc(this->hintmap)->clone()));
		}
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	return $of(rh);
}

$String* RenderingHints::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->hintmap == nullptr) {
		$var($String, var$1, $$str({$($of(this)->getClass()->getName()), "@"_s}));
		$var($String, var$0, $$concat(var$1, $($Integer::toHexString(hashCode()))));
		return $concat(var$0, " (0 hints)"_s);
	}
	return $nc(this->hintmap)->toString();
}

void clinit$RenderingHints($Class* class$) {
	$init($SunHints);
	$assignStatic(RenderingHints::KEY_ANTIALIASING, $SunHints::KEY_ANTIALIASING);
	$assignStatic(RenderingHints::VALUE_ANTIALIAS_ON, $SunHints::VALUE_ANTIALIAS_ON);
	$assignStatic(RenderingHints::VALUE_ANTIALIAS_OFF, $SunHints::VALUE_ANTIALIAS_OFF);
	$assignStatic(RenderingHints::VALUE_ANTIALIAS_DEFAULT, $SunHints::VALUE_ANTIALIAS_DEFAULT);
	$assignStatic(RenderingHints::KEY_RENDERING, $SunHints::KEY_RENDERING);
	$assignStatic(RenderingHints::VALUE_RENDER_SPEED, $SunHints::VALUE_RENDER_SPEED);
	$assignStatic(RenderingHints::VALUE_RENDER_QUALITY, $SunHints::VALUE_RENDER_QUALITY);
	$assignStatic(RenderingHints::VALUE_RENDER_DEFAULT, $SunHints::VALUE_RENDER_DEFAULT);
	$assignStatic(RenderingHints::KEY_DITHERING, $SunHints::KEY_DITHERING);
	$assignStatic(RenderingHints::VALUE_DITHER_DISABLE, $SunHints::VALUE_DITHER_DISABLE);
	$assignStatic(RenderingHints::VALUE_DITHER_ENABLE, $SunHints::VALUE_DITHER_ENABLE);
	$assignStatic(RenderingHints::VALUE_DITHER_DEFAULT, $SunHints::VALUE_DITHER_DEFAULT);
	$assignStatic(RenderingHints::KEY_TEXT_ANTIALIASING, $SunHints::KEY_TEXT_ANTIALIASING);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_ON, $SunHints::VALUE_TEXT_ANTIALIAS_ON);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_OFF, $SunHints::VALUE_TEXT_ANTIALIAS_OFF);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT, $SunHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_GASP, $SunHints::VALUE_TEXT_ANTIALIAS_GASP);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB);
	$assignStatic(RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR, $SunHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR);
	$assignStatic(RenderingHints::KEY_TEXT_LCD_CONTRAST, $SunHints::KEY_TEXT_ANTIALIAS_LCD_CONTRAST);
	$assignStatic(RenderingHints::KEY_FRACTIONALMETRICS, $SunHints::KEY_FRACTIONALMETRICS);
	$assignStatic(RenderingHints::VALUE_FRACTIONALMETRICS_OFF, $SunHints::VALUE_FRACTIONALMETRICS_OFF);
	$assignStatic(RenderingHints::VALUE_FRACTIONALMETRICS_ON, $SunHints::VALUE_FRACTIONALMETRICS_ON);
	$assignStatic(RenderingHints::VALUE_FRACTIONALMETRICS_DEFAULT, $SunHints::VALUE_FRACTIONALMETRICS_DEFAULT);
	$assignStatic(RenderingHints::KEY_INTERPOLATION, $SunHints::KEY_INTERPOLATION);
	$assignStatic(RenderingHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR, $SunHints::VALUE_INTERPOLATION_NEAREST_NEIGHBOR);
	$assignStatic(RenderingHints::VALUE_INTERPOLATION_BILINEAR, $SunHints::VALUE_INTERPOLATION_BILINEAR);
	$assignStatic(RenderingHints::VALUE_INTERPOLATION_BICUBIC, $SunHints::VALUE_INTERPOLATION_BICUBIC);
	$assignStatic(RenderingHints::KEY_ALPHA_INTERPOLATION, $SunHints::KEY_ALPHA_INTERPOLATION);
	$assignStatic(RenderingHints::VALUE_ALPHA_INTERPOLATION_SPEED, $SunHints::VALUE_ALPHA_INTERPOLATION_SPEED);
	$assignStatic(RenderingHints::VALUE_ALPHA_INTERPOLATION_QUALITY, $SunHints::VALUE_ALPHA_INTERPOLATION_QUALITY);
	$assignStatic(RenderingHints::VALUE_ALPHA_INTERPOLATION_DEFAULT, $SunHints::VALUE_ALPHA_INTERPOLATION_DEFAULT);
	$assignStatic(RenderingHints::KEY_COLOR_RENDERING, $SunHints::KEY_COLOR_RENDERING);
	$assignStatic(RenderingHints::VALUE_COLOR_RENDER_SPEED, $SunHints::VALUE_COLOR_RENDER_SPEED);
	$assignStatic(RenderingHints::VALUE_COLOR_RENDER_QUALITY, $SunHints::VALUE_COLOR_RENDER_QUALITY);
	$assignStatic(RenderingHints::VALUE_COLOR_RENDER_DEFAULT, $SunHints::VALUE_COLOR_RENDER_DEFAULT);
	$assignStatic(RenderingHints::KEY_STROKE_CONTROL, $SunHints::KEY_STROKE_CONTROL);
	$assignStatic(RenderingHints::VALUE_STROKE_DEFAULT, $SunHints::VALUE_STROKE_DEFAULT);
	$assignStatic(RenderingHints::VALUE_STROKE_NORMALIZE, $SunHints::VALUE_STROKE_NORMALIZE);
	$assignStatic(RenderingHints::VALUE_STROKE_PURE, $SunHints::VALUE_STROKE_PURE);
	$assignStatic(RenderingHints::KEY_RESOLUTION_VARIANT, $SunHints::KEY_RESOLUTION_VARIANT);
	$assignStatic(RenderingHints::VALUE_RESOLUTION_VARIANT_DEFAULT, $SunHints::VALUE_RESOLUTION_VARIANT_DEFAULT);
	$assignStatic(RenderingHints::VALUE_RESOLUTION_VARIANT_BASE, $SunHints::VALUE_RESOLUTION_VARIANT_BASE);
	$assignStatic(RenderingHints::VALUE_RESOLUTION_VARIANT_SIZE_FIT, $SunHints::VALUE_RESOLUTION_VARIANT_SIZE_FIT);
	$assignStatic(RenderingHints::VALUE_RESOLUTION_VARIANT_DPI_FIT, $SunHints::VALUE_RESOLUTION_VARIANT_DPI_FIT);
}

RenderingHints::RenderingHints() {
}

$Class* RenderingHints::load$($String* name, bool initialize) {
	$loadClass(RenderingHints, name, initialize, &_RenderingHints_ClassInfo_, clinit$RenderingHints, allocate$RenderingHints);
	return class$;
}

$Class* RenderingHints::class$ = nullptr;

	} // awt
} // java