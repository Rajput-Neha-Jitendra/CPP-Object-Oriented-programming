#include<iostream>
using namespace std;
//Operator Oveoading
class op
{
  int x,y,z;
   public:
    void read(int a,int b, int c);
    void show();
    void operator -();
};

void op::read(int a,int b, int c)
{
   x=a;
   y=b;
   z=c;
}

void op::show()

{
 cout<<"value of x:"<<x<<endl;
 cout<<"value of y:"<<y<<endl;
 cout<<"value of z:"<<z<<endl;
}

void op::operator -()
{
  x=-x;
  y=-y;
  z=-z;
}

int main()
{
  op s;
  s.read(3,-4,5);
  cout<<"Variable"<<endl;
  s.show();
  cout<<"_______________"<<endl;
  -s;
  cout<<"operator Overloading"<<endl;
  s.show();
}
    
