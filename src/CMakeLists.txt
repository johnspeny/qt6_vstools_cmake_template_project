set(project_name modern_cpp)

project(${project_name})

set(target_name ${project_name})


# Tell CMake to run Moc automatically when needed
set(CMAKE_AUTOMOC ON)

# Run uic tools and search in the ui folder
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ui/)
set(AUTOMOC_PATH_PREFIX ON)

# path to qtcmake used in locating qt pakages
set(CMAKE_PREFIX_PATH "C:/Qt/6.4.1/msvc2019_64")


# find Qt and include dirs of components in this project
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui Qml Quick)

set(SOURCE_FILES)
set(HEADER_FILES)

list(APPEND SOURCE_FILES 
	Classes/QtWidgetsApplication1.cpp
)

list(APPEND HEADER_FILES
	Classes/QtWidgetsApplication1.h	
)

#set(UI_FILES	ui/QtWidgetsApplication1.ui	)

set(all_code_files 
	${SOURCE_FILES}
	${HEADER_FILES}
)

# exe to run
add_executable(${target_name} 
	main.cpp 
	${all_code_files}
)

# instead of prefixing Classes/*.cpp use *.cpp
target_include_directories(${target_name}
        PRIVATE Classes
)

# add the Qt libraries your to use here
target_link_libraries(${target_name} PRIVATE Qt6::Widgets)

# other 3rdparty or none Qt libraries to be linked here
target_link_libraries(${target_name} PRIVATE math)