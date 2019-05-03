#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fr;
    string line;
    fr.open("data.txt");
   while(fr){
       getline(fr,line);
        cout<<line;
    
   }
    return 0;
}