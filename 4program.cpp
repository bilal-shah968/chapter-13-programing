#include <iostream>
using namespace std;

class MyClass
{
    public:
    
        MyClass()
        {
            cout << "An object of MyClass has been created!" << endl;
        }
};

int main()
{

    MyClass obj1;

    return 0;
}
