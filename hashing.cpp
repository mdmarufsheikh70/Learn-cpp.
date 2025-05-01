#include <iostream>
#include <vector>
using namespace std;

int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

int main() {
    int tableSize = 10;
    vector<int> hashTable(tableSize, -1);

    vector<int> keys = {15, 11, 27, 8, 12};

    for (int key : keys) {
        int index = hashFunction(key, tableSize);
        hashTable[index] = key;
    }

    for (int i = 0; i < tableSize; i++) {
        cout << i << " --> ";
        if (hashTable[i] != -1)
            cout << hashTable[i] << endl;
        else
            cout << "empty" << endl;
    }

    return 0;
}
