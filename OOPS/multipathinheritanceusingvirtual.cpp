#include<iostream>
using namespace std;
class A{
public:
    int a;
};
class B:public virtual A{
public:
    int b;
};
class C:public virtual  A{
public:
    int c;
};
class D:public B,public C{
public:
    int d;
};
int main(){
D d1;
d1.a=10;
d1.b=20;
d1.c=30;
d1.d=40;
cout<<d1.a<<" "<<d1.b<<" "<<d1.c<<" "<<d1.d;
}
