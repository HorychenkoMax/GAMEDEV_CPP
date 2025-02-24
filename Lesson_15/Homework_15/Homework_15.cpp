#include <iostream>
#include <vector>

struct Student
{
    std::string name = "def";
    static const int numberOfMarks = 4;
    int marks[numberOfMarks] = { 0,0,0,0 };
};

double calculation_arithmetic_mean_grades(const Student& std) {
    double result = 0;
    for (int i = 0; i < std.numberOfMarks; i++) {
        result += std.marks[i];
    }
    return result / std.numberOfMarks;
}

Student* findBestStudent(std::vector<Student>& students) {
    Student* result = &students[0];
    for (int i = 1; i < students.size(); i++) {
        if (calculation_arithmetic_mean_grades(*result) < calculation_arithmetic_mean_grades(students[i])) {

            result = &students[i];
        } 
    }
    return result;
}

int countNumberOfStudents(const std::vector<Student>& students, double grate) {
    int result = 0;
    for (int i = 0; i < students.size(); i++) {
        if (calculation_arithmetic_mean_grades(students[i]) >= grate) {

            result++;
        }
    };
    return result;
}

void arrPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main()
{/*
    Student std_1{ "Maks", {75, 100, 60, 86} };
    std::cout << "Name: " << std_1.name << std::endl;
    std::cout << "Marks: ";
    arrPrint(std_1.marks, 4);
    std::cout << std::endl;
    std::cout << "calculation of the arithmetic mean of grades: " << calculation_arithmetic_mean_grades(std_1);*/

    std::vector<Student> students;
    students.push_back(Student{ "Alice", { 85, 90, 88, 92 } });  // Середній: 88.75
    students.push_back(Student{ "Bob", {78, 85, 80, 79} });      // Середній: 80.5
    students.push_back(Student{ "Charlie", {90, 95, 92, 96} });   // Середній: 93.25 (вище 92.1)
    students.push_back(Student{ "David", {94, 96, 92, 95} });   // Середній: 94.25 (вище 92.1)
    students.push_back(Student{ "Emma", {97, 93, 94, 95} });   // Середній: 94.75 (вище 92.1)
    students.push_back(Student{ "Frank", {80, 82, 78, 85} });   // Середній: 81.25
    Student* std;
    std = findBestStudent(students);
    std::cout << std->name << std::endl;
    double grate = 92.1;
    std::cout << "number of students whose score is higher than " << grate << " are: " << countNumberOfStudents(students, grate);
    
}