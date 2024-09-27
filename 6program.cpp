#include <iostream>
using namespace std;

class MyClass
 {
private:
    int num1;
    int num2;

public:
    
    MyClass() : num1(100), num2(100)
     {

     }
    void avg() 
    {
        double average = (num1 + num2) / 2.0; 
        cout << "Average: " << average << endl;
    }
};

int main()
{ 
    MyClass obj; 
    obj.avg();   
    return 0;
}
