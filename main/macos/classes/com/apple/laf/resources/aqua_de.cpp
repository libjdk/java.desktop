#include <com/apple/laf/resources/aqua_de.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace apple {
		namespace laf {
			namespace resources {

$MethodInfo _aqua_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(aqua_de::*)()>(&aqua_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _aqua_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.laf.resources.aqua_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_aqua_de_MethodInfo_
};

$Object* allocate$aqua_de($Class* clazz) {
	return $of($alloc(aqua_de));
}

void aqua_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of("Klicken"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"Hinzufügen"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"Löschen"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of("Wiederherstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"Formatvorlagenänderung"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"Rückgängig"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of("Wiederherstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"Rückgängig"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of("Abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsb.textAndMnemonic"_s),
			$of("&HSB"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbBlue.textAndMnemonic"_s),
			$of("B"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbBrightness.textAndMnemonic"_s),
			$of("B"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbGreen.textAndMnemonic"_s),
			$of("G"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbHue.textAndMnemonic"_s),
			$of("H"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbRed.textAndMnemonic"_s),
			$of("R"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbSaturation.textAndMnemonic"_s),
			$of("S"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.ok.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of("Vorschau"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"&Zurücksetzen"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("R&GB"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of("&Blau"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"Grü&n"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of("Ro&t"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of("Beispieltext  Beispieltext"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of("&Muster"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of("Aktuell:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of("togglePopup"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("Alle Dateien"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.by.textAndMnemonic"_s),
			$of("Name"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.byDate.textAndMnemonic"_s),
			$of(u"Änderungsdatum"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of("Abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.chooseButton.textAndMnemonic"_s),
			$of(u"Wählen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.createButton.textAndMnemonic"_s),
			$of("Erstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.desktopName"_s),
			$of("Desktop"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of("Verzeichnis"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"Öffnen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of("Allgemeine Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of("Datei:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeGigaBytes"_s),
			$of("{0} GB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeKiloBytes"_s),
			$of("{0} KB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileSizeMegaBytes"_s),
			$of("{0} MB"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.filesOfTypeLabel.textAndMnemonic"_s),
			$of("Dateiformat:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of("Hilfe"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder"_s),
			$of("unbenannter Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder.subsequent"_s),
			$of("unbenannter Ordner {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of("Neuer Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of("Neuer Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of("Bei der Erstellung des Ordners ist ein Fehler aufgetreten"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderExistsError.textAndMnemonic"_s),
			$of("Dieser Name ist bereits vergeben"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderPrompt.textAndMnemonic"_s),
			$of("Name des neuen Ordners:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderTitle.textAndMnemonic"_s),
			$of("Neuer Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"Öffnen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"Öffnen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openTitle.textAndMnemonic"_s),
			$of(u"Öffnen"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("Speichern"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s),
			$of("Speichern unter:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of("Speichern"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveTitle.textAndMnemonic"_s),
			$of("Speichern"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFileName"_s),
			$of("unbenannt"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFolderName"_s),
			$of("unbenannter Ordner"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of("Aktualisieren"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of("Durchsuchen..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"Zurücksetzen"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of("Abfrage weiterleiten"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"Schließen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of("Minimieren"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of("Maximieren"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of("Wiederherstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"Schließen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"Schließen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of("Als Symbol darstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of("Maximieren"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of("Maximieren"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of("Minimieren"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of("Verschieben"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of("Wiederherstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"Größe"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"Dieser Index kann durchsucht werden. Geben Sie Schlüsselwörter für die Suche ein:"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of("Abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of("Eingabe"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of("Meldung"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of("&Nein"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"Option auswählen"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of("&Ja"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of("&Abbruch"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of("Druckvorgang abbrechen"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of("Druckvorgang wird abgebrochen..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"Druckvorgang läuft..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of("Seite {0} wurde gedruckt..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of("Drucken (wird abgebrochen)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of("Drucken"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of("Fortschritt..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"linke Schaltfläche"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"rechte Schaltfläche"_s)
		})
	});
}

aqua_de::aqua_de() {
}

$Class* aqua_de::load$($String* name, bool initialize) {
	$loadClass(aqua_de, name, initialize, &_aqua_de_ClassInfo_, allocate$aqua_de);
	return class$;
}

$Class* aqua_de::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com