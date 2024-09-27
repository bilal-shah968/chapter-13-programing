#include <iostream>
#include <cstring>  
using namespace std;

class Student
{
private:
    static int r;
    int rno, marks;
    char name[50];

public:
    Student()
    {
        r++;
        rno = r;
    }

    void in()
    {
        cout << "Enter name: ";
        cin.ignore();  
        cin.getline(name, 50);
        cout << "Enter marks: ";
        cin >> marks;
    }

    void show()
    {
        cout << "Roll no: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int Student::r = 0;

int main()
{
    Student s1, s2, s3;
    s1.in();
    s2.in();
    s3.in();
    s1.show();
    s2.show();
    s3.show();  
    return 0;  
}
