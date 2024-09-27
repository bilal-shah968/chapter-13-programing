#include <iostream>
#include <string>
using namespace std;
class TV
{
private:
    std::string brandName;
    std::string model;
    double retailPrice;
public:
    TV(const std::string& brand, const std::string& model, double price) 
        : brandName(brand), model(model), retailPrice(price) 
    {}
    void displayAttributes() const {
        std::cout << "Brand Name: " << brandName << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Retail Price: $" << retailPrice << std::endl;
    }

    
    void changeAttributes(const std::string& newBrand, const std::string& newModel, double newPrice) {
        brandName = newBrand;
        model = newModel;
        retailPrice = newPrice;
    }
};

int main() 
{
    TV myTV("Samsung", "QLED 8K", 2999.99);

    std::cout << "Initial TV attributes:" << std::endl;
    myTV.displayAttributes();

    myTV.changeAttributes("LG", "OLED 4K", 2499.99);

    std::cout << "\nUpdated TV attributes:" << std::endl;
    myTV.displayAttributes();

    return 0;
}
