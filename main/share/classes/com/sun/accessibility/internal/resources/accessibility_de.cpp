#include <com/sun/accessibility/internal/resources/accessibility_de.h>

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

$MethodInfo _accessibility_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_de::*)()>(&accessibility_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_de_MethodInfo_
};

$Object* allocate$accessibility_de($Class* clazz) {
	return $of($alloc(accessibility_de));
}

void accessibility_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("aktiv"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("Alert"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("aktiviert"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("AWT-Komponente"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("ausgelastet"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("Leinwand"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of(u"Kontrollkästchen"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("markiert"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("untergeordneter Knoten von"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of("ausgeblendet"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of("Farbauswahl"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of("Spaltenheader"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of("Kombinationsfeld"_s)
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
			$of("Desktopsymbol"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("Desktopbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of("Dialogfeld"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of("Verzeichnisbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("bearbeitbar"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of("Bearbeitungsleiste"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("eingebettet in"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("bettet ein"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("aktiviert"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("erweiterbar"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of("eingeblendet"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of("Dateiauswahl"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"Füllbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of(u"fließt von"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of(u"fließt zu"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of("fokussierbar"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("fokussiert"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of("Footer"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("Rahmen"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("Glass Pane"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of("Header"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("HTML-Container"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("minimiert"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of("unbestimmt"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("Innerer Rahmen"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of("Label"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of(u"Label für"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("beschriftet von"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("Layered Pane"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("Liste"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("Listenelement"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of("verwaltet untergeordnete Objekte"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("Mitglied von"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"Menü"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"Menüleiste"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"Menüpunkt"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("mehrzeilig"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of(u"mehrfach auswählbar"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("nicht transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("Optionsbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("Registerkarte"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("Registerkartenliste"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("Bereich"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of("Absatz"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of(u"übergeordnetes Fenster von"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("Kennworttext"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"Popup-Menü"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of(u"gedrückt"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of("Fortschrittsmonitor"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("Fortschrittsbalken"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"Schaltfläche"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("Optionsfeld"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("skalierbar"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("Root-Bereich"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of("Zeilenheader"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of("Lineal"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("Bildlaufleiste"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("Bildlaufbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of(u"wählbar"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of(u"ausgewählt"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("Trennzeichen"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("angezeigt"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("einzeilig"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("Schieberegler"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of("Split Pane"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("Unterfenster von"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("Swing-Komponente"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("Tabelle"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("Text"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"Umschaltfläche"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of("einblenden umschalten"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("Symbolleiste"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("QuickInfo"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("transient"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of("Baumstruktur"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of("abgeschnitten"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("Unbekannt"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertikal"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("Viewport"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("sichtbar"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of("Fenster"_s)
		})
	});
}

accessibility_de::accessibility_de() {
}

$Class* accessibility_de::load$($String* name, bool initialize) {
	$loadClass(accessibility_de, name, initialize, &_accessibility_de_ClassInfo_, allocate$accessibility_de);
	return class$;
}

$Class* accessibility_de::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com