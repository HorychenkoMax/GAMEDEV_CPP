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
    std::cout << std::boolalpha << find(arr, 5, number);
}

int main()
{
    task_1();
    task_2();

}

