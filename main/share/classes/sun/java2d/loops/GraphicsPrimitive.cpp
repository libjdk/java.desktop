#include <sun/java2d/loops/GraphicsPrimitive.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Composite.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InternalError.h>
#include <java/lang/reflect/Field.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/StringTokenizer.h>
#include <sun/awt/image/BufImgSurfaceData.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive$1.h>
#include <sun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp.h>
#include <sun/java2d/loops/GraphicsPrimitive$GeneralUnaryOp.h>
#include <sun/java2d/loops/GraphicsPrimitive$TraceReporter.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef TRACECOUNTS
#undef TRACELOG
#undef TRACETIMESTAMP
#undef TYPE_INT_ARGB

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Composite = ::java::awt::Composite;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $StringTokenizer = ::java::util::StringTokenizer;
using $BufImgSurfaceData = ::sun::awt::image::BufImgSurfaceData;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive$1 = ::sun::java2d::loops::GraphicsPrimitive$1;
using $GraphicsPrimitive$GeneralBinaryOp = ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp;
using $GraphicsPrimitive$GeneralUnaryOp = ::sun::java2d::loops::GraphicsPrimitive$GeneralUnaryOp;
using $GraphicsPrimitive$TraceReporter = ::sun::java2d::loops::GraphicsPrimitive$TraceReporter;
using $GraphicsPrimitiveMgr = ::sun::java2d::loops::GraphicsPrimitiveMgr;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _GraphicsPrimitive_FieldInfo_[] = {
	{"methodSignature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GraphicsPrimitive, methodSignature)},
	{"uniqueID", "I", nullptr, $PRIVATE, $field(GraphicsPrimitive, uniqueID)},
	{"unusedPrimID", "I", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsPrimitive, unusedPrimID)},
	{"sourceType", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(GraphicsPrimitive, sourceType)},
	{"compositeType", "Lsun/java2d/loops/CompositeType;", nullptr, $PRIVATE, $field(GraphicsPrimitive, compositeType)},
	{"destType", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(GraphicsPrimitive, destType)},
	{"pNativePrim", "J", nullptr, $PRIVATE, $field(GraphicsPrimitive, pNativePrim)},
	{"traceMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;[I>;", $STATIC, $staticField(GraphicsPrimitive, traceMap)},
	{"traceflags", "I", nullptr, $PUBLIC | $STATIC, $staticField(GraphicsPrimitive, traceflags)},
	{"tracefile", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticField(GraphicsPrimitive, tracefile)},
	{"traceout", "Ljava/io/PrintStream;", nullptr, $PUBLIC | $STATIC, $staticField(GraphicsPrimitive, traceout)},
	{"TRACELOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsPrimitive, TRACELOG)},
	{"TRACETIMESTAMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsPrimitive, TRACETIMESTAMP)},
	{"TRACECOUNTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GraphicsPrimitive, TRACECOUNTS)},
	{"cachedname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GraphicsPrimitive, cachedname)},
	{}
};

$MethodInfo _GraphicsPrimitive_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(GraphicsPrimitive::*)($String*,int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitive::init$))},
	{"<init>", "(JLjava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PROTECTED, $method(static_cast<void(GraphicsPrimitive::*)(int64_t,$String*,int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitive::init$))},
	{"convertFrom", "(Lsun/java2d/loops/Blit;Lsun/java2d/SurfaceData;IIIILsun/java2d/SurfaceData;)Lsun/java2d/SurfaceData;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$SurfaceData*(*)($Blit*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t,$SurfaceData*)>(&GraphicsPrimitive::convertFrom))},
	{"convertFrom", "(Lsun/java2d/loops/Blit;Lsun/java2d/SurfaceData;IIIILsun/java2d/SurfaceData;I)Lsun/java2d/SurfaceData;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$SurfaceData*(*)($Blit*,$SurfaceData*,int32_t,int32_t,int32_t,int32_t,$SurfaceData*,int32_t)>(&GraphicsPrimitive::convertFrom))},
	{"convertTo", "(Lsun/java2d/loops/Blit;Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Lsun/java2d/pipe/Region;IIII)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Blit*,$SurfaceData*,$SurfaceData*,$Region*,int32_t,int32_t,int32_t,int32_t)>(&GraphicsPrimitive::convertTo))},
	{"createConverter", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/Blit;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Blit*(*)($SurfaceType*,$SurfaceType*)>(&GraphicsPrimitive::createConverter))},
	{"getCompositeType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CompositeType*(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getCompositeType))},
	{"getDestType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SurfaceType*(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getDestType))},
	{"getGeneralOp", "(ILsun/java2d/loops/CompositeType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED | $STATIC, $method(static_cast<GraphicsPrimitive*(*)(int32_t,$CompositeType*)>(&GraphicsPrimitive::getGeneralOp))},
	{"getNativePrim", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getNativePrim))},
	{"getPrimTypeID", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getPrimTypeID))},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getSignature))},
	{"getSourceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SurfaceType*(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getSourceType))},
	{"getTraceOutputFile", "()Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PrintStream*(*)()>(&GraphicsPrimitive::getTraceOutputFile))},
	{"getUniqueID", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(GraphicsPrimitive::*)()>(&GraphicsPrimitive::getUniqueID))},
	{"makePrimTypeID", "()I", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(*)()>(&GraphicsPrimitive::makePrimTypeID))},
	{"makePrimitive", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PROTECTED},
	{"makeUniqueID", "(ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)I", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $method(static_cast<int32_t(*)(int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitive::makeUniqueID))},
	{"satisfies", "(Ljava/lang/String;Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(GraphicsPrimitive::*)($String*,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitive::satisfies))},
	{"satisfiesSameAs", "(Lsun/java2d/loops/GraphicsPrimitive;)Z", nullptr, $FINAL, $method(static_cast<bool(GraphicsPrimitive::*)(GraphicsPrimitive*)>(&GraphicsPrimitive::satisfiesSameAs))},
	{"setupGeneralBinaryOp", "(Lsun/java2d/loops/GraphicsPrimitive$GeneralBinaryOp;)V", nullptr, $PROTECTED},
	{"setupGeneralUnaryOp", "(Lsun/java2d/loops/GraphicsPrimitive$GeneralUnaryOp;)V", nullptr, $PROTECTED},
	{"simplename", "([Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($FieldArray*,Object$*)>(&GraphicsPrimitive::simplename))},
	{"simplename", "(Lsun/java2d/loops/SurfaceType;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($SurfaceType*)>(&GraphicsPrimitive::simplename))},
	{"simplename", "(Lsun/java2d/loops/CompositeType;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CompositeType*)>(&GraphicsPrimitive::simplename))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tracePrimitive", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(Object$*)>(&GraphicsPrimitive::tracePrimitive))},
	{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC | $ABSTRACT},
	{"tracingEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&GraphicsPrimitive::tracingEnabled))},
	{}
};

$InnerClassInfo _GraphicsPrimitive_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitive$TraceReporter", "sun.java2d.loops.GraphicsPrimitive", "TraceReporter", $PUBLIC | $STATIC},
	{"sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralUnaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralBinaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.java2d.loops.GraphicsPrimitive$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GraphicsPrimitive_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.loops.GraphicsPrimitive",
	"java.lang.Object",
	nullptr,
	_GraphicsPrimitive_FieldInfo_,
	_GraphicsPrimitive_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitive$TraceReporter,sun.java2d.loops.GraphicsPrimitive$GeneralUnaryOp,sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp,sun.java2d.loops.GraphicsPrimitive$1"
};

$Object* allocate$GraphicsPrimitive($Class* clazz) {
	return $of($alloc(GraphicsPrimitive));
}

int32_t GraphicsPrimitive::unusedPrimID = 0;
$HashMap* GraphicsPrimitive::traceMap = nullptr;
int32_t GraphicsPrimitive::traceflags = 0;
$String* GraphicsPrimitive::tracefile = nullptr;
$PrintStream* GraphicsPrimitive::traceout = nullptr;

int32_t GraphicsPrimitive::makePrimTypeID() {
	$load(GraphicsPrimitive);
	$synchronized(class$) {
		$init(GraphicsPrimitive);
		if (GraphicsPrimitive::unusedPrimID > 255) {
			$throwNew($InternalError, "primitive id overflow"_s);
		}
		return GraphicsPrimitive::unusedPrimID++;
	}
}

int32_t GraphicsPrimitive::makeUniqueID(int32_t primTypeID, $SurfaceType* src, $CompositeType* cmp, $SurfaceType* dst) {
	$load(GraphicsPrimitive);
	$synchronized(class$) {
		$init(GraphicsPrimitive);
		int32_t var$1 = (primTypeID << 24) | ($nc(dst)->getUniqueID() << 16);
		int32_t var$0 = var$1 | ($nc(cmp)->getUniqueID() << 8);
		return var$0 | ($nc(src)->getUniqueID());
	}
}

void GraphicsPrimitive::init$($String* methodSignature, int32_t primTypeID, $SurfaceType* sourceType, $CompositeType* compositeType, $SurfaceType* destType) {
	$set(this, methodSignature, methodSignature);
	$set(this, sourceType, sourceType);
	$set(this, compositeType, compositeType);
	$set(this, destType, destType);
	if (sourceType == nullptr || compositeType == nullptr || destType == nullptr) {
		this->uniqueID = primTypeID << 24;
	} else {
		this->uniqueID = GraphicsPrimitive::makeUniqueID(primTypeID, sourceType, compositeType, destType);
	}
}

void GraphicsPrimitive::init$(int64_t pNativePrim, $String* methodSignature, int32_t primTypeID, $SurfaceType* sourceType, $CompositeType* compositeType, $SurfaceType* destType) {
	this->pNativePrim = pNativePrim;
	$set(this, methodSignature, methodSignature);
	$set(this, sourceType, sourceType);
	$set(this, compositeType, compositeType);
	$set(this, destType, destType);
	if (sourceType == nullptr || compositeType == nullptr || destType == nullptr) {
		this->uniqueID = primTypeID << 24;
	} else {
		this->uniqueID = GraphicsPrimitive::makeUniqueID(primTypeID, sourceType, compositeType, destType);
	}
}

int32_t GraphicsPrimitive::getUniqueID() {
	return this->uniqueID;
}

$String* GraphicsPrimitive::getSignature() {
	return this->methodSignature;
}

int32_t GraphicsPrimitive::getPrimTypeID() {
	return (int32_t)((uint32_t)this->uniqueID >> 24);
}

int64_t GraphicsPrimitive::getNativePrim() {
	return this->pNativePrim;
}

$SurfaceType* GraphicsPrimitive::getSourceType() {
	return this->sourceType;
}

$CompositeType* GraphicsPrimitive::getCompositeType() {
	return this->compositeType;
}

$SurfaceType* GraphicsPrimitive::getDestType() {
	return this->destType;
}

bool GraphicsPrimitive::satisfies($String* signature, $SurfaceType* srctype$renamed, $CompositeType* comptype$renamed, $SurfaceType* dsttype$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceType, srctype, srctype$renamed);
	$var($CompositeType, comptype, comptype$renamed);
	$var($SurfaceType, dsttype, dsttype$renamed);
	if (signature != this->methodSignature) {
		return false;
	}
	while (true) {
		if (srctype == nullptr) {
			return false;
		}
		if ($nc(srctype)->equals(this->sourceType)) {
			break;
		}
		$assign(srctype, $nc(srctype)->getSuperType());
	}
	while (true) {
		if (comptype == nullptr) {
			return false;
		}
		if ($nc(comptype)->equals(this->compositeType)) {
			break;
		}
		$assign(comptype, $nc(comptype)->getSuperType());
	}
	while (true) {
		if (dsttype == nullptr) {
			return false;
		}
		if ($nc(dsttype)->equals(this->destType)) {
			break;
		}
		$assign(dsttype, $nc(dsttype)->getSuperType());
	}
	return true;
}

bool GraphicsPrimitive::satisfiesSameAs(GraphicsPrimitive* other) {
	bool var$1 = this->methodSignature == $nc(other)->methodSignature && $nc(this->sourceType)->equals(other->sourceType);
	bool var$0 = var$1 && $nc(this->compositeType)->equals(other->compositeType);
	return (var$0 && $nc(this->destType)->equals(other->destType));
}

GraphicsPrimitive* GraphicsPrimitive::makePrimitive($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$useLocalCurrentObjectStackCache();
	$throwNew($InternalError, $("%s not implemented for %s, comp: %s, dst: %s"_s->formatted($$new($ObjectArray, {
		$($of($of(this)->getClass()->getName())),
		$of(srctype),
		$of(comptype),
		$of(dsttype)
	}))));
	$shouldNotReachHere();
}

bool GraphicsPrimitive::tracingEnabled() {
	$init(GraphicsPrimitive);
	return (GraphicsPrimitive::traceflags != 0);
}

$PrintStream* GraphicsPrimitive::getTraceOutputFile() {
	$init(GraphicsPrimitive);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (GraphicsPrimitive::traceout == nullptr) {
		if (GraphicsPrimitive::tracefile != nullptr) {
			$var($FileOutputStream, o, $cast($FileOutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GraphicsPrimitive$1)))));
			if (o != nullptr) {
				$assignStatic(GraphicsPrimitive::traceout, $new($PrintStream, static_cast<$OutputStream*>(o)));
			} else {
				$assignStatic(GraphicsPrimitive::traceout, $System::err);
			}
		} else {
			$assignStatic(GraphicsPrimitive::traceout, $System::err);
		}
	}
	return GraphicsPrimitive::traceout;
}

