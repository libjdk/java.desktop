#include <sun/print/resources/serviceui_ja.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_ja::*)()>(&serviceui_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_ja_MethodInfo_
};

$Object* allocate$serviceui_ja($Class* clazz) {
	return $of($alloc(serviceui_ja));
}

void serviceui_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"自動フィーダ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"カセット"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"フォーム・ソース"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"ラージ・フォーマット"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"マニュアル封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"スモール・フォーマット"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"トラクタ・フィーダ"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"エンジニアリングA"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"ジョブを受け付けています"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"自動選択"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"エンジニアリングB"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"色の表現"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"印刷部数"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"ジョブの属性"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"マージン"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"メディア"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"用紙の向き"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"印刷範囲"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"印刷サービス"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"品質"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"面"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of(u"下部"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of(u"取消"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"印刷"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"プロパティ(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"エンジニアリングC"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"丁合い(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"バナー・ページ(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"ファイルに出力(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"エンジニアリングD"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"印刷サービスが見つかりません。"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"このファイルはすでに存在します。既存のファイルに上書きしますか。"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"ファイルに出力"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"印刷"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"ファイルに出力"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"ページ設定"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"ファイルに書き込めません:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"エンジニアリングE"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"無効なファイル名。ファイル名を再入力してください"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"無効なページ範囲。値を再入力してください(例、1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of(u"エグゼクティブ"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of(u"フォリオ"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of(u"招待封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of(u"インボイス"_s)
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
			$of(u"ISO DL(長寸)"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of(u"イタリア封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of(u"イタリア封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of(u"はがき(JIS)"_s)
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
			$of(u"下(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(in)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"情報:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"ジョブ名(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"左(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"印刷部数(&O):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"優先度(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"名前(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"タイプ:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"印刷範囲"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"右(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"サイズ(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"ソース(&C):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"状態:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"上(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"ユーザー名(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"大容量"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of(u"レッジャ"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"メイン"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"マニュアル"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"中間"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of(u"モナーク封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of(u"10x15封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of(u"10x15封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of(u"10x15封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of(u"5x7インチ用紙"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of(u"6x9封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of(u"6x7封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of(u"8x10インチ用紙"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of(u"9x11封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of(u"9x12封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"リーガル"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of(u"レター"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"No. 10封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"No. 11封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"No. 12封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"No. 14封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"No. 9封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"ジョブを受け付けません"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of(u"往復はがき(JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of(u"個人用封筒"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of(u"クォート"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"カラー(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"ドラフト(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"両面(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"高(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"横(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"モノクロ(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"標準(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"片面(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"縦(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"すべて(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"ページ(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"ランドスケープ(反転)(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"ポートレイト(反転)(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"反転(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"面"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"外観(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"一般(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"ページ設定(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"タブロイド"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"上部"_s)
		})
	});
}

serviceui_ja::serviceui_ja() {
}

$Class* serviceui_ja::load$($String* name, bool initialize) {
	$loadClass(serviceui_ja, name, initialize, &_serviceui_ja_ClassInfo_, allocate$serviceui_ja);
	return class$;
}

$Class* serviceui_ja::class$ = nullptr;

		} // resources
	} // print
} // sun