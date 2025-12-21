#include <sun/print/resources/serviceui_de.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_de::*)()>(&serviceui_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_de_MethodInfo_
};

$Object* allocate$serviceui_de($Class* clazz) {
	return $of($alloc(serviceui_de));
}

void serviceui_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"Automatische Zuführung"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Kassette"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of("Formularquelle"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"Großformat"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"Manuelle Umschlagzuführung"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Kleinformat"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Endlospapiereinzug"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Millimeterpapier A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Jobs annehmen"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of("Automatische Auswahl"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Millimeterpapier B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of("Farbdarstellung"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Kopien"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Jobattribute"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"Ränder"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Medien"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of("Ausrichtung"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of("Druckbereich"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of("Druckservice"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"Qualität"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Seiten"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Unten"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Drucken"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of("E&igenschaften..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Millimeterpapier C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("&Sortieren"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of("Banner&seite"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("Aus&gabe in Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Millimeterpapier D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of("Kein Druckservice gefunden."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Diese Datei ist bereits vorhanden. Möchten Sie die vorhandene Datei überschreiben?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("In Datei drucken"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Drucken"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("In Datei drucken"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of("Seite einrichten"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"Schreiben in Datei nicht möglich:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of("Millimeterpapier E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"Ungültiger Dateiname. Wiederholen Sie den Vorgang"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"Ungültiger Seitenbereich. Geben Sie die Werte erneut ein (Beispiel: 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of("Executive"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of("Folio"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of("Einladungsumschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Invoice"_s)
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
			$of("ISO Designated Long"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Italy-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Italy-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Postkarte (JIS)"_s)
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
			$of("u&nten"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(Zoll)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of("Info:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("&Jobname:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("&links"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of("Anzahl &Kopien:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"P&riorität:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Name:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of("Typ:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of("Bis"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of("re&chts"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"G&röße:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("&Quelle:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Status:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("&oben"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of("&Benutzername:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"Hohe Kapazität"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Haupt"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manuell"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Mitte"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Monarch-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("10x13-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("10x14-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("10x15-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("5\" x 7\"-Papier"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("6x9-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("6x7-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("8\" x 10\"-Papier"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("9x11-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("9x12-Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of("Legal"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Letter"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of("Umschlag Nr. 10"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of("Umschlag Nr. 11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of("Umschlag Nr. 12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of("Umschlag Nr. 14"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of("Umschlag Nr. 9"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of("Jobs nicht annehmen"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Doppelte Postkarte (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of(u"Persönlicher Umschlag"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of("&Farbe"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Ent&wurf"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("Du&plex"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("&Hoch"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("Querforma&t"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("&Monochrom"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("E&inseitig"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("Hochfor&mat"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("A&lle"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of("Sei&ten"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of("Umgekehrtes Q&uerformat"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of("Umgekehrtes &Hochformat"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of("&Kalenderdruck"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Seite"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("&Darstellung"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of("&Allgemein"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of("Seite &einrichten"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Oben"_s)
		})
	});
}

serviceui_de::serviceui_de() {
}

$Class* serviceui_de::load$($String* name, bool initialize) {
	$loadClass(serviceui_de, name, initialize, &_serviceui_de_ClassInfo_, allocate$serviceui_de);
	return class$;
}

$Class* serviceui_de::class$ = nullptr;

		} // resources
	} // print
} // sun