void GraphicsPrimitive::tracePrimitive(Object$* prim) {
	$load(GraphicsPrimitive);
	$synchronized(class$) {
		$init(GraphicsPrimitive);
		$useLocalCurrentObjectStackCache();
		if (((int32_t)(GraphicsPrimitive::traceflags & (uint32_t)GraphicsPrimitive::TRACECOUNTS)) != 0) {
			if (GraphicsPrimitive::traceMap == nullptr) {
				$assignStatic(GraphicsPrimitive::traceMap, $new($HashMap));
				$GraphicsPrimitive$TraceReporter::setShutdownHook();
			}
			$var($ints, o, $cast($ints, $nc(GraphicsPrimitive::traceMap)->get(prim)));
			if (o == nullptr) {
				$assign(o, $new($ints, 1));
				$nc(GraphicsPrimitive::traceMap)->put(prim, o);
			}
			++(*$nc(o))[0];
		}
		if (((int32_t)(GraphicsPrimitive::traceflags & (uint32_t)GraphicsPrimitive::TRACELOG)) != 0) {
			$var($PrintStream, ps, getTraceOutputFile());
			if (((int32_t)(GraphicsPrimitive::traceflags & (uint32_t)GraphicsPrimitive::TRACETIMESTAMP)) != 0) {
				$nc(ps)->print($$str({$$str($System::currentTimeMillis()), ": "_s}));
			}
			$nc(ps)->println(prim);
		}
	}
}

