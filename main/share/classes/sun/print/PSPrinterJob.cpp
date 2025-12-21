#include <sun/print/PSPrinterJob.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/peer/FontPeer.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterIOException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/URI.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderMalfunctionError.h>
#include <java/nio/charset/CoderResult.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <javax/print/PrintService.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogTypeSelection.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/PrinterName.h>
#include <javax/print/attribute/standard/Sides.h>
#include <sun/awt/CharsetString.h>
#include <sun/awt/FontConfiguration.h>
#include <sun/awt/FontDescriptor.h>
#include <sun/awt/PlatformFont.h>
#include <sun/awt/SunToolkit.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontAccess.h>
#include <sun/font/FontUtilities.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/PSPathGraphics.h>
#include <sun/print/PSPrinterJob$1.h>
#include <sun/print/PSPrinterJob$2.h>
#include <sun/print/PSPrinterJob$3.h>
#include <sun/print/PSPrinterJob$4.h>
#include <sun/print/PSPrinterJob$EPSPrinter.h>
#include <sun/print/PSPrinterJob$GState.h>
#include <sun/print/PSPrinterJob$PrinterOpener.h>
#include <sun/print/PSPrinterJob$PrinterSpooler.h>
#include <sun/print/PSStreamPrintService.h>
#include <sun/print/PathGraphics.h>
#include <sun/print/PeekGraphics.h>
#include <sun/print/PeekMetrics.h>
#include <sun/print/ProxyGraphics2D.h>
#include <sun/print/RasterPrinterJob.h>
#include <jcpp.h>

#undef ADOBE_PS_STR
#undef BLUE_MASK
#undef BLUE_SHIFT
#undef CLOSEPATH_STR
#undef COPIES
#undef CURVETO_STR
#undef ENGLISH
#undef EOF_COMMENT
#undef EVEN_ODD_CLIP_STR
#undef EVEN_ODD_FILL_STR
#undef FILE
#undef FILL_EVEN_ODD
#undef FILL_WINDING
#undef GREEN_MASK
#undef GREEN_SHIFT
#undef GRESTORE_STR
#undef GSAVE_STR
#undef HINIBBLE_MASK
#undef HINIBBLE_SHIFT
#undef IMAGE_RESTORE
#undef IMAGE_SAVE
#undef IMAGE_STR
#undef JOBTITLE
#undef LINETO_STR
#undef LOWNIBBLE_MASK
#undef MAX_PSSTR
#undef MOVETO_STR
#undef NATIVE
#undef NEWPATH_STR
#undef NOSHEET
#undef ONE_SIDED
#undef OPTIONS
#undef PAGE_COMMENT
#undef PAGE_RESTORE
#undef PAGE_SAVE
#undef PRINTER
#undef PS_XRES
#undef PS_YRES
#undef READIMAGEPROC
#undef RED_MASK
#undef RED_SHIFT
#undef SEG_CLOSE
#undef SEG_CUBICTO
#undef SEG_LINETO
#undef SEG_MOVETO
#undef SEG_QUADTO
#undef SETGRAY_STR
#undef SETRGBCOLOR_STR
#undef SHOWPAGE
#undef STREAM
#undef TWO_SIDED_LONG_EDGE
#undef TWO_SIDED_SHORT_EDGE
#undef TYPE_INT_RGB
#undef WINDING_CLIP_STR
#undef WINDING_FILL_STR
#undef WIND_EVEN_ODD

