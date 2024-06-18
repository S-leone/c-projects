#include <iostream>
#include <cmath>

double gethypotenuse(double side1, double side2);

int main() {
    double side1, side2;
    
    std::cout << "Enter the length of side1: ";
    std::cin >> side1;
    
    std::cout << "Enter the length of side2: ";
    std::cin >> side2;
    
    double hypotenuse = gethypotenuse(side1, side2);
    
    std::cout << "The hypotenuse of the right-angled triangle is: " << hypotenuse << std::endl;
    
    return 0;
}

double gethypotenuse(double side1, double side2) {
    return sqrt((side1 * side1) + (side2 * side2));
}