#include <iostream>
#include<cmath>
using namespace std;
class rect;
class polar
{
    double mag;
    double ang;
    public:
    polar(float a,float b)
    {
        mag=a;
        ang=b;
    }
    double get()
    {
        return mag;
    }
    double angle()
    {
        return ang;
    }
    void display()
    {
        cout<<"magnitude:"<<mag<<"angle:"<<ang<<endl;
    }
};
class rect
{
    double real,img,r,i;
    public:
    rect(polar m)
    {
        r=m.get();
        i=(m.angle())*(3.14/180);
        real=r*cos(i);
         img=r*sin(i);
    }
    void display()
    {
            cout<<"the complex:"<<real<<"+"<<img<<"j"<<endl;
    }
};
int main()
{
    double e,f;
    cout<<"enter the magnitude and angle:"<<endl;
    cin>>e>>f;
    polar p1(e,f);
    rect p2=p1;
    p1.display();
    p2.display();
    return 0;
}
