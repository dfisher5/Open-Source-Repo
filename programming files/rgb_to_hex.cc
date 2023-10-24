#include <iostream>
#include <sstream>
#include <iomanip>

std::string rgb_to_hex(int r, int g, int b)
{
    //Red definition
    r = std::max(0, std::min(255, r));
    //Green definition
    g = std::max(0, std::min(255, g));
    //Blue definition
    b = std::max(0, std::min(255, b));

    std::stringstream ss;
    //Set string stream equal to red, green, and blue values
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    //Return string stream
    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
