#include<iostream>
using namespace std;
 class numb
  {
   int a,b;
    public:
    void read()
    {
     cout<<"Enter Two Number:";
     cin>>a>>b;
    }
   void display()
   {
    cout<<"a="<<a<<"b="<<b;
   }
  };
  int main ()
 {
   numb b1;
   b1.read();
   b1.display();
 }
