#include <sun/awt/image/ImageConsumerQueue.h>

#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/ToolkitImage.h>
#include <jcpp.h>

using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageConsumerQueue_FieldInfo_[] = {
	{"next", "Lsun/awt/image/ImageConsumerQueue;", nullptr, 0, $field(ImageConsumerQueue, next)},
	{"consumer", "Ljava/awt/image/ImageConsumer;", nullptr, 0, $field(ImageConsumerQueue, consumer)},
	{"interested", "Z", nullptr, 0, $field(ImageConsumerQueue, interested)},
	{"securityContext", "Ljava/lang/Object;", nullptr, 0, $field(ImageConsumerQueue, securityContext)},
	{"secure", "Z", nullptr, 0, $field(ImageConsumerQueue, secure)},
	{}
};

$MethodInfo _ImageConsumerQueue_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/awt/image/ImageConsumer;)V", nullptr, 0, $method(static_cast<void(ImageConsumerQueue::*)($InputStreamImageSource*,$ImageConsumer*)>(&ImageConsumerQueue::init$))},
	{"isConsumer", "(Lsun/awt/image/ImageConsumerQueue;Ljava/awt/image/ImageConsumer;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(ImageConsumerQueue*,$ImageConsumer*)>(&ImageConsumerQueue::isConsumer))},
	{"removeConsumer", "(Lsun/awt/image/ImageConsumerQueue;Ljava/awt/image/ImageConsumer;Z)Lsun/awt/image/ImageConsumerQueue;", nullptr, $STATIC, $method(static_cast<ImageConsumerQueue*(*)(ImageConsumerQueue*,$ImageConsumer*,bool)>(&ImageConsumerQueue::removeConsumer))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageConsumerQueue_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageConsumerQueue",
	"java.lang.Object",
	nullptr,
	_ImageConsumerQueue_FieldInfo_,
	_ImageConsumerQueue_MethodInfo_
};

$Object* allocate$ImageConsumerQueue($Class* clazz) {
	return $of($alloc(ImageConsumerQueue));
}

ImageConsumerQueue* ImageConsumerQueue::removeConsumer(ImageConsumerQueue* cqbase$renamed, $ImageConsumer* ic, bool stillinterested) {
	$useLocalCurrentObjectStackCache();
	$var(ImageConsumerQueue, cqbase, cqbase$renamed);
	$var(ImageConsumerQueue, cqprev, nullptr);
	{
		$var(ImageConsumerQueue, cq, cqbase);
		for (; cq != nullptr; $assign(cq, $nc(cq)->next)) {
			if (cq->consumer == ic) {
				if (cqprev == nullptr) {
					$assign(cqbase, cq->next);
				} else {
					$set($nc(cqprev), next, cq->next);
				}
				cq->interested = stillinterested;
				break;
			}
			$assign(cqprev, cq);
		}
	}
	return cqbase;
}

bool ImageConsumerQueue::isConsumer(ImageConsumerQueue* cqbase, $ImageConsumer* ic) {
	{
		$var(ImageConsumerQueue, cq, cqbase);
		for (; cq != nullptr; $assign(cq, $nc(cq)->next)) {
			if (cq->consumer == ic) {
				return true;
			}
		}
	}
	return false;
}

void ImageConsumerQueue::init$($InputStreamImageSource* src, $ImageConsumer* ic) {
	$useLocalCurrentObjectStackCache();
	$set(this, consumer, ic);
	this->interested = true;
	if ($instanceOf($ImageRepresentation, ic)) {
		$var($ImageRepresentation, ir, $cast($ImageRepresentation, ic));
		if (!$equals($nc($nc(ir)->image)->source, src)) {
			$throwNew($SecurityException, "ImageRep added to wrong image source"_s);
		}
		this->secure = true;
	} else {
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			$set(this, securityContext, security->getSecurityContext());
		} else {
			$set(this, securityContext, nullptr);
		}
	}
}

$String* ImageConsumerQueue::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"["_s, this->consumer, ", "_s, (this->interested ? ""_s : "not "_s), "interested"_s}));
	$var($String, var$0, $$concat(var$1, (this->securityContext != nullptr ? $$str({", "_s, this->securityContext}) : ""_s)));
	return ($concat(var$0, "]"_s));
}

ImageConsumerQueue::ImageConsumerQueue() {
}

$Class* ImageConsumerQueue::load$($String* name, bool initialize) {
	$loadClass(ImageConsumerQueue, name, initialize, &_ImageConsumerQueue_ClassInfo_, allocate$ImageConsumerQueue);
	return class$;
}

$Class* ImageConsumerQueue::class$ = nullptr;

		} // image
	} // awt
} // sun