using $CharsetStringArray = $Array<::sun::awt::CharsetString>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterIOException = ::java::awt::print::PrinterIOException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderMalfunctionError = ::java::nio::charset::CoderMalfunctionError;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $PrintService = ::javax::print::PrintService;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogTypeSelection = ::javax::print::attribute::standard::DialogTypeSelection;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $Media = ::javax::print::attribute::standard::Media;
using $PrinterName = ::javax::print::attribute::standard::PrinterName;
using $Sides = ::javax::print::attribute::standard::Sides;
using $CharsetString = ::sun::awt::CharsetString;
using $FontConfiguration = ::sun::awt::FontConfiguration;
using $FontDescriptor = ::sun::awt::FontDescriptor;
using $PlatformFont = ::sun::awt::PlatformFont;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Font2D = ::sun::font::Font2D;
using $FontAccess = ::sun::font::FontAccess;
using $FontUtilities = ::sun::font::FontUtilities;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $PSPathGraphics = ::sun::print::PSPathGraphics;
using $PSPrinterJob$1 = ::sun::print::PSPrinterJob$1;
using $PSPrinterJob$2 = ::sun::print::PSPrinterJob$2;
using $PSPrinterJob$3 = ::sun::print::PSPrinterJob$3;
using $PSPrinterJob$4 = ::sun::print::PSPrinterJob$4;
using $PSPrinterJob$GState = ::sun::print::PSPrinterJob$GState;
using $PSPrinterJob$PrinterOpener = ::sun::print::PSPrinterJob$PrinterOpener;
using $PSPrinterJob$PrinterSpooler = ::sun::print::PSPrinterJob$PrinterSpooler;
using $PSStreamPrintService = ::sun::print::PSStreamPrintService;
using $PathGraphics = ::sun::print::PathGraphics;
using $PeekGraphics = ::sun::print::PeekGraphics;
using $PeekMetrics = ::sun::print::PeekMetrics;
using $ProxyGraphics2D = ::sun::print::ProxyGraphics2D;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob_FieldInfo_[] = {
	{"FILL_EVEN_ODD", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PSPrinterJob, FILL_EVEN_ODD)},
	{"FILL_WINDING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PSPrinterJob, FILL_WINDING)},
	{"MAX_PSSTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, MAX_PSSTR)},
	{"RED_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, RED_MASK)},
	{"GREEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, GREEN_MASK)},
	{"BLUE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, BLUE_MASK)},
	{"RED_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, RED_SHIFT)},
	{"GREEN_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, GREEN_SHIFT)},
	{"BLUE_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, BLUE_SHIFT)},
	{"LOWNIBBLE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, LOWNIBBLE_MASK)},
	{"HINIBBLE_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, HINIBBLE_MASK)},
	{"HINIBBLE_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, HINIBBLE_SHIFT)},
	{"hexDigits", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, hexDigits)},
	{"PS_XRES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, PS_XRES)},
	{"PS_YRES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PSPrinterJob, PS_YRES)},
	{"ADOBE_PS_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, ADOBE_PS_STR)},
	{"EOF_COMMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, EOF_COMMENT)},
	{"PAGE_COMMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, PAGE_COMMENT)},
	{"READIMAGEPROC", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, READIMAGEPROC)},
	{"COPIES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, COPIES)},
	{"PAGE_SAVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, PAGE_SAVE)},
	{"PAGE_RESTORE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, PAGE_RESTORE)},
	{"SHOWPAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, SHOWPAGE)},
	{"IMAGE_SAVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, IMAGE_SAVE)},
	{"IMAGE_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, IMAGE_STR)},
	{"IMAGE_RESTORE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, IMAGE_RESTORE)},
	{"SetFontName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, SetFontName)},
	{"DrawStringName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, DrawStringName)},
	{"EVEN_ODD_FILL_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, EVEN_ODD_FILL_STR)},
	{"WINDING_FILL_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, WINDING_FILL_STR)},
	{"EVEN_ODD_CLIP_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, EVEN_ODD_CLIP_STR)},
	{"WINDING_CLIP_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, WINDING_CLIP_STR)},
	{"MOVETO_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, MOVETO_STR)},
	{"LINETO_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, LINETO_STR)},
	{"CURVETO_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, CURVETO_STR)},
	{"GRESTORE_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, GRESTORE_STR)},
	{"GSAVE_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, GSAVE_STR)},
	{"NEWPATH_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, NEWPATH_STR)},
	{"CLOSEPATH_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, CLOSEPATH_STR)},
	{"SETRGBCOLOR_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, SETRGBCOLOR_STR)},
	{"SETGRAY_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PSPrinterJob, SETGRAY_STR)},
	{"mDestType", "I", nullptr, $PRIVATE, $field(PSPrinterJob, mDestType)},
	{"mDestination", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob, mDestination)},
	{"mNoJobSheet", "Z", nullptr, $PRIVATE, $field(PSPrinterJob, mNoJobSheet)},
	{"mOptions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob, mOptions)},
	{"mLastFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(PSPrinterJob, mLastFont)},
	{"mLastColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PSPrinterJob, mLastColor)},
	{"mLastClip", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(PSPrinterJob, mLastClip)},
	{"mLastTransform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(PSPrinterJob, mLastTransform)},
	{"xres", "D", nullptr, $PRIVATE, $field(PSPrinterJob, xres)},
	{"yres", "D", nullptr, $PRIVATE, $field(PSPrinterJob, yres)},
	{"epsPrinter", "Lsun/print/PSPrinterJob$EPSPrinter;", nullptr, $PRIVATE, $field(PSPrinterJob, epsPrinter)},
	{"mCurMetrics", "Ljava/awt/FontMetrics;", nullptr, 0, $field(PSPrinterJob, mCurMetrics)},
	{"mPSStream", "Ljava/io/PrintStream;", nullptr, 0, $field(PSPrinterJob, mPSStream)},
	{"spoolFile", "Ljava/io/File;", nullptr, 0, $field(PSPrinterJob, spoolFile)},
	{"mFillOpStr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob, mFillOpStr)},
	{"mClipOpStr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSPrinterJob, mClipOpStr)},
	{"mGStateStack", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/print/PSPrinterJob$GState;>;", 0, $field(PSPrinterJob, mGStateStack)},
	{"mPenX", "F", nullptr, $PRIVATE, $field(PSPrinterJob, mPenX)},
	{"mPenY", "F", nullptr, $PRIVATE, $field(PSPrinterJob, mPenY)},
	{"mStartPathX", "F", nullptr, $PRIVATE, $field(PSPrinterJob, mStartPathX)},
	{"mStartPathY", "F", nullptr, $PRIVATE, $field(PSPrinterJob, mStartPathY)},
	{"mFontProps", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(PSPrinterJob, mFontProps)},
	{"isMac", "Z", nullptr, $PRIVATE | $STATIC, $staticField(PSPrinterJob, isMac)},
	{}
};

$MethodInfo _PSPrinterJob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PSPrinterJob::*)()>(&PSPrinterJob::init$))},
	{"abortDoc", "()V", nullptr, $PROTECTED},
	{"ascii85Encode", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PSPrinterJob::*)($bytes*)>(&PSPrinterJob::ascii85Encode))},
	{"beginPath", "()V", nullptr, $PROTECTED},
	{"bezierTo", "(FFFFFF)V", nullptr, $PROTECTED},
	{"closeSubpath", "()V", nullptr, $PROTECTED},
	{"convertToPSPath", "(Ljava/awt/geom/PathIterator;)V", nullptr, 0},
	{"createPathGraphics", "(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;I)Ljava/awt/Graphics2D;", nullptr, $PROTECTED},
	{"deviceFill", "(Ljava/awt/geom/PathIterator;Ljava/awt/Color;Ljava/awt/geom/AffineTransform;Ljava/awt/Shape;)V", nullptr, $PROTECTED},
	{"drawImageBGR", "([BFFFFFFFFII)V", nullptr, $PROTECTED},
	{"endDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"endPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;I)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"escapeParens", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&PSPrinterJob::escapeParens))},
	{"fillPath", "()V", nullptr, $PROTECTED},
	{"getCollatedCopies", "()I", nullptr, $PROTECTED},
	{"getCoordPrep", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PSPrinterJob::*)()>(&PSPrinterJob::getCoordPrep))},
	{"getGState", "()Lsun/print/PSPrinterJob$GState;", nullptr, $PRIVATE, $method(static_cast<$PSPrinterJob$GState*(PSPrinterJob::*)()>(&PSPrinterJob::getGState))},
	{"getNoncollatedCopies", "()I", nullptr, $PROTECTED},
	{"getPSFontIndexArray", "(Ljava/awt/Font;[Lsun/awt/CharsetString;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(PSPrinterJob::*)($Font*,$CharsetStringArray*)>(&PSPrinterJob::getPSFontIndexArray))},
	{"getPenX", "()F", nullptr, $PROTECTED},
	{"getPenY", "()F", nullptr, $PROTECTED},
	{"getPhysicalPageHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPageWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableHeight", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableWidth", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableX", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getPhysicalPrintableY", "(Ljava/awt/print/Paper;)D", nullptr, $PROTECTED},
	{"getXRes", "()D", nullptr, $PROTECTED},
	{"getYRes", "()D", nullptr, $PROTECTED},
	{"grestore", "()V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob::*)()>(&PSPrinterJob::grestore))},
	{"gsave", "()V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob::*)()>(&PSPrinterJob::gsave))},
	{"initProps", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Properties*(*)()>(&PSPrinterJob::initProps))},
	{"initStatic", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PSPrinterJob::initStatic))},
	{"isOuterGState", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(PSPrinterJob::*)()>(&PSPrinterJob::isOuterGState))},
	{"lineTo", "(FF)V", nullptr, $PROTECTED},
	{"makeCharsetName", "(Ljava/lang/String;[C)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PSPrinterJob::*)($String*,$chars*)>(&PSPrinterJob::makeCharsetName))},
	{"moveTo", "(FF)V", nullptr, $PROTECTED},
	{"platformFontCount", "(Ljava/awt/Font;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"prepDrawing", "()V", nullptr, $PRIVATE, $method(static_cast<void(PSPrinterJob::*)()>(&PSPrinterJob::prepDrawing))},
	{"printBand", "([BIIII)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"printDialog", "()Z", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"printExecCmd", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;ILjava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(PSPrinterJob::*)($String*,$String*,bool,$String*,int32_t,$String*)>(&PSPrinterJob::printExecCmd))},
	{"rlEncode", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PSPrinterJob::*)($bytes*)>(&PSPrinterJob::rlEncode))},
	{"selectClipPath", "()V", nullptr, $PROTECTED},
	{"setAttributes", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"setClip", "(Ljava/awt/Shape;)V", nullptr, $PROTECTED},
	{"setColor", "(Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"setFillMode", "(I)V", nullptr, $PROTECTED},
	{"setFont", "(Ljava/awt/Font;)Z", nullptr, $PROTECTED},
	{"setTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PROTECTED},
	{"setXYRes", "(DD)V", nullptr, $PROTECTED},
	{"startDoc", "()V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"startPage", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;IZ)V", nullptr, $PROTECTED, nullptr, "java.awt.print.PrinterException"},
	{"swapBGRtoRGB", "([BI[B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$bytes*)>(&PSPrinterJob::swapBGRtoRGB))},
	{"textOut", "(Ljava/awt/Graphics;Ljava/lang/String;FFLjava/awt/Font;Ljava/awt/font/FontRenderContext;F)Z", nullptr, $PROTECTED},
	{"trunc", "(F)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _PSPrinterJob_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$EPSPrinter", "sun.print.PSPrinterJob", "EPSPrinter", $PUBLIC | $STATIC},
	{"sun.print.PSPrinterJob$PluginPrinter", "sun.print.PSPrinterJob", "PluginPrinter", $PUBLIC | $STATIC},
	{"sun.print.PSPrinterJob$GState", "sun.print.PSPrinterJob", "GState", $PRIVATE},
	{"sun.print.PSPrinterJob$PrinterSpooler", "sun.print.PSPrinterJob", "PrinterSpooler", $PRIVATE},
	{"sun.print.PSPrinterJob$PrinterOpener", "sun.print.PSPrinterJob", "PrinterOpener", $PRIVATE},
	{"sun.print.PSPrinterJob$4", nullptr, nullptr, 0},
	{"sun.print.PSPrinterJob$3", nullptr, nullptr, 0},
	{"sun.print.PSPrinterJob$2", nullptr, nullptr, 0},
	{"sun.print.PSPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PSPrinterJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.PSPrinterJob",
	"sun.print.RasterPrinterJob",
	nullptr,
	_PSPrinterJob_FieldInfo_,
	_PSPrinterJob_MethodInfo_,
	nullptr,
	nullptr,
	_PSPrinterJob_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob$EPSPrinter,sun.print.PSPrinterJob$PluginPrinter,sun.print.PSPrinterJob$GState,sun.print.PSPrinterJob$PrinterSpooler,sun.print.PSPrinterJob$PrinterOpener,sun.print.PSPrinterJob$4,sun.print.PSPrinterJob$3,sun.print.PSPrinterJob$2,sun.print.PSPrinterJob$1"
};

$Object* allocate$PSPrinterJob($Class* clazz) {
	return $of($alloc(PSPrinterJob));
}

$bytes* PSPrinterJob::hexDigits = nullptr;
$String* PSPrinterJob::ADOBE_PS_STR = nullptr;
$String* PSPrinterJob::EOF_COMMENT = nullptr;
$String* PSPrinterJob::PAGE_COMMENT = nullptr;
$String* PSPrinterJob::READIMAGEPROC = nullptr;
$String* PSPrinterJob::COPIES = nullptr;
$String* PSPrinterJob::PAGE_SAVE = nullptr;
$String* PSPrinterJob::PAGE_RESTORE = nullptr;
$String* PSPrinterJob::SHOWPAGE = nullptr;
$String* PSPrinterJob::IMAGE_SAVE = nullptr;
$String* PSPrinterJob::IMAGE_STR = nullptr;
$String* PSPrinterJob::IMAGE_RESTORE = nullptr;
$String* PSPrinterJob::SetFontName = nullptr;
$String* PSPrinterJob::DrawStringName = nullptr;
$String* PSPrinterJob::EVEN_ODD_FILL_STR = nullptr;
$String* PSPrinterJob::WINDING_FILL_STR = nullptr;
$String* PSPrinterJob::EVEN_ODD_CLIP_STR = nullptr;
$String* PSPrinterJob::WINDING_CLIP_STR = nullptr;
$String* PSPrinterJob::MOVETO_STR = nullptr;
$String* PSPrinterJob::LINETO_STR = nullptr;
$String* PSPrinterJob::CURVETO_STR = nullptr;
$String* PSPrinterJob::GRESTORE_STR = nullptr;
$String* PSPrinterJob::GSAVE_STR = nullptr;
$String* PSPrinterJob::NEWPATH_STR = nullptr;
$String* PSPrinterJob::CLOSEPATH_STR = nullptr;
$String* PSPrinterJob::SETRGBCOLOR_STR = nullptr;
$String* PSPrinterJob::SETGRAY_STR = nullptr;
$Properties* PSPrinterJob::mFontProps = nullptr;
bool PSPrinterJob::isMac = false;

void PSPrinterJob::initStatic() {
	$init(PSPrinterJob);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PSPrinterJob$1)));
}

$Properties* PSPrinterJob::initProps() {
	$init(PSPrinterJob);
	$useLocalCurrentObjectStackCache();
	$var($String, jhome, $System::getProperty("java.home"_s));
	if (jhome != nullptr) {
		$var($String, ulocale, $nc($($SunToolkit::getStartupLocale()))->getLanguage());
		try {
			$init($File);
			$var($File, f, $new($File, $$str({jhome, $File::separator, "lib"_s, $File::separator, "psfontj2d.properties."_s, ulocale})));
			if (!f->canRead()) {
				$assign(f, $new($File, $$str({jhome, $File::separator, "lib"_s, $File::separator, "psfont.properties."_s, ulocale})));
				if (!f->canRead()) {
					$assign(f, $new($File, $$str({jhome, $File::separator, "lib"_s, $File::separator, "psfontj2d.properties"_s})));
					if (!f->canRead()) {
						$assign(f, $new($File, $$str({jhome, $File::separator, "lib"_s, $File::separator, "psfont.properties"_s})));
						if (!f->canRead()) {
							return ($Properties*)nullptr;
						}
					}
				}
			}
			$var($InputStream, in, $new($BufferedInputStream, $$new($FileInputStream, $(f->getPath()))));
			$var($Properties, props, $new($Properties));
			props->load(in);
			in->close();
			return props;
		} catch ($Exception& e) {
			return ($Properties*)nullptr;
		}
	}
	return ($Properties*)nullptr;
}

void PSPrinterJob::init$() {
	$RasterPrinterJob::init$();
	$set(this, mDestination, "lp"_s);
	this->mNoJobSheet = false;
	this->xres = (double)PSPrinterJob::PS_XRES;
	this->yres = (double)PSPrinterJob::PS_XRES;
	$set(this, epsPrinter, nullptr);
	$set(this, mFillOpStr, PSPrinterJob::WINDING_FILL_STR);
	$set(this, mClipOpStr, PSPrinterJob::WINDING_CLIP_STR);
	$set(this, mGStateStack, $new($ArrayList));
}

bool PSPrinterJob::printDialog() {
	$useLocalCurrentObjectStackCache();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashPrintRequestAttributeSet));
	}
	$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, getCopies()))));
	$nc(this->attributes)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($JobName, $(getJobName()), nullptr))));
	bool doPrint = false;
	$load($DialogTypeSelection);
	$var($DialogTypeSelection, dts, $cast($DialogTypeSelection, $nc(this->attributes)->get($DialogTypeSelection::class$)));
	$init($DialogTypeSelection);
	if (dts == $DialogTypeSelection::NATIVE) {
		$nc(this->attributes)->remove($DialogTypeSelection::class$);
		doPrint = printDialog(this->attributes);
		$nc(this->attributes)->add($DialogTypeSelection::NATIVE);
	} else {
		doPrint = printDialog(this->attributes);
	}
	if (doPrint) {
		$load($JobName);
		$var($JobName, jobName, $cast($JobName, $nc(this->attributes)->get($JobName::class$)));
		if (jobName != nullptr) {
			setJobName($(jobName->getValue()));
		}
		$load($Copies);
		$var($Copies, copies, $cast($Copies, $nc(this->attributes)->get($Copies::class$)));
		if (copies != nullptr) {
			setCopies(copies->getValue());
		}
		$load($Destination);
		$var($Destination, dest, $cast($Destination, $nc(this->attributes)->get($Destination::class$)));
		if (dest != nullptr) {
			try {
				this->mDestType = $RasterPrinterJob::FILE;
				$set(this, mDestination, ($$new($File, $(dest->getURI())))->getPath());
			} catch ($Exception& e) {
				$set(this, mDestination, "out.ps"_s);
			}
		} else {
			this->mDestType = $RasterPrinterJob::PRINTER;
			$var($PrintService, pServ, getPrintService());
			if (pServ != nullptr) {
				$set(this, mDestination, pServ->getName());
				if (PSPrinterJob::isMac) {
					$var($PrintServiceAttributeSet, psaSet, pServ->getAttributes());
					if (psaSet != nullptr) {
						$load($PrinterName);
						$set(this, mDestination, $nc($of($(psaSet->get($PrinterName::class$))))->toString());
					}
				}
			}
		}
	}
	return doPrint;
}

void PSPrinterJob::setAttributes($PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$RasterPrinterJob::setAttributes(attributes);
	if (attributes == nullptr) {
		return;
	}
	$load($Media);
	$var($Attribute, attr, $nc(attributes)->get($Media::class$));
	if ($instanceOf($CustomMediaTray, attr)) {
		$var($CustomMediaTray, customTray, $cast($CustomMediaTray, attr));
		$var($String, choice, $nc(customTray)->getChoiceName());
		if (choice != nullptr) {
			$set(this, mOptions, $str({" InputSlot="_s, choice}));
		}
	}
}

void PSPrinterJob::startDoc() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($OutputStream, output, nullptr);
	if (this->epsPrinter == nullptr) {
		if ($instanceOf($PSStreamPrintService, $(getPrintService()))) {
			$var($StreamPrintService, sps, $cast($StreamPrintService, getPrintService()));
			this->mDestType = $RasterPrinterJob::STREAM;
			if ($nc(sps)->isDisposed()) {
				$throwNew($PrinterException, "service is disposed"_s);
			}
			$assign(output, $nc(sps)->getOutputStream());
			if (output == nullptr) {
				$throwNew($PrinterException, "Null output stream"_s);
			}
		} else {
			this->mNoJobSheet = this->noJobSheet;
			if (this->destinationAttr != nullptr) {
				this->mDestType = $RasterPrinterJob::FILE;
				$set(this, mDestination, this->destinationAttr);
			}
			if (this->mDestType == $RasterPrinterJob::FILE) {
				try {
					$set(this, spoolFile, $new($File, this->mDestination));
					$assign(output, $new($FileOutputStream, this->spoolFile));
				} catch ($IOException& ex) {
					abortDoc();
					$throwNew($PrinterIOException, ex);
				}
			} else {
				$var($PSPrinterJob$PrinterOpener, po, $new($PSPrinterJob$PrinterOpener, this));
				$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(po));
				if (po->pex != nullptr) {
					$throw(po->pex);
				}
				$assign(output, po->result);
			}
		}
		$set(this, mPSStream, $new($PrintStream, static_cast<$OutputStream*>($$new($BufferedOutputStream, output))));
		$nc(this->mPSStream)->println(PSPrinterJob::ADOBE_PS_STR);
	}
	$nc(this->mPSStream)->println("%%BeginProlog"_s);
	$nc(this->mPSStream)->println(PSPrinterJob::READIMAGEPROC);
	$nc(this->mPSStream)->println("/BD {bind def} bind def"_s);
	$nc(this->mPSStream)->println("/D {def} BD"_s);
	$nc(this->mPSStream)->println("/C {curveto} BD"_s);
	$nc(this->mPSStream)->println("/L {lineto} BD"_s);
	$nc(this->mPSStream)->println("/M {moveto} BD"_s);
	$nc(this->mPSStream)->println("/R {grestore} BD"_s);
	$nc(this->mPSStream)->println("/G {gsave} BD"_s);
	$nc(this->mPSStream)->println("/N {newpath} BD"_s);
	$nc(this->mPSStream)->println("/P {closepath} BD"_s);
	$nc(this->mPSStream)->println("/EC {eoclip} BD"_s);
	$nc(this->mPSStream)->println("/WC {clip} BD"_s);
	$nc(this->mPSStream)->println("/EF {eofill} BD"_s);
	$nc(this->mPSStream)->println("/WF {fill} BD"_s);
	$nc(this->mPSStream)->println("/SG {setgray} BD"_s);
	$nc(this->mPSStream)->println("/SC {setrgbcolor} BD"_s);
	$nc(this->mPSStream)->println("/ISOF {"_s);
	$nc(this->mPSStream)->println("     dup findfont dup length 1 add dict begin {"_s);
	$nc(this->mPSStream)->println("             1 index /FID eq {pop pop} {D} ifelse"_s);
	$nc(this->mPSStream)->println("     } forall /Encoding ISOLatin1Encoding D"_s);
	$nc(this->mPSStream)->println("     currentdict end definefont"_s);
	$nc(this->mPSStream)->println("} BD"_s);
	$nc(this->mPSStream)->println("/NZ {dup 1 lt {pop 1} if} BD"_s);
	$nc(this->mPSStream)->println($$str({"/"_s, PSPrinterJob::DrawStringName, " {"_s}));
	$nc(this->mPSStream)->println("     moveto 1 index stringwidth pop NZ sub"_s);
	$nc(this->mPSStream)->println("     1 index length 1 sub NZ div 0"_s);
	$nc(this->mPSStream)->println("     3 2 roll ashow newpath} BD"_s);
	$nc(this->mPSStream)->println("/FL ["_s);
	if (PSPrinterJob::mFontProps == nullptr) {
		$nc(this->mPSStream)->println(" /Helvetica ISOF"_s);
		$nc(this->mPSStream)->println(" /Helvetica-Bold ISOF"_s);
		$nc(this->mPSStream)->println(" /Helvetica-Oblique ISOF"_s);
		$nc(this->mPSStream)->println(" /Helvetica-BoldOblique ISOF"_s);
		$nc(this->mPSStream)->println(" /Times-Roman ISOF"_s);
		$nc(this->mPSStream)->println(" /Times-Bold ISOF"_s);
		$nc(this->mPSStream)->println(" /Times-Italic ISOF"_s);
		$nc(this->mPSStream)->println(" /Times-BoldItalic ISOF"_s);
		$nc(this->mPSStream)->println(" /Courier ISOF"_s);
		$nc(this->mPSStream)->println(" /Courier-Bold ISOF"_s);
		$nc(this->mPSStream)->println(" /Courier-Oblique ISOF"_s);
		$nc(this->mPSStream)->println(" /Courier-BoldOblique ISOF"_s);
	} else {
		int32_t cnt = $Integer::parseInt($($nc(PSPrinterJob::mFontProps)->getProperty("font.num"_s, "9"_s)));
		for (int32_t i = 0; i < cnt; ++i) {
			$nc(this->mPSStream)->println($$str({"    /"_s, $($nc(PSPrinterJob::mFontProps)->getProperty($$str({"font."_s, $($String::valueOf(i))}), "Courier ISOF"_s))}));
		}
	}
	$nc(this->mPSStream)->println("] D"_s);
	$nc(this->mPSStream)->println($$str({"/"_s, PSPrinterJob::SetFontName, " {"_s}));
	$nc(this->mPSStream)->println("     FL exch get exch scalefont"_s);
	$nc(this->mPSStream)->println("     [1 0 0 -1 0 0] makefont setfont} BD"_s);
	$nc(this->mPSStream)->println("%%EndProlog"_s);
	$nc(this->mPSStream)->println("%%BeginSetup"_s);
	if (this->epsPrinter == nullptr) {
		$var($PageFormat, pageFormat, $nc($(getPageable()))->getPageFormat(0));
		double paperHeight = $nc($($nc(pageFormat)->getPaper()))->getHeight();
		double paperWidth = $nc($(pageFormat->getPaper()))->getWidth();
		$nc(this->mPSStream)->print($$str({"<< /PageSize ["_s, $$str(paperWidth), " "_s, $$str(paperHeight), "]"_s}));
		$var($PrintService, pservice, getPrintService());
		$var($Boolean, isPS, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PSPrinterJob$2, this, pservice)))));
		if ($nc((isPS))->booleanValue()) {
			$nc(this->mPSStream)->print(" /DeferredMediaSelection true"_s);
		}
		$nc(this->mPSStream)->print(" /ImagingBBox null /ManualFeed false"_s);
		$nc(this->mPSStream)->print(isCollated() ? " /Collate true"_s : ""_s);
		$nc(this->mPSStream)->print($$str({" /NumCopies "_s, $$str(getCopiesInt())}));
		$init($Sides);
		if (this->sidesAttr != $Sides::ONE_SIDED) {
			if (this->sidesAttr == $Sides::TWO_SIDED_LONG_EDGE) {
				$nc(this->mPSStream)->print(" /Duplex true "_s);
			} else {
				if (this->sidesAttr == $Sides::TWO_SIDED_SHORT_EDGE) {
					$nc(this->mPSStream)->print(" /Duplex true /Tumble true "_s);
				}
			}
		}
		$nc(this->mPSStream)->println(" >> setpagedevice "_s);
	}
	$nc(this->mPSStream)->println("%%EndSetup"_s);
}

void PSPrinterJob::abortDoc() {
	$beforeCallerSensitive();
	if (this->mPSStream != nullptr && this->mDestType != $RasterPrinterJob::STREAM) {
		$nc(this->mPSStream)->close();
	}
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PSPrinterJob$3, this)));
}

void PSPrinterJob::endDoc() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->mPSStream != nullptr) {
		$nc(this->mPSStream)->println(PSPrinterJob::EOF_COMMENT);
		$nc(this->mPSStream)->flush();
		if ($nc(this->mPSStream)->checkError()) {
			abortDoc();
			$throwNew($PrinterException, "Error while writing to file"_s);
		}
		if (this->mDestType != $RasterPrinterJob::STREAM) {
			$nc(this->mPSStream)->close();
		}
	}
	if (this->mDestType == $RasterPrinterJob::PRINTER) {
		$var($PrintService, pServ, getPrintService());
		if (pServ != nullptr) {
			$set(this, mDestination, pServ->getName());
			if (PSPrinterJob::isMac) {
				$var($PrintServiceAttributeSet, psaSet, pServ->getAttributes());
				if (psaSet != nullptr) {
					$load($PrinterName);
					$set(this, mDestination, $nc($of($(psaSet->get($PrinterName::class$))))->toString());
				}
			}
		}
		$var($PSPrinterJob$PrinterSpooler, spooler, $new($PSPrinterJob$PrinterSpooler, this));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(spooler));
		if (spooler->pex != nullptr) {
			$throw(spooler->pex);
		}
	}
}

$String* PSPrinterJob::getCoordPrep() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({" 0 exch translate 1 -1 scale[72 "_s, $$str(getXRes()), " div 0 0 72 "_s}));
	$var($String, var$0, $$concat(var$1, $$str(getYRes())));
	return $concat(var$0, " div 0 0]concat"_s);
}

void PSPrinterJob::startPage($PageFormat* pageFormat, $Printable* painter, int32_t index, bool paperChanged) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	double paperHeight = $nc($($nc(pageFormat)->getPaper()))->getHeight();
	double paperWidth = $nc($(pageFormat->getPaper()))->getWidth();
	int32_t pageNumber = index + 1;
	$set(this, mGStateStack, $new($ArrayList));
	$nc(this->mGStateStack)->add($$new($PSPrinterJob$GState, this));
	$nc(this->mPSStream)->println($$str({PSPrinterJob::PAGE_COMMENT, $$str(pageNumber), " "_s, $$str(pageNumber)}));
	if (index > 0 && paperChanged) {
		$nc(this->mPSStream)->print($$str({"<< /PageSize ["_s, $$str(paperWidth), " "_s, $$str(paperHeight), "]"_s}));
		$var($PrintService, pservice, getPrintService());
		$var($Boolean, isPS, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PSPrinterJob$4, this, pservice)))));
		if ($nc((isPS))->booleanValue()) {
			$nc(this->mPSStream)->print(" /DeferredMediaSelection true"_s);
		}
		$nc(this->mPSStream)->println(" >> setpagedevice"_s);
	}
	$nc(this->mPSStream)->println(PSPrinterJob::PAGE_SAVE);
	$nc(this->mPSStream)->println($$str({$$str(paperHeight), $(getCoordPrep())}));
}

void PSPrinterJob::endPage($PageFormat* format, $Printable* painter, int32_t index) {
	$nc(this->mPSStream)->println(PSPrinterJob::PAGE_RESTORE);
	$nc(this->mPSStream)->println(PSPrinterJob::SHOWPAGE);
}

void PSPrinterJob::drawImageBGR($bytes* bgrData, float destX, float destY, float destWidth, float destHeight, float srcX, float srcY, float srcWidth, float srcHeight, int32_t srcBitMapWidth, int32_t srcBitMapHeight) {
	$useLocalCurrentObjectStackCache();
	setTransform($$new($AffineTransform));
	prepDrawing();
	int32_t intSrcWidth = $cast(int32_t, srcWidth);
	int32_t intSrcHeight = $cast(int32_t, srcHeight);
	$nc(this->mPSStream)->println(PSPrinterJob::IMAGE_SAVE);
	int32_t psBytesPerRow = 3 * intSrcWidth;
	while (psBytesPerRow > PSPrinterJob::MAX_PSSTR) {
		psBytesPerRow /= 2;
	}
	$nc(this->mPSStream)->println($$str({$$str(psBytesPerRow), PSPrinterJob::IMAGE_STR}));
	$nc(this->mPSStream)->println($$str({"["_s, $$str(destWidth), " 0 0 "_s, $$str(destHeight), " "_s, $$str(destX), " "_s, $$str(destY), "]concat"_s}));
	$nc(this->mPSStream)->println($$str({$$str(intSrcWidth), " "_s, $$str(intSrcHeight), " "_s, $$str(8), "["_s, $$str(intSrcWidth), " 0 0 "_s, $$str(intSrcHeight), " 0 "_s, $$str(0), "]/imageSrc load false 3 colorimage"_s}));
	int32_t index = 0;
	$var($bytes, rgbData, $new($bytes, intSrcWidth * 3));
	try {
		index = $cast(int32_t, srcY) * srcBitMapWidth;
		for (int32_t i = 0; i < intSrcHeight; ++i) {
			index += $cast(int32_t, srcX);
			index = swapBGRtoRGB(bgrData, index, rgbData);
			$var($bytes, encodedData, rlEncode(rgbData));
			$var($bytes, asciiData, ascii85Encode(encodedData));
			$nc(this->mPSStream)->write(asciiData);
			$nc(this->mPSStream)->println(""_s);
		}
	} catch ($IOException& e) {
	}
	$nc(this->mPSStream)->println(PSPrinterJob::IMAGE_RESTORE);
}

void PSPrinterJob::printBand($bytes* bgrData, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$nc(this->mPSStream)->println(PSPrinterJob::IMAGE_SAVE);
	int32_t psBytesPerRow = 3 * width;
	while (psBytesPerRow > PSPrinterJob::MAX_PSSTR) {
		psBytesPerRow /= 2;
	}
	$nc(this->mPSStream)->println($$str({$$str(psBytesPerRow), PSPrinterJob::IMAGE_STR}));
	$nc(this->mPSStream)->println($$str({"["_s, $$str(width), " 0 0 "_s, $$str(height), " "_s, $$str(x), " "_s, $$str(y), "]concat"_s}));
	$nc(this->mPSStream)->println($$str({$$str(width), " "_s, $$str(height), " "_s, $$str(8), "["_s, $$str(width), " 0 0 "_s, $$str(-height), " 0 "_s, $$str(height), "]/imageSrc load false 3 colorimage"_s}));
	int32_t index = 0;
	$var($bytes, rgbData, $new($bytes, width * 3));
	try {
		for (int32_t i = 0; i < height; ++i) {
			index = swapBGRtoRGB(bgrData, index, rgbData);
			$var($bytes, encodedData, rlEncode(rgbData));
			$var($bytes, asciiData, ascii85Encode(encodedData));
			$nc(this->mPSStream)->write(asciiData);
			$nc(this->mPSStream)->println(""_s);
		}
	} catch ($IOException& e) {
		$throwNew($PrinterIOException, e);
	}
	$nc(this->mPSStream)->println(PSPrinterJob::IMAGE_RESTORE);
}

$Graphics2D* PSPrinterJob::createPathGraphics($PeekGraphics* peekGraphics, $PrinterJob* printerJob, $Printable* painter, $PageFormat* pageFormat, int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($PSPathGraphics, pathGraphics, nullptr);
	$var($PeekMetrics, metrics, $nc(peekGraphics)->getMetrics());
	$init($RasterPrinterJob);
	bool var$0 = $RasterPrinterJob::forcePDL == false;
	if (var$0) {
		bool var$1 = $RasterPrinterJob::forceRaster == true || $nc(metrics)->hasNonSolidColors();
		var$0 = (var$1 || $nc(metrics)->hasCompositing());
	}
	if (var$0) {
		$assign(pathGraphics, nullptr);
	} else {
		$var($BufferedImage, bufferedImage, $new($BufferedImage, 8, 8, $BufferedImage::TYPE_INT_RGB));
		$var($Graphics2D, bufferedGraphics, bufferedImage->createGraphics());
		bool canRedraw = peekGraphics->getAWTDrawingOnly() == false;
		$assign(pathGraphics, $new($PSPathGraphics, bufferedGraphics, printerJob, painter, pageFormat, pageIndex, canRedraw));
	}
	return pathGraphics;
}

void PSPrinterJob::selectClipPath() {
	$nc(this->mPSStream)->println(this->mClipOpStr);
}

void PSPrinterJob::setClip($Shape* clip) {
	$set(this, mLastClip, clip);
}

void PSPrinterJob::setTransform($AffineTransform* transform) {
	$set(this, mLastTransform, transform);
}

bool PSPrinterJob::setFont($Font* font) {
	$set(this, mLastFont, font);
	return true;
}

$ints* PSPrinterJob::getPSFontIndexArray($Font* font, $CharsetStringArray* charSet) {
	$useLocalCurrentObjectStackCache();
	$var($ints, psFont, nullptr);
	if (PSPrinterJob::mFontProps != nullptr) {
		$assign(psFont, $new($ints, $nc(charSet)->length));
	}
	for (int32_t i = 0; i < $nc(charSet)->length && psFont != nullptr; ++i) {
		$var($CharsetString, cs, charSet->get(i));
		$var($CharsetEncoder, fontCS, $nc($nc(cs)->fontDescriptor)->encoder);
		$var($String, charsetName, $nc(cs->fontDescriptor)->getFontCharsetName());
		if ("Symbol"_s->equals(charsetName)) {
			$assign(charsetName, "symbol"_s);
		} else {
			bool var$1 = "WingDings"_s->equals(charsetName);
			if (var$1 || "X11Dingbats"_s->equals(charsetName)) {
				$assign(charsetName, "dingbats"_s);
			} else {
				$assign(charsetName, makeCharsetName(charsetName, cs->charsetChars));
			}
		}
		int32_t var$2 = $nc(font)->getStyle();
		int32_t styleMask = var$2 | $nc($($FontUtilities::getFont2D(font)))->getStyle();
		$var($String, style, $FontConfiguration::getStyleString(styleMask));
		$init($Locale);
		$var($String, fontName, $nc($(font->getFamily()))->toLowerCase($Locale::ENGLISH));
		$assign(fontName, fontName->replace(u' ', u'_'));
		$var($String, name, $nc(PSPrinterJob::mFontProps)->getProperty(fontName, ""_s));
		$var($String, psName, $nc(PSPrinterJob::mFontProps)->getProperty($$str({name, "."_s, charsetName, "."_s, style}), nullptr));
		if (psName != nullptr) {
			try {
				psFont->set(i, $Integer::parseInt($($nc(PSPrinterJob::mFontProps)->getProperty(psName))));
			} catch ($NumberFormatException& e) {
				$assign(psFont, nullptr);
			}
		} else {
			$assign(psFont, nullptr);
		}
	}
	return psFont;
}

$String* PSPrinterJob::escapeParens($String* str) {
	$init(PSPrinterJob);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(str)->indexOf((int32_t)u'(') == -1;
	if (var$0 && str->indexOf((int32_t)u')') == -1) {
		return str;
	} else {
		int32_t count = 0;
		int32_t pos = 0;
		while ((pos = str->indexOf((int32_t)u'(', pos)) != -1) {
			++count;
			++pos;
		}
		pos = 0;
		while ((pos = str->indexOf((int32_t)u')', pos)) != -1) {
			++count;
			++pos;
		}
		$var($chars, inArr, str->toCharArray());
		$var($chars, outArr, $new($chars, inArr->length + count));
		pos = 0;
		for (int32_t i = 0; i < inArr->length; ++i) {
			if (inArr->get(i) == u'(' || inArr->get(i) == u')') {
				outArr->set(pos++, u'\\');
			}
			outArr->set(pos++, inArr->get(i));
		}
		return $new($String, outArr);
	}
}

int32_t PSPrinterJob::platformFontCount($Font* font, $String* str) {
	$useLocalCurrentObjectStackCache();
	if (PSPrinterJob::mFontProps == nullptr) {
		return 0;
	}
	$var($PlatformFont, peer, $cast($PlatformFont, $nc($($FontAccess::getFontAccess()))->getFontPeer(font)));
	$var($CharsetStringArray, acs, $nc(peer)->makeMultiCharsetString(str, false));
	if (acs == nullptr) {
		return 0;
	}
	$var($ints, psFonts, getPSFontIndexArray(font, acs));
	return (psFonts == nullptr) ? 0 : $nc(psFonts)->length;
}

bool PSPrinterJob::textOut($Graphics* g, $String* str$renamed, float x, float y, $Font* mLastFont, $FontRenderContext* frc, float width) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	bool didText = true;
	if (PSPrinterJob::mFontProps == nullptr) {
		return false;
	} else {
		prepDrawing();
		$assign(str, removeControlChars(str));
		if ($nc(str)->length() == 0) {
			return true;
		}
		$var($PlatformFont, peer, $cast($PlatformFont, $nc($($FontAccess::getFontAccess()))->getFontPeer(mLastFont)));
		$var($CharsetStringArray, acs, $nc(peer)->makeMultiCharsetString(str, false));
		if (acs == nullptr) {
			return false;
		}
		$var($ints, psFonts, getPSFontIndexArray(mLastFont, acs));
		if (psFonts != nullptr) {
			for (int32_t i = 0; i < $nc(acs)->length; ++i) {
				$var($CharsetString, cs, acs->get(i));
				$var($CharsetEncoder, fontCS, $nc($nc(cs)->fontDescriptor)->encoder);
				$var($StringBuilder, nativeStr, $new($StringBuilder));
				$var($bytes, strSeg, $new($bytes, cs->length * 2));
				int32_t len = 0;
				try {
					$var($ByteBuffer, bb, $ByteBuffer::wrap(strSeg));
					$nc(fontCS)->encode($($CharBuffer::wrap(cs->charsetChars, cs->offset, cs->length)), bb, true);
					$nc(bb)->flip();
					len = bb->limit();
				} catch ($IllegalStateException& xx) {
					continue;
				} catch ($CoderMalfunctionError& xx) {
					continue;
				}
				float desiredWidth = 0.0;
				if (acs->length == 1 && width != 0.0f) {
					desiredWidth = width;
				} else {
					$var($Rectangle2D, r2d, $nc(mLastFont)->getStringBounds(cs->charsetChars, cs->offset, cs->offset + cs->length, frc));
					desiredWidth = (float)$nc(r2d)->getWidth();
				}
				if (desiredWidth == 0) {
					return didText;
				}
				nativeStr->append(u'<');
				for (int32_t j = 0; j < len; ++j) {
					int8_t b = strSeg->get(j);
					$var($String, hexS, $Integer::toHexString(b));
					int32_t length = $nc(hexS)->length();
					if (length > 2) {
						$assign(hexS, hexS->substring(length - 2, length));
					} else if (length == 1) {
						$assign(hexS, $str({"0"_s, hexS}));
					} else if (length == 0) {
						$assign(hexS, "00"_s);
					}
					nativeStr->append(hexS);
				}
				nativeStr->append(u'>');
				$nc($(getGState()))->emitPSFont(psFonts->get(i), $nc(mLastFont)->getSize2D());
				$nc(this->mPSStream)->println($$str({$(nativeStr->toString()), " "_s, $$str(desiredWidth), " "_s, $$str(x), " "_s, $$str(y), " "_s, PSPrinterJob::DrawStringName}));
				x += desiredWidth;
			}
		} else {
			didText = false;
		}
	}
	return didText;
}

void PSPrinterJob::setFillMode(int32_t fillRule) {
	switch (fillRule) {
	case PSPrinterJob::FILL_EVEN_ODD:
		{
			$set(this, mFillOpStr, PSPrinterJob::EVEN_ODD_FILL_STR);
			$set(this, mClipOpStr, PSPrinterJob::EVEN_ODD_CLIP_STR);
			break;
		}
	case PSPrinterJob::FILL_WINDING:
		{
			$set(this, mFillOpStr, PSPrinterJob::WINDING_FILL_STR);
			$set(this, mClipOpStr, PSPrinterJob::WINDING_CLIP_STR);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

void PSPrinterJob::setColor($Color* color) {
	$set(this, mLastColor, color);
}

void PSPrinterJob::fillPath() {
	$nc(this->mPSStream)->println(this->mFillOpStr);
}

void PSPrinterJob::beginPath() {
	prepDrawing();
	$nc(this->mPSStream)->println(PSPrinterJob::NEWPATH_STR);
	this->mPenX = (float)0;
	this->mPenY = (float)0;
}

void PSPrinterJob::closeSubpath() {
	$nc(this->mPSStream)->println(PSPrinterJob::CLOSEPATH_STR);
	this->mPenX = this->mStartPathX;
	this->mPenY = this->mStartPathY;
}

void PSPrinterJob::moveTo(float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(trunc(x)), " "_s}));
	$var($String, var$0, $$concat(var$1, $(trunc(y))));
	$nc(this->mPSStream)->println($$concat(var$0, PSPrinterJob::MOVETO_STR));
	this->mStartPathX = x;
	this->mStartPathY = y;
	this->mPenX = x;
	this->mPenY = y;
}

void PSPrinterJob::lineTo(float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$(trunc(x)), " "_s}));
	$var($String, var$0, $$concat(var$1, $(trunc(y))));
	$nc(this->mPSStream)->println($$concat(var$0, PSPrinterJob::LINETO_STR));
	this->mPenX = x;
	this->mPenY = y;
}

