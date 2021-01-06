#include<iostream>
using namespace std;
class A{
public:
    void input(int a,int b){
    int c=a+b;
    cout<<"SUM IS: "<<c<<endl;
    }
    void output(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }
    }
    void getset(double a){
    int c=9;
    int m=c*a;
    cout<<m<<" ";
    }
};
int main(){
A a1;
a1.input(2,7);
a1.output(23);
a1.getset(2);
}
