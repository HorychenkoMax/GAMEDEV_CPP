#include <iostream>
#include <iomanip>

int main()
{
    /*
    //Task 1
    int number_1 = 0;
    int number_2 = 0;

    std::cout << "Enter integer 1: ";
    std::cin >> number_1;

    std::cout << "Enter integer 2: ";
    std::cin >> number_2;

    int number_3 = number_1;
    number_1 = number_2;
    number_2 = number_3;

    std::cout << "Integer 1: " << number_1 << std::endl;
    std::cout << "Integer 2: " << number_2 << std::endl;
    */
    /*
    //Task 2
    double double_number = 569867.1234567567;
    std::cout << "double number: " << double_number << std::endl;
    std::cout << "int number: " << static_cast<int>(double_number) << std::endl;

    //Task 3
    std::cout << std::setw(20) << std::setfill('$') << std::right << double_number << std::endl;
    std::cout << std::fixed << std::setprecision(2) << double_number << std::endl;
    std::cout << std::fixed << std::setprecision(5) << double_number << std::endl;
    std::cout << std::fixed << std::setprecision(10) << double_number << std::endl;

    std::cout << std::scientific << double_number << std::endl;
    std::cout << std::defaultfloat << double_number << std::endl;

    //Task 5
    bool myNumber = false;
    std::cout << "Enter the number: ";
    std::cin >> myNumber;
    std::cout << std::boolalpha << myNumber << std::endl;
    */

    //Task 4
    enum class WeekDay {
        Monday = 1,
        Tuesday = 2,
        Wednesday = 3,
        Thursday = 4,
        Friday = 5,
        Saturday = 6,
        Sunday = 7
    };

    std::cout << static_cast<int>(WeekDay::Monday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Tuesday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Wednesday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Thursday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Friday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Saturday) << std::endl;
    std::cout << static_cast<int>(WeekDay::Sunday) << std::endl;
}

