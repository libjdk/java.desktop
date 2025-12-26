#include <sun/print/Win32PrintJob.h>

#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Paper.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/print/CancelablePrintJob.h>
#include <javax/print/Doc.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/DocPrintJob.h>
#include <javax/print/PrintException.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashPrintJobAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DocumentName.h>
#include <javax/print/attribute/standard/Fidelity.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobOriginatingUserName.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/standard/PrinterStateReason.h>
#include <javax/print/attribute/standard/PrinterStateReasons.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/print/event/PrintJobAttributeListener.h>
#include <javax/print/event/PrintJobEvent.h>
#include <javax/print/event/PrintJobListener.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <sun/print/ImagePrinter.h>
#include <sun/print/PrintJobAttributeException.h>
#include <sun/print/PrintJobFlavorException.h>
#include <sun/print/RasterPrinterJob.h>
#include <sun/print/Win32PrintService.h>
#include <jcpp.h>

#undef DATA_TRANSFER_COMPLETE
#undef FIDELITY_TRUE
#undef GIF
#undef INCH
#undef JOB_CANCELED
#undef JOB_COMPLETE
#undef JOB_FAILED
#undef JPEG
#undef LANDSCAPE
#undef NOT_ACCEPTING_JOBS
#undef NO_MORE_EVENTS
#undef PNG
#undef PRINTBUFFERLEN
#undef REPLACE_EXISTING
#undef REVERSE_LANDSCAPE
#undef SHUTDOWN
#undef STOPPED

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Paper = ::java::awt::print::Paper;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $CopyOption = ::java::nio::file::CopyOption;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $CancelablePrintJob = ::javax::print::CancelablePrintJob;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $DocPrintJob = ::javax::print::DocPrintJob;
using $PrintException = ::javax::print::PrintException;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashPrintJobAttributeSet = ::javax::print::attribute::HashPrintJobAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Copies = ::javax::print::attribute::standard::Copies;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DocumentName = ::javax::print::attribute::standard::DocumentName;
using $Fidelity = ::javax::print::attribute::standard::Fidelity;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobOriginatingUserName = ::javax::print::attribute::standard::JobOriginatingUserName;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterState = ::javax::print::attribute::standard::PrinterState;
using $PrinterStateReason = ::javax::print::attribute::standard::PrinterStateReason;
using $PrinterStateReasons = ::javax::print::attribute::standard::PrinterStateReasons;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $PrintJobAttributeListener = ::javax::print::event::PrintJobAttributeListener;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $PrintJobListener = ::javax::print::event::PrintJobListener;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
using $ImagePrinter = ::sun::print::ImagePrinter;
using $PrintJobAttributeException = ::sun::print::PrintJobAttributeException;
using $PrintJobFlavorException = ::sun::print::PrintJobFlavorException;
using $RasterPrinterJob = ::sun::print::RasterPrinterJob;
using $Win32PrintService = ::sun::print::Win32PrintService;

