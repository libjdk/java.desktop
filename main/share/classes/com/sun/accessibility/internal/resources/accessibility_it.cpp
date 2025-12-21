#include <com/sun/accessibility/internal/resources/accessibility_it.h>

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

$MethodInfo _accessibility_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_it::*)()>(&accessibility_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_it_MethodInfo_
};

$Object* allocate$accessibility_it($Class* clazz) {
	return $of($alloc(accessibility_it));
}

void accessibility_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("avviso"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("abilitato"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("componente AWT"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("occupato"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("sfondo"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of("casella di controllo"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("verificato"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("nodo figlio di"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of("compresso"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of("selezione colori"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of("intestazione colonna"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of("casella combinata"_s)
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
			$of("icona desktop"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("riquadro desktop"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of("finestra di dialogo"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of("riquadro directory"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("modificabile"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of("barra di modifica"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("incorporato da"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("incorpora"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("abilitato"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("espandibile"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of("espanso"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of("selezione file"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of(u"utilità riempimento"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("proviene da"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("va verso"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of("attivabile in primo piano"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("in primo piano"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of(u"piè di pagina"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("cornice"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("riquadro trasparente"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of("intestazione"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("orizzontale"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("Contenitore HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("ridotto a icona"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of("indeterminato"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("cornice interna"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of("etichetta"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of("etichetta per"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("etichetta di"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("riquadro a livelli"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("lista"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("voce lista"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of("gestisce i discendenti"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("membro di"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of("menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of("barra dei menu"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of("voce di menu"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modale"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of("a righe multiple"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of("multi-selezionabile"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("nascosto"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("riquadro opzioni"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of("scheda pagina"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of("lista schede pagina"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("pannello"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of("paragrafo"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of("finestra di livello superiore di"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of("testo della password"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of("menu popup"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of("premuto"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of("stato avanzamento"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("barra di avanzamento"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of("pulsante"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of("pulsante di scelta"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("ridimensionabile"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of("riquadro root"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of("intestazione di riga"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of("righello"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("barra di scorrimento"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("riquadro scorrimento"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of("selezionabile"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of("selezionato"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("separatore"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("visualizzato"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of("a riga singola"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("dispositivo di scorrimento"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of("riquadro doppio"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("sottofinestra di"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("componente swing"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tabella"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("testo"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of("interruttore"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of("attiva/disattiva espansione"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("barra degli strumenti"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("descrizione comandi"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("transitorio"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of("albero"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of("troncato"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("sconosciuto"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("verticale"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("viewport"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("visibile"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of("finestra"_s)
		})
	});
}

accessibility_it::accessibility_it() {
}

$Class* accessibility_it::load$($String* name, bool initialize) {
	$loadClass(accessibility_it, name, initialize, &_accessibility_it_ClassInfo_, allocate$accessibility_it);
	return class$;
}

$Class* accessibility_it::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com