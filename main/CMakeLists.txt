#machine generated

jcpp_add_dependencies(
	"java.prefs:17.35"
	"java.datatransfer:17.35"
	"java.xml:17.35"
	"java.base:17.35"
)

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("share/classes")
include_directories("share/native")

if(JCPP_OS MATCHES "linux")
	include_directories("linux/classes")
	include_directories("linux/native")
endif()

if(JCPP_OS MATCHES "macos")
	include_directories("macos/classes")
	include_directories("macos/native")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("windows/classes")
	include_directories("windows/native")
endif()

add_subdirectory("share/classes")
add_subdirectory("share/native")

if(JCPP_OS MATCHES "linux")
	add_subdirectory("linux/classes")
	add_subdirectory("linux/native")
endif()

if(JCPP_OS MATCHES "macos")
	add_subdirectory("macos/classes")
	add_subdirectory("macos/native")
endif()

if(JCPP_OS MATCHES "windows")
	add_subdirectory("windows/classes")
	add_subdirectory("windows/native")
endif()

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.accessibility.intern_0>"
	"$<TARGET_OBJECTS:com.sun.beans>"
	"$<TARGET_OBJECTS:com.sun.beans.decoder>"
	"$<TARGET_OBJECTS:com.sun.beans.editors>"
	"$<TARGET_OBJECTS:com.sun.beans.finder>"
	"$<TARGET_OBJECTS:com.sun.beans.infos>"
	"$<TARGET_OBJECTS:com.sun.beans.introspect>"
	"$<TARGET_OBJECTS:com.sun.beans.util>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.bmp>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.common>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.gif>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.jpeg>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.png>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.tiff>"
	"$<TARGET_OBJECTS:com.sun.imageio.plugins.wbmp>"
	"$<TARGET_OBJECTS:com.sun.imageio.spi>"
	"$<TARGET_OBJECTS:com.sun.imageio.stream>"
	"$<TARGET_OBJECTS:com.sun.java.swing>"
	"$<TARGET_OBJECTS:com.sun.java.swing.plaf.motif>"
	"$<TARGET_OBJECTS:com.sun.java.swing.plaf.motif.>"
	"$<TARGET_OBJECTS:com.sun.java.swing.plaf.moti_1>"
	"$<TARGET_OBJECTS:com.sun.java.swing.plaf.wind_2>"
	"$<TARGET_OBJECTS:com.sun.media.sound>"
	"$<TARGET_OBJECTS:com.sun.swing.internal.plaf._3>"
	"$<TARGET_OBJECTS:com.sun.swing.internal.plaf._4>"
	"$<TARGET_OBJECTS:com.sun.swing.internal.plaf._5>"
	"$<TARGET_OBJECTS:java.applet>"
	"$<TARGET_OBJECTS:java.awt>"
	"$<TARGET_OBJECTS:java.awt.color>"
	"$<TARGET_OBJECTS:java.awt.desktop>"
	"$<TARGET_OBJECTS:java.awt.dnd>"
	"$<TARGET_OBJECTS:java.awt.dnd.peer>"
	"$<TARGET_OBJECTS:java.awt.event>"
	"$<TARGET_OBJECTS:java.awt.font>"
	"$<TARGET_OBJECTS:java.awt.geom>"
	"$<TARGET_OBJECTS:java.awt.im>"
	"$<TARGET_OBJECTS:java.awt.im.spi>"
	"$<TARGET_OBJECTS:java.awt.image>"
	"$<TARGET_OBJECTS:java.awt.image.renderable>"
	"$<TARGET_OBJECTS:java.awt.peer>"
	"$<TARGET_OBJECTS:java.awt.print>"
	"$<TARGET_OBJECTS:java.beans>"
	"$<TARGET_OBJECTS:java.beans.beancontext>"
	"$<TARGET_OBJECTS:javax.accessibility>"
	"$<TARGET_OBJECTS:javax.imageio>"
	"$<TARGET_OBJECTS:javax.imageio.event>"
	"$<TARGET_OBJECTS:javax.imageio.metadata>"
	"$<TARGET_OBJECTS:javax.imageio.plugins.bmp>"
	"$<TARGET_OBJECTS:javax.imageio.plugins.jpeg>"
	"$<TARGET_OBJECTS:javax.imageio.plugins.tiff>"
	"$<TARGET_OBJECTS:javax.imageio.spi>"
	"$<TARGET_OBJECTS:javax.imageio.stream>"
	"$<TARGET_OBJECTS:javax.print>"
	"$<TARGET_OBJECTS:javax.print.attribute>"
	"$<TARGET_OBJECTS:javax.print.attribute.standard>"
	"$<TARGET_OBJECTS:javax.print.event>"
	"$<TARGET_OBJECTS:javax.sound.midi>"
	"$<TARGET_OBJECTS:javax.sound.midi.spi>"
	"$<TARGET_OBJECTS:javax.sound.sampled>"
	"$<TARGET_OBJECTS:javax.sound.sampled.spi>"
	"$<TARGET_OBJECTS:javax.swing>"
	"$<TARGET_OBJECTS:javax.swing.beaninfo.images>"
	"$<TARGET_OBJECTS:javax.swing.border>"
	"$<TARGET_OBJECTS:javax.swing.colorchooser>"
	"$<TARGET_OBJECTS:javax.swing.event>"
	"$<TARGET_OBJECTS:javax.swing.filechooser>"
	"$<TARGET_OBJECTS:javax.swing.plaf>"
	"$<TARGET_OBJECTS:javax.swing.plaf.basic>"
	"$<TARGET_OBJECTS:javax.swing.plaf.basic.icons>"
	"$<TARGET_OBJECTS:javax.swing.plaf.metal>"
	"$<TARGET_OBJECTS:javax.swing.plaf.metal.icons>"
	"$<TARGET_OBJECTS:javax.swing.plaf.metal.icons.o>"
	"$<TARGET_OBJECTS:javax.swing.plaf.metal.sounds>"
	"$<TARGET_OBJECTS:javax.swing.plaf.multi>"
	"$<TARGET_OBJECTS:javax.swing.plaf.nimbus>"
	"$<TARGET_OBJECTS:javax.swing.plaf.synth>"
	"$<TARGET_OBJECTS:javax.swing.table>"
	"$<TARGET_OBJECTS:javax.swing.text>"
	"$<TARGET_OBJECTS:javax.swing.text.html>"
	"$<TARGET_OBJECTS:javax.swing.text.html.parser>"
	"$<TARGET_OBJECTS:javax.swing.text.rtf>"
	"$<TARGET_OBJECTS:javax.swing.text.rtf.charsets>"
	"$<TARGET_OBJECTS:javax.swing.tree>"
	"$<TARGET_OBJECTS:javax.swing.undo>"
	"$<TARGET_OBJECTS:sun.awt>"
	"$<TARGET_OBJECTS:sun.awt.datatransfer>"
	"$<TARGET_OBJECTS:sun.awt.dnd>"
	"$<TARGET_OBJECTS:sun.awt.event>"
	"$<TARGET_OBJECTS:sun.awt.geom>"
	"$<TARGET_OBJECTS:sun.awt.im>"
	"$<TARGET_OBJECTS:sun.awt.image>"
	"$<TARGET_OBJECTS:sun.awt.resources>"
	"$<TARGET_OBJECTS:sun.awt.resources.cursors>"
	"$<TARGET_OBJECTS:sun.awt.shell>"
	"$<TARGET_OBJECTS:sun.awt.util>"
	"$<TARGET_OBJECTS:sun.awt.www.content>"
	"$<TARGET_OBJECTS:sun.awt.www.content.audio>"
	"$<TARGET_OBJECTS:sun.awt.www.content.image>"
	"$<TARGET_OBJECTS:sun.font>"
	"$<TARGET_OBJECTS:sun.font.lookup>"
	"$<TARGET_OBJECTS:sun.java2d>"
	"$<TARGET_OBJECTS:sun.java2d.cmm>"
	"$<TARGET_OBJECTS:sun.java2d.cmm.lcms>"
	"$<TARGET_OBJECTS:sun.java2d.cmm.profiles>"
	"$<TARGET_OBJECTS:sun.java2d.loops>"
	"$<TARGET_OBJECTS:sun.java2d.marlin>"
	"$<TARGET_OBJECTS:sun.java2d.marlin.stats>"
	"$<TARGET_OBJECTS:sun.java2d.opengl>"
	"$<TARGET_OBJECTS:sun.java2d.pipe>"
	"$<TARGET_OBJECTS:sun.java2d.pipe.hw>"
	"$<TARGET_OBJECTS:sun.print>"
	"$<TARGET_OBJECTS:sun.print.resources>"
	"$<TARGET_OBJECTS:sun.swing>"
	"$<TARGET_OBJECTS:sun.swing.icon>"
	"$<TARGET_OBJECTS:sun.swing.plaf>"
	"$<TARGET_OBJECTS:sun.swing.plaf.synth>"
	"$<TARGET_OBJECTS:sun.swing.table>"
	"$<TARGET_OBJECTS:sun.swing.text>"
	"$<TARGET_OBJECTS:sun.swing.text.html>"
	"$<TARGET_OBJECTS:native.common.awt.debug>"
	"$<TARGET_OBJECTS:native.common.awt.medialib>"
	"$<TARGET_OBJECTS:native.common.awt.utility>"
	"$<TARGET_OBJECTS:native.common.font>"
	"$<TARGET_OBJECTS:native.common.java2d.opengl>"
	"$<TARGET_OBJECTS:native.libawt.awt.image>"
	"$<TARGET_OBJECTS:native.libawt.awt.image.cvutil>"
	"$<TARGET_OBJECTS:native.libawt.awt.image.gif>"
	"$<TARGET_OBJECTS:native.libawt.awt.medialib>"
	"$<TARGET_OBJECTS:native.libawt.java2d>"
	"$<TARGET_OBJECTS:native.libawt.java2d.loops>"
	"$<TARGET_OBJECTS:native.libawt.java2d.pipe>"
	"$<TARGET_OBJECTS:native.libfontmanager>"
	"$<TARGET_OBJECTS:native.libharfbuzz>"
	"$<TARGET_OBJECTS:native.libjavajpeg>"
	"$<TARGET_OBJECTS:native.libjsound>"
	"$<TARGET_OBJECTS:native.liblcms>"
	"$<TARGET_OBJECTS:native.libmlib_image>"
	"$<TARGET_OBJECTS:native.libsplashscreen>"
	"$<TARGET_OBJECTS:native.libsplashscreen.giflib>"
	"$<TARGET_OBJECTS:native.libsplashscreen.libpng>"
)

