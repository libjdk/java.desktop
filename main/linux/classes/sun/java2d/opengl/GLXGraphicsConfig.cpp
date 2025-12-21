#include <sun/java2d/opengl/GLXGraphicsConfig.h>

#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/ImageCapabilities.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Runnable.h>
#include <java/util/Hashtable.h>
#include <sun/awt/X11ComponentPeer.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/awt/image/OffScreenImage.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/image/SurfaceManager.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/Surface.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/GLXGraphicsConfig$1.h>
#include <sun/java2d/opengl/GLXGraphicsConfig$GLXBufferCaps.h>
#include <sun/java2d/opengl/GLXGraphicsConfig$GLXGetConfigInfo.h>
#include <sun/java2d/opengl/GLXGraphicsConfig$GLXImageCaps.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXVSyncOffScreenSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData$GLXWindowSurfaceData.h>
#include <sun/java2d/opengl/GLXSurfaceData.h>
#include <sun/java2d/opengl/OGLContext$OGLContextCaps.h>
#include <sun/java2d/opengl/OGLContext.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/java2d/pipe/hw/AccelSurface.h>
#include <sun/java2d/pipe/hw/AccelTypedVolatileImage.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BITMASK
#undef COPIED
#undef OPAQUE
#undef PRIOR
#undef TEXTURE
#undef TRANSLUCENT
#undef TRUE
#undef TYPE_INT

