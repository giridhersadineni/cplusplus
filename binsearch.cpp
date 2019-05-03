#include<iostream>
using namespace std;
int list[10]={1,2,3,55,66,75,88,99,121,500};
int binsearch(int n,int low,int high){
    int mid=(low+high)/2;
    if(list[mid]==n){
        return 1;
    }
    else if(list[mid]>n){
        return binsearch(n,low-1,high);
    }
    else{
        low=mid+1;
        return binsearch(n,low,high);
    }
}
int main(){
    int n;
    cout<<"enter the number to search";
    cin>>n;
    int low=0,high=9;
    int found=0;
    found=binsearch(n,low,high);
    cout<<found;
    if(found==1){
        cout<<"It is in the list";
    }
    else{
        cout<<"Not Found in the list";
    }

    return 0;
}