#include <sun/awt/X11GraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig$X11GCDisposerRecord.h>
#include <sun/awt/X11GraphicsConfig$XDBECapabilities.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/image/OffScreenImage.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/x11/X11SurfaceData$X11WindowSurfaceData.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef COPIED
#undef OPAQUE
#undef PRIOR
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_INT

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig$X11GCDisposerRecord = ::sun::awt::X11GraphicsConfig$X11GCDisposerRecord;
using $X11GraphicsConfig$XDBECapabilities = ::sun::awt::X11GraphicsConfig$XDBECapabilities;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $OffScreenImage = ::sun::awt::image::OffScreenImage;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;

namespace sun {
	namespace awt {

$FieldInfo _X11GraphicsConfig_FieldInfo_[] = {
	{"device", "Lsun/awt/X11GraphicsDevice;", nullptr, $PRIVATE | $FINAL, $field(X11GraphicsConfig, device)},
	{"visual", "I", nullptr, $PROTECTED, $field(X11GraphicsConfig, visual)},
	{"depth", "I", nullptr, 0, $field(X11GraphicsConfig, depth)},
	{"colormap", "I", nullptr, 0, $field(X11GraphicsConfig, colormap)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(X11GraphicsConfig, colorModel)},
	{"aData", "J", nullptr, 0, $field(X11GraphicsConfig, aData)},
	{"doubleBuffer", "Z", nullptr, 0, $field(X11GraphicsConfig, doubleBuffer)},
	{"disposerReferent", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(X11GraphicsConfig, disposerReferent)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(X11GraphicsConfig, bufferCaps)},
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(X11GraphicsConfig, imageCaps)},
	{"bitsPerPixel", "I", nullptr, $PROTECTED, $field(X11GraphicsConfig, bitsPerPixel)},
	{"surfaceType", "Lsun/java2d/loops/SurfaceType;", nullptr, $PROTECTED, $field(X11GraphicsConfig, surfaceType)},
	{"solidloops", "Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC, $field(X11GraphicsConfig, solidloops)},
	{}
};

$MethodInfo _X11GraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11GraphicsDevice;IIIZ)V", nullptr, $PROTECTED, $method(static_cast<void(X11GraphicsConfig::*)($X11GraphicsDevice*,int32_t,int32_t,int32_t,bool)>(&X11GraphicsConfig::init$))},
	{"createABGRCCM", "()Ljava/awt/image/ComponentColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentColorModel*(*)()>(&X11GraphicsConfig::createABGRCCM))},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createBackBuffer", "(JI)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(X11GraphicsConfig::*)(int64_t,int32_t)>(&X11GraphicsConfig::createBackBuffer))},
	{"createBackBuffer", "(Lsun/awt/X11ComponentPeer;ILjava/awt/BufferCapabilities;)J", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createBackBufferImage", "(Ljava/awt/Component;J)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createDCM32", "(IIIIZ)Ljava/awt/image/DirectColorModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirectColorModel*(*)(int32_t,int32_t,int32_t,int32_t,bool)>(&X11GraphicsConfig::createDCM32))},
	{"createSurfaceData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"destroyBackBuffer", "(J)V", nullptr, $PUBLIC | $NATIVE},
	{"dispose", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&X11GraphicsConfig::dispose))},
	{"flip", "(Lsun/awt/X11ComponentPeer;Ljava/awt/Component;Ljava/awt/image/VolatileImage;IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getAData", "()J", nullptr, $PUBLIC},
	{"getBitsPerPixel", "()I", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $FINAL},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColormap", "()I", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/X11GraphicsDevice;IIIZ)Lsun/awt/X11GraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X11GraphicsConfig*(*)($X11GraphicsDevice*,int32_t,int32_t,int32_t,bool)>(&X11GraphicsConfig::getConfig))},
	{"getConfig", "(Lsun/awt/X11GraphicsDevice;IIII)Lsun/awt/X11GraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X11GraphicsConfig*(*)($X11GraphicsDevice*,int32_t,int32_t,int32_t,int32_t)>(&X11GraphicsConfig::getConfig))},
	{"getDefaultTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getDepth", "()I", nullptr, $PUBLIC},
	{"getDevice", "()Lsun/awt/X11GraphicsDevice;", nullptr, $PUBLIC},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getNormalizingTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC},
	{"getNumColors", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(X11GraphicsConfig::*)()>(&X11GraphicsConfig::getNumColors))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getScale", "()I", nullptr, $PUBLIC},
	{"getSolidLoops", "(Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/RenderLoops;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSurfaceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSwapAction", "(Ljava/awt/BufferCapabilities$FlipContents;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BufferCapabilities$FlipContents*)>(&X11GraphicsConfig::getSwapAction))},
	{"getVisual", "()I", nullptr, $PUBLIC},
	{"getXResolution", "(I)D", nullptr, $PRIVATE | $NATIVE, $method(static_cast<double(X11GraphicsConfig::*)(int32_t)>(&X11GraphicsConfig::getXResolution))},
	{"getYResolution", "(I)D", nullptr, $PRIVATE | $NATIVE, $method(static_cast<double(X11GraphicsConfig::*)(int32_t)>(&X11GraphicsConfig::getYResolution))},
	{"init", "(II)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(X11GraphicsConfig::*)(int32_t,int32_t)>(&X11GraphicsConfig::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&X11GraphicsConfig::initIDs))},
	{"isDoubleBuffered", "()Z", nullptr, $PUBLIC},
	{"isTranslucencyCapable", "()Z", nullptr, $PUBLIC},
	{"isTranslucencyCapable", "(J)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(X11GraphicsConfig::*)(int64_t)>(&X11GraphicsConfig::isTranslucencyCapable))},
	{"makeColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ColorModel*(X11GraphicsConfig::*)()>(&X11GraphicsConfig::makeColorModel))},
	{"scaleDown", "(I)I", nullptr, $PUBLIC},
	{"scaleUp", "(I)I", nullptr, $PUBLIC},
	{"swapBuffers", "(JI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(X11GraphicsConfig::*)(int64_t,int32_t)>(&X11GraphicsConfig::swapBuffers))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createBackBuffer 7
#define _METHOD_INDEX_destroyBackBuffer 12
#define _METHOD_INDEX_dispose 13
#define _METHOD_INDEX_getNumColors 29
#define _METHOD_INDEX_getXResolution 36
#define _METHOD_INDEX_getYResolution 37
#define _METHOD_INDEX_init 38
#define _METHOD_INDEX_initIDs 39
#define _METHOD_INDEX_isTranslucencyCapable 42
#define _METHOD_INDEX_makeColorModel 43
#define _METHOD_INDEX_swapBuffers 46

$InnerClassInfo _X11GraphicsConfig_InnerClassesInfo_[] = {
	{"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig", "sun.awt.image.SurfaceManager", "ProxiedGraphicsConfig", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11GraphicsConfig$X11GCDisposerRecord", "sun.awt.X11GraphicsConfig", "X11GCDisposerRecord", $PRIVATE | $STATIC},
	{"sun.awt.X11GraphicsConfig$XDBECapabilities", "sun.awt.X11GraphicsConfig", "XDBECapabilities", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11GraphicsConfig_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11GraphicsConfig",
	"java.awt.GraphicsConfiguration",
	"sun.awt.image.SurfaceManager$ProxiedGraphicsConfig",
	_X11GraphicsConfig_FieldInfo_,
	_X11GraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_X11GraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsConfig$X11GCDisposerRecord,sun.awt.X11GraphicsConfig$XDBECapabilities"
};

$Object* allocate$X11GraphicsConfig($Class* clazz) {
	return $of($alloc(X11GraphicsConfig));
}

int32_t X11GraphicsConfig::hashCode() {
	 return this->$GraphicsConfiguration::hashCode();
}

bool X11GraphicsConfig::equals(Object$* arg0) {
	 return this->$GraphicsConfiguration::equals(arg0);
}

$Object* X11GraphicsConfig::clone() {
	 return this->$GraphicsConfiguration::clone();
}

void X11GraphicsConfig::finalize() {
	this->$GraphicsConfiguration::finalize();
}

$ImageCapabilities* X11GraphicsConfig::imageCaps = nullptr;

X11GraphicsConfig* X11GraphicsConfig::getConfig($X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer) {
	$init(X11GraphicsConfig);
	return $new(X11GraphicsConfig, device, visualnum, depth, colormap, doubleBuffer);
}

X11GraphicsConfig* X11GraphicsConfig::getConfig($X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, int32_t type) {
	$init(X11GraphicsConfig);
	return $new(X11GraphicsConfig, device, visualnum, depth, colormap, false);
}

int32_t X11GraphicsConfig::getNumColors() {
	int32_t $ret = 0;
	$prepareNative(X11GraphicsConfig, getNumColors, int32_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void X11GraphicsConfig::init(int32_t visualNum, int32_t screen) {
	$prepareNative(X11GraphicsConfig, init, void, int32_t visualNum, int32_t screen);
	$invokeNative(visualNum, screen);
	$finishNative();
}

$ColorModel* X11GraphicsConfig::makeColorModel() {
	$var($ColorModel, $ret, nullptr);
	$prepareNative(X11GraphicsConfig, makeColorModel, $ColorModel*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

void X11GraphicsConfig::init$($X11GraphicsDevice* device, int32_t visualnum, int32_t depth, int32_t colormap, bool doubleBuffer) {
	$GraphicsConfiguration::init$();
	$set(this, disposerReferent, $new($Object));
	$set(this, device, device);
	this->visual = visualnum;
	this->doubleBuffer = doubleBuffer;
	this->depth = depth;
	this->colormap = colormap;
	init(visualnum, $nc(device)->getScreen());
	int64_t x11CfgData = getAData();
	$Disposer::addRecord(this->disposerReferent, $$new($X11GraphicsConfig$X11GCDisposerRecord, x11CfgData));
}

$GraphicsDevice* X11GraphicsConfig::getDevice() {
	return this->device;
}

int32_t X11GraphicsConfig::getVisual() {
	return this->visual;
}

int32_t X11GraphicsConfig::getDepth() {
	return this->depth;
}

int32_t X11GraphicsConfig::getColormap() {
	return this->colormap;
}

int32_t X11GraphicsConfig::getBitsPerPixel() {
	return this->bitsPerPixel;
}

$SurfaceType* X11GraphicsConfig::getSurfaceType() {
	$synchronized(this) {
		if (this->surfaceType != nullptr) {
			return this->surfaceType;
		}
		$set(this, surfaceType, $X11SurfaceData::getSurfaceType(this, $Transparency::OPAQUE));
		return this->surfaceType;
	}
}

$Object* X11GraphicsConfig::getProxyKey() {
	return $of($nc(this->device)->getProxyKeyFor($(getSurfaceType())));
}

$RenderLoops* X11GraphicsConfig::getSolidLoops($SurfaceType* stype) {
	$synchronized(this) {
		if (this->solidloops == nullptr) {
			$init($SurfaceType);
			$init($CompositeType);
			$set(this, solidloops, $SurfaceData::makeRenderLoops($SurfaceType::OpaqueColor, $CompositeType::SrcNoEa, stype));
		}
		return this->solidloops;
	}
}

$ColorModel* X11GraphicsConfig::getColorModel() {
	$synchronized(this) {
		if (this->colorModel == nullptr) {
			$init($SystemColor);
			$nc($SystemColor::window)->getRGB();
			$set(this, colorModel, makeColorModel());
			if (this->colorModel == nullptr) {
				$set(this, colorModel, $nc($($Toolkit::getDefaultToolkit()))->getColorModel());
			}
		}
		return this->colorModel;
	}
}

$ColorModel* X11GraphicsConfig::getColorModel(int32_t transparency) {
	switch (transparency) {
	case $Transparency::OPAQUE:
		{
			return getColorModel();
		}
	case $Transparency::BITMASK:
		{
			return $new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000);
		}
	case $Transparency::TRANSLUCENT:
		{
			return $ColorModel::getRGBdefault();
		}
	default:
		{
			return nullptr;
		}
	}
}

$DirectColorModel* X11GraphicsConfig::createDCM32(int32_t rMask, int32_t gMask, int32_t bMask, int32_t aMask, bool aPre) {
	$init(X11GraphicsConfig);
	return $new($DirectColorModel, $($ColorSpace::getInstance($ColorSpace::CS_sRGB)), 32, rMask, gMask, bMask, aMask, aPre, $DataBuffer::TYPE_INT);
}

$ComponentColorModel* X11GraphicsConfig::createABGRCCM() {
	$init(X11GraphicsConfig);
	$useLocalCurrentObjectStackCache();
	$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	$var($ints, nBits, $new($ints, {
		8,
		8,
		8,
		8
	}));
	$var($ints, bOffs, $new($ints, {
		3,
		2,
		1,
		0
	}));
	return $new($ComponentColorModel, cs, nBits, true, true, $Transparency::TRANSLUCENT, $DataBuffer::TYPE_BYTE);
}

$AffineTransform* X11GraphicsConfig::getDefaultTransform() {
	double scale = (double)getScale();
	return $AffineTransform::getScaleInstance(scale, scale);
}

int32_t X11GraphicsConfig::getScale() {
	return $nc($($cast($X11GraphicsDevice, getDevice())))->getScaleFactor();
}

int32_t X11GraphicsConfig::scaleUp(int32_t x) {
	return $Region::clipRound(x * (double)getScale());
}

int32_t X11GraphicsConfig::scaleDown(int32_t x) {
	return $Region::clipRound(x / (double)getScale());
}

$AffineTransform* X11GraphicsConfig::getNormalizingTransform() {
	double xscale = getXResolution($nc(this->device)->getScreen()) / 72.0;
	double yscale = getYResolution($nc(this->device)->getScreen()) / 72.0;
	return $new($AffineTransform, xscale, 0.0, 0.0, yscale, 0.0, 0.0);
}

double X11GraphicsConfig::getXResolution(int32_t screen) {
	double $ret = 0.0;
	$prepareNative(X11GraphicsConfig, getXResolution, double, int32_t screen);
	$ret = $invokeNative(screen);
	$finishNative();
	return $ret;
}

double X11GraphicsConfig::getYResolution(int32_t screen) {
	double $ret = 0.0;
	$prepareNative(X11GraphicsConfig, getYResolution, double, int32_t screen);
	$ret = $invokeNative(screen);
	$finishNative();
	return $ret;
}

int64_t X11GraphicsConfig::getAData() {
	return this->aData;
}

$String* X11GraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"X11GraphicsConfig[dev="_s, this->device, ",vis=0x"_s}));
	$var($String, var$0, $$concat(var$1, $($Integer::toHexString(this->visual))));
	return ($concat(var$0, "]"_s));
}

void X11GraphicsConfig::initIDs() {
	$init(X11GraphicsConfig);
	$prepareNativeStatic(X11GraphicsConfig, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$Rectangle* X11GraphicsConfig::getBounds() {
	return $nc(this->device)->getBounds();
}

$BufferCapabilities* X11GraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		if (this->doubleBuffer) {
			$set(this, bufferCaps, $new($X11GraphicsConfig$XDBECapabilities));
		} else {
			$set(this, bufferCaps, $GraphicsConfiguration::getBufferCapabilities());
		}
	}
	return this->bufferCaps;
}

$ImageCapabilities* X11GraphicsConfig::getImageCapabilities() {
	return X11GraphicsConfig::imageCaps;
}

bool X11GraphicsConfig::isDoubleBuffered() {
	return this->doubleBuffer;
}

void X11GraphicsConfig::dispose(int64_t x11ConfigData) {
	$init(X11GraphicsConfig);
	$prepareNativeStatic(X11GraphicsConfig, dispose, void, int64_t x11ConfigData);
	$invokeNativeStatic(x11ConfigData);
	$finishNativeStatic();
}

$SurfaceData* X11GraphicsConfig::createSurfaceData($X11ComponentPeer* peer) {
	return $X11SurfaceData::createData(peer);
}

$Image* X11GraphicsConfig::createAcceleratedImage($Component* target, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, getColorModel($Transparency::OPAQUE));
	$var($WritableRaster, wr, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($OffScreenImage, target, model, wr, model->isAlphaPremultiplied());
}

int64_t X11GraphicsConfig::createBackBuffer(int64_t window, int32_t swapAction) {
	int64_t $ret = 0;
	$prepareNative(X11GraphicsConfig, createBackBuffer, int64_t, int64_t window, int32_t swapAction);
	$ret = $invokeNative(window, swapAction);
	$finishNative();
	return $ret;
}

void X11GraphicsConfig::swapBuffers(int64_t window, int32_t swapAction) {
	$prepareNative(X11GraphicsConfig, swapBuffers, void, int64_t window, int32_t swapAction);
	$invokeNative(window, swapAction);
	$finishNative();
}

int64_t X11GraphicsConfig::createBackBuffer($X11ComponentPeer* peer, int32_t numBuffers, $BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	if (!$X11GraphicsDevice::isDBESupported()) {
		$throwNew($AWTException, "Page flipping is not supported"_s);
	}
	if (numBuffers > 2) {
		$throwNew($AWTException, "Only double or single buffering is supported"_s);
	}
	$var($BufferCapabilities, configCaps, getBufferCapabilities());
	if (!$nc(configCaps)->isPageFlipping()) {
		$throwNew($AWTException, "Page flipping is not supported"_s);
	}
	int64_t window = $nc(peer)->getContentWindow();
	int32_t swapAction = getSwapAction($($nc(caps)->getFlipContents()));
	return createBackBuffer(window, swapAction);
}

void X11GraphicsConfig::destroyBackBuffer(int64_t backBuffer) {
	$prepareNative(X11GraphicsConfig, destroyBackBuffer, void, int64_t backBuffer);
	$invokeNative(backBuffer);
	$finishNative();
}

$VolatileImage* X11GraphicsConfig::createBackBufferImage($Component* target, int64_t backBuffer) {
	int32_t w = $Math::max(1, $nc(target)->getWidth());
	int32_t h = $Math::max(1, $nc(target)->getHeight());
	return $new($SunVolatileImage, target, w, h, $($Long::valueOf(backBuffer)));
}

void X11GraphicsConfig::flip($X11ComponentPeer* peer, $Component* target, $VolatileImage* xBackBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	int64_t window = $nc(peer)->getContentWindow();
	int32_t swapAction = getSwapAction(flipAction);
	swapBuffers(window, swapAction);
}

int32_t X11GraphicsConfig::getSwapAction($BufferCapabilities$FlipContents* flipAction) {
	$init(X11GraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
		return 1;
	} else {
		if (flipAction == $BufferCapabilities$FlipContents::PRIOR) {
			return 2;
		} else {
			if (flipAction == $BufferCapabilities$FlipContents::COPIED) {
				return 3;
			} else {
				return 0;
			}
		}
	}
}

bool X11GraphicsConfig::isTranslucencyCapable() {
	return isTranslucencyCapable(getAData());
}

bool X11GraphicsConfig::isTranslucencyCapable(int64_t x11ConfigData) {
	bool $ret = false;
	$prepareNative(X11GraphicsConfig, isTranslucencyCapable, bool, int64_t x11ConfigData);
	$ret = $invokeNative(x11ConfigData);
	$finishNative();
	return $ret;
}

void clinit$X11GraphicsConfig($Class* class$) {
	$assignStatic(X11GraphicsConfig::imageCaps, $new($ImageCapabilities, $X11SurfaceData::isAccelerationEnabled()));
	{
		X11GraphicsConfig::initIDs();
	}
}

X11GraphicsConfig::X11GraphicsConfig() {
}

$Class* X11GraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsConfig, name, initialize, &_X11GraphicsConfig_ClassInfo_, clinit$X11GraphicsConfig, allocate$X11GraphicsConfig);
	return class$;
}

$Class* X11GraphicsConfig::class$ = nullptr;

	} // awt
} // sun