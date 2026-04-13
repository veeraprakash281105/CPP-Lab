#include <iostream>
#include <cstring>
using namespace std;
class String
{
   char* str;
   public:
   String()
   {
      str = NULL;
   }
   String(const char* s)
   {
      str = new char[strlen(s) + 1];
      strcpy(str, s);
   }
   String(const char* s1, const char* s2)
   {
      str = new char[strlen(s1) + strlen(s2) + 1];
      strcpy(str, s1);
      strcat(str, s2);
   }
   void show()
   {
      if (str)
         cout << "String: " << str << endl;
      else
         cout << "String is empty" << endl;
   }
   ~String()
   {
      delete[] str;
   }
};
int main()
{
   String s1;
   s1.show();
   String s2("Hi");
   s2.show();
   String s3("Hello", "Veera");
   s3.show();
   String s4("how"," r u");
   s4.show();
   return 0;
}