namespace sun {
	namespace print {

$FieldInfo _Win32PrintJob_FieldInfo_[] = {
	{"jobListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobListener;>;", $PRIVATE | $TRANSIENT, $field(Win32PrintJob, jobListeners)},
	{"attrListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/event/PrintJobAttributeListener;>;", $PRIVATE | $TRANSIENT, $field(Win32PrintJob, attrListeners)},
	{"listenedAttributeSets", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/print/attribute/PrintJobAttributeSet;>;", $PRIVATE | $TRANSIENT, $field(Win32PrintJob, listenedAttributeSets)},
	{"service", "Lsun/print/Win32PrintService;", nullptr, $PRIVATE, $field(Win32PrintJob, service)},
	{"fidelity", "Z", nullptr, $PRIVATE, $field(Win32PrintJob, fidelity)},
	{"printing", "Z", nullptr, $PRIVATE, $field(Win32PrintJob, printing)},
	{"printReturned", "Z", nullptr, $PRIVATE, $field(Win32PrintJob, printReturned)},
	{"reqAttrSet", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PRIVATE, $field(Win32PrintJob, reqAttrSet)},
	{"jobAttrSet", "Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PRIVATE, $field(Win32PrintJob, jobAttrSet)},
	{"job", "Ljava/awt/print/PrinterJob;", nullptr, $PRIVATE, $field(Win32PrintJob, job)},
	{"doc", "Ljavax/print/Doc;", nullptr, $PRIVATE, $field(Win32PrintJob, doc)},
	{"mDestination", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32PrintJob, mDestination)},
	{"instream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(Win32PrintJob, instream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(Win32PrintJob, reader)},
	{"jobName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Win32PrintJob, jobName)},
	{"copies", "I", nullptr, $PRIVATE, $field(Win32PrintJob, copies)},
	{"mediaName", "Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(Win32PrintJob, mediaName)},
	{"mediaSize", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE, $field(Win32PrintJob, mediaSize)},
	{"orient", "Ljavax/print/attribute/standard/OrientationRequested;", nullptr, $PRIVATE, $field(Win32PrintJob, orient)},
	{"hPrintJob", "J", nullptr, $PRIVATE, $field(Win32PrintJob, hPrintJob)},
	{"PRINTBUFFERLEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32PrintJob, PRINTBUFFERLEN)},
	{}
};

$MethodInfo _Win32PrintJob_MethodInfo_[] = {
	{"<init>", "(Lsun/print/Win32PrintService;)V", nullptr, 0, $method(static_cast<void(Win32PrintJob::*)($Win32PrintService*)>(&Win32PrintJob::init$))},
	{"addPrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC},
	{"addPrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{"cancel", "()V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"closeDataStreams", "()V", nullptr, $PRIVATE, $method(static_cast<void(Win32PrintJob::*)()>(&Win32PrintJob::closeDataStreams))},
	{"endPrintRawData", "()Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(Win32PrintJob::*)()>(&Win32PrintJob::endPrintRawData))},
	{"getAttributeValues", "(Ljavax/print/DocFlavor;)V", nullptr, $PRIVATE, $method(static_cast<void(Win32PrintJob::*)($DocFlavor*)>(&Win32PrintJob::getAttributeValues)), "javax.print.PrintException"},
	{"getAttributes", "()Ljavax/print/attribute/PrintJobAttributeSet;", nullptr, $PUBLIC},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"initializeAttributeSets", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Win32PrintJob::*)($Doc*,$PrintRequestAttributeSet*)>(&Win32PrintJob::initializeAttributeSets))},
	{"notifyEvent", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Win32PrintJob::*)(int32_t)>(&Win32PrintJob::notifyEvent))},
	{"pageableJob", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"print", "(Ljavax/print/Doc;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"printRawData", "([BI)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(Win32PrintJob::*)($bytes*,int32_t)>(&Win32PrintJob::printRawData))},
	{"printableJob", "(Ljava/awt/print/Printable;)V", nullptr, $PUBLIC, nullptr, "javax.print.PrintException"},
	{"removePrintJobAttributeListener", "(Ljavax/print/event/PrintJobAttributeListener;)V", nullptr, $PUBLIC},
	{"removePrintJobListener", "(Ljavax/print/event/PrintJobListener;)V", nullptr, $PUBLIC},
	{"startPrintRawData", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(Win32PrintJob::*)($String*,$String*)>(&Win32PrintJob::startPrintRawData))},
	{}
};

#define _METHOD_INDEX_endPrintRawData 5
#define _METHOD_INDEX_printRawData 13
#define _METHOD_INDEX_startPrintRawData 17

$ClassInfo _Win32PrintJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.Win32PrintJob",
	"java.lang.Object",
	"javax.print.CancelablePrintJob",
	_Win32PrintJob_FieldInfo_,
	_Win32PrintJob_MethodInfo_
};

$Object* allocate$Win32PrintJob($Class* clazz) {
	return $of($alloc(Win32PrintJob));
}

void Win32PrintJob::init$($Win32PrintService* service) {
	this->printing = false;
	this->printReturned = false;
	$set(this, reqAttrSet, nullptr);
	$set(this, jobAttrSet, nullptr);
	$set(this, mDestination, nullptr);
	$set(this, instream, nullptr);
	$set(this, reader, nullptr);
	$set(this, jobName, "Java Printing"_s);
	this->copies = 0;
	$set(this, mediaName, nullptr);
	$set(this, mediaSize, nullptr);
	$set(this, orient, nullptr);
	$set(this, service, service);
}

$PrintService* Win32PrintJob::getPrintService() {
	return this->service;
}

$PrintJobAttributeSet* Win32PrintJob::getAttributes() {
	$synchronized(this) {
		if (this->jobAttrSet == nullptr) {
			$var($PrintJobAttributeSet, jobSet, $new($HashPrintJobAttributeSet));
			return $AttributeSetUtilities::unmodifiableView(jobSet);
		} else {
			return this->jobAttrSet;
		}
	}
}

void Win32PrintJob::addPrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->jobListeners == nullptr) {
			$set(this, jobListeners, $new($Vector));
		}
		$nc(this->jobListeners)->add(listener);
	}
}

