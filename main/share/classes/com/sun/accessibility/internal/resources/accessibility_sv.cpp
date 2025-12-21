#include <com/sun/accessibility/internal/resources/accessibility_sv.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace accessibility {
			namespace internal {
				namespace resources {

$MethodInfo _accessibility_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_sv::*)()>(&accessibility_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_sv_MethodInfo_
};

$Object* allocate$accessibility_sv($Class* clazz) {
	return $of($alloc(accessibility_sv));
}

void accessibility_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("aktiv"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("avisering"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("redo"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("AWT-komponent"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("upptagen"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("rityta"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of("kryssruta"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("markerad"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of(u"underordnad nod för"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of("komprimerad"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of(u"färgväljare"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of("kolumnrubrik"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of("kombinationsruta"_s)
		}),
		$$new($ObjectArray, {
			$of("controlledBy"_s),
			$of("controlledBy"_s)
		}),
		$$new($ObjectArray, {
			$of("controllerFor"_s),
			$of("controllerFor"_s)
		}),
		$$new($ObjectArray, {
			$of("desktopicon"_s),
			$of("skrivbordsikon"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("skrivbordsruta"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of("dialogruta"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of("katalogruta"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("redigerbar"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of("redigeringslist"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of(u"bäddas in av"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of(u"bäddar in"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("aktiverad"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of(u"utökningsbar"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of(u"utökad"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of(u"filväljare"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of("utfyllnad"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"flödar från"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"flödar till"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of("fokuseringsbar"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("fokuserad"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of("sidfot"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("ram"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("glasruta"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of("sidhuvud"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horisontell"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("HTML-container"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("minimerad"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of(u"obestämt"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("intern ram"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of("etikett"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"etikett för"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("etikett av"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("staplad ruta"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("lista"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("listobjekt"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of("hanterar underordnade"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("medlem i"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("meny"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("menyrad"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("menyalternativ"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("flera rader"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of("flerval"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("ogenomskinlig"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("alternativruta"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("sidflik"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("sidflikslista"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("panel"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of("stycke"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"överordnat fönster för"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"lösenordstext"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("snabbmeny"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of("nedtryckt"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of(u"förloppsövervakare"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("statusrad"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of("knapp"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("alternativknapp"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of(u"storleksändringsbar"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("grundruta"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of("radrubrik"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of("linjal"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("rullningslist"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("rullningsruta"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of("valbar"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of("vald"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("avskiljare"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("visar"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("en rad"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("skjutreglage"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of("delad ruta"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of(u"delfönster av"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("swing-komponent"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tabell"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("text"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"växlingsknapp"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"växla expandering"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("verktygsrad"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("knappbeskrivning"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of(u"tillfällig"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"träd"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of("kapad"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of(u"okänd"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertikal"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("vyport"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("synlig"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of(u"fönster"_s)
		})
	});
}

accessibility_sv::accessibility_sv() {
}

$Class* accessibility_sv::load$($String* name, bool initialize) {
	$loadClass(accessibility_sv, name, initialize, &_accessibility_sv_ClassInfo_, allocate$accessibility_sv);
	return class$;
}

$Class* accessibility_sv::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com