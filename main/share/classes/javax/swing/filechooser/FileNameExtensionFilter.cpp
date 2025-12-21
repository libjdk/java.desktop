#include <javax/swing/filechooser/FileNameExtensionFilter.h>

#include <java/io/File.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

#undef ENGLISH

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace javax {
	namespace swing {
		namespace filechooser {

$FieldInfo _FileNameExtensionFilter_FieldInfo_[] = {
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, description)},
	{"extensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, extensions)},
	{"lowerCaseExtensions", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileNameExtensionFilter, lowerCaseExtensions)},
	{}
};

$MethodInfo _FileNameExtensionFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(FileNameExtensionFilter::*)($String*,$StringArray*)>(&FileNameExtensionFilter::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExtensions", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray*(FileNameExtensionFilter::*)()>(&FileNameExtensionFilter::getExtensions))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileNameExtensionFilter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.swing.filechooser.FileNameExtensionFilter",
	"javax.swing.filechooser.FileFilter",
	nullptr,
	_FileNameExtensionFilter_FieldInfo_,
	_FileNameExtensionFilter_MethodInfo_
};

$Object* allocate$FileNameExtensionFilter($Class* clazz) {
	return $of($alloc(FileNameExtensionFilter));
}

void FileNameExtensionFilter::init$($String* description, $StringArray* extensions) {
	$useLocalCurrentObjectStackCache();
	$FileFilter::init$();
	if (extensions == nullptr || $nc(extensions)->length == 0) {
		$throwNew($IllegalArgumentException, "Extensions must be non-null and not empty"_s);
	}
	$set(this, description, description);
	$set(this, extensions, $new($StringArray, $nc(extensions)->length));
	$set(this, lowerCaseExtensions, $new($StringArray, extensions->length));
	for (int32_t i = 0; i < extensions->length; ++i) {
		if (extensions->get(i) == nullptr || $nc(extensions->get(i))->length() == 0) {
			$throwNew($IllegalArgumentException, "Each extension must be non-null and not empty"_s);
		}
		$nc(this->extensions)->set(i, extensions->get(i));
		$init($Locale);
		$nc(this->lowerCaseExtensions)->set(i, $($nc(extensions->get(i))->toLowerCase($Locale::ENGLISH)));
	}
}

bool FileNameExtensionFilter::accept($File* f) {
	$useLocalCurrentObjectStackCache();
	if (f != nullptr) {
		if (f->isDirectory()) {
			return true;
		}
		$var($String, fileName, f->getName());
		int32_t i = $nc(fileName)->lastIndexOf((int32_t)u'.');
		if (i > 0 && i < fileName->length() - 1) {
			$init($Locale);
			$var($String, desiredExtension, $(fileName->substring(i + 1))->toLowerCase($Locale::ENGLISH));
			{
				$var($StringArray, arr$, this->lowerCaseExtensions);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, extension, arr$->get(i$));
					{
						if (desiredExtension->equals(extension)) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

$String* FileNameExtensionFilter::getDescription() {
	return this->description;
}

$StringArray* FileNameExtensionFilter::getExtensions() {
	$var($StringArray, result, $new($StringArray, $nc(this->extensions)->length));
	$System::arraycopy(this->extensions, 0, result, 0, $nc(this->extensions)->length);
	return result;
}

$String* FileNameExtensionFilter::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({$($FileFilter::toString()), "[description="_s}));
	$var($String, var$2, $$concat(var$3, $(getDescription())));
	$var($String, var$1, $$concat(var$2, " extensions="_s));
	$var($String, var$0, $$concat(var$1, $($Arrays::asList($(getExtensions())))));
	return $concat(var$0, "]"_s);
}

FileNameExtensionFilter::FileNameExtensionFilter() {
}

$Class* FileNameExtensionFilter::load$($String* name, bool initialize) {
	$loadClass(FileNameExtensionFilter, name, initialize, &_FileNameExtensionFilter_ClassInfo_, allocate$FileNameExtensionFilter);
	return class$;
}

$Class* FileNameExtensionFilter::class$ = nullptr;

		} // filechooser
	} // swing
} // javax