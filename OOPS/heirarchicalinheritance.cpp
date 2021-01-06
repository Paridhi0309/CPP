/*Heirarchical Inheritance*/
#include<iostream>
using namespace std;
class A{
public:
A(){
    cout<<"A construtor called "<<endl;
}
};
class B:public A{
    public:
    B(){
        cout<<"B constructor called "<<endl;
    }
};
class C:public A{
public:
    C(){
    cout<<"C constructor called "<<endl;
    }
};
int main(){
    B b1;
    C c1;
}
