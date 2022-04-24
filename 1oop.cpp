
// C++ program to demonstrate 
// accessing of data members 
 
#include <iostream>

using namespace std;

class oop
{

    // Access specifier

    public:
 

    // Data Members

    string cpp;
 

    // Member Functions()

    void printname()

    {

       cout << "Object Oriented programming is : " << cpp;

    }
};
 

int main() {
 

    // Declare an object of class geeks

    oop obj1;
 

    // accessing data member

    obj1.cpp = " C plus plus";
 

    // accessing member function

    obj1.printname();

    return 0;
}