void GraphicsPrimitive::setupGeneralBinaryOp($GraphicsPrimitive$GeneralBinaryOp* gbo) {
	$useLocalCurrentObjectStackCache();
	int32_t primID = $nc(gbo)->getPrimTypeID();
	$var($String, methodSignature, gbo->getSignature());
	$var($SurfaceType, srctype, gbo->getSourceType());
	$var($CompositeType, comptype, gbo->getCompositeType());
	$var($SurfaceType, dsttype, gbo->getDestType());
	$var($Blit, convertsrc, nullptr);
	$var($Blit, convertdst, nullptr);
	$var($Blit, convertres, nullptr);
	$var(GraphicsPrimitive, performop, nullptr);
	$init($SurfaceType);
	$assign(convertsrc, createConverter(srctype, $SurfaceType::IntArgb));
	$assign(performop, $GraphicsPrimitiveMgr::locatePrim(primID, $SurfaceType::IntArgb, comptype, dsttype));
	if (performop != nullptr) {
		$assign(convertdst, nullptr);
		$assign(convertres, nullptr);
	} else {
		$assign(performop, getGeneralOp(primID, comptype));
		if (performop == nullptr) {
			$throwNew($InternalError, $$str({"Cannot construct general op for "_s, methodSignature, " "_s, comptype}));
		}
		$assign(convertdst, createConverter(dsttype, $SurfaceType::IntArgb));
		$assign(convertres, createConverter($SurfaceType::IntArgb, dsttype));
	}
	gbo->setPrimitives(convertsrc, convertdst, performop, convertres);
}

