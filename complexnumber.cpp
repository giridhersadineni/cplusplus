#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    void display(){
        cout<<real<<"+"<<imag<<"j";
    }
    complex operator+(complex &c){
        complex x;
        x.real=this->real+c.real;
        x.imag=this->imag+c.imag;
        return x;
    }
};
int main(){
    complex c1,c2,c3;
    c1.real=2;
    c1.imag=3;
    c2.real=6;
    c2.imag=5;
    //complex c3=c1.add(c2);
    c3=c1+c2;
    c3.display();

}
