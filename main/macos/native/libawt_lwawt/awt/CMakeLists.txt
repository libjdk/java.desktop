#machine generated

add_subdirectory("a11y")

if(JCPP_OS MATCHES "macos")
	add_definitions("-DMAC_OS_X_VERSION_MIN_REQUIRED=110000 -mmacosx-version-min=11.00.00")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt_lwawt.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt_lwawt.awt)
endif()