void GraphicsPrimitive::setupGeneralUnaryOp($GraphicsPrimitive$GeneralUnaryOp* guo) {
	$useLocalCurrentObjectStackCache();
	int32_t primID = $nc(guo)->getPrimTypeID();
	$var($String, methodSignature, guo->getSignature());
	$var($CompositeType, comptype, guo->getCompositeType());
	$var($SurfaceType, dsttype, guo->getDestType());
	$init($SurfaceType);
	$var($Blit, convertdst, createConverter(dsttype, $SurfaceType::IntArgb));
	$var(GraphicsPrimitive, performop, getGeneralOp(primID, comptype));
	$var($Blit, convertres, createConverter($SurfaceType::IntArgb, dsttype));
	if (convertdst == nullptr || performop == nullptr || convertres == nullptr) {
		$throwNew($InternalError, $$str({"Cannot construct binary op for "_s, comptype, " "_s, dsttype}));
	}
	guo->setPrimitives(convertdst, performop, convertres);
}

$Blit* GraphicsPrimitive::createConverter($SurfaceType* srctype, $SurfaceType* dsttype) {
	$init(GraphicsPrimitive);
	$useLocalCurrentObjectStackCache();
	if ($nc(srctype)->equals(dsttype)) {
		return nullptr;
	}
	$init($CompositeType);
	$var($Blit, cv, $Blit::getFromCache(srctype, $CompositeType::SrcNoEa, dsttype));
	if (cv == nullptr) {
		$throwNew($InternalError, $$str({"Cannot construct converter for "_s, srctype, "=>"_s, dsttype}));
	}
	return cv;
}