void PSPrinterJob::bezierTo(float control1x, float control1y, float control2x, float control2y, float endX, float endY) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$9, $$str({$(trunc(control1x)), " "_s}));
	$var($String, var$8, $$concat(var$9, $(trunc(control1y))));
	$var($String, var$7, $$concat(var$8, " "_s));
	$var($String, var$6, $$concat(var$7, $(trunc(control2x))));
	$var($String, var$5, $$concat(var$6, " "_s));
	$var($String, var$4, $$concat(var$5, $(trunc(control2y))));
	$var($String, var$3, $$concat(var$4, " "_s));
	$var($String, var$2, $$concat(var$3, $(trunc(endX))));
	$var($String, var$1, $$concat(var$2, " "_s));
	$var($String, var$0, $$concat(var$1, $(trunc(endY))));
	$nc(this->mPSStream)->println($$concat(var$0, PSPrinterJob::CURVETO_STR));
	this->mPenX = endX;
	this->mPenY = endY;
}

$String* PSPrinterJob::trunc(float f) {
	float af = $Math::abs(f);
	if (af >= 1.0f && af <= 1000.0f) {
		f = $Math::round(f * 1000) / 1000.0f;
	}
	return $Float::toString(f);
}

float PSPrinterJob::getPenX() {
	return this->mPenX;
}

