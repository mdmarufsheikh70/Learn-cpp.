#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // vector<int> v;
    // cin>>n;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i){
        cout << v[i];
    }
    return 0;
}