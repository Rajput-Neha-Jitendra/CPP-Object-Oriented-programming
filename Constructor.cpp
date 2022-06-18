#include<iostream>
using namespace std;
 class demo
  {
    private:
    int a,b;
    public:
    demo()//Default Constructor
    {
     cout<<"Constructor Function Called"<<"\n";
    }
   demo(int x,int y)//parameterized construcctor
   {
    a=x;
    b=y;
    cout<<a+b<<endl;
   }
  demo(demo &obj)//copy Constructor
  {
  a=obj.a;
  b=obj.b;
  cout<<a<<b;
  }
  };
  int main()
 {
   demo d1;
   demo d2(4,3);
   demo d3=d2;
 }
    