$SurfaceData* GraphicsPrimitive::convertFrom($Blit* ob, $SurfaceData* srcData, int32_t srcX, int32_t srcY, int32_t w, int32_t h, $SurfaceData* dstData) {
	$init(GraphicsPrimitive);
	return convertFrom(ob, srcData, srcX, srcY, w, h, dstData, $BufferedImage::TYPE_INT_ARGB);
}

$SurfaceData* GraphicsPrimitive::convertFrom($Blit* ob, $SurfaceData* srcData, int32_t srcX, int32_t srcY, int32_t w, int32_t h, $SurfaceData* dstData$renamed, int32_t type) {
	$init(GraphicsPrimitive);
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, dstData, dstData$renamed);
	if (dstData != nullptr) {
		$var($Rectangle, r, dstData->getBounds());
		if (w > $nc(r)->width || h > $nc(r)->height) {
			$assign(dstData, nullptr);
		}
	}
	if (dstData == nullptr) {
		$var($BufferedImage, dstBI, $new($BufferedImage, w, h, type));
		$assign(dstData, $BufImgSurfaceData::createData(dstBI));
	}
	$init($AlphaComposite);
	$nc(ob)->Blit$(srcData, dstData, $AlphaComposite::Src, nullptr, srcX, srcY, 0, 0, w, h);
	return dstData;
}

void GraphicsPrimitive::convertTo($Blit* ob, $SurfaceData* srcImg, $SurfaceData* dstImg, $Region* clip, int32_t dstX, int32_t dstY, int32_t w, int32_t h) {
	$init(GraphicsPrimitive);
	if (ob != nullptr) {
		$init($AlphaComposite);
		ob->Blit$(srcImg, dstImg, $AlphaComposite::Src, clip, 0, 0, dstX, dstY, w, h);
	}
}

GraphicsPrimitive* GraphicsPrimitive::getGeneralOp(int32_t primID, $CompositeType* comptype) {
	$init(GraphicsPrimitive);
	$init($SurfaceType);
	return $GraphicsPrimitiveMgr::locatePrim(primID, $SurfaceType::IntArgb, comptype, $SurfaceType::IntArgb);
}

$String* GraphicsPrimitive::simplename($FieldArray* fields, Object$* o) {
	$init(GraphicsPrimitive);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	for (int32_t i = 0; i < $nc(fields)->length; ++i) {
		$var($Field, f, fields->get(i));
		try {
			if ($equals(o, $nc(f)->get(nullptr))) {
				return f->getName();
			}
		} catch ($Exception& e) {
		}
	}
	return $str({"\""_s, $($nc($of(o))->toString()), "\""_s});
}

$String* GraphicsPrimitive::simplename($SurfaceType* st) {
	$init(GraphicsPrimitive);
	$beforeCallerSensitive();
	$load($SurfaceType);
	return simplename($($SurfaceType::class$->getDeclaredFields()), st);
}

$String* GraphicsPrimitive::simplename($CompositeType* ct) {
	$init(GraphicsPrimitive);
	$beforeCallerSensitive();
	$load($CompositeType);
	return simplename($($CompositeType::class$->getDeclaredFields()), ct);
}

