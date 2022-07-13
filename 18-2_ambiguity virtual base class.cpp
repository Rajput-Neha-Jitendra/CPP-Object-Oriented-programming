
#include <iostream>
using namespace std;
//Avoiding ambiguity using virtual base class
class A {
    protected:
    int a;
};
class B : virtual public A {

};
class C : virtual public A {

};
class D : public B, public C {
    public:
    void fun() {
        a = 7;
    }
    void display() {
        cout<<"a from B = "<<a<<endl;
        cout<<"a from C = "<<a<<endl;        
    }
};
int main() {
  D obj;
  obj.fun();
  obj.display();
  return 0;
}
