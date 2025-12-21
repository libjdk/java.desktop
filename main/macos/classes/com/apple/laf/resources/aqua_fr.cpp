#include <com/apple/laf/resources/aqua_fr.h>

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

$MethodInfo _aqua_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(aqua_fr::*)()>(&aqua_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _aqua_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.laf.resources.aqua_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_aqua_fr_MethodInfo_
};

$Object* allocate$aqua_fr($Class* clazz) {
	return $of($alloc(aqua_fr));
}

void aqua_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of("cliquer"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of("ajout"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of("suppression"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"Rétablir"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of("modification de style"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"Rétablir"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsb.textAndMnemonic"_s),
			$of("&TSL"_s)
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
			$of("V"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsbHue.textAndMnemonic"_s),
			$of("T"_s)
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
			$of(u"Aperçu"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"&Réinitialiser"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("R&VB"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of("&Bleu"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of("&Vert"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of("R&ouge"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of("Echantillon de texte  Echantillon de texte"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of("&Echantillons"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of("Dernier :"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of("togglePopup"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of("Tous les fichiers"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.by.textAndMnemonic"_s),
			$of("Nom"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.byDate.textAndMnemonic"_s),
			$of("Date de modification"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.chooseButton.textAndMnemonic"_s),
			$of("Choisir"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.createButton.textAndMnemonic"_s),
			$of(u"Créer"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.desktopName"_s),
			$of("Bureau"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"Répertoire"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of("Ouvrir"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"Fichier générique"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of("Fichier :"_s)
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
			$of("Format de fichier :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of("Aide"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder"_s),
			$of("dossier sans titre"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder.subsequent"_s),
			$of("dossier {0} sans titre"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of("Nouveau dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of("Nouveau dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"Erreur lors de la création du dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderExistsError.textAndMnemonic"_s),
			$of(u"Ce nom est déjà utilisé"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderPrompt.textAndMnemonic"_s),
			$of("Nom du nouveau dossier :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderTitle.textAndMnemonic"_s),
			$of("Nouveau dossier"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of("Ouvrir"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of("Ouvrir"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openTitle.textAndMnemonic"_s),
			$of("Ouvrir"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of("Enregistrer"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s),
			$of("Enregistrer sous :"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of("Enregistrer"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveTitle.textAndMnemonic"_s),
			$of("Enregistrer"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFileName"_s),
			$of("sans titre"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFolderName"_s),
			$of("dossier sans titre"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"Mettre à jour"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of("Parcourir..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"Réinitialiser"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"Soumettre la requête"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of("Fermer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of(u"Réduire"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of("Agrandir"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of("Restaurer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of("Fermer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of("Fermer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"Réduire"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of("Agrandir"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of("Agrandir"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of(u"Réduire"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of(u"Déplacer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of("Restaurer"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of("Taille"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"Ceci est un index de recherche. Tapez des mots-clés pour la recherche :"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of("Annuler"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"Entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of("Message"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of("&Non"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"Sélectionner une option"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of("&Oui"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of("&Abandonner"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of("Abandonner l\'impression"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of("Abandon de l\'impression..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of("Impression en cours..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"Page {0} imprimée..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of("Impression (abandon)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of("Impression"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of("Progression..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of("bouton gauche"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of("bouton droit"_s)
		})
	});
}

aqua_fr::aqua_fr() {
}

$Class* aqua_fr::load$($String* name, bool initialize) {
	$loadClass(aqua_fr, name, initialize, &_aqua_fr_ClassInfo_, allocate$aqua_fr);
	return class$;
}

$Class* aqua_fr::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com