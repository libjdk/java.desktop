#include <sun/awt/X11/XIconWindow.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Composite.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/IconInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/AwtGraphicsConfigData.h>
#include <sun/awt/X11/ColorData.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XIconSize.h>
#include <sun/awt/X11/XPixmapFormatValues.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XVisualInfo.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWMHints.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11/awtImageData.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ALLBITS
#undef BACKGROUND_PIXMAP
#undef BORDER_PIXEL
#undef BOUNDS
#undef COLORMAP
#undef DELAYED
#undef DEPTH
#undef FINER
#undef FINEST
#undef ICE_WM
#undef MAX_VALUE
#undef PARENT
#undef PARENT_WINDOW
#undef TRUE
#undef TYPE_INT_ARGB
#undef VALUE_MASK
#undef VISUAL
#undef VISUAL_CLASS

using $XIconSizeArray = $Array<::sun::awt::X11::XIconSize>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IconInfo = ::sun::awt::IconInfo;
using $AwtGraphicsConfigData = ::sun::awt::X11::AwtGraphicsConfigData;
using $ColorData = ::sun::awt::X11::ColorData;
using $Native = ::sun::awt::X11::Native;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XIconSize = ::sun::awt::X11::XIconSize;
using $XPixmapFormatValues = ::sun::awt::X11::XPixmapFormatValues;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XVisualInfo = ::sun::awt::X11::XVisualInfo;
using $XWM = ::sun::awt::X11::XWM;
using $XWMHints = ::sun::awt::X11::XWMHints;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $awtImageData = ::sun::awt::X11::awtImageData;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XIconWindow_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XIconWindow, log)},
	{"parent", "Lsun/awt/X11/XDecoratedPeer;", nullptr, 0, $field(XIconWindow, parent)},
	{"size", "Ljava/awt/Dimension;", nullptr, 0, $field(XIconWindow, size)},
	{"iconPixmap", "J", nullptr, 0, $field(XIconWindow, iconPixmap)},
	{"iconMask", "J", nullptr, 0, $field(XIconWindow, iconMask)},
	{"iconWidth", "I", nullptr, 0, $field(XIconWindow, iconWidth)},
	{"iconHeight", "I", nullptr, 0, $field(XIconWindow, iconHeight)},
	{}
};

$MethodInfo _XIconWindow_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDecoratedPeer;)V", nullptr, 0, $method(static_cast<void(XIconWindow::*)($XDecoratedPeer*)>(&XIconWindow::init$))},
	{"calcIconSize", "(II)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(XIconWindow::*)(int32_t,int32_t)>(&XIconWindow::calcIconSize))},
	{"getIconSize", "(II)Ljava/awt/Dimension;", nullptr, 0},
	{"getIconSizes", "()[Lsun/awt/X11/XIconSize;", nullptr, $PRIVATE, $method(static_cast<$XIconSizeArray*(XIconWindow::*)()>(&XIconWindow::getIconSizes))},
	{"instantPreInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"paddedwidth", "(II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&XIconWindow::paddedwidth))},
	{"replaceImage", "(Ljava/awt/Image;)V", nullptr, 0},
	{"replaceMask", "(Ljava/awt/Image;)V", nullptr, 0},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, 0},
	{"setIconImages", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/IconInfo;>;)V", 0},
	{}
};

$ClassInfo _XIconWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XIconWindow",
	"sun.awt.X11.XBaseWindow",
	nullptr,
	_XIconWindow_FieldInfo_,
	_XIconWindow_MethodInfo_
};

$Object* allocate$XIconWindow($Class* clazz) {
	return $of($alloc(XIconWindow));
}

$PlatformLogger* XIconWindow::log = nullptr;

void XIconWindow::init$($XDecoratedPeer* parent) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$init($Boolean);
	$XBaseWindow::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XBaseWindow::PARENT),
		$of(parent),
		$of($XBaseWindow::DELAYED),
		$of($Boolean::TRUE)
	})));
	this->iconPixmap = 0;
	this->iconMask = 0;
	this->iconWidth = 0;
	this->iconHeight = 0;
}

