// Create a Student class to store student name, roll number and marks, and display the details.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Rahul";
    s1.rollNo = 101;
    s1.marks = 85.5;

    s1.display();

    return 0;
}