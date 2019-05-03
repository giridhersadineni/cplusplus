#include<iostream>
using namespace std;
class Animal{
    bool canThink;
    bool isMammal;
    public:
    string genous;
    string sound;
    string name;
    Animal(string sname,string ssound){
        name=sname;
        sound=ssound;
    }

    void makeSound(){
        cout<<"sound:"<<sound;
    }
    void getdata(){
        cout<<"Animal Name "<<name<<endl;
        cout<<"Is Mammal"<<isMammal<<endl;
        cout<<"Genous "<<genous<<endl;
        cout<<"Can Think "<<canThink<<endl;
    }
    void setdata(){
       
       // cout<<"enter Name of the Animal";
        //cin>>name;
        cout<<"Is it a mammal type 1 for true or 2 for false";
        cin>>isMammal;
        cout<<"enter Name of the Genous it belong to";
        cin>>genous;
        cout<<"Can this animal think type 1 for true or 2 for false";
        cin>>canThink;
    }

};

class cat:Animal{
    bool isWild;
};



int main(){
    //Animal m;
    /*Animal m("Monkey","Krrrrr");
    m.setdata();
    m.getdata();
    */
    cat Tiger;
    Tiger.setdata();
    Tiger.getdata();
    return 0;
}