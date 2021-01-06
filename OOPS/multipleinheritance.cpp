/*Multiple Inheritance*/
#include<iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"A constrcutor called "<<endl;
    }
};
class B{
    public:
B(){
    cout<<"B constructor called "<<endl;
}
};
class C:public A,public B{
public:
    C(){
    cout<<"C constructor called "<<endl;
    }
};
int main(){
C c1;
}
