#include <iostream>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk, string md, int yr) {
        make = mk;
        model = md;
        year = yr;
    }
    void displayVehicle() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
class Truck : public Vehicle {
protected:
    float load_capacity;
public:
    Truck(string mk, string md, int yr, float lc)
        : Vehicle(mk, md, yr) {
        load_capacity = lc;
    }
    void displayTruck() {
        displayVehicle();
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};
class RefrigeratedTruck : public Truck {
private:
    float temperature_control;
public:
    RefrigeratedTruck(string mk, string md, int yr, float lc, float tc)
        : Truck(mk, md, yr, lc) {
        temperature_control = tc;
    }
    void displayRefrigeratedTruck() {
        displayTruck();
        cout << "Temperature Control: " << temperature_control << " °C" << endl;
    }
};
int main() {
    RefrigeratedTruck rt("Volvo", "FH16", 2022, 18.5, -5);
    rt.displayRefrigeratedTruck();
    return 0;
}
