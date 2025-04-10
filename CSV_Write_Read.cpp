#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file("example.csv", ios::in | ios::out | ios::app);

    if (file.is_open()) {
        file << "Name,Age,Country\n";
        file << "Alice,25,USA\n";
        file.seekg(0);

        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    } else {
        cout << "Cannot open file";
    }
    
    return 0;
}