float PSPrinterJob::getPenY() {
	return this->mPenY;
}

double PSPrinterJob::getXRes() {
	return this->xres;
}

double PSPrinterJob::getYRes() {
	return this->yres;
}

void PSPrinterJob::setXYRes(double x, double y) {
	this->xres = x;
	this->yres = y;
}

double PSPrinterJob::getPhysicalPrintableX($Paper* p) {
	return (double)0;
}

double PSPrinterJob::getPhysicalPrintableY($Paper* p) {
	return (double)0;
}

double PSPrinterJob::getPhysicalPrintableWidth($Paper* p) {
	return $nc(p)->getImageableWidth();
}

double PSPrinterJob::getPhysicalPrintableHeight($Paper* p) {
	return $nc(p)->getImageableHeight();
}

double PSPrinterJob::getPhysicalPageWidth($Paper* p) {
	return $nc(p)->getWidth();
}

double PSPrinterJob::getPhysicalPageHeight($Paper* p) {
	return $nc(p)->getHeight();
}

int32_t PSPrinterJob::getNoncollatedCopies() {
	return 1;
}

int32_t PSPrinterJob::getCollatedCopies() {
	return 1;
}

$StringArray* PSPrinterJob::printExecCmd($String* printer, $String* options, bool noJobSheet, $String* jobTitle, int32_t copies, $String* spoolFile) {
	$useLocalCurrentObjectStackCache();
	int32_t PRINTER = 1;
	int32_t OPTIONS = 2;
	int32_t JOBTITLE = 4;
	int32_t COPIES = 8;
	int32_t NOSHEET = 16;
	int32_t pFlags = 0;
	$var($StringArray, execCmd, nullptr);
	int32_t ncomps = 2;
	int32_t n = 0;
	bool var$0 = printer != nullptr && !printer->isEmpty();
	if (var$0 && !printer->equals("lp"_s)) {
		pFlags |= PRINTER;
		ncomps += 1;
	}
	if (options != nullptr && !options->isEmpty()) {
		pFlags |= OPTIONS;
		ncomps += 1;
	}
	if (jobTitle != nullptr && !jobTitle->isEmpty()) {
		pFlags |= JOBTITLE;
		ncomps += 1;
	}
	if (copies > 1) {
		pFlags |= COPIES;
		ncomps += 1;
	}
	if (noJobSheet) {
		pFlags |= NOSHEET;
		ncomps += 1;
	} else {
		$load($JobSheets);
		if ($nc($(getPrintService()))->isAttributeCategorySupported($JobSheets::class$)) {
			ncomps += 1;
		}
	}
	$var($String, osname, $System::getProperty("os.name"_s));
	bool var$1 = $nc(osname)->equals("Linux"_s);
	if (var$1 || $nc(osname)->contains("OS X"_s)) {
		$assign(execCmd, $new($StringArray, ncomps));
		execCmd->set(n++, "/usr/bin/lpr"_s);
		if (((int32_t)(pFlags & (uint32_t)PRINTER)) != 0) {
			execCmd->set(n++, $$str({"-P"_s, printer}));
		}
		if (((int32_t)(pFlags & (uint32_t)JOBTITLE)) != 0) {
			execCmd->set(n++, $$str({"-J"_s, jobTitle}));
		}
		if (((int32_t)(pFlags & (uint32_t)COPIES)) != 0) {
			execCmd->set(n++, $$str({"-#"_s, $$str(copies)}));
		}
		if (((int32_t)(pFlags & (uint32_t)NOSHEET)) != 0) {
			execCmd->set(n++, "-h"_s);
		} else {
			$load($JobSheets);
			if ($nc($(getPrintService()))->isAttributeCategorySupported($JobSheets::class$)) {
				execCmd->set(n++, "-o job-sheets=standard"_s);
			}
		}
		if (((int32_t)(pFlags & (uint32_t)OPTIONS)) != 0) {
			execCmd->set(n++, $$str({"-o"_s, options}));
		}
	} else {
		ncomps += 1;
		$assign(execCmd, $new($StringArray, ncomps));
		execCmd->set(n++, "/usr/bin/lp"_s);
		execCmd->set(n++, "-c"_s);
		if (((int32_t)(pFlags & (uint32_t)PRINTER)) != 0) {
			execCmd->set(n++, $$str({"-d"_s, printer}));
		}
		if (((int32_t)(pFlags & (uint32_t)JOBTITLE)) != 0) {
			execCmd->set(n++, $$str({"-t"_s, jobTitle}));
		}
		if (((int32_t)(pFlags & (uint32_t)COPIES)) != 0) {
			execCmd->set(n++, $$str({"-n"_s, $$str(copies)}));
		}
		if (((int32_t)(pFlags & (uint32_t)NOSHEET)) != 0) {
			execCmd->set(n++, "-o nobanner"_s);
		} else {
			$load($JobSheets);
			if ($nc($(getPrintService()))->isAttributeCategorySupported($JobSheets::class$)) {
				execCmd->set(n++, "-o job-sheets=standard"_s);
			}
		}
		if (((int32_t)(pFlags & (uint32_t)OPTIONS)) != 0) {
			execCmd->set(n++, $$str({"-o"_s, options}));
		}
	}
	$nc(execCmd)->set(n++, spoolFile);
	return execCmd;
}