void Win32PrintJob::removePrintJobListener($PrintJobListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->jobListeners == nullptr) {
			return;
		}
		$nc(this->jobListeners)->remove($of(listener));
		if ($nc(this->jobListeners)->isEmpty()) {
			$set(this, jobListeners, nullptr);
		}
	}
}

void Win32PrintJob::closeDataStreams() {
	$useLocalCurrentObjectStackCache();
	if (this->doc == nullptr) {
		return;
	}
	$var($Object, data, nullptr);
	try {
		$assign(data, $nc(this->doc)->getPrintData());
	} catch ($IOException& e) {
		return;
	}
	if (this->instream != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(this->instream)->close();
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$set(this, instream, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else if (this->reader != nullptr) {
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					$nc(this->reader)->close();
				} catch ($IOException& e) {
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				$set(this, reader, nullptr);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} else if ($instanceOf($InputStream, data)) {
		try {
			$nc(($cast($InputStream, data)))->close();
		} catch ($IOException& e) {
		}
	} else if ($instanceOf($Reader, data)) {
		try {
			$nc(($cast($Reader, data)))->close();
		} catch ($IOException& e) {
		}
	}
}

void Win32PrintJob::notifyEvent(int32_t reason) {
	$useLocalCurrentObjectStackCache();
	switch (reason) {
	case $PrintJobEvent::DATA_TRANSFER_COMPLETE:
		{}
	case $PrintJobEvent::JOB_CANCELED:
		{}
	case $PrintJobEvent::JOB_FAILED:
		{}
	case $PrintJobEvent::NO_MORE_EVENTS:
		{}
	case $PrintJobEvent::JOB_COMPLETE:
		{
			closeDataStreams();
		}
	}
	$synchronized(this) {
		if (this->jobListeners != nullptr) {
			$var($PrintJobListener, listener, nullptr);
			$var($PrintJobEvent, event, $new($PrintJobEvent, this, reason));
			for (int32_t i = 0; i < $nc(this->jobListeners)->size(); ++i) {
				$assign(listener, $cast($PrintJobListener, $nc(this->jobListeners)->elementAt(i)));
				switch (reason) {
				case $PrintJobEvent::JOB_COMPLETE:
					{
						$nc(listener)->printJobCompleted(event);
						break;
					}
				case $PrintJobEvent::JOB_CANCELED:
					{
						$nc(listener)->printJobCanceled(event);
						break;
					}
				case $PrintJobEvent::JOB_FAILED:
					{
						$nc(listener)->printJobFailed(event);
						break;
					}
				case $PrintJobEvent::DATA_TRANSFER_COMPLETE:
					{
						$nc(listener)->printDataTransferCompleted(event);
						break;
					}
				case $PrintJobEvent::NO_MORE_EVENTS:
					{
						$nc(listener)->printJobNoMoreEvents(event);
						break;
					}
				default:
					{
						break;
					}
				}
			}
		}
	}
}

void Win32PrintJob::addPrintJobAttributeListener($PrintJobAttributeListener* listener, $PrintJobAttributeSet* attributes$renamed) {
	$var($PrintJobAttributeSet, attributes, attributes$renamed);
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		if (this->attrListeners == nullptr) {
			$set(this, attrListeners, $new($Vector));
			$set(this, listenedAttributeSets, $new($Vector));
		}
		$nc(this->attrListeners)->add(listener);
		if (attributes == nullptr) {
			$assign(attributes, $new($HashPrintJobAttributeSet));
		}
		$nc(this->listenedAttributeSets)->add(attributes);
	}
}

void Win32PrintJob::removePrintJobAttributeListener($PrintJobAttributeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr || this->attrListeners == nullptr) {
			return;
		}
		int32_t index = $nc(this->attrListeners)->indexOf(listener);
		if (index == -1) {
			return;
		} else {
			$nc(this->attrListeners)->remove(index);
			$nc(this->listenedAttributeSets)->remove(index);
			if ($nc(this->attrListeners)->isEmpty()) {
				$set(this, attrListeners, nullptr);
				$set(this, listenedAttributeSets, nullptr);
			}
		}
	}
}

