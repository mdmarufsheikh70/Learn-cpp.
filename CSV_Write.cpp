#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.csv");
    if (file.is_open()) {
        file << "Name,Age,Country\n";
        file << "Alice,25,USA\n";
        file << "Bob,30,UK\n";
        file << "Charlie,22,Canada\n";
        file.close();
    }
    return 0;
}
