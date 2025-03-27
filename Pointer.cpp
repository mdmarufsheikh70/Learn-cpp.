#include<iostream>
using namespace std;
int main(){
    int x=2;
    int *p;
    p=&x;
    cout<<x;
    cout<<endl;
    cout<<&x;
    cout<<endl;
    cout<<p;
    cout<<endl;
    cout<<*p;
    cout<<endl;
    cout<<&p;
    return 0;
}