void Win32PrintJob::print($Doc* doc, $PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		if (this->printing) {
			$throwNew($PrintException, "already printing"_s);
		} else {
			this->printing = true;
		}
	}
	$load($PrinterState);
	$var($PrinterState, prnState, $cast($PrinterState, $nc(this->service)->getAttribute($PrinterState::class$)));
	$init($PrinterState);
	if (prnState == $PrinterState::STOPPED) {
		$load($PrinterStateReasons);
		$var($PrinterStateReasons, prnStateReasons, $cast($PrinterStateReasons, $nc(this->service)->getAttribute($PrinterStateReasons::class$)));
		$init($PrinterStateReason);
		if ((prnStateReasons != nullptr) && (prnStateReasons->containsKey($PrinterStateReason::SHUTDOWN))) {
			$throwNew($PrintException, "PrintService is no longer available."_s);
		}
	}
	$load($PrinterIsAcceptingJobs);
	$init($PrinterIsAcceptingJobs);
	if ($equals($nc(this->service)->getAttribute($PrinterIsAcceptingJobs::class$), $PrinterIsAcceptingJobs::NOT_ACCEPTING_JOBS)) {
		$throwNew($PrintException, "Printer is not accepting job."_s);
	}
	$set(this, doc, doc);
	$var($DocFlavor, flavor, $nc(doc)->getDocFlavor());
	$var($Object, data, nullptr);
	try {
		$assign(data, doc->getPrintData());
	} catch ($IOException& e) {
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintException, $$str({"can\'t get print data: "_s, $(e->toString())}));
	}
	if (data == nullptr) {
		$throwNew($PrintException, "Null print data."_s);
	}
	if (flavor == nullptr || (!$nc(this->service)->isDocFlavorSupported(flavor))) {
		notifyEvent($PrintJobEvent::JOB_FAILED);
		$throwNew($PrintJobFlavorException, "invalid flavor"_s, flavor);
	}
	initializeAttributeSets(doc, attributes);
	getAttributeValues(flavor);
	$var($String, repClassName, $nc(flavor)->getRepresentationClassName());
	$init($DocFlavor$INPUT_STREAM);
	bool var$4 = flavor->equals($DocFlavor$INPUT_STREAM::GIF);
	bool var$3 = var$4 || flavor->equals($DocFlavor$INPUT_STREAM::JPEG);
	bool var$2 = var$3 || flavor->equals($DocFlavor$INPUT_STREAM::PNG);
	$init($DocFlavor$BYTE_ARRAY);
	bool var$1 = var$2 || flavor->equals($DocFlavor$BYTE_ARRAY::GIF);
	bool var$0 = var$1 || flavor->equals($DocFlavor$BYTE_ARRAY::JPEG);
	if (var$0 || flavor->equals($DocFlavor$BYTE_ARRAY::PNG)) {
		try {
			$set(this, instream, doc->getStreamForBytes());
			if (this->instream == nullptr) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, "No stream for data"_s);
			}
			printableJob($$new($ImagePrinter, this->instream));
			$nc(this->service)->wakeNotifier();
			return;
		} catch ($ClassCastException& cce) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(cce));
		} catch ($IOException& ioe) {
			notifyEvent($PrintJobEvent::JOB_FAILED);
			$throwNew($PrintException, static_cast<$Exception*>(ioe));
		}
	} else {
		$init($DocFlavor$URL);
		bool var$8 = flavor->equals($DocFlavor$URL::GIF);
		bool var$7 = var$8 || flavor->equals($DocFlavor$URL::JPEG);
		if (var$7 || flavor->equals($DocFlavor$URL::PNG)) {
			try {
				printableJob($$new($ImagePrinter, $cast($URL, data)));
				$nc(this->service)->wakeNotifier();
				return;
			} catch ($ClassCastException& cce) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			}
		} else if ($nc(repClassName)->equals("java.awt.print.Pageable"_s)) {
			try {
				pageableJob($cast($Pageable, $(doc->getPrintData())));
				$nc(this->service)->wakeNotifier();
				return;
			} catch ($ClassCastException& cce) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			} catch ($IOException& ioe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(ioe));
			}
		} else if (repClassName->equals("java.awt.print.Printable"_s)) {
			try {
				printableJob($cast($Printable, $(doc->getPrintData())));
				$nc(this->service)->wakeNotifier();
				return;
			} catch ($ClassCastException& cce) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(cce));
			} catch ($IOException& ioe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(ioe));
			}
		} else {
			bool var$12 = repClassName->equals("[B"_s);
			bool var$11 = var$12 || repClassName->equals("java.io.InputStream"_s);
			if (var$11 || repClassName->equals("java.net.URL"_s)) {
				if (repClassName->equals("java.net.URL"_s)) {
					$var($URL, url, $cast($URL, data));
					try {
						$set(this, instream, $nc(url)->openStream());
					} catch ($IOException& e) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, $(e->toString()));
					}
				} else {
					try {
						$set(this, instream, doc->getStreamForBytes());
					} catch ($IOException& ioe) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, $(ioe->toString()));
					}
				}
				if (this->instream == nullptr) {
					notifyEvent($PrintJobEvent::JOB_FAILED);
					$throwNew($PrintException, "No stream for data"_s);
				}
				if (this->mDestination != nullptr) {
					try {
						$init($StandardCopyOption);
						$Files::copy(this->instream, $($Path::of(this->mDestination, $$new($StringArray, 0))), $$new($CopyOptionArray, {static_cast<$CopyOption*>($StandardCopyOption::REPLACE_EXISTING)}));
					} catch ($IOException& ioe) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, $(ioe->toString()));
					}
					notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
					notifyEvent($PrintJobEvent::JOB_COMPLETE);
					$nc(this->service)->wakeNotifier();
					return;
				}
				if (!startPrintRawData($($nc(this->service)->getName()), this->jobName)) {
					notifyEvent($PrintJobEvent::JOB_FAILED);
					$throwNew($PrintException, "Print job failed to start."_s);
				}
				$var($BufferedInputStream, bin, $new($BufferedInputStream, this->instream));
				int32_t bread = 0;
				{
					$var($Throwable, var$13, nullptr);
					try {
						try {
							$var($bytes, buffer, $new($bytes, Win32PrintJob::PRINTBUFFERLEN));
							while ((bread = bin->read(buffer, 0, Win32PrintJob::PRINTBUFFERLEN)) >= 0) {
								if (!printRawData(buffer, bread)) {
									bin->close();
									notifyEvent($PrintJobEvent::JOB_FAILED);
									$throwNew($PrintException, "Problem while spooling data"_s);
								}
							}
							bin->close();
							if (!endPrintRawData()) {
								notifyEvent($PrintJobEvent::JOB_FAILED);
								$throwNew($PrintException, "Print job failed to close properly."_s);
							}
							notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
						} catch ($IOException& e) {
							notifyEvent($PrintJobEvent::JOB_FAILED);
							$throwNew($PrintException, $(e->toString()));
						}
					} catch ($Throwable& var$14) {
						$assign(var$13, var$14);
					} /*finally*/ {
						notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
					}
					if (var$13 != nullptr) {
						$throw(var$13);
					}
				}
			} else {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, $$str({"unrecognized class: "_s, repClassName}));
			}
		}
	}
	$nc(this->service)->wakeNotifier();
}

