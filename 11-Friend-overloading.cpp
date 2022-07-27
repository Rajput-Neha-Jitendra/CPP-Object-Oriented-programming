#include<iostream>
using namespace std;
 class demo
  {
   int a,b;
    public:
    void show()
    {
     cout<<"Simple Function"<<"\n";
    }
   void show(int x)
   {
    cout<<"value:"<<x<<"\n";
   }
   void show(int j,int k)
   {
    a=j;
    b=k;
    cout<<"Substraction:"<<a-b;
   }
 };
  int main ()
 {
   demo d1;
   d1.show();
   d1.show(5);
   d1.show(8,4);
 }

