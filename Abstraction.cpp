#include <iostream>    
using namespace std;    
 class mth
{    
private: int a, b, c; // private variables  
public:    
void mul()    
{    
cout<<"Enter two numbers: ";    
cin>>a>>b;    
c= a*b;    
cout<<"Multiplication of two number is: "<<c<<endl;    
}    
};    
int main()    
{    
mth mt;    
mt.mul();    
return 0;    
}    
