#include <sun/print/resources/serviceui_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_zh_CN::*)()>(&serviceui_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_zh_CN_MethodInfo_
};

$Object* allocate$serviceui_zh_CN($Class* clazz) {
	return $of($alloc(serviceui_zh_CN));
}

void serviceui_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"自动馈送器"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"纸盒"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"表格来源"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"大号版式"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"手动信封"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"小号版式"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"牵引式馈送器"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"工程 A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"接受作业"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"自动选择"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"工程 B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"颜色外观"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"份数"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"作业属性"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"边距"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"介质"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"方向"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"打印区域"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"打印服务"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"质量"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"边"_s)
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
			$of(u"确定"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"打印"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"属性(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"工程 C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"逐份打印(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"标帜页(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"打印到文件(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"工程 D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"找不到打印服务。"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"该文件已经存在。是否要覆盖现有文件?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"打印到文件"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"打印"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"打印到文件"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"页面设置"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"无法写入文件:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"工程 E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"信封"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"无效的文件名; 请重试"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"无效的页面范围; 请重新输入数值 (例如 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of(u"执行程序"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of(u"对开页"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of(u"邀请函信封"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of(u"发票"_s)
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
			$of(u"ISO 指定长度"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of(u"意大利信封"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of(u"意大利信封"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of(u"明信片 (JIS)"_s)
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
			$of(u"下边距(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of(u"(英寸)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"信息: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"作业名(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"左边距(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of(u"(毫米)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"打印份数(&O):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"优先级(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"名称(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"类型: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"至"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"右边距(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"大小(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"来源(&C):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"状态: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"上边距(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"用户名(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"大容量"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of(u"帐目"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"主"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"手动"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"中"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of(u"Monarch 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of(u"10x15 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of(u"10x15 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of(u"10x15 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of(u"5\" x 7\" 纸张"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of(u"6x9 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of(u"6x7 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of(u"8\" x 10\" 纸张"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of(u"9x11 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of(u"9x12 信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"法律文书"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of(u"信函"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"10 号信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"11 号信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"12 号信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"14 号信封"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"9 号信封"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"不接受作业"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of(u"双面明信片 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of(u"个人信封"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of(u"四开页"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"颜色(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"草图(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"双面打印(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"高(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"横向(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"单色(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"正常(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"单面(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"纵向(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"全部(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"页码范围(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"横向反面打印(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"纵向反面打印(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"翻转(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"侧"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"外观(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"一般信息(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"页面设置(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"小报"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"上"_s)
		})
	});
}

serviceui_zh_CN::serviceui_zh_CN() {
}

$Class* serviceui_zh_CN::load$($String* name, bool initialize) {
	$loadClass(serviceui_zh_CN, name, initialize, &_serviceui_zh_CN_ClassInfo_, allocate$serviceui_zh_CN);
	return class$;
}

$Class* serviceui_zh_CN::class$ = nullptr;

		} // resources
	} // print
} // sun