#include<iostream>
using namespace std;
void printnumber(int n);
int main(){
    printnumber(100);
    return 0;
}
void printnumber(int n){
    if(n==0){
        return;
    }
    else{
        cout<<" "<<n<<" ";
        printnumber(--n);
    }
}