#include <iostream>
int main (){
char op ;
double num1 ;
double num2 ;
double result;


std::cout << "Welcome to the Omni-Nexus Calculator." << "\n" ;
std::cout << "What Calculation do you want to perform? " << "\n" ;
std::cout << "Enter either (+ - * /):" ;
std::cin >> op;

std::cout << "Enter num1:" << "\n" ;
std::cin >> num1 ;

std::cout << "Enter num2:" << "\n" ;
std::cin >> num2 ;

switch (op) {
    case '+' :
    result = num1 + num2;
    std::cout << "The result is " << result << "\n" ;
    break;

    case '-' :
    result = num1 - num2 ;
    std::cout << "The result is " << result << "\n" ;

    default :
    std::cout << "Wrong Operand" ;
}



    return 0;
}
