# CMakeList.txt: проект CMake для PacManV2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("PacManV2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (PacManV2 "PacManV2.cpp" "PacManV2.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