using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Hashtable = ::java::util::Hashtable;
using $X11ComponentPeer = ::sun::awt::X11ComponentPeer;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $OffScreenImage = ::sun::awt::image::OffScreenImage;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SurfaceManager = ::sun::awt::image::SurfaceManager;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $Surface = ::sun::java2d::Surface;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $GLXGraphicsConfig$1 = ::sun::java2d::opengl::GLXGraphicsConfig$1;
using $GLXGraphicsConfig$GLXBufferCaps = ::sun::java2d::opengl::GLXGraphicsConfig$GLXBufferCaps;
using $GLXGraphicsConfig$GLXGetConfigInfo = ::sun::java2d::opengl::GLXGraphicsConfig$GLXGetConfigInfo;
using $GLXGraphicsConfig$GLXImageCaps = ::sun::java2d::opengl::GLXGraphicsConfig$GLXImageCaps;
using $GLXSurfaceData = ::sun::java2d::opengl::GLXSurfaceData;
using $GLXSurfaceData$GLXVSyncOffScreenSurfaceData = ::sun::java2d::opengl::GLXSurfaceData$GLXVSyncOffScreenSurfaceData;
using $OGLContext = ::sun::java2d::opengl::OGLContext;
using $OGLContext$OGLContextCaps = ::sun::java2d::opengl::OGLContext$OGLContextCaps;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $AccelSurface = ::sun::java2d::pipe::hw::AccelSurface;
using $AccelTypedVolatileImage = ::sun::java2d::pipe::hw::AccelTypedVolatileImage;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _GLXGraphicsConfig_FieldInfo_[] = {
	{"imageCaps", "Ljava/awt/ImageCapabilities;", nullptr, $PRIVATE | $STATIC, $staticField(GLXGraphicsConfig, imageCaps)},
	{"bufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(GLXGraphicsConfig, bufferCaps)},
	{"pConfigInfo", "J", nullptr, $PRIVATE, $field(GLXGraphicsConfig, pConfigInfo)},
	{"oglCaps", "Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PRIVATE, $field(GLXGraphicsConfig, oglCaps)},
	{"context", "Lsun/java2d/opengl/OGLContext;", nullptr, $PRIVATE | $FINAL, $field(GLXGraphicsConfig, context)},
	{}
};

$MethodInfo _GLXGraphicsConfig_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11GraphicsDevice;IJLsun/java2d/pipe/hw/ContextCapabilities;)V", nullptr, $PRIVATE, $method(static_cast<void(GLXGraphicsConfig::*)($X11GraphicsDevice*,int32_t,int64_t,$ContextCapabilities*)>(&GLXGraphicsConfig::init$))},
	{"createAcceleratedImage", "(Ljava/awt/Component;II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createBackBuffer", "(Lsun/awt/X11ComponentPeer;ILjava/awt/BufferCapabilities;)J", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createBackBufferImage", "(Ljava/awt/Component;J)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createCompatibleImage", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"createCompatibleVolatileImage", "(IIII)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"createManagedSurface", "(III)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"createSurfaceData", "(Lsun/awt/X11ComponentPeer;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"destroyBackBuffer", "(J)V", nullptr, $PUBLIC},
	{"flip", "(Lsun/awt/X11ComponentPeer;Ljava/awt/Component;Ljava/awt/image/VolatileImage;IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBufferCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getConfig", "(Lsun/awt/X11GraphicsDevice;I)Lsun/java2d/opengl/GLXGraphicsConfig;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GLXGraphicsConfig*(*)($X11GraphicsDevice*,int32_t)>(&GLXGraphicsConfig::getConfig))},
	{"getContext", "()Lsun/java2d/opengl/OGLContext;", nullptr, $PUBLIC | $FINAL},
	{"getContextCapabilities", "()Lsun/java2d/pipe/hw/ContextCapabilities;", nullptr, $PUBLIC},
	{"getGLXConfigInfo", "(II)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&GLXGraphicsConfig::getGLXConfigInfo))},
	{"getImageCapabilities", "()Ljava/awt/ImageCapabilities;", nullptr, $PUBLIC},
	{"getNativeConfigInfo", "()J", nullptr, $PUBLIC | $FINAL},
	{"getOGLCapabilities", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&GLXGraphicsConfig::getOGLCapabilities))},
	{"getProxyKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"initConfig", "(JJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GLXGraphicsConfig::*)(int64_t,int64_t)>(&GLXGraphicsConfig::initConfig))},
	{"isCapPresent", "(I)Z", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getGLXConfigInfo 19
#define _METHOD_INDEX_getOGLCapabilities 22
#define _METHOD_INDEX_initConfig 24

$InnerClassInfo _GLXGraphicsConfig_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXImageCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXBufferCaps", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo", "sun.java2d.opengl.GLXGraphicsConfig", "GLXGetConfigInfo", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.GLXGraphicsConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GLXGraphicsConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.opengl.GLXGraphicsConfig",
	"sun.awt.X11GraphicsConfig",
	"sun.java2d.opengl.OGLGraphicsConfig",
	_GLXGraphicsConfig_FieldInfo_,
	_GLXGraphicsConfig_MethodInfo_,
	nullptr,
	nullptr,
	_GLXGraphicsConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps,sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps,sun.java2d.opengl.GLXGraphicsConfig$GLXGetConfigInfo,sun.java2d.opengl.GLXGraphicsConfig$1"
};

$Object* allocate$GLXGraphicsConfig($Class* clazz) {
	return $of($alloc(GLXGraphicsConfig));
}

int32_t GLXGraphicsConfig::hashCode() {
	 return this->$X11GraphicsConfig::hashCode();
}

bool GLXGraphicsConfig::equals(Object$* arg0) {
	 return this->$X11GraphicsConfig::equals(arg0);
}

$Object* GLXGraphicsConfig::clone() {
	 return this->$X11GraphicsConfig::clone();
}

void GLXGraphicsConfig::finalize() {
	this->$X11GraphicsConfig::finalize();
}

$ImageCapabilities* GLXGraphicsConfig::imageCaps = nullptr;

int64_t GLXGraphicsConfig::getGLXConfigInfo(int32_t screennum, int32_t visualnum) {
	$init(GLXGraphicsConfig);
	int64_t $ret = 0;
	$prepareNativeStatic(GLXGraphicsConfig, getGLXConfigInfo, int64_t, int32_t screennum, int32_t visualnum);
	$ret = $invokeNativeStatic(screennum, visualnum);
	$finishNativeStatic();
	return $ret;
}

int32_t GLXGraphicsConfig::getOGLCapabilities(int64_t configInfo) {
	$init(GLXGraphicsConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(GLXGraphicsConfig, getOGLCapabilities, int32_t, int64_t configInfo);
	$ret = $invokeNativeStatic(configInfo);
	$finishNativeStatic();
	return $ret;
}

void GLXGraphicsConfig::initConfig(int64_t aData, int64_t ctxinfo) {
	$prepareNative(GLXGraphicsConfig, initConfig, void, int64_t aData, int64_t ctxinfo);
	$invokeNative(aData, ctxinfo);
	$finishNative();
}

void GLXGraphicsConfig::init$($X11GraphicsDevice* device, int32_t visualnum, int64_t configInfo, $ContextCapabilities* oglCaps) {
	$X11GraphicsConfig::init$(device, visualnum, 0, 0, ((int32_t)($nc(oglCaps)->getCaps() & (uint32_t)0x00010000)) != 0);
	this->pConfigInfo = configInfo;
	initConfig(getAData(), configInfo);
	$set(this, oglCaps, oglCaps);
	$set(this, context, $new($OGLContext, $($OGLRenderQueue::getInstance())));
}

$Object* GLXGraphicsConfig::getProxyKey() {
	return $of(this);
}

$SurfaceData* GLXGraphicsConfig::createManagedSurface(int32_t w, int32_t h, int32_t transparency) {
	return $GLXSurfaceData::createData(this, w, h, $(getColorModel(transparency)), nullptr, $OGLSurfaceData::TEXTURE);
}

GLXGraphicsConfig* GLXGraphicsConfig::getConfig($X11GraphicsDevice* device, int32_t visualnum) {
	$init(GLXGraphicsConfig);
	$useLocalCurrentObjectStackCache();
	if (!$X11GraphicsEnvironment::isGLXAvailable()) {
		return nullptr;
	}
	int64_t cfginfo = 0;
	$var($StringArray, ids, $new($StringArray, 1));
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$OGLContext::invalidateCurrentContext();
			$var($GLXGraphicsConfig$GLXGetConfigInfo, action, $new($GLXGraphicsConfig$GLXGetConfigInfo, $nc(device)->getScreen(), visualnum));
			rq->flushAndInvokeNow(action);
			cfginfo = action->getConfigInfo();
			if (cfginfo != (int64_t)0) {
				$OGLContext::setScratchSurface(cfginfo);
				rq->flushAndInvokeNow($$new($GLXGraphicsConfig$1, ids));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (cfginfo == 0) {
		return nullptr;
	}
	int32_t oglCaps = getOGLCapabilities(cfginfo);
	$var($ContextCapabilities, caps, $new($OGLContext$OGLContextCaps, oglCaps, ids->get(0)));
	return $new(GLXGraphicsConfig, device, visualnum, cfginfo, caps);
}

bool GLXGraphicsConfig::isCapPresent(int32_t cap) {
	return (((int32_t)($nc(this->oglCaps)->getCaps() & (uint32_t)cap)) != 0);
}

int64_t GLXGraphicsConfig::getNativeConfigInfo() {
	return this->pConfigInfo;
}

$BufferedContext* GLXGraphicsConfig::getContext() {
	return this->context;
}

$BufferedImage* GLXGraphicsConfig::createCompatibleImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$var($WritableRaster, raster, model->createCompatibleWritableRaster(width, height));
	return $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr);
}

$ColorModel* GLXGraphicsConfig::getColorModel(int32_t transparency) {
	{
		$var($ColorSpace, cs, nullptr)
		switch (transparency) {
		case $Transparency::OPAQUE:
			{
				return $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255);
			}
		case $Transparency::BITMASK:
			{
				return $new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000);
			}
		case $Transparency::TRANSLUCENT:
			{
				$assign(cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				return $new($DirectColorModel, cs, 32, 0x00FF0000, 0x0000FF00, 255, (int32_t)0xFF000000, true, $DataBuffer::TYPE_INT);
			}
		default:
			{
				return nullptr;
			}
		}
	}
}

