#include<iostream>
using namespace std;
class voltage
{
    int v;
    public:
    voltage()
    {
        v=100;
    }
    ~voltage()
    {

    }
    void resistor(int r1)
    {
        float i,a;
        i=v/r1;
        a=i*r1;
        cout<<"the voltage in one resistor:"<<v<<endl;
    }
    void resistor(int r1,float r2)
    {
        float b;
        int r=r1+r2;
        b=v/r;
        float v1=b*r1;
        float v2=b*r2;
        cout<<"the voltage in r1:"<<v1<<endl;
        cout<<"the voltage in r2:"<<v2<<endl;
    }
    void resistor(float r1,int r2,float r3)
    {
        float c,v1,v2,v3;
        c=v/(r1+r2+r3);
        v1=c*r1;
        v2=c*r2;
        v3=c*r3;
        cout<<"the voltage across r1:"<<v1<<endl;
        cout<<"the voltage across r2:"<<v2<<endl;
        cout<<"the voltage across r3:"<<v3<<endl;
    }
};
int main()
{
    voltage l;
    l.resistor(6);
    l.resistor(16,8.57);
    l.resistor(6.348,8,34.24);
    return 0;
}
