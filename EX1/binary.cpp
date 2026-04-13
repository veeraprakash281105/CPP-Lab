#include<iostream>
using namespace std;
class converter
{
   int* array;
   int size;
   public:
   converter (int a)
   {
      size=calcsize(a);
      array=new int[size];
   }
   ~converter()
   {
   }
   int calcsize(int a)
   {
      int temp = a;
      int size = 0;
      while(temp != 0)
      {
         temp = temp/2;
         size++;
      }
      return size;
   }
   void conv(int a)
   {
      int i = 0;
      while(a != 0)
      {
         array[i]=a%2;
         a=a/2;
         i++;
      }
   }
   void display()
   {
      cout<<"binary represetaion is :";
      for(int j=size-1;j>=0;j--)
      {
         cout<<array[j];
      }
      cout<<endl;
   }
};
int main()
{
   int a;
   cout<<"decimal number is:"<<endl;
   cin>>a;
   converter c1(a);
   c1.conv(a);
   c1.display();
   return 0;
}
