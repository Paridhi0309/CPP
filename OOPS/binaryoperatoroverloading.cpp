#include<iostream>
using namespace std;

class Complex{
private:
    int real, img;
public:
    Complex(int r=0,int i=0){
    real=r;
    img=i;
    }
    Complex operator +(Complex const &obj){
    Complex temp;
    temp.real=real+obj.real;
    temp.img=img+obj.img;
    return temp;
    }
    void print(){
    cout<<real<<"+"<<img<<"i";
    }
};
int main(){
    Complex c1(2,7),c2(1,2),c3;
    c3=c1+c2;
    c3.print();

}
