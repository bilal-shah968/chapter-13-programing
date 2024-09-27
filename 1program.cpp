#include <iostream>
using namespace std;

class test {
    private:
    int n;

    public:
    void in() {
        cout << "Enter a number: ";
        cin >> n;
    }

    void out() {
        cout << "The value of n = " << n << endl;
    }
};

int main() {
    test obj;
    obj.in();
    obj.out();

    getchar(); 
    return 0;   
}
