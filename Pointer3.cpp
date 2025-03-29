#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p;
    p=&x;
    int **q;
    q=&p;
    int ***r;
    r=&q;
    cout<<*p;
    cout<<endl;
    cout<<**q;
    cout<<endl;
    cout<<***r;
    cout<<endl;
    return 0;
}