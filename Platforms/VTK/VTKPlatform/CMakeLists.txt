set (PROJECTNAME MyGUI.VTKPlatform)

include_directories(
 include
 ${MYGUI_SOURCE_DIR}/MyGUIEngine/include
 ${VTK_USE_FILE}
)

include(${PROJECTNAME}.list)

add_library(${PROJECTNAME} ${HEADER_FILES} ${SOURCE_FILES})

add_dependencies(${PROJECTNAME} MyGUIEngine)

target_link_libraries(${PROJECTNAME} ${VTK_LIBRARIES} MyGUIEngine)
link_directories(${VTK_LIB_DIR})

# installation rules
install(FILES ${HEADER_FILES}
	DESTINATION include/MYGUI
)
mygui_install_target(${PROJECTNAME} "")

# platform specific dependencies
if (APPLE)
	include_directories(/usr/local/include /usr/include)
	target_link_libraries(${PROJECTNAME} ${Carbon_LIBRARY})
endif ()
