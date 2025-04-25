#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    s = "ab";
    s += "c";
    string :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it<<" ";
    }
    cout << endl;
    for(auto u:s){
        cout<< u <<" "; 
    }
    return 0;
}