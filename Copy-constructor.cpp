#include<iostream>
using namespace std;
//Copy constructor
class a{
     int b,c;
     public:
     a(int x,int y)
    {
     b=x;
     c=y;
    }
    a(a &p)
    {
    b=p.b;
    c=p.c;
    }
    void show()
    {
     cout<<"i="<<b<<" "<<"c="<<c;
    }
   };
 int main()
   {
    a a1(3,6);
    a a2=a1;
    a1.show();
   }
