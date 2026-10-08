#include <iostream>
int main() {
double age;
std::string Surname;
double  ID;
std::string Firstname;
std::string Institution;

std::cout << "Hello, Welcome to OMNINEXUS" "\n";
std::cout << "To proceed please fill in the following details:" "\n";

std::cout << "Enter Surname" "\n";
std::cin >> Surname;

std::cout << "Enter First name" "\n";
std::cin >> Firstname;

std::cout << "Enter Age" "\n";
std::cin >> age;

if (age >= 18) {
    std::cout << "What's the name of your institution" "\n";
    std::cin >> Institution;
}
    else {
std::cout << "Acess Denied" "\n";
return 0;
    }
    
std::cout << "Enter last three digits of student ID" "\n";
std::cin >> ID;

if ( ID >= 1 && ID <= 300) {
    std::cout << "What Service do you require " << Surname << "?" "\n"; 
}

else {
    std::cout << "Acess Denied" "\n";
    return 0;
}

    return 0; 
}