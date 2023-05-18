#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int number;
    string name;

public:
    Student(int num, const string& n) : number(num), name(n) {}

    void display() const {
        cout << "Student Number: " << number << endl;
        cout << "Student Name: " << name << endl;
    }
};

class Exam {
protected:
    string subject;
    int minMarks;
    int maxMarks;
    int obtainedMarks;

public:
    Exam(const string& sub, int min, int max, int obtained)
        : subject(sub), minMarks(min), maxMarks(max), obtainedMarks(obtained) {}

    void display() const {
        cout << "Subject: " << subject << endl;
        cout << "Minimum Marks: " << minMarks << endl;
        cout << "Maximum Marks: " << maxMarks << endl;
        cout << "Obtained Marks: " << obtainedMarks << endl;
    }
};

class Result : public Student, public Exam {
public:
    Result(int num, const string& name, const string& sub, int min, int max, int obtained)
        : Student(num, name), Exam(sub, min, max, obtained) {}

    void display() const {
        Student::display();
        Exam::display();
    }
};

int main() {
    Result result(123, "Shivam", "Math", 0, 100, 85);
    result.display();

    return 0;
}