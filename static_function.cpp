#include <iostream>

using namespace std;

class Math {
public:
     static int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
};

int main() {
    Math M;
    cout <<M.factorial(5)<<endl;
    int result = Math::factorial(5);
    cout << "Factorial of 5 is: " << result << endl;
    return 0;
}