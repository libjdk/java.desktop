#include <com/apple/laf/resources/aqua_zh_HK.h>

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

$MethodInfo _aqua_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(aqua_zh_HK::*)()>(&aqua_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _aqua_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.laf.resources.aqua_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_aqua_zh_HK_MethodInfo_
};

$Object* allocate$aqua_zh_HK($Class* clazz) {
	return $of($alloc(aqua_zh_HK));
}

void aqua_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* aqua_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AbstractButton.click.textAndMnemonic"_s),
			$of(u"按一下"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.addition.textAndMnemonic"_s),
			$of(u"附加"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.deletion.textAndMnemonic"_s),
			$of(u"刪除"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.redo.textAndMnemonic"_s),
			$of(u"重做"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.styleChange.textAndMnemonic"_s),
			$of(u"樣式變更"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractDocument.undo.textAndMnemonic"_s),
			$of(u"還原"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.redo.textAndMnemonic"_s),
			$of(u"重做"_s)
		}),
		$$new($ObjectArray, {
			$of("AbstractUndoableEdit.undo.textAndMnemonic"_s),
			$of(u"還原"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.cancel.textAndMnemonic"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.hsb.textAndMnemonic"_s),
			$of("HSB(&H)"_s)
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
			$of(u"確定"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.preview.textAndMnemonic"_s),
			$of(u"預覽"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.reset.textAndMnemonic"_s),
			$of(u"重設(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgb.textAndMnemonic"_s),
			$of("RGB(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbBlue.textAndMnemonic"_s),
			$of(u"藍(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbGreen.textAndMnemonic"_s),
			$of(u"綠(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.rgbRed.textAndMnemonic"_s),
			$of(u"紅(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.sample.textAndMnemonic"_s),
			$of(u"範例文字  範例文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatches.textAndMnemonic"_s),
			$of(u"調色板(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorChooser.swatchesRecent.textAndMnemonic"_s),
			$of(u"最新選擇:"_s)
		}),
		$$new($ObjectArray, {
			$of("ComboBox.togglePopup.textAndMnemonic"_s),
			$of(u"切換即現式視窗"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.acceptAllFileFilter.textAndMnemonic"_s),
			$of(u"所有檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.by.textAndMnemonic"_s),
			$of(u"名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.byDate.textAndMnemonic"_s),
			$of(u"修改日期"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.cancelButton.textAndMnemonic"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.chooseButton.textAndMnemonic"_s),
			$of(u"選擇"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.createButton.textAndMnemonic"_s),
			$of(u"建立"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.desktopName"_s),
			$of(u"桌面"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryDescription.textAndMnemonic"_s),
			$of(u"目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.directoryOpenButton.textAndMnemonic"_s),
			$of(u"開啟"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileDescription.textAndMnemonic"_s),
			$of(u"一般檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.fileNameLabel.textAndMnemonic"_s),
			$of(u"檔案:"_s)
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
			$of(u"檔案格式:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.helpButton.textAndMnemonic"_s),
			$of(u"說明"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder"_s),
			$of(u"未命名的資料夾"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.mac.newFolder.subsequent"_s),
			$of(u"未命名的資料夾 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderAccessibleName"_s),
			$of(u"新資料夾"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderButton.textAndMnemonic"_s),
			$of(u"新資料夾"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderError.textAndMnemonic"_s),
			$of(u"建立資料夾時發生錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderErrorSeparator"_s),
			$of(":"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderExistsError.textAndMnemonic"_s),
			$of(u"該名稱已經被使用"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderPrompt.textAndMnemonic"_s),
			$of(u"新資料夾名稱:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.newFolderTitle.textAndMnemonic"_s),
			$of(u"新資料夾"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openButton.textAndMnemonic"_s),
			$of(u"開啟"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openDialogTitle.textAndMnemonic"_s),
			$of(u"開啟"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.openTitle.textAndMnemonic"_s),
			$of(u"開啟"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveButton.textAndMnemonic"_s),
			$of(u"儲存"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogFileNameLabel.textAndMnemonic"_s),
			$of(u"另存新檔:"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveDialogTitle.textAndMnemonic"_s),
			$of(u"儲存"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.saveTitle.textAndMnemonic"_s),
			$of(u"儲存"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFileName"_s),
			$of(u"未命名"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.untitledFolderName"_s),
			$of(u"未命名的資料夾"_s)
		}),
		$$new($ObjectArray, {
			$of("FileChooser.updateButton.textAndMnemonic"_s),
			$of(u"更新"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.browseFileButton.textAndMnemonic"_s),
			$of(u"瀏覽..."_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.resetButton.textAndMnemonic"_s),
			$of(u"重設"_s)
		}),
		$$new($ObjectArray, {
			$of("FormView.submitButton.textAndMnemonic"_s),
			$of(u"送出查詢"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.closeButtonToolTip"_s),
			$of(u"關閉"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.iconButtonToolTip"_s),
			$of(u"最小化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.maxButtonToolTip"_s),
			$of(u"最大化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrame.restoreButtonToolTip"_s),
			$of(u"復原"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButton.textAndMnemonic"_s),
			$of(u"關閉"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.closeButtonAccessibleName"_s),
			$of(u"關閉"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.iconifyButtonAccessibleName"_s),
			$of(u"圖示化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButton.textAndMnemonic"_s),
			$of(u"最大化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.maximizeButtonAccessibleName"_s),
			$of(u"最大化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.minimizeButton.textAndMnemonic"_s),
			$of(u"最小化"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.moveButton.textAndMnemonic"_s),
			$of(u"移動"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.restoreButton.textAndMnemonic"_s),
			$of(u"復原"_s)
		}),
		$$new($ObjectArray, {
			$of("InternalFrameTitlePane.sizeButton.textAndMnemonic"_s),
			$of(u"大小"_s)
		}),
		$$new($ObjectArray, {
			$of("IsindexView.prompt"_s),
			$of(u"這是一個可搜尋的索引。輸入搜尋關鍵字: "_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.cancelButton.textAndMnemonic"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.inputDialog.titleAndMnemonic"_s),
			$of(u"輸入"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.messageDialog.titleAndMnemonic"_s),
			$of(u"訊息"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.noButton.textAndMnemonic"_s),
			$of(u"否(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.okButton.textAndMnemonic"_s),
			$of(u"確定"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.title.textAndMnemonic"_s),
			$of(u"選取一個選項"_s)
		}),
		$$new($ObjectArray, {
			$of("OptionPane.yesButton.textAndMnemonic"_s),
			$of(u"是(&Y)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButton.textAndMnemonic"_s),
			$of(u"中止(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.abortButtonToolTip.textAndMnemonic"_s),
			$of(u"中止列印"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentAborting.textAndMnemonic"_s),
			$of(u"正在中止列印..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentInitial.textAndMnemonic"_s),
			$of(u"正在列印..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.contentProgress.textAndMnemonic"_s),
			$of(u"已列印第 {0} 頁..."_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleAborting.textAndMnemonic"_s),
			$of(u"列印 (中止中)"_s)
		}),
		$$new($ObjectArray, {
			$of("PrintingDialog.titleProgress.textAndMnemonic"_s),
			$of(u"列印中"_s)
		}),
		$$new($ObjectArray, {
			$of("ProgressMonitor.progress.textAndMnemonic"_s),
			$of(u"進度..."_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.leftButton.textAndMnemonic"_s),
			$of(u"左按鈕"_s)
		}),
		$$new($ObjectArray, {
			$of("SplitPane.rightButton.textAndMnemonic"_s),
			$of(u"右按鈕"_s)
		})
	});
}

aqua_zh_HK::aqua_zh_HK() {
}

$Class* aqua_zh_HK::load$($String* name, bool initialize) {
	$loadClass(aqua_zh_HK, name, initialize, &_aqua_zh_HK_ClassInfo_, allocate$aqua_zh_HK);
	return class$;
}

$Class* aqua_zh_HK::class$ = nullptr;

			} // resources
		} // laf
	} // apple
} // com