void XIconWindow::instantPreInit($XCreateWindowParams* params) {
	$XBaseWindow::instantPreInit(params);
	$set(this, parent, $cast($XDecoratedPeer, $nc(params)->get($XBaseWindow::PARENT)));
}

$XIconSizeArray* XIconWindow::getIconSizes() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($XIconSizeArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($AwtGraphicsConfigData, adata, $nc(this->parent)->getGraphicsConfigurationData());
			int64_t screen = $nc($($nc(adata)->get_awt_visInfo()))->get_screen();
			int64_t display = $XToolkit::getDisplay();
			$init($PlatformLogger$Level);
			if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XIconWindow::log)->finest($(adata->toString()));
			}
			$init($XlibWrapper);
			int64_t status = $XlibWrapper::XGetIconSizes(display, $XToolkit::getDefaultRootWindow(), $XlibWrapper::larg1, $XlibWrapper::iarg1);
			if (status == 0) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			int32_t count = $Native::getInt($XlibWrapper::iarg1);
			int64_t sizes_ptr = $Native::getLong($XlibWrapper::larg1);
			if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XIconWindow::log)->finest("count = {1}, sizes_ptr = {0}"_s, $$new($ObjectArray, {
					$($of($Long::valueOf(sizes_ptr))),
					$($of($Integer::valueOf(count)))
				}));
			}
			$var($XIconSizeArray, res, $new($XIconSizeArray, count));
			for (int32_t i = 0; i < count; ++i, sizes_ptr += $XIconSize::getSize()) {
				res->set(i, $$new($XIconSize, sizes_ptr));
				if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
					$nc(XIconWindow::log)->finest("sizes_ptr[{1}] = {0}"_s, $$new($ObjectArray, {
						$of(res->get(i)),
						$($of($Integer::valueOf(i)))
					}));
				}
			}
			$assign(var$2, res);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Dimension* XIconWindow::calcIconSize(int32_t widthHint, int32_t heightHint) {
	$useLocalCurrentObjectStackCache();
	if ($XWM::getWMID() == $XWM::ICE_WM) {
		$nc(XIconWindow::log)->finest("Returning ICE_WM icon size: 16x16"_s);
		return $new($Dimension, 16, 16);
	}
	$var($XIconSizeArray, sizeList, getIconSizes());
	$init($PlatformLogger$Level);
	if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XIconWindow::log)->finest("Icon sizes: {0}"_s, sizeList);
	}
	if (sizeList == nullptr) {
		return $new($Dimension, 16, 16);
	}
	bool found = false;
	int32_t dist = -1;
	int32_t newDist = 0;
	int32_t diff = 0;
	int32_t closestHeight = 0;
	int32_t closestWidth = 0;
	int32_t saveWidth = 0;
	int32_t saveHeight = 0;
	for (int32_t i = 0; i < $nc(sizeList)->length; ++i) {
		bool var$2 = widthHint >= $nc(sizeList->get(i))->get_min_width();
		bool var$1 = var$2 && widthHint <= $nc(sizeList->get(i))->get_max_width();
		bool var$0 = var$1 && heightHint >= $nc(sizeList->get(i))->get_min_height();
		if (var$0 && heightHint <= $nc(sizeList->get(i))->get_max_height()) {
			found = true;
			int32_t var$4 = (widthHint - $nc(sizeList->get(i))->get_min_width());
			bool var$3 = (($mod(var$4, $nc(sizeList->get(i))->get_width_inc())) == 0);
			if (var$3) {
				int32_t var$5 = (heightHint - $nc(sizeList->get(i))->get_min_height());
				var$3 = (($mod(var$5, $nc(sizeList->get(i))->get_height_inc())) == 0);
			}
			if (var$3) {
				saveWidth = widthHint;
				saveHeight = heightHint;
				dist = 0;
				break;
			}
			diff = widthHint - $nc(sizeList->get(i))->get_min_width();
			if (diff == 0) {
				closestWidth = widthHint;
			} else {
				diff = $mod(diff, $nc(sizeList->get(i))->get_width_inc());
				closestWidth = widthHint - diff;
			}
			diff = heightHint - $nc(sizeList->get(i))->get_min_height();
			if (diff == 0) {
				closestHeight = heightHint;
			} else {
				diff = $mod(diff, $nc(sizeList->get(i))->get_height_inc());
				closestHeight = heightHint - diff;
			}
			newDist = closestWidth * closestWidth + closestHeight * closestHeight;
			if (dist > newDist) {
				saveWidth = closestWidth;
				saveHeight = closestHeight;
				dist = newDist;
			}
		}
	}
	if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XIconWindow::log)->finest($$str({"found="_s, $$str(found)}));
	}
	if (!found) {
		if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
			$var($String, var$10, $$str({"widthHint="_s, $$str(widthHint), ", heightHint="_s, $$str(heightHint), ", saveWidth="_s, $$str(saveWidth), ", saveHeight="_s, $$str(saveHeight), ", max_width="_s, $$str($nc($nc(sizeList)->get(0))->get_max_width()), ", max_height="_s}));
			$var($String, var$9, $$concat(var$10, $$str($nc(sizeList->get(0))->get_max_height())));
			$var($String, var$8, $$concat(var$9, ", min_width="_s));
			$var($String, var$7, $$concat(var$8, $$str($nc(sizeList->get(0))->get_min_width())));
			$var($String, var$6, $$concat(var$7, ", min_height="_s));
			$nc(XIconWindow::log)->finest($$concat(var$6, $$str($nc(sizeList->get(0))->get_min_height())));
		}
		bool var$11 = widthHint > $nc($nc(sizeList)->get(0))->get_max_width();
		if (var$11 || heightHint > $nc($nc(sizeList)->get(0))->get_max_height()) {
			int32_t wdiff = widthHint - $nc(sizeList->get(0))->get_max_width();
			int32_t hdiff = heightHint - $nc(sizeList->get(0))->get_max_height();
			if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XIconWindow::log)->finest($$str({"wdiff="_s, $$str(wdiff), ", hdiff="_s, $$str(hdiff)}));
			}
			if (wdiff >= hdiff) {
				saveWidth = $nc(sizeList->get(0))->get_max_width();
				saveHeight = $cast(int32_t, (((double)$nc(sizeList->get(0))->get_max_width() / widthHint) * heightHint));
			} else {
				saveWidth = $cast(int32_t, (((double)$nc(sizeList->get(0))->get_max_height() / heightHint) * widthHint));
				saveHeight = $nc(sizeList->get(0))->get_max_height();
			}
		} else {
			bool var$13 = widthHint < $nc(sizeList->get(0))->get_min_width();
			if (var$13 || heightHint < $nc(sizeList->get(0))->get_min_height()) {
				int32_t var$14 = $nc(sizeList->get(0))->get_min_width();
				saveWidth = (var$14 + $nc(sizeList->get(0))->get_max_width()) / 2;
				int32_t var$15 = $nc(sizeList->get(0))->get_min_height();
				saveHeight = (var$15 + $nc(sizeList->get(0))->get_max_height()) / 2;
			} else {
				saveWidth = widthHint;
				saveHeight = widthHint;
			}
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$16, nullptr);
		try {
			$XlibWrapper::XFree($nc($nc(sizeList)->get(0))->pData);
		} catch ($Throwable& var$17) {
			$assign(var$16, var$17);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$16 != nullptr) {
			$throw(var$16);
		}
	}
	if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XIconWindow::log)->finest($$str({"return "_s, $$str(saveWidth), "x"_s, $$str(saveHeight)}));
	}
	return $new($Dimension, saveWidth, saveHeight);
}

