#include<iostream>
using namespace std;
class Shape {
   protected:
      int width, height;

   public:
      Shape(int a = 0, int b = 0) {
         width = a;
         height = b;
      }
      // pure virtual function
      virtual int area() = 0;
};
class rectangle:Shape{
    public:
    int area(){
        return width*height;
    }
};
class square:Shape{
    public:
    square(int size){
        width=size;
    }
    int area(){
        return width*width;
    }
};

int main(){
    square s(10);
    cout<<s.area();
}