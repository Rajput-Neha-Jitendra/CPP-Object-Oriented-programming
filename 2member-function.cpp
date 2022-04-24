// C++ program to demonstrate function 
// declaration outside class
 
#include <iostream>

using namespace std;

class Sname
{
    public:

    string student;

    int rollno;

    // getdata is defined outside class definition

    void getdata();

    // display is defined inside class definition

    void display()

    {
        cout << "Student Name : " << student<<endl;
        cout << "Student Roll no is: " << rollno;
       
    }
};
 
// Definition of getdata using scope resolution operator ::

void Sname::getdata()
{
    
    cout << "Student Name is : " ;
    cin >> student; 
    cout << "Student Roll No : ";
    cin >> rollno;
}

int main()
 {

    Sname obj1;

    obj1.getdata();

    obj1.display();
    
    return 0;
}