#include <iostream>
using namespace std;
class Speedometer {
protected:
    float speed;
public:
    Speedometer(float s = 0) {
        speed = s;
    }
    void setSpeed(float s) {
        speed = s;
    }
    float getSpeed() {
        return speed;
    }
};
class FuelGauge {
protected:
    float fuelLevel;
public:
    FuelGauge(float f = 0) {
        fuelLevel = f;
    }
    void setFuel(float f) {
        fuelLevel = f;
    }
    float getFuel() {
        return fuelLevel;
    }
};
class Thermometer {
protected:
    float temperature;
public:
    Thermometer(float t = 0) {
        temperature = t;
    }
    void setTemp(float t) {
        temperature = t;
    }
    float getTemp() {
        return temperature;
    }
};
class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    CarDashboard(float s, float f, float t)
        : Speedometer(s), FuelGauge(f), Thermometer(t) {}
    void display() {
        cout << "Speed: " << getSpeed() << " km/h" << endl;
        cout << "Fuel Level: " << getFuel() << " liters" << endl;
        cout << "Temperature: " << getTemp() << " C" << endl;
    }
};
int main() {
    CarDashboard car(80, 25, 90);
    car.display();
    return 0;
}
