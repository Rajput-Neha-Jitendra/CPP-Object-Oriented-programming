#include<iostream>
using namespace std;
//parameterized constructor
class a{
     int b,c;
     public:
     a(int x,int y)
    {
     b=x;
     c=y;
    }
    void show()
    {
     Cout<<"b="<<b<<"c="<<c;
    }
   };
 int main()
   {
    a a1(3,6);
    a1.show();
   }
