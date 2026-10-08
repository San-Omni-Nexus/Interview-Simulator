#include <iostream>
int main (){
std::string name;
int age;
std::cout << "What is your full name? ";
std::getline(std::cin, name);
// std::getline() is used to read inputs with spaces.\
// we use std::cin >> std:ws to get rid of any leading whitespaces.
std::cout << "How old are you? ";
std::cin >> age;

    std::cout << "Welcome,I am Nexus." << "\n";
    std::cout << "Hello, " << name << "." << "\n";
    std::cout << "You are " << age << "years old." << "\n";
    return 0;
}
