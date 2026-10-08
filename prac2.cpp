#include <iostream>
#include <cmath>
int main() {
 std::cout << "Hi, I am here to help you calculate the hypotenuse of a right angled triangle " << "\n";
double a, b, c;

std::cout << "Enter side a: ";
std::cin >> a;

std::cout << "Enter side b: ";
std::cin >> b;

c = sqrt(pow(a, 2) + pow(b, 2));

std::cout << "The hypotenuse of your right angle triangle is " << c << "\n";

    return 0;
}