$String* GLXGraphicsConfig::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"GLXGraphicsConfig[dev="_s, $($cast($X11GraphicsDevice, getDevice())), ",vis=0x"_s}));
	$var($String, var$0, $$concat(var$1, $($Integer::toHexString(this->visual))));
	return ($concat(var$0, "]"_s));
}

$SurfaceData* GLXGraphicsConfig::createSurfaceData($X11ComponentPeer* peer) {
	return $GLXSurfaceData::createData(peer);
}

$Image* GLXGraphicsConfig::createAcceleratedImage($Component* target, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, model, getColorModel($Transparency::OPAQUE));
	$var($WritableRaster, wr, $nc(model)->createCompatibleWritableRaster(width, height));
	return $new($OffScreenImage, target, model, wr, model->isAlphaPremultiplied());
}

int64_t GLXGraphicsConfig::createBackBuffer($X11ComponentPeer* peer, int32_t numBuffers, $BufferCapabilities* caps) {
	if (numBuffers > 2) {
		$throwNew($AWTException, "Only double or single buffering is supported"_s);
	}
	$var($BufferCapabilities, configCaps, getBufferCapabilities());
	if (!$nc(configCaps)->isPageFlipping()) {
		$throwNew($AWTException, "Page flipping is not supported"_s);
	}
	$init($BufferCapabilities$FlipContents);
	if ($nc(caps)->getFlipContents() == $BufferCapabilities$FlipContents::PRIOR) {
		$throwNew($AWTException, "FlipContents.PRIOR is not supported"_s);
	}
	return 1;
}

void GLXGraphicsConfig::destroyBackBuffer(int64_t backBuffer) {
}