if(JCPP_OS MATCHES "linux")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:linux>"
		"$<TARGET_OBJECTS:linux.com.sun.java.swing.plaf.>"
		"$<TARGET_OBJECTS:linux.com.sun.java.swing.pla_6>"
		"$<TARGET_OBJECTS:linux.sun.awt>"
		"$<TARGET_OBJECTS:linux.sun.awt.X11>"
		"$<TARGET_OBJECTS:linux.sun.font>"
		"$<TARGET_OBJECTS:linux.sun.java2d>"
		"$<TARGET_OBJECTS:linux.sun.java2d.opengl>"
		"$<TARGET_OBJECTS:linux.sun.java2d.x11>"
		"$<TARGET_OBJECTS:linux.sun.java2d.xr>"
		"$<TARGET_OBJECTS:linux.sun.print>"
		"$<TARGET_OBJECTS:linux-native.common.awt>"
		"$<TARGET_OBJECTS:linux-native.common.awt.system>"
		"$<TARGET_OBJECTS:linux-native.common.java2d.ope>"
		"$<TARGET_OBJECTS:linux-native.common.java2d.x11>"
		"$<TARGET_OBJECTS:linux-native.libawt.awt>"
		"$<TARGET_OBJECTS:linux-native.libawt_headless.a>"
		"$<TARGET_OBJECTS:linux-native.libawt_xawt.awt>"
		"$<TARGET_OBJECTS:linux-native.libawt_xawt.jav_8>"
		"$<TARGET_OBJECTS:linux-native.libawt_xawt.xawt>"
		"$<TARGET_OBJECTS:linux-native.libfontmanager>"
		"$<TARGET_OBJECTS:linux-native.libjawt>"
		"$<TARGET_OBJECTS:linux-native.libjsound>"
		"$<TARGET_OBJECTS:linux-native.libsplashscreen>"
	)