int32_t PSPrinterJob::swapBGRtoRGB($bytes* image, int32_t index, $bytes* dest) {
	$init(PSPrinterJob);
	int32_t destIndex = 0;
	while (index < $nc(image)->length - 2 && destIndex < $nc(dest)->length - 2) {
		dest->set(destIndex++, image->get(index + 2));
		dest->set(destIndex++, image->get(index + 1));
		dest->set(destIndex++, image->get(index + 0));
		index += 3;
	}
	return index;
}

$String* PSPrinterJob::makeCharsetName($String* name, $chars* chs) {
	bool var$0 = $nc(name)->equals("Cp1252"_s);
	if (var$0 || $nc(name)->equals("ISO8859_1"_s)) {
		return "latin1"_s;
	} else if (name->equals("UTF8"_s)) {
		for (int32_t i = 0; i < $nc(chs)->length; ++i) {
			if (chs->get(i) > 255) {
				return name->toLowerCase();
			}
		}
		return "latin1"_s;
	} else if (name->startsWith("ISO8859"_s)) {
		for (int32_t i = 0; i < $nc(chs)->length; ++i) {
			if (chs->get(i) > 127) {
				return name->toLowerCase();
			}
		}
		return "latin1"_s;
	} else {
		return name->toLowerCase();
	}
}

