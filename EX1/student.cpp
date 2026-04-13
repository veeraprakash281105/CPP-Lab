#include<iostream>
#include<string>
using namespace std;
class student
{
   string name;
   int age;
   float height,weight,mark;
   public:
   student()
   {
      name=" ";
      age=0;
      height=0;
      weight=0;
      mark=0;
   }
   ~student()
   {
   }
   void getdata()
   {
      cout<<"enter the name:";
      cin>>name;
      cout<<"enter the age:";
      cin>>age;
      cout<<"enter height,weight,mark:";
      cin>>height>>weight>>mark;
   }
   void printdata()
   {
      cout<<"name :"<<name<<endl;
      cout<<"age :"<<age<<endl;
      cout<<"height :"<<height<<endl;
      cout<<"weight :"<<weight<<endl;
      cout<<"mark :"<<mark<<endl;
   }};
   int main()
   {
      student s1;
      s1.getdata();
      s1.printdata();
      return 0;
   }
