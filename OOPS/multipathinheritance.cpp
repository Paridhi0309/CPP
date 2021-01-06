#include<iostream>
using namespace std;
class A{
public:
    int a;
};
class B:public A{
public:
    int b;
};
class C:public A{
public:
    int c;
};
class D:public B,public C{
public:
    int d;
};
int main(){
D d1;
d1.B::a=10;
d1.C::a=20;
cout<<d1.B::a<<endl<<d1.C::a<<endl;
d1.b=30;
d1.c=40;
cout<<d1.b<<endl<<d1.c<<endl;
d1.d=50;
cout<<d1.d<<endl;
}
