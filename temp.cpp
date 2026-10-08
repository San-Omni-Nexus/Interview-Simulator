#include <iostream>
int main () {
double temp;
char unit;

std::cout << "Welcomme to the Omni Nexus Temperature Conversion Program\n";
std::cout << "What conversion do you want to do?\n";
std::cout << "From Celsius to Kelvin, enter K\n";
std::cout << "From Kelvin to Celsius, enter C\n";
std::cin >> unit;

if(unit == 'K' || unit == 'k'){
    std::cout << "Enter temperature in Celsius:";
    std::cin >> temp;

    temp = (273.16 + temp);
    std::cout << "The temperature is " << temp << "K\n";
}

else if(unit == 'C' || unit == 'c') {
std::cout << "Enter temperature in Kelvin:";
std::cin >> temp;

temp  = (temp - 273.16);
std::cout << "The temperature is " << temp << "degree Celsius\n";
}

else{
    std::cout << "Please enter either K or C\n";
}
    return 0;
}