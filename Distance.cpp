#include<iostream>
#include<math.h>
using namespace std;
class point{
    private:
    int Xpos;
    int Ypos;
    public:
    void setx(int x);
    void sety(int y);
    int getx();
    int gety();
    point(int,int);
};


point::point(int k, int g){
    setx(k);
    sety(g);
}
void point::setx(int g){
    Xpos=g;
}
void point::sety(int y){
    Ypos=y;
}
int point::getx(){
    return Xpos;
}
int point::gety(){
    return Ypos;
}
void Line(point p1,point p2){
    int x1=p1.getx();
    int x2=p2.getx();
    int y1=p1.gety();
    int y2=p2.gety();
    int d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    cout<<"Distance of this two point "<<d<<" m"<<endl;
}

int main(){
    int m,n,o,p;
    cout<<"Enter your point: ";
    cin>>m;
    cin>>n;
    cin>>o;
    cin>>p;

    point p1(m,n);
    point p2(o,p);
    Line(p1,p2);
    return 0;
}