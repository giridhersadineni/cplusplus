#include<iostream>
#include<math.h>
using namespace std;
int findthesum(int n,int sum);
int main(){
    int nod,i,sum;
cout<<"enter the number of digits";
cin>>nod;
cout<<"enter the sum of digits";
cin>>sum;
for(i=pow(10,nod)/10;i<=pow(10,nod)-1;i++){
    findthesum(i,sum);
}
}
int findthesum(int n,int sum){
    int s=0,r;
    int num=n;
    while(num){
        r=num%10;
        num=num/10;
        s+=r;
    }
    if(sum==s){
        cout<<endl<<n<<"";
    }
    return 0;
}