void PSPrinterJob::prepDrawing() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		bool var$0 = isOuterGState() == false;
		if (var$0) {
			bool var$1 = $nc($(getGState()))->canSetClip(this->mLastClip) == false;
			var$0 = (var$1 || $nc($nc($(getGState()))->mTransform)->equals(this->mLastTransform) == false);
		}
		if (!(var$0)) {
			break;
		}
		{
			grestore();
		}
	}
	$nc($(getGState()))->emitPSColor(this->mLastColor);
	if (isOuterGState()) {
		gsave();
		$nc($(getGState()))->emitTransform(this->mLastTransform);
		$nc($(getGState()))->emitPSClip(this->mLastClip);
	}
}

$PSPrinterJob$GState* PSPrinterJob::getGState() {
	int32_t count = $nc(this->mGStateStack)->size();
	return $cast($PSPrinterJob$GState, $nc(this->mGStateStack)->get(count - 1));
}

void PSPrinterJob::gsave() {
	$useLocalCurrentObjectStackCache();
	$var($PSPrinterJob$GState, oldGState, getGState());
	$nc(this->mGStateStack)->add($$new($PSPrinterJob$GState, this, oldGState));
	$nc(this->mPSStream)->println(PSPrinterJob::GSAVE_STR);
}

void PSPrinterJob::grestore() {
	int32_t count = $nc(this->mGStateStack)->size();
	$nc(this->mGStateStack)->remove(count - 1);
	$nc(this->mPSStream)->println(PSPrinterJob::GRESTORE_STR);
}

