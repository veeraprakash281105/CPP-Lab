#include <iostream>
using namespace std;
class Distance
{
    int m, cm;
public:
    Distance()
    {
        m = 0;
        cm = 0;
    }
Distance(int a, int b)
{
        m = a;
        cm = b;
}
Distance operator++()
{
        ++m;
        ++cm;
        return Distance(m, cm);
}
Distance operator++(int)
    {
        Distance temp;
        temp.m = m;
        temp.cm = cm;
        m++;
        cm++;
        return temp;
    }
Distance operator--()
{
        --m;
        --cm;
        return Distance(m, cm);

}

Distance operator--(int)
{
        Distance temp;
        temp.m = m;
        temp.cm = cm;
        m--;
        cm--;
        return temp;
}
void display()
{
        cout << m << "m " << cm << "cm" << endl;
}
};

int main() {
    Distance d1(6, 30);
    d1.display();
    Distance d2 = ++d1;
    cout << "after pre increment: ";
    d2.display();
    Distance d3 = d2++;
    cout << "after post increment: ";
    d3.display();
    Distance d4 = --d1;
    cout << "after pre decrement: ";
    d4.display();
    Distance d5 = d4--;
    cout << "after post decrement: ";
    d5.display();
    return 0;
}
