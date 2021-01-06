#include<iostream>
using namespace std;
class A{
public:
    A(){
    cout<<"A constructor called "<<endl;
    }
};
class B{
public:
    B(){
    cout<<"B constructor called "<<endl;
    }
};
class C:public A,B{
    public:
    C(){
        cout<<"C constructor called "<<endl;
    }
};
class D:public A{
public:
    D(){
    cout<<"D constructor called "<<endl;
    }
};
int main(){
C c1;
D d1;
return 0;
}
