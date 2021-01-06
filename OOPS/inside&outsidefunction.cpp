/*Inside function definition and Outside function defintion*/
#include<iostream>
using namespace std;
class Add{
    public:
void sum(){
    int a=12;
    int b=10;
    int c=0;
    c=a+b;
    cout<<"Sum is: "<<c<<endl<<"Product is: ";
}
int multiply(int m,int n);
};
int Add::multiply(int m,int n){
return m*n;}
int main(){
Add a1;
a1.sum();
cout<<a1.multiply(3,4);
}

