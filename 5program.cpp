#include <iostream>
using namespace std;

class ArrayHandler
{
    private:
        int arr[5]; 
    
    public:
        
        void fill();
        void display() const;
        int max() const;
        int min() const;
};
void ArrayHandler::fill()
{
    cout << "Enter 5 integer values:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }
}
void ArrayHandler::display() const
{
    cout << "Array values are: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int ArrayHandler::max() const
{
    int maxVal = arr[0];
    for (int i = 1; i < 5; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}


int ArrayHandler::min() const
{
    int minVal = arr[0];
    for (int i = 1; i < 5; ++i)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main()
{
    ArrayHandler arrayHandler;
    
    arrayHandler.fill(); 
    arrayHandler.display(); 
    cout << "Maximum value: " << arrayHandler.max() << endl;
    cout << "Minimum value: " << arrayHandler.min() << endl;
    
    return 0;
}
