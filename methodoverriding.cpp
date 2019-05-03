#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"\nHello from base class";
    }

};
class derived{
    public:
    void display(){
        cout<<"\nHello from derived class";
    }
};
int main(){
    derived d;
    base b;
    d.displayparent();
}