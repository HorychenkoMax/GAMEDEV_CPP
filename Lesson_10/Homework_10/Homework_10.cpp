#include <iostream>

void swap(int& a, int& b) {
    int c = b;
    b = a;
    a = c;
}
void swap(int* a, int* b) {
    int c = *b;
    *b = *a;
    *a = c;
}

void task_1() {
    int a = 5;
    int b = 10;
    std::cout << "a: " << a << " b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    swap(&a, &b);
    std::cout << "a: " << a << " b: " << b << std::endl;
}

bool find(const int* arr, int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (*arr + i == elem) return true;
    }
    return false;
}

void task_2() {
    int arr[5] = {1,2,3,4,5};
    int number = 2;
    std::cout << std::boolalpha << find(arr, 5, number) << std::endl;
}

bool calculateSum(const double* arr, int arrSize, double& sum) {
    if (arrSize <= 0) return false;
    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    return true;
}

void task_3() {
    double arr[5] = { 1,2.6,3,4,5 };
    double sum = 0;
    std::cout << std::boolalpha << calculateSum(arr, 5, sum) << std::endl;
    std::cout << sum;
}

int main()
{
    task_1();
    task_2();
    task_3();

}