endif()

if(JCPP_OS MATCHES "macos")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:macos>"
		"$<TARGET_OBJECTS:macos.apple.laf>"
		"$<TARGET_OBJECTS:macos.com.apple.eawt>"
		"$<TARGET_OBJECTS:macos.com.apple.eawt.event>"
		"$<TARGET_OBJECTS:macos.com.apple.eio>"
		"$<TARGET_OBJECTS:macos.com.apple.laf>"
		"$<TARGET_OBJECTS:macos.com.apple.laf.resources>"
		"$<TARGET_OBJECTS:macos.sun.awt>"
		"$<TARGET_OBJECTS:macos.sun.awt.resources>"
		"$<TARGET_OBJECTS:macos.sun.font>"
		"$<TARGET_OBJECTS:macos.sun.java2d>"
		"$<TARGET_OBJECTS:macos.sun.java2d.metal>"
		"$<TARGET_OBJECTS:macos.sun.java2d.opengl>"
		"$<TARGET_OBJECTS:macos.sun.lwawt>"
		"$<TARGET_OBJECTS:macos.sun.lwawt.macosx>"
		"$<TARGET_OBJECTS:macos.sun.print>"
		"$<TARGET_OBJECTS:macos-native.common.awt>"
		"$<TARGET_OBJECTS:macos-native.common.awt.system>"
		"$<TARGET_OBJECTS:macos-native.libawt.awt>"
		"$<TARGET_OBJECTS:macos-native.libawt_lwawt.awt>"
		"$<TARGET_OBJECTS:macos-native.libawt_lwawt.awt.>"
		"$<TARGET_OBJECTS:macos-native.libawt_lwawt.font>"
		"$<TARGET_OBJECTS:macos-native.libawt_lwawt.ja_9>"
		"$<TARGET_OBJECTS:macos-native.libawt_lwawt.j_10>"
		"$<TARGET_OBJECTS:macos-native.libfreetype>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.a>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.b>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.c>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.sr_16>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.p>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.sr_17>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.sr_18>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.r>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.s>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.sr_19>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.src.t>"
		"$<TARGET_OBJECTS:macos-native.libfreetype.sr_20>"
		"$<TARGET_OBJECTS:macos-native.libharfbuzz>"
		"$<TARGET_OBJECTS:macos-native.libjawt>"
		"$<TARGET_OBJECTS:macos-native.libjsound>"
		"$<TARGET_OBJECTS:macos-native.libosx>"
		"$<TARGET_OBJECTS:macos-native.libosxapp>"
		"$<TARGET_OBJECTS:macos-native.libosxui>"
		"$<TARGET_OBJECTS:macos-native.libsplashscreen>"
	)
