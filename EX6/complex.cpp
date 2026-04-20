#include <iostream>
#include <cmath>
using namespace std;
class Conversion
{
    int a, b;
public:
    Conversion(int r = 0, int i = 0)
    {
        a = r;
        b = i;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
    Conversion operator-(Conversion c)
    {
        Conversion temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
    Conversion operator*(Conversion c)
    {
        float mag1 = sqrt(a * a + b * b);
        float ang1 = atan2(b, a);
        float mag2 = sqrt(c.a * c.a + c.b * c.b);
        float ang2 = atan2(c.b, c.a);
        float resultMag = mag1 * mag2;
        float resultAng = ang1 + ang2;
        Conversion temp;
        temp.a = (resultMag * cos(resultAng));
        temp.b = (resultMag * sin(resultAng));
        return temp;
    }
};
int main()
{
    Conversion c1(10, 8);
    Conversion c2(5, 9);
    Conversion c = c1 - c2;
    cout << "Subtraction is: ";
    c.display();
    Conversion c3 = c1 * c2;
    cout << "Multiplication is: ";
    c3.display();
    return 0;
}
