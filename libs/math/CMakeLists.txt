set(lib_name math)

set(target_name ${lib_name})

project(${lib_name})

set(MATH_SOURCE_FILES 
	Vec2.cpp
)

set(MATH_HEADER_FILES
	Vec2.h	
)

add_library(${lib_name} STATIC ${MATH_SOURCE_FILES} ${MATH_HEADER_FILES})

target_include_directories(${target_name} PUBLIC .)