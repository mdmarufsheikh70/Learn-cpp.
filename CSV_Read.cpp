#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.csv");
    string line;
    if (file.is_open()) {
        while (getline(file, line)){
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}
