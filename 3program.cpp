#include <iostream>
using namespace std;

class Circle
{
    private:
        float radiusz;
    
    public:
        void get_radius(float r)
        {
            radiusz = r;
        }
        
        void area()
        {
            cout << "\nArea of circle: " << 3.14 * radiusz * radiusz;
        }
        
        void circum()
        {
            cout << "\nCircumference of circle: " << 2 * 3.14 * radiusz;
        }
};

int main()
{
    Circle c1;
    float rad;
    cout << "\nEnter radius: ";
    cin >> rad;
    
    c1.get_radius(rad);
    c1.area();
    c1.circum();
    return 0;
}
