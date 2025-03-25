#include<iostream>
using namespace std ;
class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honking" << endl;
    }
};

class SportsCar : public Car {//indirect class vehicle ->car ->sportscar
public:
    void start()override {// this method from base class vehicle 
        cout << "Vehicle started from Vehiclel class" << endl;
    }
    void turboBoost() {
        cout << "Sports car turbo boosting" << endl;
    }
};

int main(){
SportsCar sc;
sc.start();
sc.turboBoost();
return 0;
}