endif()

if(JCPP_OS MATCHES "windows")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:windows>"
		"$<TARGET_OBJECTS:windows.com.sun.java.swing._21>"
		"$<TARGET_OBJECTS:windows.com.sun.java.swing._22>"
		"$<TARGET_OBJECTS:windows.sun.awt>"
		"$<TARGET_OBJECTS:windows.sun.awt.shell>"
		"$<TARGET_OBJECTS:windows.sun.awt.windows>"
		"$<TARGET_OBJECTS:windows.sun.font>"
		"$<TARGET_OBJECTS:windows.sun.java2d>"
		"$<TARGET_OBJECTS:windows.sun.java2d.d3d>"
		"$<TARGET_OBJECTS:windows.sun.java2d.opengl>"
		"$<TARGET_OBJECTS:windows.sun.java2d.windows>"
		"$<TARGET_OBJECTS:windows.sun.print>"
		"$<TARGET_OBJECTS:windows.sun.swing.plaf.windows>"
		"$<TARGET_OBJECTS:windows-native.common.awt.syst>"
		"$<TARGET_OBJECTS:windows-native.libawt.java2d.d>"
		"$<TARGET_OBJECTS:windows-native.libawt.java2d.o>"
		"$<TARGET_OBJECTS:windows-native.libawt.java2d.w>"
		"$<TARGET_OBJECTS:windows-native.libawt.windows>"
		"$<TARGET_OBJECTS:windows-native.libfontmanager>"
		"$<TARGET_OBJECTS:windows-native.libfreetype>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._28>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._29>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._30>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._31>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._32>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._33>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._34>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._35>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._36>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._37>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._38>"
		"$<TARGET_OBJECTS:windows-native.libfreetype._39>"
		"$<TARGET_OBJECTS:windows-native.libharfbuzz>"
		"$<TARGET_OBJECTS:windows-native.libjawt>"
		"$<TARGET_OBJECTS:windows-native.libjsound>"
		"$<TARGET_OBJECTS:windows-native.libsplashscreen>"
	)
