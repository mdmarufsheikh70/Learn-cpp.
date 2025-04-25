#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    s = "ab";
    s += "c";
    cout << s <<endl;
    cout << s.length() << endl;
    cout << s[2] <<endl;
    s.clear();
    cout << s;
    cout << s.empty();
    return 0;
}
