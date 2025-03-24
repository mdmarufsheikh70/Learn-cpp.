#include<iostream>
using namespace std;
inline double cube ( double L){
    return (L*L*L);
}
int main(){
    double L;
    cin>>L;
    cout<<cube(L);
    return 0;
}