#include<iostream>
using namespace std;
class stack
{
  int count,i=0,flag=0;
  int a[3];
   public:
  void getdata()
  {
     cout<<"Enter the no of elements:";
     cin>>count;
     for(i=0;i<count;i++)
     {
        cin>>a[i];
     }
  }
  void push()
  {
    try{
       try{
          if(i<3)
           {
              cout<<"Enter a no to push:"<<endl;
              cin>>a[i];
              i=i+1;
              flag=1;
           }
          else
          {throw 0;}
       }
     catch(int m)
     {
        cout<<"stack overflow \n";
        throw;
     }
    }
    catch(...)
    {
       cout<<"EXCEPTION HANDLED\n";
    }
  }
  void pop()
  {
     try{
        try{
           i=i-1;
           if(i<0)
          {throw 0;}
           else
           {
            cout<<"THe poped element is "<<a[i]<<endl;
            a[i]='\0';
            }
        }
        catch(int n)
        {if(i<0 && flag==1)
           {cout<<"Stack underflow\n";
           throw;}
         if(i<0 && flag==0)
         {cout<<"trying to pop before pushing\n";
            throw;}
        }
     }
     catch(...)
     {
        cout<<"EXCEPTION HANDLED\n";
     }
  }
};
  int main()
  {
     stack s1;
     s1.getdata();
     s1.push();
     s1.push();
     stack s2,s3;
     s2.getdata();
     s2.push();
     s2.pop();
     s2.pop();
     s2.pop();
     s2.pop();
     s3.pop();
     return 0;
  }
