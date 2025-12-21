#include <com/sun/accessibility/internal/resources/accessibility_es.h>

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

$MethodInfo _accessibility_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(accessibility_es::*)()>(&accessibility_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _accessibility_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.accessibility.internal.resources.accessibility_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_accessibility_es_MethodInfo_
};

$Object* allocate$accessibility_es($Class* clazz) {
	return $of($alloc(accessibility_es));
}

void accessibility_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* accessibility_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("active"_s),
			$of("activo"_s)
		}),
		$$new($ObjectArray, {
			$of("alert"_s),
			$of("alerta"_s)
		}),
		$$new($ObjectArray, {
			$of("armed"_s),
			$of("armado"_s)
		}),
		$$new($ObjectArray, {
			$of("awtcomponent"_s),
			$of("componente AWT"_s)
		}),
		$$new($ObjectArray, {
			$of("busy"_s),
			$of("ocupado"_s)
		}),
		$$new($ObjectArray, {
			$of("canvas"_s),
			$of("lienzo"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox"_s),
			$of("casilla de control"_s)
		}),
		$$new($ObjectArray, {
			$of("checked"_s),
			$of("activado"_s)
		}),
		$$new($ObjectArray, {
			$of("childNodeOf"_s),
			$of("nodo secundario de"_s)
		}),
		$$new($ObjectArray, {
			$of("collapsed"_s),
			$of("reducido"_s)
		}),
		$$new($ObjectArray, {
			$of("colorchooser"_s),
			$of("selector de color"_s)
		}),
		$$new($ObjectArray, {
			$of("columnheader"_s),
			$of("cabecera de columna"_s)
		}),
		$$new($ObjectArray, {
			$of("combobox"_s),
			$of("cuadro combinado"_s)
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
			$of("icono de escritorio"_s)
		}),
		$$new($ObjectArray, {
			$of("desktoppane"_s),
			$of("panel de escritorio"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog"_s),
			$of(u"cuadro de diálogo"_s)
		}),
		$$new($ObjectArray, {
			$of("directorypane"_s),
			$of("panel de directorio"_s)
		}),
		$$new($ObjectArray, {
			$of("editable"_s),
			$of("editable"_s)
		}),
		$$new($ObjectArray, {
			$of("editbar"_s),
			$of(u"barra de edición"_s)
		}),
		$$new($ObjectArray, {
			$of("embeddedBy"_s),
			$of("embebido por"_s)
		}),
		$$new($ObjectArray, {
			$of("embeds"_s),
			$of("embebe"_s)
		}),
		$$new($ObjectArray, {
			$of("enabled"_s),
			$of("activado"_s)
		}),
		$$new($ObjectArray, {
			$of("expandable"_s),
			$of("ampliable"_s)
		}),
		$$new($ObjectArray, {
			$of("expanded"_s),
			$of("ampliado"_s)
		}),
		$$new($ObjectArray, {
			$of("filechooser"_s),
			$of("selector de archivos"_s)
		}),
		$$new($ObjectArray, {
			$of("filler"_s),
			$of("rellenador"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsFrom"_s),
			$of("procede de"_s)
		}),
		$$new($ObjectArray, {
			$of("flowsTo"_s),
			$of("llega a"_s)
		}),
		$$new($ObjectArray, {
			$of("focusable"_s),
			$of("enfocable"_s)
		}),
		$$new($ObjectArray, {
			$of("focused"_s),
			$of("enfocado"_s)
		}),
		$$new($ObjectArray, {
			$of("footer"_s),
			$of("pie"_s)
		}),
		$$new($ObjectArray, {
			$of("frame"_s),
			$of("marco"_s)
		}),
		$$new($ObjectArray, {
			$of("glasspane"_s),
			$of("panel de cristal"_s)
		}),
		$$new($ObjectArray, {
			$of("header"_s),
			$of("cabecera"_s)
		}),
		$$new($ObjectArray, {
			$of("horizontal"_s),
			$of("horizontal"_s)
		}),
		$$new($ObjectArray, {
			$of("htmlcontainer"_s),
			$of("Contenedor HTML"_s)
		}),
		$$new($ObjectArray, {
			$of("iconified"_s),
			$of("convertido en icono"_s)
		}),
		$$new($ObjectArray, {
			$of("indeterminate"_s),
			$of("indeterminada"_s)
		}),
		$$new($ObjectArray, {
			$of("internalframe"_s),
			$of("marco interno"_s)
		}),
		$$new($ObjectArray, {
			$of("label"_s),
			$of("etiqueta"_s)
		}),
		$$new($ObjectArray, {
			$of("labelFor"_s),
			$of("etiqueta para"_s)
		}),
		$$new($ObjectArray, {
			$of("labeledBy"_s),
			$of("etiquetado por"_s)
		}),
		$$new($ObjectArray, {
			$of("layeredpane"_s),
			$of("panel en capas"_s)
		}),
		$$new($ObjectArray, {
			$of("list"_s),
			$of("lista"_s)
		}),
		$$new($ObjectArray, {
			$of("listitem"_s),
			$of("elemento de lista"_s)
		}),
		$$new($ObjectArray, {
			$of("managesDescendants"_s),
			$of("gestiona descendientes"_s)
		}),
		$$new($ObjectArray, {
			$of("memberOf"_s),
			$of("miembro de"_s)
		}),
		$$new($ObjectArray, {
			$of("menu"_s),
			$of(u"menú"_s)
		}),
		$$new($ObjectArray, {
			$of("menubar"_s),
			$of(u"barra de menús"_s)
		}),
		$$new($ObjectArray, {
			$of("menuitem"_s),
			$of(u"elemento de menú"_s)
		}),
		$$new($ObjectArray, {
			$of("modal"_s),
			$of("modal"_s)
		}),
		$$new($ObjectArray, {
			$of("multiline"_s),
			$of(u"línea múltiple"_s)
		}),
		$$new($ObjectArray, {
			$of("multiselectable"_s),
			$of("multiseleccionable"_s)
		}),
		$$new($ObjectArray, {
			$of("opaque"_s),
			$of("opaco"_s)
		}),
		$$new($ObjectArray, {
			$of("optionpane"_s),
			$of("panel de opciones"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetab"_s),
			$of(u"separador de página"_s)
		}),
		$$new($ObjectArray, {
			$of("pagetablist"_s),
			$of(u"lista de separadores de página"_s)
		}),
		$$new($ObjectArray, {
			$of("panel"_s),
			$of("panel"_s)
		}),
		$$new($ObjectArray, {
			$of("paragraph"_s),
			$of(u"párrafo"_s)
		}),
		$$new($ObjectArray, {
			$of("parentWindowOf"_s),
			$of("ventana principal de"_s)
		}),
		$$new($ObjectArray, {
			$of("passwordtext"_s),
			$of(u"texto de contraseña"_s)
		}),
		$$new($ObjectArray, {
			$of("popupmenu"_s),
			$of(u"menú emergente"_s)
		}),
		$$new($ObjectArray, {
			$of("pressed"_s),
			$of("pulsado"_s)
		}),
		$$new($ObjectArray, {
			$of("progressMonitor"_s),
			$of("monitor de progreso"_s)
		}),
		$$new($ObjectArray, {
			$of("progressbar"_s),
			$of("barra de progreso"_s)
		}),
		$$new($ObjectArray, {
			$of("pushbutton"_s),
			$of(u"botón"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton"_s),
			$of(u"botón de radio"_s)
		}),
		$$new($ObjectArray, {
			$of("resizable"_s),
			$of("redimensionable"_s)
		}),
		$$new($ObjectArray, {
			$of("rootpane"_s),
			$of(u"panel raíz"_s)
		}),
		$$new($ObjectArray, {
			$of("rowheader"_s),
			$of("cabecera de filas"_s)
		}),
		$$new($ObjectArray, {
			$of("ruler"_s),
			$of("regla"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollbar"_s),
			$of("barra de desplazamiento"_s)
		}),
		$$new($ObjectArray, {
			$of("scrollpane"_s),
			$of("panel de desplazamiento"_s)
		}),
		$$new($ObjectArray, {
			$of("selectable"_s),
			$of("seleccionable"_s)
		}),
		$$new($ObjectArray, {
			$of("selected"_s),
			$of("seleccionado"_s)
		}),
		$$new($ObjectArray, {
			$of("separator"_s),
			$of("separador"_s)
		}),
		$$new($ObjectArray, {
			$of("showing"_s),
			$of("mostrando"_s)
		}),
		$$new($ObjectArray, {
			$of("singleline"_s),
			$of(u"línea única"_s)
		}),
		$$new($ObjectArray, {
			$of("slider"_s),
			$of("deslizador"_s)
		}),
		$$new($ObjectArray, {
			$of("splitpane"_s),
			$of(u"panel de división"_s)
		}),
		$$new($ObjectArray, {
			$of("subwindowOf"_s),
			$of("ventana subordinada de"_s)
		}),
		$$new($ObjectArray, {
			$of("swingcomponent"_s),
			$of("componente swing"_s)
		}),
		$$new($ObjectArray, {
			$of("table"_s),
			$of("tabla"_s)
		}),
		$$new($ObjectArray, {
			$of("text"_s),
			$of("texto"_s)
		}),
		$$new($ObjectArray, {
			$of("togglebutton"_s),
			$of(u"botón conmutador"_s)
		}),
		$$new($ObjectArray, {
			$of("toggleexpand"_s),
			$of(u"conmutar ampliación"_s)
		}),
		$$new($ObjectArray, {
			$of("toolbar"_s),
			$of("barra de herramientas"_s)
		}),
		$$new($ObjectArray, {
			$of("tooltip"_s),
			$of("ayuda de burbuja"_s)
		}),
		$$new($ObjectArray, {
			$of("transient"_s),
			$of("transitorio"_s)
		}),
		$$new($ObjectArray, {
			$of("tree"_s),
			$of(u"árbol"_s)
		}),
		$$new($ObjectArray, {
			$of("truncated"_s),
			$of("truncado"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("desconocido"_s)
		}),
		$$new($ObjectArray, {
			$of("vertical"_s),
			$of("vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("viewport"_s),
			$of("viewport"_s)
		}),
		$$new($ObjectArray, {
			$of("visible"_s),
			$of("visible"_s)
		}),
		$$new($ObjectArray, {
			$of("window"_s),
			$of("ventana"_s)
		})
	});
}

accessibility_es::accessibility_es() {
}

$Class* accessibility_es::load$($String* name, bool initialize) {
	$loadClass(accessibility_es, name, initialize, &_accessibility_es_ClassInfo_, allocate$accessibility_es);
	return class$;
}

$Class* accessibility_es::class$ = nullptr;

				} // resources
			} // internal
		} // accessibility
	} // sun
} // com