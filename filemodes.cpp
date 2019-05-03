#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fs;
    string line;
    fs.open("data.txt",ios::trunc);
    fs<<"skillverse computer education";
    fs.close();
    return 0;
}