endif()

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}-main STATIC ${local_object} ${source_SRCS})
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES CLEAN_DIRECT_OUTPUT 1)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}-main SHARED ${local_object} ${source_SRCS})
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
	if(JCPP_OS MATCHES "linux")
		SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../lib")
	elseif(JCPP_OS MATCHES "macos")
		SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES INSTALL_RPATH ".;../lib")
	endif()
	if(JCPP_OS MATCHES "linux")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			-lXext -lX11 -lXrender -lXtst -lXi -lasound -lfreetype
		)
	endif()
	if(JCPP_OS MATCHES "macos")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			-lpthread -liconv
			"-framework CoreAudio"
			"-framework CoreFoundation"
			"-framework CoreServices"
			"-framework AudioUnit"
			"-framework CoreMIDI"
			"-framework AudioToolbox"
			"-framework CoreText"
			"-framework CoreGraphics"
			"-framework ApplicationServices"
			"-framework Foundation"
			"-framework Security"
			"-framework Cocoa"
			"-framework Metal"
			"-framework Accelerate"
			"-framework Carbon"
			"-framework ExceptionHandling"
			"-framework JavaRuntimeSupport"
			"-framework OpenGL"
			"-framework QuartzCore"
			"-framework Cocoa"
			"-framework Carbon"
		)
	endif()
	if(JCPP_OS MATCHES "windows")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			advapi32.lib dsound.lib winmm.lib user32.lib ole32.lib
			kernel32.lib gdi32.lib winspool.lib
			imm32.lib uuid.lib shell32.lib
			comdlg32.lib comctl32.lib shlwapi.lib
			delayimp.lib
		)
	endif()
	target_link_libraries(${JCPP_PROJECT_NAME}-main
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)
	jcpp_encode_symbol(${JCPP_PROJECT_NAME}-main)
endif()

jcpp_enable_bigobj(${JCPP_PROJECT_NAME}-main)
install(TARGETS ${JCPP_PROJECT_NAME}-main
	LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
	ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
	RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
)


install(
	DIRECTORY "share/include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)

if(JCPP_OS MATCHES "linux")
	install(
		DIRECTORY "linux/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(JCPP_OS MATCHES "macos")
	install(
		DIRECTORY "macos/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()

if(JCPP_OS MATCHES "windows")
	install(
		DIRECTORY "windows/include/"
		DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
	)
endif()
