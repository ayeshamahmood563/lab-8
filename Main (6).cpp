
#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    int ram;
    float price;
};

int main() {
    Laptop l;

    cout << "Enter Laptop Brand: ";
    cin >> l.brand;

    cout << "Enter RAM in GB: ";
    cin >> l.ram;

    cout << "Enter Laptop Price: ";
    cin >> l.price;

    cout << "\n--- Laptop Specifications ---" << endl;
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << " GB" << endl;
    cout << "Price: " << l.price << endl;

    return 0;
}
