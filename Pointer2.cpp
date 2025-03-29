#include<iostream>
using namespace std;
int main(){
    int x[20]={10,20,30,40,50};
    int *p1;
    p1=&x[0];
    for(int i=0;i<5;i++){
    cout<<*p1;
    p1++;
    cout<<endl;
    }
    return 0;
}