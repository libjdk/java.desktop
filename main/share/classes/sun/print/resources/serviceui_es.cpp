#include <sun/print/resources/serviceui_es.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_es::*)()>(&serviceui_es::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_es_MethodInfo_
};

$Object* allocate$serviceui_es($Class* clazz) {
	return $of($alloc(serviceui_es));
}

void serviceui_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"Alimentador Automático"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Casete"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of("Origen de Formulario"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Formato Grande"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Sobre Manual"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"Formato Pequeño"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Alimentador de Arrastre"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"Ingeniería A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Aceptando trabajos"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"Seleccionar Automáticamente"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"Ingeniería B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of("Apariencia del Color"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Copias"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Atributos del Trabajo"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"Márgenes"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Soporte"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"Orientación"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"Rango de Impresión"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"Servicio de Impresión"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of("Calidad"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Caras"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Abajo"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Cancelar"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("Aceptar"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Imprimir"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of("P&ropiedades..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"Ingeniería C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("Inter&calar"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"Página de Rótu&lo"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("I&mprimir en Archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"Ingeniería D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"No se ha encontrado el servicio de impresión."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Este archivo ya existe. ¿Desea sobrescribirlo?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Imprimir en Archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Imprimir"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Imprimir en Archivo"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"Preparar Página"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of("No se puede escribir en el archivo:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"Ingeniería E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Sobre"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"Nombre de archivo no válido; inténtelo de nuevo"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"Rango de páginas no válido; vuelva a introducir los valores (por ejemplo, 1-3, 5, 7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of("Ejecutivo"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of("Folio"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of(u"Sobre de Invitación"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Factura"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-2a0"_s),
			$of("2A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-4a0"_s),
			$of("4A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a0"_s),
			$of("A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a1"_s),
			$of("A1 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a10"_s),
			$of("A10 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a2"_s),
			$of("A2 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a3"_s),
			$of("A3 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a4"_s),
			$of("A4 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a5"_s),
			$of("A5 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a6"_s),
			$of("A6 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a7"_s),
			$of("A7 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a8"_s),
			$of("A8 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a9"_s),
			$of("A9 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b0"_s),
			$of("B0 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b1"_s),
			$of("B1 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b10"_s),
			$of("B10 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b2"_s),
			$of("B2 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b3"_s),
			$of("B3 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b4"_s),
			$of("B4 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b5"_s),
			$of("B5 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b6"_s),
			$of("B6 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b7"_s),
			$of("B7 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b8"_s),
			$of("B8 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b9"_s),
			$of("B9 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c0"_s),
			$of("C0 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c1"_s),
			$of("C1 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c10"_s),
			$of("C10 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c2"_s),
			$of("C2 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c3"_s),
			$of("C3 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c4"_s),
			$of("C4 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c5"_s),
			$of("C5 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c6"_s),
			$of("C6 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c7"_s),
			$of("C7 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c8"_s),
			$of("C8 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c9"_s),
			$of("C9 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-designated-long"_s),
			$of("Largo Designado ISO"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Sobre Italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Sobre Italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Postal (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b0"_s),
			$of("B0 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b1"_s),
			$of("B1 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b10"_s),
			$of("B10 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b2"_s),
			$of("B2 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b3"_s),
			$of("B3 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b4"_s),
			$of("B4 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b5"_s),
			$of("B5 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b6"_s),
			$of("B6 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b7"_s),
			$of("B7 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b8"_s),
			$of("B8 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b9"_s),
			$of("B9 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.bottommargin"_s),
			$of("in&ferior"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(pulg.)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"Información:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("&Nombre del Trabajo:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("iz&quierdo"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"Número de C&opias:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of("Prior&idad:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Nombre:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of("Tipo:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of("A"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of("d&erecho"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"Tama&ño:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("Orig&en:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Estado:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("s&uperior"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of("&Usuario:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of("Gran Capacidad"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Libro Mayor"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manual"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Centro"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Sobre Monarch"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("Sobre 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("Sobre 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("Sobre 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("Papel 5\" x 7\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("Sobre 6x9"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("Sobre 6x7"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("Papel 8\" x 10\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("Sobre 9x11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("Sobre 9x12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of("Legal"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Carta"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"Sobre Nº 10"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"Sobre Nº 11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"Sobre Nº 12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"Sobre Nº 14"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"Sobre Nº 9"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of("No aceptando trabajos"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Postal Doble (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Sobre Personal"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Cuarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of("&Color"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("B&orrador"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"&Dúplex"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("Al&ta"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("Hori&zontal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("&Monocromo"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("Una Ca&ra"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("&Vertical"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("&Todo"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"Página&s"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of("&Horizontal Inverso"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of("Vertical I&nverso"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of("Cam&bio de Cara"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Cara"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("&Apariencia"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of("&General"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"&Preparar Página"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloide"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Arriba"_s)
		})
	});
}

serviceui_es::serviceui_es() {
}

$Class* serviceui_es::load$($String* name, bool initialize) {
	$loadClass(serviceui_es, name, initialize, &_serviceui_es_ClassInfo_, allocate$serviceui_es);
	return class$;
}

$Class* serviceui_es::class$ = nullptr;

		} // resources
	} // print
} // sun