void Win32PrintJob::printableJob($Printable* printable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($WPrinterJob));
					}
				}
				$var($PrintService, svc, getPrintService());
				$nc(this->job)->setPrintService(svc);
				if (this->copies == 0) {
					$load($Copies);
					$var($Copies, c, $cast($Copies, $nc(svc)->getDefaultAttributeValue($Copies::class$)));
					this->copies = $nc(c)->getValue();
				}
				if (this->mediaName == nullptr) {
					$load($Media);
					$var($Object, media, $nc(svc)->getDefaultAttributeValue($Media::class$));
					if ($instanceOf($MediaSizeName, media)) {
						$set(this, mediaName, $cast($MediaSizeName, media));
						$set(this, mediaSize, $MediaSize::getMediaSizeForName(this->mediaName));
					}
				}
				if (this->orient == nullptr) {
					$load($OrientationRequested);
					$set(this, orient, $cast($OrientationRequested, $nc(svc)->getDefaultAttributeValue($OrientationRequested::class$)));
				}
				$nc(this->job)->setCopies(this->copies);
				$nc(this->job)->setJobName(this->jobName);
				$var($PageFormat, pf, $new($PageFormat));
				if (this->mediaSize != nullptr) {
					$var($Paper, p, $new($Paper));
					double var$2 = $nc(this->mediaSize)->getX($MediaSize::INCH) * 72.0;
					p->setSize(var$2, $nc(this->mediaSize)->getY($MediaSize::INCH) * 72.0);
					double var$3 = p->getWidth() - 144.0;
					p->setImageableArea(72.0, 72.0, var$3, p->getHeight() - 144.0);
					pf->setPaper(p);
				}
				$init($OrientationRequested);
				if (this->orient == $OrientationRequested::REVERSE_LANDSCAPE) {
					pf->setOrientation($PageFormat::REVERSE_LANDSCAPE);
				} else {
					if (this->orient == $OrientationRequested::LANDSCAPE) {
						pf->setOrientation($PageFormat::LANDSCAPE);
					}
				}
				$nc(this->job)->setPrintable(printable, pf);
				$nc(this->job)->print(this->reqAttrSet);
				notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException& pe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			this->printReturned = true;
			notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void Win32PrintJob::pageableJob($Pageable* pageable) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$synchronized(this) {
					if (this->job != nullptr) {
						$throwNew($PrintException, "already printing"_s);
					} else {
						$set(this, job, $new($WPrinterJob));
					}
				}
				$var($PrintService, svc, getPrintService());
				$nc(this->job)->setPrintService(svc);
				if (this->copies == 0) {
					$load($Copies);
					$var($Copies, c, $cast($Copies, $nc(svc)->getDefaultAttributeValue($Copies::class$)));
					this->copies = $nc(c)->getValue();
				}
				$nc(this->job)->setCopies(this->copies);
				$nc(this->job)->setJobName(this->jobName);
				$nc(this->job)->setPageable(pageable);
				$nc(this->job)->print(this->reqAttrSet);
				notifyEvent($PrintJobEvent::DATA_TRANSFER_COMPLETE);
				return$1 = true;
				goto $finally;
			} catch ($PrinterException& pe) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, static_cast<$Exception*>(pe));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			this->printReturned = true;
			notifyEvent($PrintJobEvent::NO_MORE_EVENTS);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void Win32PrintJob::initializeAttributeSets($Doc* doc, $PrintRequestAttributeSet* reqSet) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$set(this, reqAttrSet, $new($HashPrintRequestAttributeSet));
		$set(this, jobAttrSet, $new($HashPrintJobAttributeSet));
		$var($AttributeArray, attrs, nullptr);
		if (reqSet != nullptr) {
			$nc(this->reqAttrSet)->addAll(reqSet);
			$assign(attrs, reqSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($DocAttributeSet, docSet, $nc(doc)->getAttributes());
		if (docSet != nullptr) {
			$assign(attrs, docSet->toArray());
			for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
				if ($instanceOf($PrintRequestAttribute, attrs->get(i))) {
					$nc(this->reqAttrSet)->add(attrs->get(i));
				}
				if ($instanceOf($PrintJobAttribute, attrs->get(i))) {
					$nc(this->jobAttrSet)->add(attrs->get(i));
				}
			}
		}
		$var($String, userName, ""_s);
		try {
			$assign(userName, $System::getProperty("user.name"_s));
		} catch ($SecurityException& se) {
		}
		if (userName == nullptr || userName->isEmpty()) {
			$load($RequestingUserName);
			$var($RequestingUserName, ruName, $cast($RequestingUserName, $nc(reqSet)->get($RequestingUserName::class$)));
			if (ruName != nullptr) {
				$var($String, var$0, ruName->getValue());
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, var$0, $(ruName->getLocale())));
			} else {
				$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, ""_s, nullptr));
			}
		} else {
			$nc(this->jobAttrSet)->add($$new($JobOriginatingUserName, userName, nullptr));
		}
		$load($JobName);
		if ($nc(this->jobAttrSet)->get($JobName::class$) == nullptr) {
			$var($JobName, jobName, nullptr);
			$load($DocumentName);
			if (docSet != nullptr && docSet->get($DocumentName::class$) != nullptr) {
				$var($DocumentName, docName, $cast($DocumentName, docSet->get($DocumentName::class$)));
				$var($String, var$1, $nc(docName)->getValue());
				$assign(jobName, $new($JobName, var$1, $(docName->getLocale())));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			} else {
				$var($String, str, $str({"JPS Job:"_s, doc}));
				try {
					$var($Object, printData, doc->getPrintData());
					if ($instanceOf($URL, printData)) {
						$assign(str, $nc((($cast($URL, $(doc->getPrintData())))))->toString());
					}
				} catch ($IOException& e) {
				}
				$assign(jobName, $new($JobName, str, nullptr));
				$nc(this->jobAttrSet)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>(jobName)));
			}
		}
		$set(this, jobAttrSet, $AttributeSetUtilities::unmodifiableView(this->jobAttrSet));
	}
}

