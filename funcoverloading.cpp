#include<iostream>
using namespace std;
int add(int a,int b){
    cout<<"I have been given 2 args";
    return a+b;
}
int add(int a,int b,int c){
    cout<<"I have been given 3 args";
    return a+b+c;
}
int convert(float n){
    cout<<"i have converted a float to int";
    return int(n);
}
float convert(int n){
    cout<<"i have converted an int to float";
    return float(n);
}

int main(){
    int a=convert(2.07);
    float f=convert(2.33434);
 cout<<add(1,3);
}
