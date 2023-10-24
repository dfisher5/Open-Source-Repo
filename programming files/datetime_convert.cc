#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

// main functin - Tushar Asthana 
int main()
{
    // string to display date 
    std::string date_str = "2022-03-17 10:45:30";
    // array object
    std::tm date_obj = {};
    std::istringstream ss(date_str);
    //formatting of the 
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");

    std::stringstream formatted_date_ss;
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    std::string formatted_date = formatted_date_ss.str();

    // output 
    std::cout << formatted_date << std::endl;

    return 0;
}
