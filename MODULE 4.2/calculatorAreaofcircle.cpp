#include <iostream>
#include <cmath>

const double PI = 3.14159;


double calculateArea(double length, double breadth) {
    return length * breadth;
}


double calculateArea(double base, double height, char triangle) {
    return 0.5 * base * height;
}


double calculateArea(double radius, char circle) {
    return PI * pow(radius, 2);
}

int main() {
    double length, breadth, base, height, radius;

    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    double rectangleArea = calculateArea(length, breadth);
    std::cout << "Area of the rectangle: " << rectangleArea << std::endl;

    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> base >> height;
    double triangleArea = calculateArea(base, height, 'T');
    std::cout << "Area of the triangle: " << triangleArea << std::endl;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double circleArea = calculateArea(radius, 'C');
    std::cout << "Area of the circle: " << circleArea << std::endl;

    return 0;
}

