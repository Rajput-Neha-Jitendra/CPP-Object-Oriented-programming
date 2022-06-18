#include<iostream>
using namespace std;
 class A
  {
   int a,b;
    public:
    void input()
    {
     cout<<"Enter Two Number:";
     cin>>a>>b;
    }
    friend void add(A ob);
  };
  void add(A ob)
  {
   int c;
   c=ob.a*ob.b;
   cout<<"Multiplication:"<<c;
  }
  int main ()
 {
  A ff;
  ff.input();
  add(ff);
 }
