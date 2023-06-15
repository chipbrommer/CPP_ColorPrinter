#include "cpp_color_printer.h"

int main()
{
    Essentials::Utilities::ColorPrinter printer;

    printer.Print(Essentials::Utilities::Color::RED,            "Error\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_RED,     "Bright Red\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_RED,      "Light Red\n");
    printer.Print(Essentials::Utilities::Color::DARK_RED,       "Dark Red\n");
    printer.Print(Essentials::Utilities::Color::GREEN,          "Success\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_GREEN,   "Bright Green\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_GREEN,    "Light Green\n");
    printer.Print(Essentials::Utilities::Color::DARK_GREEN,     "Dark Green\n");
    printer.Print(Essentials::Utilities::Color::BLUE,           "Blue\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_BLUE,    "Bright Blue\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_BLUE,     "Light Blue\n");
    printer.Print(Essentials::Utilities::Color::DARK_BLUE,      "Dark Blue\n");
    printer.Print(Essentials::Utilities::Color::YELLOW,         "Info\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_YELLOW,  "Bright Yellow\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_YELLOW,   "Light Yellow\n");
    printer.Print(Essentials::Utilities::Color::DARK_YELLOW,    "Dark Yellow\n");
    printer.Print(Essentials::Utilities::Color::MAGENTA,        "Magenta\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_MAGENTA, "Bright Magenta\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_MAGENTA,  "Light Magenta\n");
    printer.Print(Essentials::Utilities::Color::DARK_MAGENTA,   "Dark Magenta\n");
    printer.Print(Essentials::Utilities::Color::CYAN,           "Cyan\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_CYAN,    "Bright Cyan\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_CYAN,     "Light Cyan\n");
    printer.Print(Essentials::Utilities::Color::DARK_CYAN,      "Dark Cyan\n");
    printer.Print(Essentials::Utilities::Color::WHITE,          "White\n");
    printer.Print(Essentials::Utilities::Color::LIGHT_GRAY,     "Light Gray\n");
    printer.Print(Essentials::Utilities::Color::GRAY,           "Gray\n");
    printer.Print(Essentials::Utilities::Color::DARK_GRAY,      "Dark Gray\n");
    printer.Print(Essentials::Utilities::Color::ORANGE,         "Orange\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_ORANGE,  "Bright Orange\n");
    printer.Print(Essentials::Utilities::Color::DARK_ORANGE,    "Dark Orange\n");
    printer.Print(Essentials::Utilities::Color::PURPLE,         "Purple\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_PURPLE,  "Bright Purple\n");
    printer.Print(Essentials::Utilities::Color::DARK_PURPLE,    "Dark Purple\n");
    printer.Print(Essentials::Utilities::Color::BROWN,          "Brown\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_BROWN,   "Bright Brown\n");
    printer.Print(Essentials::Utilities::Color::DARK_BROWN,     "Dark Brown\n");
    printer.Print(Essentials::Utilities::Color::PINK,           "Pink\n");
    printer.Print(Essentials::Utilities::Color::BRIGHT_PINK,    "Bright Pink\n");
    printer.Print(Essentials::Utilities::Color::DARK_PINK,      "Dark Pink\n");
    printer.Print(Essentials::Utilities::Color::BLACK,          "Black\n");

	return 0;
}