$VolatileImage* GLXGraphicsConfig::createBackBufferImage($Component* target, int64_t backBuffer) {
	$var($Component, var$0, target);
	int32_t var$1 = $nc(target)->getWidth();
	$init($Boolean);
	return $new($SunVolatileImage, var$0, var$1, target->getHeight(), $Boolean::TRUE);
}

void GLXGraphicsConfig::flip($X11ComponentPeer* peer, $Component* target, $VolatileImage* xBackBuffer, int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$init($BufferCapabilities$FlipContents);
	if (flipAction == $BufferCapabilities$FlipContents::COPIED) {
		$var($SurfaceManager, vsm, $SurfaceManager::getManager(xBackBuffer));
		$var($SurfaceData, sd, $nc(vsm)->getPrimarySurfaceData());
		if ($instanceOf($GLXSurfaceData$GLXVSyncOffScreenSurfaceData, sd)) {
			$var($GLXSurfaceData$GLXVSyncOffScreenSurfaceData, vsd, $cast($GLXSurfaceData$GLXVSyncOffScreenSurfaceData, sd));
			$var($SurfaceData, bbsd, $nc(vsd)->getFlipSurface());
			$init($Color);
			$var($Graphics2D, bbg, $new($SunGraphics2D, bbsd, $Color::black, $Color::white, nullptr));
			{
				$var($Throwable, var$0, nullptr);
				try {
					bbg->drawImage(xBackBuffer, 0, 0, nullptr);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					bbg->dispose();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} else {
			$var($Graphics, g, $nc(peer)->getGraphics());
			{
				$var($Throwable, var$2, nullptr);
				try {
					$nc(g)->drawImage(xBackBuffer, x1, y1, x2, y2, x1, y1, x2, y2, nullptr);
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					$nc(g)->dispose();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
			return;
		}
	} else {
		if (flipAction == $BufferCapabilities$FlipContents::PRIOR) {
			return;
		}
	}
	$OGLSurfaceData::swapBuffers($nc(peer)->getContentWindow());
	if (flipAction == $BufferCapabilities$FlipContents::BACKGROUND) {
		$var($Graphics, g, $nc(xBackBuffer)->getGraphics());
		{
			$var($Throwable, var$4, nullptr);
			try {
				$nc(g)->setColor($($nc(target)->getBackground()));
				int32_t var$5 = xBackBuffer->getWidth();
				g->fillRect(0, 0, var$5, xBackBuffer->getHeight());
			} catch ($Throwable& var$6) {
				$assign(var$4, var$6);
			} /*finally*/ {
				$nc(g)->dispose();
			}
			if (var$4 != nullptr) {
				$throw(var$4);
			}
		}
	}
}

$BufferCapabilities* GLXGraphicsConfig::getBufferCapabilities() {
	if (this->bufferCaps == nullptr) {
		$set(this, bufferCaps, $new($GLXGraphicsConfig$GLXBufferCaps, isDoubleBuffered()));
	}
	return this->bufferCaps;
}

$ImageCapabilities* GLXGraphicsConfig::getImageCapabilities() {
	return GLXGraphicsConfig::imageCaps;
}

$VolatileImage* GLXGraphicsConfig::createCompatibleVolatileImage(int32_t width, int32_t height, int32_t transparency, int32_t type) {
	$useLocalCurrentObjectStackCache();
	if ((type != 5 && type != 3) || transparency == $Transparency::BITMASK || type == 5 && !isCapPresent(12)) {
		return nullptr;
	}
	$var($SunVolatileImage, vi, $new($AccelTypedVolatileImage, this, width, height, transparency, type));
	$var($Surface, sd, vi->getDestSurface());
	if (!($instanceOf($AccelSurface, sd)) || $nc(($cast($AccelSurface, sd)))->getType() != type) {
		vi->flush();
		$assign(vi, nullptr);
	}
	return vi;
}

$ContextCapabilities* GLXGraphicsConfig::getContextCapabilities() {
	return this->oglCaps;
}

void clinit$GLXGraphicsConfig($Class* class$) {
	$assignStatic(GLXGraphicsConfig::imageCaps, $new($GLXGraphicsConfig$GLXImageCaps));
}

GLXGraphicsConfig::GLXGraphicsConfig() {
}

$Class* GLXGraphicsConfig::load$($String* name, bool initialize) {
	$loadClass(GLXGraphicsConfig, name, initialize, &_GLXGraphicsConfig_ClassInfo_, clinit$GLXGraphicsConfig, allocate$GLXGraphicsConfig);
	return class$;
}

$Class* GLXGraphicsConfig::class$ = nullptr;

		} // opengl
	} // java2d
} // sun