void Win32PrintJob::getAttributeValues($DocFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	$load($Fidelity);
	$init($Fidelity);
	if ($equals($nc(this->reqAttrSet)->get($Fidelity::class$), $Fidelity::FIDELITY_TRUE)) {
		this->fidelity = true;
	} else {
		this->fidelity = false;
	}
	$Class* category = nullptr;
	$var($AttributeArray, attrs, $nc(this->reqAttrSet)->toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$var($Attribute, attr, attrs->get(i));
		category = $nc(attr)->getCategory();
		if (this->fidelity == true) {
			if (!$nc(this->service)->isAttributeCategorySupported(category)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported category: "_s, category}), category, nullptr);
			} else if (!$nc(this->service)->isAttributeValueSupported(attr, flavor, nullptr)) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintJobAttributeException, $$str({"unsupported attribute: "_s, attr}), nullptr, attr);
			}
		}
		$load($Destination);
		if (category == $Destination::class$) {
			$var($URI, uri, $nc(($cast($Destination, attr)))->getURI());
			if (!"file"_s->equals($($nc(uri)->getScheme()))) {
				notifyEvent($PrintJobEvent::JOB_FAILED);
				$throwNew($PrintException, "Not a file: URI"_s);
			} else {
				try {
					$set(this, mDestination, ($$new($File, uri))->getPath());
				} catch ($Exception& e) {
					$throwNew($PrintException, $cast($Exception, e));
				}
				$var($SecurityManager, security, $System::getSecurityManager());
				if (security != nullptr) {
					try {
						security->checkWrite(this->mDestination);
					} catch ($SecurityException& se) {
						notifyEvent($PrintJobEvent::JOB_FAILED);
						$throwNew($PrintException, static_cast<$Exception*>(se));
					}
				}
			}
		} else {
			$load($JobName);
			if (category == $JobName::class$) {
				$set(this, jobName, $nc(($cast($JobName, attr)))->getValue());
			} else {
				$load($Copies);
				if (category == $Copies::class$) {
					this->copies = $nc(($cast($Copies, attr)))->getValue();
				} else {
					$load($Media);
					if (category == $Media::class$) {
						if ($instanceOf($MediaSizeName, attr)) {
							$set(this, mediaName, $cast($MediaSizeName, attr));
							if (!$nc(this->service)->isAttributeValueSupported(attr, nullptr, nullptr)) {
								$set(this, mediaSize, $MediaSize::getMediaSizeForName(this->mediaName));
							}
						}
					} else {
						$load($OrientationRequested);
						if (category == $OrientationRequested::class$) {
							$set(this, orient, $cast($OrientationRequested, attr));
						}
					}
				}
			}
		}
	}
}