$Dimension* XIconWindow::getIconSize(int32_t widthHint, int32_t heightHint) {
	if (this->size == nullptr) {
		$set(this, size, calcIconSize(widthHint, heightHint));
	}
	return this->size;
}

void XIconWindow::replaceImage($Image* img) {
	$useLocalCurrentObjectStackCache();
	if (this->parent == nullptr) {
		return;
	}
	$var($BufferedImage, bi, nullptr);
	if (img != nullptr && this->iconWidth != 0 && this->iconHeight != 0) {
		$var($GraphicsConfiguration, defaultGC, $nc($($nc($($nc(this->parent)->getGraphicsConfiguration()))->getDevice()))->getDefaultConfiguration());
		$var($ColorModel, model, $nc(defaultGC)->getColorModel());
		$var($WritableRaster, raster, $nc(model)->createCompatibleWritableRaster(this->iconWidth, this->iconHeight));
		$assign(bi, $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		$var($Graphics, g, bi->getGraphics());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$init($SystemColor);
				$nc(g)->setColor($SystemColor::window);
				g->fillRect(0, 0, this->iconWidth, this->iconHeight);
				if ($instanceOf($Graphics2D, g)) {
					$init($AlphaComposite);
					$nc(($cast($Graphics2D, g)))->setComposite($AlphaComposite::Src);
				}
				g->drawImage(img, 0, 0, this->iconWidth, this->iconHeight, nullptr);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$2, nullptr);
		bool return$3 = false;
		try {
			if (this->iconPixmap != 0) {
				$XlibWrapper::XFreePixmap($XToolkit::getDisplay(), this->iconPixmap);
				this->iconPixmap = 0;
				$nc(XIconWindow::log)->finest("Freed previous pixmap"_s);
			}
			if (bi == nullptr || this->iconWidth == 0 || this->iconHeight == 0) {
				return$3 = true;
				goto $finally1;
			}
			$var($AwtGraphicsConfigData, adata, $nc(this->parent)->getGraphicsConfigurationData());
			$var($awtImageData, awtImage, $nc(adata)->get_awtImage(0));
			$var($XVisualInfo, visInfo, adata->get_awt_visInfo());
			int64_t var$4 = $XToolkit::getDisplay();
			int64_t var$6 = $XToolkit::getDisplay();
			int64_t var$5 = $XlibWrapper::RootWindow(var$6, $nc(visInfo)->get_screen());
			int32_t var$7 = this->iconWidth;
			int32_t var$8 = this->iconHeight;
			this->iconPixmap = $XlibWrapper::XCreatePixmap(var$4, var$5, var$7, var$8, $nc(awtImage)->get_Depth());
			if (this->iconPixmap == 0) {
				$nc(XIconWindow::log)->finest("Can\'t create new pixmap for icon"_s);
				return$3 = true;
				goto $finally1;
			}
			int64_t bytes = 0;
			$var($DataBuffer, srcBuf, $nc($($nc(bi)->getData()))->getDataBuffer());
			if ($instanceOf($DataBufferByte, srcBuf)) {
				$var($bytes, buf, $nc(($cast($DataBufferByte, srcBuf)))->getData());
				$var($ColorData, cdata, adata->get_color_data(0));
				int32_t num_colors = $nc(cdata)->get_awt_numICMcolors();
				for (int32_t i = 0; i < $nc(buf)->length; ++i) {
					int32_t b = $Byte::toUnsignedInt(buf->get(i));
					buf->set(i, (b >= num_colors) ? (int8_t)0 : cdata->get_awt_icmLUT2Colors(b));
				}
				bytes = $Native::toData(buf);
			} else if ($instanceOf($DataBufferInt, srcBuf)) {
				bytes = $Native::toData($($nc(($cast($DataBufferInt, srcBuf)))->getData()));
			} else if ($instanceOf($DataBufferUShort, srcBuf)) {
				bytes = $Native::toData($($nc(($cast($DataBufferUShort, srcBuf)))->getData()));
			} else {
				$throwNew($IllegalArgumentException, $$str({"Unknown data buffer: "_s, srcBuf}));
			}
			int32_t bpp = $nc($($nc(awtImage)->get_wsImageFormat()))->get_bits_per_pixel();
			int32_t slp = $nc($(awtImage->get_wsImageFormat()))->get_scanline_pad();
			int32_t bpsl = paddedwidth(this->iconWidth * bpp, slp) >> 3;
			if (($div((bpsl << 3), bpp)) < this->iconWidth) {
				$nc(XIconWindow::log)->finest("Image format doesn\'t fit to icon width"_s);
				return$3 = true;
				goto $finally1;
			}
			int64_t var$9 = $XToolkit::getDisplay();
			int64_t var$10 = $nc(visInfo)->get_visual();
			int64_t dst = $XlibWrapper::XCreateImage(var$9, var$10, awtImage->get_Depth(), $XConstants::ZPixmap, 0, bytes, this->iconWidth, this->iconHeight, 32, bpsl);
			if (dst == 0) {
				$nc(XIconWindow::log)->finest("Can\'t create XImage for icon"_s);
				$XlibWrapper::XFreePixmap($XToolkit::getDisplay(), this->iconPixmap);
				this->iconPixmap = 0;
				return$3 = true;
				goto $finally1;
			} else {
				$nc(XIconWindow::log)->finest("Created XImage for icon"_s);
			}
			int64_t gc = $XlibWrapper::XCreateGC($XToolkit::getDisplay(), this->iconPixmap, 0, 0);
			if (gc == 0) {
				$nc(XIconWindow::log)->finest("Can\'t create GC for pixmap"_s);
				$XlibWrapper::XFreePixmap($XToolkit::getDisplay(), this->iconPixmap);
				this->iconPixmap = 0;
				return$3 = true;
				goto $finally1;
			} else {
				$nc(XIconWindow::log)->finest("Created GC for pixmap"_s);
			}
			{
				$var($Throwable, var$11, nullptr);
				try {
					$XlibWrapper::XPutImage($XToolkit::getDisplay(), this->iconPixmap, gc, dst, 0, 0, 0, 0, this->iconWidth, this->iconHeight);
				} catch ($Throwable& var$12) {
					$assign(var$11, var$12);
				} /*finally*/ {
					$XlibWrapper::XFreeGC($XToolkit::getDisplay(), gc);
				}
				if (var$11 != nullptr) {
					$throw(var$11);
				}
			}
		} catch ($Throwable& var$13) {
			$assign(var$2, var$13);
		} $finally1: {
			$XToolkit::awtUnlock();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
		if (return$3) {
			return;
		}
	}
}

void XIconWindow::replaceMask($Image* img) {
	$useLocalCurrentObjectStackCache();
	if (this->parent == nullptr) {
		return;
	}
	$var($BufferedImage, bi, nullptr);
	if (img != nullptr && this->iconWidth != 0 && this->iconHeight != 0) {
		$assign(bi, $new($BufferedImage, this->iconWidth, this->iconHeight, $BufferedImage::TYPE_INT_ARGB));
		$var($Graphics, g, bi->getGraphics());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(g)->drawImage(img, 0, 0, this->iconWidth, this->iconHeight, nullptr);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$2, nullptr);
		bool return$3 = false;
		try {
			if (this->iconMask != 0) {
				$XlibWrapper::XFreePixmap($XToolkit::getDisplay(), this->iconMask);
				this->iconMask = 0;
				$nc(XIconWindow::log)->finest("Freed previous mask"_s);
			}
			if (bi == nullptr || this->iconWidth == 0 || this->iconHeight == 0) {
				return$3 = true;
				goto $finally1;
			}
			$var($AwtGraphicsConfigData, adata, $nc(this->parent)->getGraphicsConfigurationData());
			$var($awtImageData, awtImage, $nc(adata)->get_awtImage(0));
			$var($XVisualInfo, visInfo, adata->get_awt_visInfo());
			$var($ColorModel, cm, $nc(bi)->getColorModel());
			$var($DataBuffer, srcBuf, $nc($(bi->getRaster()))->getDataBuffer());
			int32_t sidx = 0;
			int32_t bpl = (this->iconWidth + 7) >> 3;
			$var($bytes, destBuf, $new($bytes, bpl * this->iconHeight));
			int32_t didx = 0;
			for (int32_t i = 0; i < this->iconHeight; ++i) {
				int32_t dbit = 0;
				int32_t cv = 0;
				for (int32_t j = 0; j < this->iconWidth; ++j) {
					if ($nc(cm)->getAlpha($nc(srcBuf)->getElem(sidx)) != 0) {
						cv = cv + ($sl(1, dbit));
					}
					++dbit;
					if (dbit == 8) {
						destBuf->set(didx, (int8_t)cv);
						cv = 0;
						dbit = 0;
						++didx;
					}
					++sidx;
				}
			}
			int64_t var$4 = $XToolkit::getDisplay();
			int64_t var$6 = $XToolkit::getDisplay();
			int64_t var$5 = $XlibWrapper::RootWindow(var$6, $nc(visInfo)->get_screen());
			this->iconMask = $XlibWrapper::XCreateBitmapFromData(var$4, var$5, $Native::toData(destBuf), this->iconWidth, this->iconHeight);
		} catch ($Throwable& var$7) {
			$assign(var$2, var$7);
		} $finally1: {
			$XToolkit::awtUnlock();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
		if (return$3) {
			return;
		}
	}
}

void XIconWindow::setIconImages($List* icons) {
	$useLocalCurrentObjectStackCache();
	if (icons == nullptr || $nc(icons)->size() == 0) {
		return;
	}
	int32_t minDiff = $Integer::MAX_VALUE;
	$var($Image, min, nullptr);
	{
		$var($Iterator, i$, $nc(icons)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($IconInfo, iconInfo, $cast($IconInfo, i$->next()));
			{
				if ($nc(iconInfo)->isValid()) {
					$var($Image, image, iconInfo->getImage());
					int32_t var$0 = $nc(image)->getWidth(nullptr);
					$var($Dimension, dim, calcIconSize(var$0, image->getHeight(nullptr)));
					int32_t widthDiff = $Math::abs($nc(dim)->width - $nc(image)->getWidth(nullptr));
					int32_t heightDiff = $Math::abs($nc(image)->getHeight(nullptr) - $nc(dim)->height);
					if (minDiff >= (widthDiff + heightDiff)) {
						minDiff = (widthDiff + heightDiff);
						$assign(min, image);
					}
				}
			}
		}
	}
	if (min != nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XIconWindow::log)->finer("Icon: {0}x{1}"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(min->getWidth(nullptr)))),
				$($of($Integer::valueOf(min->getHeight(nullptr))))
			}));
		}
		setIconImage(min);
	}
}

