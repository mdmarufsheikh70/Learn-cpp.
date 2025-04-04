#include <iostream>

int *createArray(int size) {
    int *array = new int[size]; // Dynamically allocate an array of size elements
    
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> array[i]; // Read values from the user and store them in the array
    }

    return array; // Return the pointer to the allocated array
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *myArray = createArray(size); // Call the function to create the array

    // Use the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory
    delete myArray;

    return 0;
}