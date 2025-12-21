#include <sun/print/resources/serviceui_pt_BR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_pt_BR::*)()>(&serviceui_pt_BR::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_pt_BR_MethodInfo_
};

$Object* allocate$serviceui_pt_BR($Class* clazz) {
	return $of($alloc(serviceui_pt_BR));
}

void serviceui_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"Alimentador Automático"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Cassete"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"Origem do Formulário"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Formato Grande"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Envelope Manual"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Formato Pequeno"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Alimentador por Tracionador"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Engenharia A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Aceitando jobs"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of("Selecionar Automaticamente"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Engenharia B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"Aparência da Cor"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"Cópias"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Atributos do Job"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of("Margens"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"Mídia"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"Orientação"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"Faixa de Impressão"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"Serviço de Impressão"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of("Qualidade"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Lados"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Inferior"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Cancelar"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Imprimir"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of("P&ropriedades..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Engenharia C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("&Agrupar"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"Página com &Banner"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("&Imprimir em Arquivo"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Engenharia D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"Nenhum serviço de impressão encontrado."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Este arquivo já existe. Deseja substituir o arquivo existente?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Imprimir em Arquivo"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Imprimir"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Imprimir em Arquivo"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"Configuração da Página"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"Não é possível gravar no arquivo:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of("Engenharia E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"Nome de arquivo inválido; tente novamente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"Faixa de páginas inválida; insira novamente os valores (por exemplo, 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of("Executivo"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of(u"Fólio"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of("Envelope de Convite"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Fatura"_s)
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
			$of("Longo Designado ISO"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Envelope Italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Envelope Italiano"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of(u"Cartão Postal (JIS)"_s)
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
			$of("&inferior"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(pol)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"Informações:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("Nome do &Job:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("es&querda:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"Númer&o de cópias:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of("Pri&oridade:"_s)
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
			$of(u"Até"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of("&direita"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of("Ta&manho:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("&Origem:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Status:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("&superior"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"Nome do &Usuário:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of("Grande Capacidade"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Duplo Carta"_s)
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
			$of("Meio"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Envelope Monarca"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("Envelope 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("Envelope 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("Envelope 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("Papel 5\" x 7\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("Envelope 6x9"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("Envelope 6x7"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("Papel 8\" x 10\""_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("Envelope 9x11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("Envelope 9x12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"Ofício"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Carta"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"Envelope nº 10"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"Envelope nº 11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"Envelope nº 12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"Envelope nº 14"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"Envelope nº 9"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"Não aceitando jobs"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of(u"Cartão Postal Duplo (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Envelope Personalizado"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of("&Cor"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Rascun&ho"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("Duple&x"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("A&lta"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("&Paisagem"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"&Monocromático"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("Um La&do"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("Re&trato"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("T&udo"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"&Páginas"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of("Paisagem I&nvertida"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of("Retrato In&vertido"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of("&Virar"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Lado"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"Apa&rência"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of("&Geral"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"Con&figuração da Página"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"Tablóide"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Superior"_s)
		})
	});
}

serviceui_pt_BR::serviceui_pt_BR() {
}

$Class* serviceui_pt_BR::load$($String* name, bool initialize) {
	$loadClass(serviceui_pt_BR, name, initialize, &_serviceui_pt_BR_ClassInfo_, allocate$serviceui_pt_BR);
	return class$;
}

$Class* serviceui_pt_BR::class$ = nullptr;

		} // resources
	} // print
} // sun