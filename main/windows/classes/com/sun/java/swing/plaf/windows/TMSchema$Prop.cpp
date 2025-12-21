#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>

#include <com/sun/java/swing/plaf/windows/TMSchema.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BGTYPE
#undef BORDERCOLOR
#undef BORDERONLY
#undef BORDERSIZE
#undef CAPTIONMARGINS
#undef COLOR
#undef CONTENTMARGINS
#undef FILLCOLOR
#undef FLATMENUS
#undef IMAGECOUNT
#undef NORMALSIZE
#undef PROGRESSCHUNKSIZE
#undef PROGRESSSPACESIZE
#undef SIZE
#undef SIZINGMARGINS
#undef TEXTCOLOR
#undef TEXTSHADOWCOLOR
#undef TEXTSHADOWOFFSET
#undef TEXTSHADOWTYPE
#undef TRANSITIONDURATIONS

using $TMSchema$PropArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$Prop>;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _TMSchema$Prop_FieldInfo_[] = {
	{"COLOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, COLOR)},
	{"SIZE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, SIZE)},
	{"FLATMENUS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, FLATMENUS)},
	{"BORDERONLY", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, BORDERONLY)},
	{"IMAGECOUNT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, IMAGECOUNT)},
	{"BORDERSIZE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, BORDERSIZE)},
	{"PROGRESSCHUNKSIZE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, PROGRESSCHUNKSIZE)},
	{"PROGRESSSPACESIZE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, PROGRESSSPACESIZE)},
	{"TEXTSHADOWOFFSET", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, TEXTSHADOWOFFSET)},
	{"NORMALSIZE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, NORMALSIZE)},
	{"SIZINGMARGINS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, SIZINGMARGINS)},
	{"CONTENTMARGINS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, CONTENTMARGINS)},
	{"CAPTIONMARGINS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, CAPTIONMARGINS)},
	{"BORDERCOLOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, BORDERCOLOR)},
	{"FILLCOLOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, FILLCOLOR)},
	{"TEXTCOLOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, TEXTCOLOR)},
	{"TEXTSHADOWCOLOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, TEXTSHADOWCOLOR)},
	{"BGTYPE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, BGTYPE)},
	{"TEXTSHADOWTYPE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, TEXTSHADOWTYPE)},
	{"TRANSITIONDURATIONS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Prop, TRANSITIONDURATIONS)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TMSchema$Prop, $VALUES)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(TMSchema$Prop, type)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(TMSchema$Prop, value)},
	{}
};

$MethodInfo _TMSchema$Prop_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TMSchema$PropArray*(*)()>(&TMSchema$Prop::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Class;I)V", "(Ljava/lang/Class<*>;I)V", $PRIVATE, $method(static_cast<void(TMSchema$Prop::*)($String*,int32_t,$Class*,int32_t)>(&TMSchema$Prop::init$))},
	{"getValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TMSchema$Prop::*)()>(&TMSchema$Prop::getValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TMSchema$Prop*(*)($String*)>(&TMSchema$Prop::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TMSchema$PropArray*(*)()>(&TMSchema$Prop::values))},
	{}
};

$InnerClassInfo _TMSchema$Prop_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$Prop", "com.sun.java.swing.plaf.windows.TMSchema", "Prop", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema$Prop_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.windows.TMSchema$Prop",
	"java.lang.Enum",
	nullptr,
	_TMSchema$Prop_FieldInfo_,
	_TMSchema$Prop_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;>;",
	nullptr,
	_TMSchema$Prop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema"
};

$Object* allocate$TMSchema$Prop($Class* clazz) {
	return $of($alloc(TMSchema$Prop));
}

TMSchema$Prop* TMSchema$Prop::COLOR = nullptr;
TMSchema$Prop* TMSchema$Prop::SIZE = nullptr;
TMSchema$Prop* TMSchema$Prop::FLATMENUS = nullptr;
TMSchema$Prop* TMSchema$Prop::BORDERONLY = nullptr;
TMSchema$Prop* TMSchema$Prop::IMAGECOUNT = nullptr;
TMSchema$Prop* TMSchema$Prop::BORDERSIZE = nullptr;
TMSchema$Prop* TMSchema$Prop::PROGRESSCHUNKSIZE = nullptr;
TMSchema$Prop* TMSchema$Prop::PROGRESSSPACESIZE = nullptr;
TMSchema$Prop* TMSchema$Prop::TEXTSHADOWOFFSET = nullptr;
TMSchema$Prop* TMSchema$Prop::NORMALSIZE = nullptr;
TMSchema$Prop* TMSchema$Prop::SIZINGMARGINS = nullptr;
TMSchema$Prop* TMSchema$Prop::CONTENTMARGINS = nullptr;
TMSchema$Prop* TMSchema$Prop::CAPTIONMARGINS = nullptr;
TMSchema$Prop* TMSchema$Prop::BORDERCOLOR = nullptr;
TMSchema$Prop* TMSchema$Prop::FILLCOLOR = nullptr;
TMSchema$Prop* TMSchema$Prop::TEXTCOLOR = nullptr;
TMSchema$Prop* TMSchema$Prop::TEXTSHADOWCOLOR = nullptr;
TMSchema$Prop* TMSchema$Prop::BGTYPE = nullptr;
TMSchema$Prop* TMSchema$Prop::TEXTSHADOWTYPE = nullptr;
TMSchema$Prop* TMSchema$Prop::TRANSITIONDURATIONS = nullptr;
$TMSchema$PropArray* TMSchema$Prop::$VALUES = nullptr;

$TMSchema$PropArray* TMSchema$Prop::$values() {
	$init(TMSchema$Prop);
	return $new($TMSchema$PropArray, {
		TMSchema$Prop::COLOR,
		TMSchema$Prop::SIZE,
		TMSchema$Prop::FLATMENUS,
		TMSchema$Prop::BORDERONLY,
		TMSchema$Prop::IMAGECOUNT,
		TMSchema$Prop::BORDERSIZE,
		TMSchema$Prop::PROGRESSCHUNKSIZE,
		TMSchema$Prop::PROGRESSSPACESIZE,
		TMSchema$Prop::TEXTSHADOWOFFSET,
		TMSchema$Prop::NORMALSIZE,
		TMSchema$Prop::SIZINGMARGINS,
		TMSchema$Prop::CONTENTMARGINS,
		TMSchema$Prop::CAPTIONMARGINS,
		TMSchema$Prop::BORDERCOLOR,
		TMSchema$Prop::FILLCOLOR,
		TMSchema$Prop::TEXTCOLOR,
		TMSchema$Prop::TEXTSHADOWCOLOR,
		TMSchema$Prop::BGTYPE,
		TMSchema$Prop::TEXTSHADOWTYPE,
		TMSchema$Prop::TRANSITIONDURATIONS
	});
}

$TMSchema$PropArray* TMSchema$Prop::values() {
	$init(TMSchema$Prop);
	return $cast($TMSchema$PropArray, TMSchema$Prop::$VALUES->clone());
}

TMSchema$Prop* TMSchema$Prop::valueOf($String* name) {
	$init(TMSchema$Prop);
	return $cast(TMSchema$Prop, $Enum::valueOf(TMSchema$Prop::class$, name));
}

void TMSchema$Prop::init$($String* $enum$name, int32_t $enum$ordinal, $Class* type, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, type, type);
	this->value = value;
}

int32_t TMSchema$Prop::getValue() {
	return this->value;
}

$String* TMSchema$Prop::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(name()), "["_s}));
	$var($String, var$1, $$concat(var$2, $($nc(this->type)->getName())));
	$var($String, var$0, $$concat(var$1, "] = "_s));
	return $concat(var$0, $$str(this->value));
}

void clinit$TMSchema$Prop($Class* class$) {
	$load($Color);
	$assignStatic(TMSchema$Prop::COLOR, $new(TMSchema$Prop, "COLOR"_s, 0, $Color::class$, 204));
	$load($Dimension);
	$assignStatic(TMSchema$Prop::SIZE, $new(TMSchema$Prop, "SIZE"_s, 1, $Dimension::class$, 207));
	$load($Boolean);
	$assignStatic(TMSchema$Prop::FLATMENUS, $new(TMSchema$Prop, "FLATMENUS"_s, 2, $Boolean::class$, 1001));
	$assignStatic(TMSchema$Prop::BORDERONLY, $new(TMSchema$Prop, "BORDERONLY"_s, 3, $Boolean::class$, 2203));
	$load($Integer);
	$assignStatic(TMSchema$Prop::IMAGECOUNT, $new(TMSchema$Prop, "IMAGECOUNT"_s, 4, $Integer::class$, 2401));
	$assignStatic(TMSchema$Prop::BORDERSIZE, $new(TMSchema$Prop, "BORDERSIZE"_s, 5, $Integer::class$, 2403));
	$assignStatic(TMSchema$Prop::PROGRESSCHUNKSIZE, $new(TMSchema$Prop, "PROGRESSCHUNKSIZE"_s, 6, $Integer::class$, 2411));
	$assignStatic(TMSchema$Prop::PROGRESSSPACESIZE, $new(TMSchema$Prop, "PROGRESSSPACESIZE"_s, 7, $Integer::class$, 2412));
	$load($Point);
	$assignStatic(TMSchema$Prop::TEXTSHADOWOFFSET, $new(TMSchema$Prop, "TEXTSHADOWOFFSET"_s, 8, $Point::class$, 3402));
	$assignStatic(TMSchema$Prop::NORMALSIZE, $new(TMSchema$Prop, "NORMALSIZE"_s, 9, $Dimension::class$, 3409));
	$load($Insets);
	$assignStatic(TMSchema$Prop::SIZINGMARGINS, $new(TMSchema$Prop, "SIZINGMARGINS"_s, 10, $Insets::class$, 3601));
	$assignStatic(TMSchema$Prop::CONTENTMARGINS, $new(TMSchema$Prop, "CONTENTMARGINS"_s, 11, $Insets::class$, 3602));
	$assignStatic(TMSchema$Prop::CAPTIONMARGINS, $new(TMSchema$Prop, "CAPTIONMARGINS"_s, 12, $Insets::class$, 3603));
	$assignStatic(TMSchema$Prop::BORDERCOLOR, $new(TMSchema$Prop, "BORDERCOLOR"_s, 13, $Color::class$, 3801));
	$assignStatic(TMSchema$Prop::FILLCOLOR, $new(TMSchema$Prop, "FILLCOLOR"_s, 14, $Color::class$, 3802));
	$assignStatic(TMSchema$Prop::TEXTCOLOR, $new(TMSchema$Prop, "TEXTCOLOR"_s, 15, $Color::class$, 3803));
	$assignStatic(TMSchema$Prop::TEXTSHADOWCOLOR, $new(TMSchema$Prop, "TEXTSHADOWCOLOR"_s, 16, $Color::class$, 3818));
	$assignStatic(TMSchema$Prop::BGTYPE, $new(TMSchema$Prop, "BGTYPE"_s, 17, $Integer::class$, 4001));
	$assignStatic(TMSchema$Prop::TEXTSHADOWTYPE, $new(TMSchema$Prop, "TEXTSHADOWTYPE"_s, 18, $Integer::class$, 4010));
	$assignStatic(TMSchema$Prop::TRANSITIONDURATIONS, $new(TMSchema$Prop, "TRANSITIONDURATIONS"_s, 19, $Integer::class$, 6000));
	$assignStatic(TMSchema$Prop::$VALUES, TMSchema$Prop::$values());
}

TMSchema$Prop::TMSchema$Prop() {
}

$Class* TMSchema$Prop::load$($String* name, bool initialize) {
	$loadClass(TMSchema$Prop, name, initialize, &_TMSchema$Prop_ClassInfo_, clinit$TMSchema$Prop, allocate$TMSchema$Prop);
	return class$;
}

$Class* TMSchema$Prop::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com