$String* GraphicsPrimitive::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->cachedname == nullptr) {
		$var($String, sig, this->methodSignature);
		int32_t index = $nc(sig)->indexOf((int32_t)u'(');
		if (index >= 0) {
			$assign(sig, sig->substring(0, index));
		}
		$var($String, var$5, $$str({$($of(this)->getClass()->getName()), "::"_s, sig, "("_s}));
		$var($String, var$4, $$concat(var$5, $(simplename(this->sourceType))));
		$var($String, var$3, $$concat(var$4, ", "_s));
		$var($String, var$2, $$concat(var$3, $(simplename(this->compositeType))));
		$var($String, var$1, $$concat(var$2, ", "_s));
		$var($String, var$0, $$concat(var$1, $(simplename(this->destType))));
		$set(this, cachedname, $concat(var$0, ")"_s));
	}
	return this->cachedname;
}

void clinit$GraphicsPrimitive($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	GraphicsPrimitive::unusedPrimID = 1;
	{
		$var($GetPropertyAction, gpa, $new($GetPropertyAction, "sun.java2d.trace"_s));
		$var($String, trace, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(gpa))));
		if (trace != nullptr) {
			bool verbose = false;
			int32_t traceflags = 0;
			$var($StringTokenizer, st, $new($StringTokenizer, trace, ","_s));
			while (st->hasMoreTokens()) {
				$var($String, tok, st->nextToken());
				if ($nc(tok)->equalsIgnoreCase("count"_s)) {
					traceflags |= GraphicsPrimitive::TRACECOUNTS;
				} else if (tok->equalsIgnoreCase("log"_s)) {
					traceflags |= GraphicsPrimitive::TRACELOG;
				} else if (tok->equalsIgnoreCase("timestamp"_s)) {
					traceflags |= GraphicsPrimitive::TRACETIMESTAMP;
				} else if (tok->equalsIgnoreCase("verbose"_s)) {
					verbose = true;
				} else if (tok->regionMatches(true, 0, "out:"_s, 0, 4)) {
					$assignStatic(GraphicsPrimitive::tracefile, tok->substring(4));
				} else {
					if (!tok->equalsIgnoreCase("help"_s)) {
						$nc($System::err)->println($$str({"unrecognized token: "_s, tok}));
					}
					$nc($System::err)->println("usage: -Dsun.java2d.trace=[log[,timestamp]],[count],[out:<filename>],[help],[verbose]"_s);
				}
			}
			if (verbose) {
				$nc($System::err)->print("GraphicsPrimitive logging "_s);
				if (((int32_t)(traceflags & (uint32_t)GraphicsPrimitive::TRACELOG)) != 0) {
					$nc($System::err)->println("enabled"_s);
					$nc($System::err)->print("GraphicsPrimitive timetamps "_s);
					if (((int32_t)(traceflags & (uint32_t)GraphicsPrimitive::TRACETIMESTAMP)) != 0) {
						$nc($System::err)->println("enabled"_s);
					} else {
						$nc($System::err)->println("disabled"_s);
					}
				} else {
					$nc($System::err)->println("[and timestamps] disabled"_s);
				}
				$nc($System::err)->print("GraphicsPrimitive invocation counts "_s);
				if (((int32_t)(traceflags & (uint32_t)GraphicsPrimitive::TRACECOUNTS)) != 0) {
					$nc($System::err)->println("enabled"_s);
				} else {
					$nc($System::err)->println("disabled"_s);
				}
				$nc($System::err)->print("GraphicsPrimitive trace output to "_s);
				if (GraphicsPrimitive::tracefile == nullptr) {
					$nc($System::err)->println("System.err"_s);
				} else {
					$nc($System::err)->println($$str({"file \'"_s, GraphicsPrimitive::tracefile, "\'"_s}));
				}
			}
			GraphicsPrimitive::traceflags = traceflags;
		}
	}
}

GraphicsPrimitive::GraphicsPrimitive() {
}

$Class* GraphicsPrimitive::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitive, name, initialize, &_GraphicsPrimitive_ClassInfo_, clinit$GraphicsPrimitive, allocate$GraphicsPrimitive);
	return class$;
}

$Class* GraphicsPrimitive::class$ = nullptr;

		} // loops
	} // java2d
} // sun