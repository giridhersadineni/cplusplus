#include<iostream>
using namespace std;
int main(){

    int a=100,b=0;

try
{
     cout<<a/b;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}   
    return 0;
}