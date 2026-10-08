#include <iostream>
int main (){
double age;

std::cout << "How old are you?" "\n";
std::cin >> age;
//thi is called a ternary operand and its used as an alternative for if else statements especially where there are only two outcomes.
age >= 18 ? std::cout << "Acces Granted" : std::cout << "Acess Denied" "\n";





    return 0;
}