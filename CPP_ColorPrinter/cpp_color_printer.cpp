///////////////////////////////////////////////////////////////////////////////
//!
//! @file       cpp_color_printer.cpp
//! 
//! @brief      Implementation of the ColorPrinter class
//! 
//! @author     Chip Brommer
//!
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Includes:
//          name                        reason included
//          --------------------        ---------------------------------------
#include    "cpp_color_printer.h"           // Color Printer Class
//
///////////////////////////////////////////////////////////////////////////////

namespace Essentials
{
    namespace Utilities
    {
        ColorPrinter::ColorPrinter()
        {
           
        }

        ColorPrinter::~ColorPrinter()
        {

        }

        void ColorPrinter::Print(Color color, const char* format, ...) const
        {
            std::string colorCode = GetColorCode(color);
            std::string message;

            // Format the message using printf-style arguments
            va_list args;
            va_start(args, format);
            message = FormatString(format, args);
            va_end(args);

            // Print the colored message
            std::cout << colorCode << message << "\033[0m";
        }

        std::string ColorPrinter::GetColorCode(Color color) const
        {
            switch (color)
            {
            case Color::BLACK:
                return "\033[0;30m";
            case Color::DARK_GRAY:
                return "\033[1;30m";
            case Color::GRAY:
                return "\033[0;37m";
            case Color::LIGHT_GRAY:
                return "\033[1;37m";
            case Color::WHITE:
                return "\033[1;97m";
            case Color::DARK_RED:
                return "\033[0;31m";
            case Color::RED:
                return "\033[0;91m";
            case Color::BRIGHT_RED:
                return "\033[1;31m";
            case Color::LIGHT_RED:
                return "\033[1;91m";
            case Color::DARK_GREEN:
                return "\033[0;32m";
            case Color::GREEN:
                return "\033[0;92m";
            case Color::BRIGHT_GREEN:
                return "\033[1;32m";
            case Color::LIGHT_GREEN:
                return "\033[1;92m";
            case Color::DARK_BLUE:
                return "\033[0;34m";
            case Color::BLUE:
                return "\033[0;94m";
            case Color::BRIGHT_BLUE:
                return "\033[1;34m";
            case Color::LIGHT_BLUE:
                return "\033[1;94m";
            case Color::DARK_YELLOW:
                return "\033[0;33m";
            case Color::YELLOW:
                return "\033[0;93m";
            case Color::BRIGHT_YELLOW:
                return "\033[1;33m";
            case Color::LIGHT_YELLOW:
                return "\033[1;93m";
            case Color::DARK_MAGENTA:
                return "\033[0;35m";
            case Color::MAGENTA:
                return "\033[0;95m";
            case Color::BRIGHT_MAGENTA:
                return "\033[1;35m";
            case Color::LIGHT_MAGENTA:
                return "\033[1;95m";
            case Color::DARK_CYAN:
                return "\033[0;36m";
            case Color::CYAN:
                return "\033[0;96m";
            case Color::BRIGHT_CYAN:
                return "\033[1;36m";
            case Color::LIGHT_CYAN:
                return "\033[1;96m";
            case Color::DARK_ORANGE:
                return "\033[38;5;166m";
            case Color::ORANGE:
                return "\033[38;5;202m";
            case Color::BRIGHT_ORANGE:
                return "\033[38;5;208m";
            case Color::DARK_PURPLE:
                return "\033[38;5;92m";
            case Color::PURPLE:
                return "\033[38;5;141m";
            case Color::BRIGHT_PURPLE:
                return "\033[38;5;165m";
            case Color::DARK_BROWN:
                return "\033[38;5;130m";
            case Color::BROWN:
                return "\033[38;5;94m";
            case Color::BRIGHT_BROWN:
                return "\033[38;5;136m";
            case Color::DARK_PINK:
                return "\033[38;5;197m";
            case Color::PINK:
                return "\033[38;5;212m";
            case Color::BRIGHT_PINK:
                return "\033[38;5;225m";
            default:
                return "\033[0m"; // Default color (reset)
            }
        }

        std::string ColorPrinter::FormatString(const char* format, va_list args) const 
        {
            constexpr size_t bufferSize = 256;
            char buffer[bufferSize];
            vsnprintf(buffer, bufferSize, format, args);
            return std::string(buffer);
        }
    }
}