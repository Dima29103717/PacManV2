# CMakeList.txt: проект CMake для PacManV2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("PacManV2")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (PacManV2 "PacManV2.cpp" "PacManV2.h" "Modle/filereader.h" "Modle/filereader.cpp" "Modle/datadesc.h" "Modle/modelexsepsion.h" "Modle/idataparser.h")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/level1.txt
	${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
