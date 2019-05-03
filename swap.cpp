#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
    int x=8,y=9;
    cout<<"X= "<<x<<"Y="<<y;
    swap(&x,&y);
    cout<<endl<<"after swapping";
    cout<<"X= "<<x<<"Y="<<y;
    return 0;
}