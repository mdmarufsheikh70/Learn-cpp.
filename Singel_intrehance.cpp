#include <iostream>
using namespace std;
class vehicle{
    public:
    vehicle (){
        cout<<"Vehicle is essantial";
    }
};

class Car:public vehicle{
    Car(){
        cout<<"I have a car";
    }
}

int main