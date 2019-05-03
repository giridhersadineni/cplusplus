#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fw;
    fw.open("data.txt");
    fw<<"Hello \nwe have written this content using a program\n";
    fw.close();
    return 0;
}