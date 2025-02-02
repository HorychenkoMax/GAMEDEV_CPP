#include <iostream>

void printArr(const int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void translateArray(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] > 0) {
            arr[i] *= 2;
        }
        else
        {
            arr[i] = 0;
        }
    }
}

void task_1() {
    const int arr_size = 10;
    int arr[arr_size];

    for (int i = 0; i < arr_size; i++) {
        std::cout << "Enter number: ";
        std::cin >> arr[i];
    }

    printArr(arr, arr_size);
    translateArray(arr, arr_size);
    printArr(arr, arr_size);
}

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        int ascii_code = static_cast<int>(str[i]);
        if (ascii_code >= 97 && ascii_code <= 122) {
            str[i] -= 32;
        }
    }
}

void task_2() {
    char my_string[10];
    std::cout << "Enter your string(less then 10 symbol): ";
    std::cin >> my_string;
    std::cout << std::endl;
    std::cout << my_string;
    toUppercase(my_string);
    std::cout << std::endl;
    std::cout << my_string;
}

bool isPalindrom(const char str[]) {
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        size++;
    }


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[size - 1 - i]) return false;
    }
    return true;
}

void task_3() {
    char my_string[10];
    std::cout << "Enter your string(less then 10 symbol): ";
    std::cin >> my_string;
    std::cout << std::boolalpha << my_string << " -> " << isPalindrom(my_string);
}

int main()
{
    //task_1();
    //task_2();
    task_3();
}
