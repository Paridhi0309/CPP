#include<iostream>
using namespace std;
class A{
private:
    int x;
public:
    A(){
        cout<<"Default Constructor called "<<endl;
    }
    A(int a){
        x=a;
    cout<<"Parameterized Constructor Called "<<endl<<x<<endl;
    }
    A(const A &s3){
    x=s3.x;
    cout<<"Parameterized Copy Constructor Called "<<endl<<x<<endl;
    }

};
int main(){
A a1;
A a2(10);
A s3(a2);

}
