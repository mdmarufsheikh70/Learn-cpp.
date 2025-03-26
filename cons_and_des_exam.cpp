#include<iostream>
using namespace std;
class prictice
{
public:
    prictice(){
        cout<<"go1";
        cout<<endl;
        
    }
    ~prictice(){
        cout<<"go2";
                cout<<endl;

    }
};

class a:public prictice{
    public:
    a(){
        cout<<"go3";
                cout<<endl;

    }
    ~a(){
        cout<<"go4";
                cout<<endl;

    }
};

class b:public prictice{
    public:
    b(){
        cout<<"go5";
                cout<<endl;

    }
    ~b(){
        cout<<"go6";
                cout<<endl;

    }
};

int main(){
    prictice ob1;
    a obj3;
    b obj2;
    return 0;
}
