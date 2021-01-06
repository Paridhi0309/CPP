#include<iostream>
using namespace std;
class A{
public:
    void sum(){
        int a=10;
        int b=20;
        int c=a+b;
        cout<<"Sum is: "<<c<<endl;
    }
};
class B:public A{
    public:
void fibo(){
    int n;
    cin>>n;
    int a=0,b=1,c=0;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
};
int main(){
B b1;
b1.sum();
b1.fibo();
}