bool PSPrinterJob::isOuterGState() {
	return $nc(this->mGStateStack)->size() == 1;
}

void PSPrinterJob::convertToPSPath($PathIterator* pathIter) {
	$var($floats, segment, $new($floats, 6));
	int32_t segmentType = 0;
	int32_t fillRule = 0;
	if ($nc(pathIter)->getWindingRule() == $PathIterator::WIND_EVEN_ODD) {
		fillRule = PSPrinterJob::FILL_EVEN_ODD;
	} else {
		fillRule = PSPrinterJob::FILL_WINDING;
	}
	beginPath();
	setFillMode(fillRule);
	while ($nc(pathIter)->isDone() == false) {
		segmentType = pathIter->currentSegment(segment);
		{
			float lastX = 0;
			float lastY = 0;
			float c1x = 0;
			float c1y = 0;
			float c2x = 0;
			float c2y = 0;
			switch (segmentType) {
			case $PathIterator::SEG_MOVETO:
				{
					moveTo(segment->get(0), segment->get(1));
					break;
				}
			case $PathIterator::SEG_LINETO:
				{
					lineTo(segment->get(0), segment->get(1));
					break;
				}
			case $PathIterator::SEG_QUADTO:
				{
					lastX = getPenX();
					lastY = getPenY();
					c1x = lastX + (segment->get(0) - lastX) * 2 / 3;
					c1y = lastY + (segment->get(1) - lastY) * 2 / 3;
					c2x = segment->get(2) - (segment->get(2) - segment->get(0)) * 2 / 3;
					c2y = segment->get(3) - (segment->get(3) - segment->get(1)) * 2 / 3;
					bezierTo(c1x, c1y, c2x, c2y, segment->get(2), segment->get(3));
					break;
				}
			case $PathIterator::SEG_CUBICTO:
				{
					bezierTo(segment->get(0), segment->get(1), segment->get(2), segment->get(3), segment->get(4), segment->get(5));
					break;
				}
			case $PathIterator::SEG_CLOSE:
				{
					closeSubpath();
					break;
				}
			}
		}
		pathIter->next();
	}
}

