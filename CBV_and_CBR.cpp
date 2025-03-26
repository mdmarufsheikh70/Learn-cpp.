#include<bits/stdc++.h>
using namespace std;

void cbv(int x, int y){
    x = 30;
    y = 40;
    cout<<x<<" "<<y<<endl;

}

void cbr(int &x, int &y){
    x = 30;
    y = 40;
    cout<<x<<" "<<y<<endl;

}


int main(){
    int x, y;
    x = 10;
    y = 20;
    cbv(x, y);
    cout<<x<<" "<<y<<endl;
    cbr(x, y);
    cout<<x<<" "<<y;
    return 0;
}