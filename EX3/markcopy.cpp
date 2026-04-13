#include <iostream>
#include <cstring>
using namespace std;

class student {
    int num, marks;
    char name[100];

public:
    student(int a, int b, const char* c) {
        num = a;
        marks = b;
        strcpy(name, c);
    }

    void display() {
        cout << "The register number: " << num << endl;
        cout << "The marks is: " << marks << endl;
        cout << "The name is: " << name << endl;
    }

    student(const student &s) {
        strcpy(name, s.name);
        num = s.num;
        marks = s.marks;
    }
};

int main() {
    student s(20225, 99, "Prakash");
    student s1(s);
    student s2 = s;
    s.display();
    s1.display();
    s2.display();
    return 0;
}
