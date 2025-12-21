#include <sun/print/resources/serviceui_it.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_it::*)()>(&serviceui_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_it_MethodInfo_
};

$Object* allocate$serviceui_it($Class* clazz) {
	return $of($alloc(serviceui_it));
}

void serviceui_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of("Alimentazione automatica"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Cassetta"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of("Origine modulo"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Formato grande"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Busta manuale"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Formato piccolo"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Alimentazione continua"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Engineering A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Accettazione job"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of("Seleziona automaticamente"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Engineering B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of("Aspetto colore"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Copie"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Attributi job"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of("Margini"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Supporti"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of("Orientamento"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of("Intervallo di stampa"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of("Servizio di stampa"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"Qualità"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Lati"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Basso"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Annulla"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Stampa"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"P&roprietà..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Engineering C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("Fascico&la"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of("Pagina &banner"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("Stampa su &file"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Engineering D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of("Nessun servizio di stampa trovato"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Il file esiste già. Sovrascrivere il file esistente?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Stampa su file"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Stampa"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Stampa su file"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of("Imposta pagina"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of("Impossibile scrivere nel file:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of("Engineering E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Busta"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of("Nome file non valido; riprovare"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of("Intervallo pagine non valido; immettere nuovamente i valori (ad es. 1-3,5,7-10)"_s)
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
			$of("Busta invito"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Fattura"_s)
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
			$of("Lunghezza ISO"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Busta Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Busta Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Cartolina giapponese (JIS)"_s)
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
			$of("in&feriore"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(poll.)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of("Informazioni:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("Nome &job:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("sinis&tro"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of("Numero di c&opie:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"P&riorità:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Nome:"_s)
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
			$of("&destro"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of("Di&mensioni:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("O&rigine:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Stato:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("su&periore"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of("Nome &utente:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"Grande capacità"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Principale"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manuale"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Medio"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Busta Monarch"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("Busta 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("Busta 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("Busta 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("Foglio 5\" x 7\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("Busta 6x9"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("Busta 6x7"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("Foglio 8\" x 10\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("Busta 9x11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("Busta 9x12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of("Legale"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Lettera"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of("Busta n. 10"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of("Busta n. 11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of("Busta n. 12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of("Busta n. 14"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of("Busta n. 9"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of("Rifiuto job"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Cartolina giapponese doppia (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Busta personalizzata"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of("&Colore"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Bo&zza"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("&Fronte retro"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("A&lta"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("Orizzonta&le"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("Monocrom&atico"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normale"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("Un lat&o"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("&Verticale"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("T&utto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of("Pagin&e"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of("Orizzo&ntale capovolto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of("Vert&icale capovolto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of("La&to corto"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Laterale"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("As&petto"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of("&Generale"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of("Impo&sta pagina"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Alto"_s)
		})
	});
}

serviceui_it::serviceui_it() {
}

$Class* serviceui_it::load$($String* name, bool initialize) {
	$loadClass(serviceui_it, name, initialize, &_serviceui_it_ClassInfo_, allocate$serviceui_it);
	return class$;
}

$Class* serviceui_it::class$ = nullptr;

		} // resources
	} // print
} // sun