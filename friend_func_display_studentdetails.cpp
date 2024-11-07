#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    string name;
    string department;
    string course;

public:
    Student(int a, string n, string dept, string crs) 
        : age(a), name(n), department(dept), course(crs) {}

    friend void displayStudentDetails(const Student& s);
};

void displayStudentDetails(const Student& s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student student(20, "Alice", "CS", "DS");
    displayStudentDetails(student);

    return 0;
}
