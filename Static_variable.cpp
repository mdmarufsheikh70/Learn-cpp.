#include <iostream>

using namespace std;

class Counter {
public:
    static int count; 
    Counter() {
        count++;
    }
};

int Counter::count = 0; 

int main() {
    Counter c1, c2, c3, c4, c5;
    cout << "Total objects created: " << Counter::count << endl;
    return 0;
}
