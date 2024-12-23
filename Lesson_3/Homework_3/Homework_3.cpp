#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main()
{
    /*
    //Task 1
    int seconds = 0;
    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    std::cout << hours << " hour " << minutes << " minutes " << seconds << " seconds\n";
    
    //Task 2
    double number_1 = 0;
    double number_2 = 0;
    double number_3 = 0;
    std::cout << "Enter 3 numbers: ";
    std::cin >> number_1 >> number_2 >> number_3;

    std::cout << "sum: " << number_1 + number_2 + number_3 << std::endl;
    std::cout << "produxt: " << number_1 * number_2 * number_3 << std::endl;
    std::cout << "arithmetic mean: " << (number_1 + number_2 + number_3)/3.0 << std::endl;
    
    //Task 3
    bool lessThan, equal, moreThan, lessOrEqual;
    double number_1 = 0;
    double number_2 = 0;
    std::cout << "Enter 2 numbers: ";
    std::cin >> number_1 >> number_2;
    lessThan = number_1 < number_2;
    equal = number_1 == number_2;
    moreThan = number_1 > number_2;
    lessOrEqual = number_1 <= number_2;
    std::cout << std::boolalpha << "Number 1(" << number_1 << ") less than number 2(" << number_2 << ") " << lessThan  << std::endl;
    std::cout << std::boolalpha << "Number 1(" << number_1 << ") is equal number 2(" << number_2 << ") " << equal << std::endl;
    std::cout << std::boolalpha << "Number 1(" << number_1 << ") more than number 2(" << number_2 << ") " << moreThan << std::endl;
    std::cout << std::boolalpha << "Number 1(" << number_1 << ") less or equal than number 2(" << number_2 << ") " << lessOrEqual << std::endl;
    
    //Task 4
    double width = 0, height = 0;
    std::cout << "Enter width and height: ";
    std::cin >> width >> height;
    std::cout << "area: " << height * width << std::endl;
    std::cout << "perimeter: " << 2 * (width + height) << std::endl;
    */
    //Task 5
    double r = 0;
    std::cout << "Enter radius: ";
    std::cin >> r;
    std::cout << "area: " << M_PI * r * r << std::endl;
    std::cout << "Circumference: " << 2 * M_PI * r;
}

