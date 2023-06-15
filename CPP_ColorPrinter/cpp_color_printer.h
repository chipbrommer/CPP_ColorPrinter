///////////////////////////////////////////////////////////////////////////////
//!
//! @file        cpp_color_printer.h
//! 
//! @brief       A cross platform class to print colored text to console
//! 
//! @author      Chip Brommer
//!
///////////////////////////////////////////////////////////////////////////////
#pragma once
///////////////////////////////////////////////////////////////////////////////
//
//  Includes:
//          name                        reason included
//          --------------------        ---------------------------------------
#include <string>                       // Strings
#include <iostream>                     // IO
#include <cstdarg>                      // Arguments
//
//    Defines:
//          name                        reason defined
//          --------------------        ---------------------------------------
#ifndef     CPP_COLOR_PRINTER           // Define the cpp terminal class. 
#define     CPP_COLOR_PRINTER
// 
///////////////////////////////////////////////////////////////////////////////

namespace Essentials
{
    namespace Utilities
    {
        const static uint8_t COLOR_PRINTER_VERSION_MAJOR = 0;
        const static uint8_t COLOR_PRINTER_VERSION_MINOR = 1;
        const static uint8_t COLOR_PRINTER_VERSION_PATCH = 0;
        const static uint8_t COLOR_PRINTER_VERSION_BUILD = 0;

        /// @brief Printable string of the color printer version
        const static std::string ColorPrinterVersion = "Color Printer v" +
            std::to_string(COLOR_PRINTER_VERSION_MAJOR) + "." +
            std::to_string(COLOR_PRINTER_VERSION_MINOR) + "." +
            std::to_string(COLOR_PRINTER_VERSION_PATCH) + " - b" +
            std::to_string(COLOR_PRINTER_VERSION_BUILD) + ".\n";

        enum class Color 
        {
            BLACK,
            DARK_GRAY,
            GRAY,
            LIGHT_GRAY,
            WHITE,
            DARK_RED,
            RED,
            BRIGHT_RED,
            LIGHT_RED,
            DARK_GREEN,
            GREEN,
            BRIGHT_GREEN,
            LIGHT_GREEN,
            DARK_BLUE,
            BLUE,
            BRIGHT_BLUE,
            LIGHT_BLUE,
            DARK_YELLOW,
            YELLOW,
            BRIGHT_YELLOW,
            LIGHT_YELLOW,
            DARK_MAGENTA,
            MAGENTA,
            BRIGHT_MAGENTA,
            LIGHT_MAGENTA,
            DARK_CYAN,
            CYAN,
            BRIGHT_CYAN,
            LIGHT_CYAN,
            DARK_ORANGE,
            ORANGE,
            BRIGHT_ORANGE,
            DARK_PURPLE,
            PURPLE,
            BRIGHT_PURPLE,
            DARK_BROWN,
            BROWN,
            BRIGHT_BROWN,
            DARK_PINK,
            PINK,
            BRIGHT_PINK
        };

        class ColorPrinter
        {
        public:
            /// @brief Default Constructor
            ColorPrinter();

            /// @brief Default Deconstructor
            ~ColorPrinter();

            /// @brief Prints a colored message to the console. 
            /// @param color - [in] - Color code for the message. 
            /// @param format - [in] - String format specifier. 
            void Print(Color color, const char* format, ...) const;
        protected:
        private:
            /// @brief Gets the color code in string value from the Color enum class. 
            /// @param color - [in] - Color enum to get value of. 
            /// @return std::string containing the color code for console. 
            std::string GetColorCode(Color color) const;

            // Format a string using printf-style arguments
            std::string FormatString(const char* format, va_list args) const;
        };
    }
}
#endif