#machine generated

add_subdirectory("a11y")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libawt_lwawt.awt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libawt_lwawt.awt)
endif()