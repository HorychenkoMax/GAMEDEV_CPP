#include <iostream>

int main()
{
    /*
    //Task 1
    double num_1 = 0, num_2 = 0, num_3 = 0;
    std::cout << "Enter 3 numbers: ";
    std::cin >> num_1 >> num_2 >> num_3;
    if (num_1 >= num_2 && num_1 >= num_3) {
        std::cout << num_1;
    }
    else if (num_2 >= num_1 && num_2 >= num_3) {
        std::cout << num_2;
    }
    else {
        std::cout << num_3;
    }
    
    //Task 2
    int number = 0;
    std::cout << "enter your number: ";
    std::cin >> number;
    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << "The number is completely divisible by both 5 and 11 at the same time";
    }
    else
    {
        std::cout << "A number is not completely divisible by both 5 and 11 at the same time";
    }
    
    //Task 3
    int ang_1 = 0, ang_2 = 0, ang_3 = 0;
    std::cout << "enter the values of the three angles: ";
    std::cin >> ang_1 >> ang_2 >> ang_3;
    if (ang_1 + ang_2 + ang_3 == 180) {
        std::cout << "the triangle is exist";
    }
    else
    {
        std::cout << "the triangle does not exist";
    }
    
    //Task 4
    int number = 0;
    std::cout << "enter the number from 1 to 12: ";
    std::cin >> number;
    switch (number)
    {
    case 12:
    case 1:
    case 2:
        std::cout << "Winter";
        break;
    case 3:
    case 4:
    case 5:
        std::cout << "Spring";
        break;
    case 6:
    case 7:
    case 8:
        std::cout << "Summer";
        break;
    case 9:
    case 10:
    case 11:
        std::cout << "Autumn";
        break;
    default:
        std::cout << "ERROR";
        break;
    }
    
    //Task 5
    int num_1 = 0, num_2 = 0;
    std::cout << "Enter 2 numbers: ";
    std::cin >> num_1 >> num_2;
    int smaller = (num_1 <= num_2) ? num_1 : num_2;
    std::cout << "smaller is: " << smaller;
    */
    //Task 6
    enum class Month
    {
        January = 1,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    int number = 0;
    std::cout << "Enter the number: ";
    std::cin >> number;
    switch (number)
    {
    case static_cast<int>(Month::January):
        std::cout << "January";
        break;
    case static_cast<int>(Month::February):
        std::cout << "February";
        break;
    case static_cast<int>(Month::March):
        std::cout << "March";
        break;
    case static_cast<int>(Month::April):
        std::cout << "April";
        break;
    case static_cast<int>(Month::May):
        std::cout << "May";
        break;
    case static_cast<int>(Month::June):
        std::cout << "June";
        break;
    case static_cast<int>(Month::July):
        std::cout << "July";
        break;
    case static_cast<int>(Month::August):
        std::cout << "August";
        break;
    case static_cast<int>(Month::September):
        std::cout << "September";
        break;
    case static_cast<int>(Month::November):
        std::cout << "November";
        break;
    case static_cast<int>(Month::December):
        std::cout << "December";
        break;
    default:
        std::cout << "ERROR";
        break;
    }
}

