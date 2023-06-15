# CMakeList.txt : CMake project for CPP_ColorPrinter, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CPP_ColorPrinter "main.cpp"  "cpp_color_printer.cpp" "cpp_color_printer.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CPP_ColorPrinter PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
