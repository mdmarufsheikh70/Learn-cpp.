#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define endl '\n';
int main() {
    optimize();
    vector <string> v;
    v.push_back("Maruf");
    v.push_back("Maruf");
    v.push_back("aruf");
    v.push_back("ruf");
    v.push_back("uf");
    v.push_back("f");

    sort(v.begin(), v.end());

    for (auto u : v){
        cout << u << endl;
    }

    int length_u = unique(v.begin(), v.end()) - v.begin();
    cout << length_u << endl;
    for (auto u : v){
        cout << u << endl;
    }
    return 0;
}