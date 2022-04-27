#include <iostream>
using namespace std;

class Student {
public: // Access specifier
    int rollNo; // Attribute (integer variable)
    string stdName; // Attribute (string variable)
    int perc; // Attribute (integer variable)
};

int main()
{
   //object creation
    Student std;
 //acces data member and initilize
    std.stdName = "Neha Rajput";
    std.rollNo  = 144;
    std.perc = 89;

    // Printing the values
    cout << "Student's Name : " << std.stdName << "\n";
    cout << "Student's Roll No : " << std.rollNo<< "\n";
    cout << "Student's Percentage : " << std.perc << "\n";

    return 0;
}
    