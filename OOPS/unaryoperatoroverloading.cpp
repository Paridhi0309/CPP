#include<iostream>
using namespace std;
class A{
private:
    int a=12;
public:
    void increment operator ++(increment const & obj){
        a=a+2;
    }
    void print(){
        cout<<a<<endl;
    }
};
int main(){
    A a1;
    a1++;
    a1.print();
}
