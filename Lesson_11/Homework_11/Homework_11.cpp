#include <iostream>

int const ROWS = 3;
int const COLUMNS = 3;


bool find(int arr_2d[ROWS][COLUMNS], int toFind){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (arr_2d[i][j] == toFind) return true;
        }
    }
    return false;
}

void task_1() {
    int matrix[ROWS][COLUMNS] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}
    };

    int toFind = 7;

    std::cout << std::boolalpha << find(matrix, toFind) << std::endl;
}

bool isSorted(const int* arr, int size) {
    int prev_number = *arr;
    for (int i = 1; i < size; i++) {
        if (prev_number > arr[i]) return false;
        prev_number = arr[i];
    }
    return true;
}

void task_2() {
    int const size = 10;
    int arr[size] = { 1,2,3,4,15,6,7,8,9,10 };
    std::cout << std::boolalpha << isSorted(arr, size) << std::endl;
}

void printArr(int arr_2d[ROWS][COLUMNS]) {
    for (int j = COLUMNS - 1; j >= 0; j--) {
        for (int i = 0; i < ROWS; i++) {
            std::cout << arr_2d[i][j]  << " ";
        }
    }
}

void task_3() {
    int matrix[ROWS][COLUMNS] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11}
    };

    printArr(matrix);
}

int main()
{
    //task_1();
    //task_2();
    //task_3();
}

