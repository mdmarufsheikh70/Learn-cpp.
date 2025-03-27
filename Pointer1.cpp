#include<iostream>
using namespace std;
int main(){
    int x=2,y=3;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    int tem = x;
    x=y;
    y=tem;
    cout<<*p1;
    cout<<endl;
    cout<<*p2;
    return 0;
}