#include<iostream>
using namespace std;
typedef struct nums{
    int x;
    int y;
}nums;
nums swap(int x,int y){
    nums s;
    s.x=y;
    s.y=x;
    return s;
}
int main(){
    nums s = swap(199,23);
    return 0;
}