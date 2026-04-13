#include<iostream>
using namespace std;
 class item
{
   int price,code,quant;
   string name;
   public:
   item()
   {
      price=0;
      code=0;
      quant=0;
      name="";
   }
   ~item()
   {


   }
   void getdata()
   {
      cout<<"enter the name of the item:"<<endl;
      cin>>name;
      cout<<"enter the code no:"<<endl;
      cin>>code;
   }

   int getquant()
   {
      cout<<"enter the quantity:"<<endl;
      cin>>quant;
      return quant;
   }
   int getprice()
   {
      cout<<"enter the price:"<<endl;
      cin>>price;
      return price;
   }
};
 int main()
{
   item i1,i2;
   int a,b,c,d,total;
   i1.getdata();
   a=i1.getquant();
   b=i1.getprice();
   i2.getdata();
   c=i2.getquant();
   d=i2.getprice();
   total=(a*b)+(c*d);
   cout<<"the total price of the iteam:"<<total<<endl;
   return 0;
}
