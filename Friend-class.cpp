#include<iostream>
using namespace std;
/Friend class
 class A
  {
   int a,b;
    public:
    void input()
    {
     cout<<"Enter Two Number:";
     cin>>a>>b;
    }
    friend class B;
  };
class B
  {
   int c;
   public:
   void add(A ob)
   {
   c=ob.a+ob.b;
   cout<<"Sum"<<c;
   }
  };
  int main ()
 {
  A A1;
  B B1;
  A1.input();
  B1.add(A1);
 }
