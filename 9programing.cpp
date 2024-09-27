#include <iostream>

class Travel {
private:
    int kilometers;
    int hours;

public:
    // Constructor with no parameters
    Travel() : kilometers(0), hours(0) {}

    // Member function to input values
    void get() {
        std::cout << "Enter kilometers: ";
        std::cin >> kilometers;
        std::cout << "Enter hours: ";
        std::cin >> hours;
    }

    // Member function to display values
    void show() const {
        std::cout << "Kilometers: " << kilometers << std::endl;
        std::cout << "Hours: " << hours << std::endl;
    }

    // Member function to add another Travel object's values to the current object
    void add(const Travel& t) {
        kilometers += t.kilometers;
        hours += t.hours;
    }
};

int main() {
    Travel trip1, trip2;

    std::cout << "Enter details for trip 1:" << std::endl;
    trip1.get();

    std::cout << "Enter details for trip 2:" << std::endl;
    trip2.get();

    std::cout << "\nDetails of trip 1:" << std::endl;
    trip1.show();

    std::cout << "Details of trip 2:" << std::endl;
    trip2.show();

    trip1.add(trip2);

    std::cout << "\nAfter adding trip 2 to trip 1:" << std::endl;
    trip1.show();

    return 0;
}