bool Win32PrintJob::startPrintRawData($String* printerName, $String* jobName) {
	bool $ret = false;
	$prepareNative(Win32PrintJob, startPrintRawData, bool, $String* printerName, $String* jobName);
	$ret = $invokeNative(printerName, jobName);
	$finishNative();
	return $ret;
}

bool Win32PrintJob::printRawData($bytes* data, int32_t count) {
	bool $ret = false;
	$prepareNative(Win32PrintJob, printRawData, bool, $bytes* data, int32_t count);
	$ret = $invokeNative(data, count);
	$finishNative();
	return $ret;
}

bool Win32PrintJob::endPrintRawData() {
	bool $ret = false;
	$prepareNative(Win32PrintJob, endPrintRawData, bool);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void Win32PrintJob::cancel() {
	$synchronized(this) {
		if (!this->printing) {
			$throwNew($PrintException, "Job is not yet submitted."_s);
		} else if (this->job != nullptr && !this->printReturned) {
			$nc(this->job)->cancel();
			notifyEvent($PrintJobEvent::JOB_CANCELED);
			return;
		} else {
			$throwNew($PrintException, "Job could not be cancelled."_s);
		}
	}
}

Win32PrintJob::Win32PrintJob() {
}

$Class* Win32PrintJob::load$($String* name, bool initialize) {
	$loadClass(Win32PrintJob, name, initialize, &_Win32PrintJob_ClassInfo_, allocate$Win32PrintJob);
	return class$;
}

$Class* Win32PrintJob::class$ = nullptr;

	} // print
} // sun