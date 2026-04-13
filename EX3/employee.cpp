#include<iostream>
using namespace std;

class Employ {
    int num, bs, da, ns;
    string name;

public:
    void getdetails() {
        cout << "Enter the name: ";
        cin>>name;
        cout << "Enter the employee number: ";
        cin >> num;
        cout << "Enter the basic salary: ";
        cin >> bs;
        cout << "Enter DA (dearness allowance):";
        cin >> da;
        ns = bs + da;
    }

    void display() {
        cout << "\n The name is:" << name << endl;
        cout << "Employee number:" << num <<endl;
        cout << "Basic salary:"<< bs << endl;
        cout << "Dearness allowance:"<<da<< endl;
        cout << "Net salary:"<<ns<<endl;
    }

    int getNetSalary() {
        return ns;
    }

    int getEmpNumber() {
        return num;
    }
};
void maxsal(Employ E[], int size) {
    int max = E[0].getNetSalary();
    int maxEmpNo = E[0].getEmpNumber();

    for (int i = 1; i < size; i++) {
        if (E[i].getNetSalary() > max) {
            max = E[i].getNetSalary();
            maxEmpNo = E[i].getEmpNumber();
        }
    }
    cout << "The maximum salary is:"<< max<< "and the employee number is: " << maxEmpNo << endl;
}
void minsal(Employ E[], int size) {
    int min = E[0].getNetSalary();
    int minEmpNo = E[0].getEmpNumber();

    for (int i = 1; i < size; i++) {
        if (E[i].getNetSalary() < min) {
            min = E[i].getNetSalary();
            minEmpNo = E[i].getEmpNumber();
        }
    }

    cout << "The minimum salary is:"<< min<< " and the employee number is:"<< minEmpNo << endl;
}

int main() {
    Employ E[4];

    cout << "Enter details for 4 employees:\n"<<endl;
    for (int i = 0; i < 4; i++) {
        cout << "\nEmployee " << i + 1 << ":\n"<<endl;
        E[i].getdetails();
    }

    cout<<"\nDisplaying all employee detail:\n"<<endl;
    for (int i = 0; i < 4; i++) {
        E[i].display();
    }

    maxsal(E, 4);
    minsal(E, 4);

    return 0;
}
