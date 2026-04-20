[23bee059@mepcolinux c++]$cat template.cpp
#include<iostream>
#include<cmath>
using namespace std;
template<class T>
void roots(T a,T b,T c)
{
   float y=(b*b);
   float d=(y-4*a*c);
   float x=(-b)/(2*a);
   if(d>0)
   {
      float e= (-b + sqrt(d))/(2*a);
      float f= (-b - sqrt(d))/(2*a);
      cout<<"The real and distinct roots are:"<<e<<"  and  "<<f<<endl;
   }
   else if(d<0)
   {
      float g = (sqrt(-d))/(2*a);
      cout<<"The real and imagiary roots are:"<<x<<"+"<<g<<"j"<<"  and\n  "<<x<<"-"<<g<<"j"<<endl;
   }
   else
   {
      float e= (-b + sqrt(d))/(2*a);
      cout<<"The roots are real and equal is:"<<e<<endl;
   }
};
int main()
{
   roots(1,5,6);
   roots(7.0,5.0,8.0);
   roots(4,4,1);
   return 0;
}
