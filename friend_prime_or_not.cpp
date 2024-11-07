#include <iostream>
using namespace std;

class Friend;

class Student {
public:
    int number;
    Student(int num) : number(num) {}

    friend class Friend;
};

class Friend {
public:
    bool isPrime(Student s) {
        if (s.number <= 1) return false;
        for (int i = 2; i * i <= s.number; i++) {
            if (s.number % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Student student(29);
    Friend checker;

    if (checker.isPrime(student)) {
        cout << student.number << " is a prime number." << endl;
    } else {
        cout << student.number << " is not a prime number." << endl;
    }

    return 0;
}
