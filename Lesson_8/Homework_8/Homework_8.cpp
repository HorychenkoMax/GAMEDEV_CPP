#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

void numbers(int number, int& plus, int& minus, int& zeros) {
    int current_number = 0;
    for (int i = 0; i < number; i++) {
        std::cout << "Enter the number: ";
        std::cin >> current_number;
        if (current_number > 0) {
            plus++;
        }
        else if (current_number < 0) {
            minus++;
        }
        else
        {
            zeros++;
        }
    }
}

int factorial(int count) {
    int result = 1;
    for (int i = 2; i <= count; i++) {
        result *= i;
    }
    return result;
}

int factorial_by_recursion(int count) {
    if (count == 0 || count == 1) return 1;

    return count * factorial_by_recursion(count - 1);
}

float getArea(float radius) {
    return M_PI * radius * radius;
}

float getCircumference(float radius) {
    return 2 * M_PI * radius;
}

int main()
{
    
    std::cout << "Task 1\n";
    int number = 0, plus = 0, minus = 0, zeros = 0;
    while (true) {
        std::cout << "Enter number of numbers: ";
        std::cin >> number;
        if (number > 0) break;
        std::cout << "number should be more then 0\n";
    }
    numbers(number, plus, minus, zeros);
    std::cout << "More then 0: " << plus << std::endl;
    std::cout << "Lesse then 0: " << minus << std::endl;
    std::cout << "Count of 0: " << zeros << std::endl;
    
    std::cout << std::endl;
    std::cout << "Task 2\n";
    int count = 0;
    while (true) {
        std::cout << "Enter the number: ";
        std::cin >> count;
        if (count > 0) break;
        std::cout << "number should be more then 0\n";
    }
    std::cout << "Factorial: " << factorial(count) << std::endl;
    std::cout << "Factorial by recursion: " << factorial_by_recursion(count) << std::endl;
    
    std::cout << std::endl;
    std::cout << "Task 3\n";
    float r = 0;
    while (true) {
        std::cout << "Enter radius: ";
        std::cin >> r;
        if (r > 0) break;
        std::cout << "radius should be more then 0\n";
    }
    std::cout << "Area: " << getArea(r) << std::endl;
    std::cout << "Circumference: " << getCircumference(r) << std::endl;
}
