#include <iostream>
#include <string>
using namespace std;
class Book 
{
private:
    int pages;
    float price;
    string title;
public:
    void inputValues()
     {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter book price: ";
        cin >> price;
        cin.ignore();
    }
    void displayValues() const
     {
        cout << "Title: " << title << endl;
        cout << "Number of pages: " << pages << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
 {
    Book book1, book2, book3;

    cout << "Input details for Book 1:" << endl;
    book1.inputValues();
    
    cout << "Input details for Book 2:" << endl;
    book2.inputValues();
    
    cout << "Input details for Book 3:" << endl;
    book3.inputValues();
    
    cout << "\nDetails of Book 1:" << endl;
    book1.displayValues();
    
    cout << "\nDetails of Book 2:" << endl;
    book2.displayValues();
    
    cout << "\nDetails of Book 3:" << endl;
    book3.displayValues();

    return 0;
}
