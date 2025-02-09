#include <iostream>



//Sort in ascending way using the bubble sort algorithm
//Input:  5 1 9 7 3
//Output: 1 3 5 7 9
void bubbleSort(int arr[], int size)
{
    for (int j = 0; j < size; j++) {
        for (int i = size - 1; i > j; i--) {
            if (arr[i - 1] > arr[i]) {
                std::swap(arr[i - 1], arr[i]);
            }
        }
    }
}

constexpr unsigned int ROWS = 3;
constexpr unsigned int COLUMNS = 3;

void print(int arr[], int size);
void print(int arr[ROWS][COLUMNS]);

enum class SortingDirection
{
    ByRows,
    ByColumns
};

//Sort 2d array using any algorithm (custom quicksort, std::sort, implemented above Bubble Sort
// or using new implementation in-place)
//Input: ByRows
// 1, 5, 4
// 3, 8, 6
// 9, 5, 1
//Output:
// 1, 4, 5
// 3, 6, 8
// 1, 5, 9

//Input: ByColumns
// 1, 5, 4
// 3, 8, 6
// 9, 5, 1
//Output:
// 1, 5, 1
// 3, 5, 4
// 9, 8, 6

void sort(int arr[ROWS][COLUMNS], SortingDirection sortingDirection)
{
    if (sortingDirection == SortingDirection::ByRows) {
        for (int i = 0; i < ROWS; i++) {
            bubbleSort(arr[i], COLUMNS);
        }
        print(arr);
    }
    
}


void task_1() {
    const int size = 5;
    int arr[size] = { 5, 1, 9, 7, 3 };
    bubbleSort(arr, size);
    print(arr, size);
}

void task_2() {
    int arr[ROWS][COLUMNS] = { 1, 5, 4,
                               3, 8, 6,
                               9, 5, 1 };
    sort(arr, SortingDirection::ByRows);
}

int main()
{
    task_2();


    return 0;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print(int arr[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}