void PSPrinterJob::deviceFill($PathIterator* pathIter, $Color* color, $AffineTransform* tx, $Shape* clip) {
	bool var$4 = $Double::isNaN($nc(tx)->getScaleX());
	bool var$3 = var$4 || $Double::isNaN($nc(tx)->getScaleY());
	bool var$2 = var$3 || $Double::isNaN($nc(tx)->getShearX());
	bool var$1 = var$2 || $Double::isNaN($nc(tx)->getShearY());
	bool var$0 = var$1 || $Double::isNaN($nc(tx)->getTranslateX());
	if (var$0 || $Double::isNaN($nc(tx)->getTranslateY())) {
		return;
	}
	setTransform(tx);
	setClip(clip);
	setColor(color);
	convertToPSPath(pathIter);
	$nc(this->mPSStream)->println(PSPrinterJob::GSAVE_STR);
	selectClipPath();
	fillPath();
	$nc(this->mPSStream)->println($$str({PSPrinterJob::GRESTORE_STR, " "_s, PSPrinterJob::NEWPATH_STR}));
}

$bytes* PSPrinterJob::rlEncode($bytes* inArr) {
	$useLocalCurrentObjectStackCache();
	int32_t inIndex = 0;
	int32_t outIndex = 0;
	int32_t startIndex = 0;
	int32_t runLen = 0;
	$var($bytes, outArr, $new($bytes, ($nc(inArr)->length * 2) + 2));
	while (inIndex < inArr->length) {
		if (runLen == 0) {
			startIndex = inIndex++;
			runLen = 1;
		}
		while (runLen < 128 && inIndex < inArr->length && inArr->get(inIndex) == inArr->get(startIndex)) {
			++runLen;
			++inIndex;
		}
		if (runLen > 1) {
			outArr->set(outIndex++, (int8_t)(257 - runLen));
			outArr->set(outIndex++, inArr->get(startIndex));
			runLen = 0;
			continue;
		}
		while (runLen < 128 && inIndex < inArr->length && inArr->get(inIndex) != inArr->get(inIndex - 1)) {
			++runLen;
			++inIndex;
		}
		outArr->set(outIndex++, (int8_t)(runLen - 1));
		for (int32_t i = startIndex; i < startIndex + runLen; ++i) {
			outArr->set(outIndex++, inArr->get(i));
		}
		runLen = 0;
	}
	outArr->set(outIndex++, (int8_t)128);
	$var($bytes, encodedData, $new($bytes, outIndex));
	$System::arraycopy(outArr, 0, encodedData, 0, outIndex);
	return encodedData;
}

$bytes* PSPrinterJob::ascii85Encode($bytes* inArr) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, outArr, $new($bytes, (($nc(inArr)->length + 4) * 5 / 4) + 2));
	int64_t p1 = 85;
	int64_t p2 = p1 * p1;
	int64_t p3 = p1 * p2;
	int64_t p4 = p1 * p3;
	int8_t pling = (int8_t)u'!';
	int32_t i = 0;
	int32_t olen = 0;
	int64_t val = 0;
	int64_t rem = 0;
	while (i + 3 < inArr->length) {
		int64_t var$2 = ((int64_t)((int32_t)(inArr->get(i++) & (uint32_t)255)) << 24);
		int64_t var$1 = var$2 + ((int64_t)((int32_t)(inArr->get(i++) & (uint32_t)255)) << 16);
		int64_t var$0 = var$1 + ((int64_t)((int32_t)(inArr->get(i++) & (uint32_t)255)) << 8);
		val = var$0 + ((int64_t)((int32_t)(inArr->get(i++) & (uint32_t)255)));
		if (val == 0) {
			outArr->set(olen++, (int8_t)u'z');
		} else {
			rem = val;
			outArr->set(olen++, (int8_t)($div(rem, p4) + pling));
			rem = $mod(rem, p4);
			outArr->set(olen++, (int8_t)($div(rem, p3) + pling));
			rem = $mod(rem, p3);
			outArr->set(olen++, (int8_t)($div(rem, p2) + pling));
			rem = $mod(rem, p2);
			outArr->set(olen++, (int8_t)($div(rem, p1) + pling));
			rem = $mod(rem, p1);
			outArr->set(olen++, (int8_t)(rem + pling));
		}
	}
	if (i < inArr->length) {
		int32_t n = inArr->length - i;
		val = 0;
		while (i < inArr->length) {
			val = (val << 8) + ((int32_t)(inArr->get(i++) & (uint32_t)255));
		}
		int32_t append = 4 - n;
		while (append-- > 0) {
			val = val << 8;
		}
		$var($bytes, c, $new($bytes, 5));
		rem = val;
		c->set(0, (int8_t)($div(rem, p4) + pling));
		rem = $mod(rem, p4);
		c->set(1, (int8_t)($div(rem, p3) + pling));
		rem = $mod(rem, p3);
		c->set(2, (int8_t)($div(rem, p2) + pling));
		rem = $mod(rem, p2);
		c->set(3, (int8_t)($div(rem, p1) + pling));
		rem = $mod(rem, p1);
		c->set(4, (int8_t)(rem + pling));
		for (int32_t b = 0; b < n + 1; ++b) {
			outArr->set(olen++, c->get(b));
		}
	}
	outArr->set(olen++, (int8_t)u'~');
	outArr->set(olen++, (int8_t)u'>');
	$var($bytes, retArr, $new($bytes, olen));
	$System::arraycopy(outArr, 0, retArr, 0, olen);
	return retArr;
}

void clinit$PSPrinterJob($Class* class$) {
	$assignStatic(PSPrinterJob::ADOBE_PS_STR, "%!PS-Adobe-3.0"_s);
	$assignStatic(PSPrinterJob::EOF_COMMENT, "%%EOF"_s);
	$assignStatic(PSPrinterJob::PAGE_COMMENT, "%%Page: "_s);
	$assignStatic(PSPrinterJob::READIMAGEPROC, "/imStr 0 def /imageSrc {currentfile /ASCII85Decode filter /RunLengthDecode filter  imStr readstring pop } def"_s);
	$assignStatic(PSPrinterJob::COPIES, "/#copies exch def"_s);
	$assignStatic(PSPrinterJob::PAGE_SAVE, "/pgSave save def"_s);
	$assignStatic(PSPrinterJob::PAGE_RESTORE, "pgSave restore"_s);
	$assignStatic(PSPrinterJob::SHOWPAGE, "showpage"_s);
	$assignStatic(PSPrinterJob::IMAGE_SAVE, "/imSave save def"_s);
	$assignStatic(PSPrinterJob::IMAGE_STR, " string /imStr exch def"_s);
	$assignStatic(PSPrinterJob::IMAGE_RESTORE, "imSave restore"_s);
	$assignStatic(PSPrinterJob::SetFontName, "F"_s);
	$assignStatic(PSPrinterJob::DrawStringName, "S"_s);
	$assignStatic(PSPrinterJob::EVEN_ODD_FILL_STR, "EF"_s);
	$assignStatic(PSPrinterJob::WINDING_FILL_STR, "WF"_s);
	$assignStatic(PSPrinterJob::EVEN_ODD_CLIP_STR, "EC"_s);
	$assignStatic(PSPrinterJob::WINDING_CLIP_STR, "WC"_s);
	$assignStatic(PSPrinterJob::MOVETO_STR, " M"_s);
	$assignStatic(PSPrinterJob::LINETO_STR, " L"_s);
	$assignStatic(PSPrinterJob::CURVETO_STR, " C"_s);
	$assignStatic(PSPrinterJob::GRESTORE_STR, "R"_s);
	$assignStatic(PSPrinterJob::GSAVE_STR, "G"_s);
	$assignStatic(PSPrinterJob::NEWPATH_STR, "N"_s);
	$assignStatic(PSPrinterJob::CLOSEPATH_STR, "P"_s);
	$assignStatic(PSPrinterJob::SETRGBCOLOR_STR, " SC"_s);
	$assignStatic(PSPrinterJob::SETGRAY_STR, " SG"_s);
	$assignStatic(PSPrinterJob::hexDigits, $new($bytes, {
		(int8_t)u'0',
		(int8_t)u'1',
		(int8_t)u'2',
		(int8_t)u'3',
		(int8_t)u'4',
		(int8_t)u'5',
		(int8_t)u'6',
		(int8_t)u'7',
		(int8_t)u'8',
		(int8_t)u'9',
		(int8_t)u'A',
		(int8_t)u'B',
		(int8_t)u'C',
		(int8_t)u'D',
		(int8_t)u'E',
		(int8_t)u'F'
	}));
	$assignStatic(PSPrinterJob::mFontProps, nullptr);
	{
		PSPrinterJob::initStatic();
	}
}

PSPrinterJob::PSPrinterJob() {
}

$Class* PSPrinterJob::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob, name, initialize, &_PSPrinterJob_ClassInfo_, clinit$PSPrinterJob, allocate$PSPrinterJob);
	return class$;
}

$Class* PSPrinterJob::class$ = nullptr;

	} // print
} // sun