#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    virtual void get()
    {
        cout<<"Enter the value of a:";
        cin>>a;
    }
    virtual void display()
    {
        cout<<"a value is:"<<a<<endl;
    }
};
class B:public A
{
    public:
    int b;
    void get()
    {
        cout<<"Enter the value of b:";
        cin>>b;
    }
    void display()
    {
        cout<<"b value is:"<<b<<endl;
    }
};
class C:public B
{
    public:
    int c;
    void get()
    {
        cout<<"Enter the value of c:";
        cin>>c;
    }
    void display()
    {
        cout<<"c value is:"<<c<<endl;
    }
};
class D:public C
{
    public:
    int d;
    void get()
    {
        cout<<"Enter the value of d:";
        cin>>d;
    }
    void display()
    {
        cout<<"d value is:"<<d<<endl;
    }
};
class E:public D
{
    public:
    int e;
    void get()
    {
        cout<<"Enter the value of e:";
        cin>>e;
    }
    void display()
    {
        cout<<"e value is:"<<e<<endl;
    }
};
int main()
{
    A* aa;
    A f;
    aa = &f;
    aa->get();
    aa->display();
    B g;
    aa = &g;
    aa->get();
    aa->display();
    C h;
    aa = &h;
    aa->get();
    aa->display();
    D i;
    aa = &i;
    aa->get();
    aa->display();
    E j;
    aa = &j;
    aa->get();
    aa->display();
    return 0;
}
