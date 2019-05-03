#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
    cout<<endl<<"No of arguments are "<<argc;
for(int i=0;i<argc;i++){
    cout<<"\nArgument "<<i<<" "<<argv[i];
}
return 0;
}