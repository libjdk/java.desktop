#include <sun/print/resources/serviceui_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_fr::*)()>(&serviceui_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_fr_MethodInfo_
};

$Object* allocate$serviceui_fr($Class* clazz) {
	return $of($alloc(serviceui_fr));
}

void serviceui_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of("Alimentation automatique"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Cassette"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of("Source du formulaire"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Grand format"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Enveloppe (manuel)"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Petit format"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Alimentation en continu"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"Ingénierie A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"Acceptation des tâches"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"Sélection automatique"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"Ingénierie B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of("Couleur"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Copies"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"Attributs de tâche"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of("Marges"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Support"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of("Orientation"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of("Plage d\'impression"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of("Service d\'impression"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"Qualité"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"Côtés"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Bas"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Imprimer"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"P&ropriétés..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"Ingénierie C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("&Collationner"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"Page de &bannière"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("Imprimer dans un &fichier"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"Ingénierie D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of("Service d\'impression introuvable."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Ce fichier existe déjà. Remplacer le fichier existant ?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Imprimer dans un fichier"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Imprimer"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Imprimer dans un fichier"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of("Mise en page"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"Impossible d\'écrire dans le fichier :"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"Ingénierie E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Enveloppe"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of("Nom de fichier non valide ; recommencez"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"Plage de pages non valide. Spécifiez les valeurs de nouveau (ex. : 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of("Administratif"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of("Folio"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of("Enveloppe invitation"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Facture"_s)
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
			$of("Long ISO"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Enveloppe Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Enveloppe Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Carte postale (JIS)"_s)
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
			$of("&bas"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(po)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of("Infos :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("Nom du tra&vail :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("gauc&he"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of("Nombre de c&opies :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"P&riorité :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Nom :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of("Type :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of("A"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of("&droite"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of("Tai&lle :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("Sour&ce :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Statut :"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("&haut"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of("Nom ut&ilisateur :"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"Grande capacité"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Fiche"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Principal"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manuel"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Centre"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Enveloppe Monarch"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("Enveloppe 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("Enveloppe 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("Enveloppe 10x15"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("Papier 5x7 po"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("Enveloppe 6x9"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("Enveloppe 6x7"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("Papier 8x10 po"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("Enveloppe 9x11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("Enveloppe 9x12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"Légal"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Lettre"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"Enveloppe n°10"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"Enveloppe n°11"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"Enveloppe n°12"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"Enveloppe n°14"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"Enveloppe n°9"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"Refus des tâches"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Carte postale double (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Enveloppe personnelle"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of("Coul&eur"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Broui&llon"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("&Duplex"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("Ma&x."_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("Pa&ysage"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("Monoc&hrome"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"Un &côté"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("&Portrait"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("&Tout"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of("Pag&es"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"Paysage i&nversé"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"Portrait &inversé"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"&Tête-bêche"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"Côté"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("&Apparence"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"&Général"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of("&Mise en page"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"Tabloïd"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Haut"_s)
		})
	});
}

serviceui_fr::serviceui_fr() {
}

$Class* serviceui_fr::load$($String* name, bool initialize) {
	$loadClass(serviceui_fr, name, initialize, &_serviceui_fr_ClassInfo_, allocate$serviceui_fr);
	return class$;
}

$Class* serviceui_fr::class$ = nullptr;

		} // resources
	} // print
} // sun