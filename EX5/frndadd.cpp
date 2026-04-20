#include <iostream>
using namespace std;
class arith {
    int a;
public:
    arith() {
        a = 0;
    }
    ~arith() {
    }
    arith(int b) {
        a = b;
    }
    friend arith operator*(int x, arith y);
    friend arith operator*(arith y, int x);
    int get() {
        return a;
    }
};
arith operator*(int x, arith y) {
    arith h;
    h.a = x * y.a;
    return h;
}
arith operator*(arith y, int x) {
    arith h;
    h.a = y.a * x;
    return h;
}
int main() {
    int b = 5;
    int value;
    arith i;
    arith j = b;
    cout << "enter the value:" << endl;
    cin >> value;
    i = value;
    arith c, d;
    c = 8 * i;
    d = j * 8;
    cout << "c value is :"<<c.get()<< endl;
    cout << "d value is :"<<d.get()<< endl;
    return 0;
}
