#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    // Constructor
    Student(string n, int r, char sec, int math, int c) {
        name = n;
        roll = r;
        section = sec;
        math_marks = math;
        cls = c;
    }
};

int main() {
    Student student1("John", 1, 'A', 90, 10);
    Student student2("Alice", 2, 'B', 95, 10);
    Student student3("Bob", 3, 'C', 88, 10);

    // Compare math marks
    Student highestMathMarksStudent = student1;

    if (student2.math_marks > highestMathMarksStudent.math_marks) {
        highestMathMarksStudent = student2;
    }

    if (student3.math_marks > highestMathMarksStudent.math_marks) {
        highestMathMarksStudent = student3;
    }

    // Print the name of the student with the highest math marks
    cout << "Student with the highest math marks: " << highestMathMarksStudent.name << endl;

    return 0;
}