void XIconWindow::setIconImage($Image* img) {
	$useLocalCurrentObjectStackCache();
	if (img == nullptr) {
		replaceImage(nullptr);
		replaceMask(nullptr);
	} else {
		int32_t width = 0;
		int32_t height = 0;
		if ($instanceOf($ToolkitImage, img)) {
			$var($ImageRepresentation, ir, $nc(($cast($ToolkitImage, img)))->getImageRep());
			$nc(ir)->reconstruct($ImageObserver::ALLBITS);
			width = ir->getWidth();
			height = ir->getHeight();
		} else {
			width = $nc(img)->getWidth(nullptr);
			height = img->getHeight(nullptr);
		}
		$var($Dimension, iconSize, getIconSize(width, height));
		if (iconSize != nullptr) {
			$init($PlatformLogger$Level);
			if ($nc(XIconWindow::log)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XIconWindow::log)->finest("Icon size: {0}"_s, $$new($ObjectArray, {$of(iconSize)}));
			}
			this->iconWidth = iconSize->width;
			this->iconHeight = iconSize->height;
		} else {
			$nc(XIconWindow::log)->finest("Error calculating image size"_s);
			this->iconWidth = 0;
			this->iconHeight = 0;
		}
		replaceImage(img);
		replaceMask(img);
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($AwtGraphicsConfigData, adata, $nc(this->parent)->getGraphicsConfigurationData());
			$var($awtImageData, awtImage, $nc(adata)->get_awtImage(0));
			$var($XVisualInfo, visInfo, adata->get_awt_visInfo());
			$var($XWMHints, hints, $nc(this->parent)->getWMHints());
			this->window = $nc(hints)->get_icon_window();
			if (this->window == 0) {
				$nc(XIconWindow::log)->finest("Icon window wasn\'t set"_s);
				$var($XCreateWindowParams, params, getDelayedParams());
				$init($XBaseWindow);
				$nc(params)->add($of($XBaseWindow::BORDER_PIXEL), $($of($Long::valueOf((int64_t)0))));
				params->add($of($XBaseWindow::BACKGROUND_PIXMAP), this->iconPixmap);
				params->add($of($XBaseWindow::COLORMAP), adata->get_awt_cmap());
				params->add($of($XBaseWindow::DEPTH), $nc(awtImage)->get_Depth());
				params->add($of($XBaseWindow::VISUAL_CLASS), $XConstants::InputOutput);
				params->add($of($XBaseWindow::VISUAL), $nc(visInfo)->get_visual());
				params->add($of($XBaseWindow::VALUE_MASK), ($XConstants::CWBorderPixel | $XConstants::CWColormap) | $XConstants::CWBackPixmap);
				int64_t var$1 = $XToolkit::getDisplay();
				params->add($of($XBaseWindow::PARENT_WINDOW), $XlibWrapper::RootWindow(var$1, $nc(visInfo)->get_screen()));
				params->add($of($XBaseWindow::BOUNDS), $of($$new($Rectangle, 0, 0, this->iconWidth, this->iconHeight)));
				params->remove($XBaseWindow::DELAYED);
				init(params);
				if (getWindow() == 0) {
					$nc(XIconWindow::log)->finest("Can\'t create new icon window"_s);
				} else {
					$nc(XIconWindow::log)->finest("Created new icon window"_s);
				}
			}
			if (getWindow() != 0) {
				int64_t var$2 = $XToolkit::getDisplay();
				$XlibWrapper::XSetWindowBackgroundPixmap(var$2, getWindow(), this->iconPixmap);
				int64_t var$3 = $XToolkit::getDisplay();
				$XlibWrapper::XClearWindow(var$3, getWindow());
			}
			int64_t newFlags = (hints->get_flags() | $XUtilConstants::IconPixmapHint) | $XUtilConstants::IconMaskHint;
			if (getWindow() != 0) {
				newFlags |= $XUtilConstants::IconWindowHint;
			}
			hints->set_flags(newFlags);
			hints->set_icon_pixmap(this->iconPixmap);
			hints->set_icon_mask(this->iconMask);
			hints->set_icon_window(getWindow());
			int64_t var$4 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMHints(var$4, $nc(this->parent)->getShell(), hints->pData);
			$nc(XIconWindow::log)->finest("Set icon window hint"_s);
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t XIconWindow::paddedwidth(int32_t number, int32_t boundary) {
	$init(XIconWindow);
	return ((int32_t)(((number) + ((boundary) - 1)) & (uint32_t)(~((boundary) - 1))));
}

void clinit$XIconWindow($Class* class$) {
	$assignStatic(XIconWindow::log, $PlatformLogger::getLogger("sun.awt.X11.XIconWindow"_s));
}

XIconWindow::XIconWindow() {
}

$Class* XIconWindow::load$($String* name, bool initialize) {
	$loadClass(XIconWindow, name, initialize, &_XIconWindow_ClassInfo_, clinit$XIconWindow, allocate$XIconWindow);
	return class$;
}

$Class* XIconWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun