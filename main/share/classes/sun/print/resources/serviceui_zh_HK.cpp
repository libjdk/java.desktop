#include <sun/print/resources/serviceui_zh_HK.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_zh_HK::*)()>(&serviceui_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_zh_HK_MethodInfo_
};

$Object* allocate$serviceui_zh_HK($Class* clazz) {
	return $of($alloc(serviceui_zh_HK));
}

void serviceui_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"自動饋紙器"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"卡式磁帶機"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"表格來源"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"大格式"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"手送封套"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"小格式"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"拖曳饋紙器"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"工程 A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"接受的工作"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"自動選取"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"工程 B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"色彩外觀"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"份數"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"工作屬性"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"邊距"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"媒體"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"方向"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"列印範圍"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"列印服務"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"品質"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"邊"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of(u"下"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of(u"確定"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"列印"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"特性(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"工程 C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"理序(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"標題頁(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"列印至檔案(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"工程 D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"找不到列印服務。"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"這個檔案已經存在。您要覆寫已存在的檔案嗎？"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"列印至檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"列印"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"列印至檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"頁面設定"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"無法寫入至檔案:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"工程 E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"封套"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"無效的檔名; 請再試一次"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"無效的頁面範圍; 請重新輸入數值 (例如 1-3,5,7-10)"_s)
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
			$of("Invitation Envelope"_s)
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
			$of("Italy Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Italy Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Postcard (JIS)"_s)
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
			$of(u"底部邊距(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(in)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"資訊: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"工作名稱(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"左邊距(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"列印份數(&O): "_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"優先權(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"名稱(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"類型: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"至"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"右邊距(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"大小(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"來源(&C): "_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"狀態: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"頂端邊距(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"使用者名稱(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"大容量"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"主"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"手送"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"中"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Monarch Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("5\" x 7\" Paper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("6x9 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("6x7 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("8\" x 10\" Paper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("9x11 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("9x12 Envelope"_s)
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
			$of("No. 10 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of("No. 11 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of("No. 12 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of("No. 14 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of("No. 9 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"不接受的工作"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Double Postcard (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Personal Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"顏色(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"草稿(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"雙面列印(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"高(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"橫向(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"單色(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"正常(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"單面(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"直向(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"全部(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"頁面(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"反向橫印(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"反向直印(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"翻轉(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"邊"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"外觀(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"一般(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"頁面設定(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"上"_s)
		})
	});
}

serviceui_zh_HK::serviceui_zh_HK() {
}

$Class* serviceui_zh_HK::load$($String* name, bool initialize) {
	$loadClass(serviceui_zh_HK, name, initialize, &_serviceui_zh_HK_ClassInfo_, allocate$serviceui_zh_HK);
	return class$;
}

$Class* serviceui_zh_HK::class$ = nullptr;

		} // resources
	} // print
} // sun