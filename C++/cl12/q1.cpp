#include <iostream>
#include <string>
using namespace std;

class Car {
    int speed = 0;
    int gear;
    string color;

   public:
    void setGear(int newGear) { gear = newGear; }
    void setColor(string color) { this->color = color; }
    void speedUp(int increment) { speed += increment; }
    void speedDown(int decrement) { speed -= decrement; }
    void showCar() { cout << "speed: " << speed << "km/h" << '\n' << "distance: " << gear << '\n' << "color: " << color << endl; }
};

class SportCar : public Car {
    bool turbo;

   public:
    void setTurbo(bool newValue) { turbo = newValue; }
    void showSportCar() {
        showCar();
        cout << "turbo: ";
        if (turbo)
            cout << "equiped" << endl;
        else
            cout << "not equiped" << endl;
    }
};

int main() {
    SportCar sc;
    sc.setColor("Red");
    sc.setGear(3);
    sc.speedUp(100);
    sc.speedDown(30);
    sc.setTurbo(true);
    sc.showSportCar();
}