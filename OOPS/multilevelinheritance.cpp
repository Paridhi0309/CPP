/*Multilevel Inheritance*/
#include<iostream>
using namespace std;
class A{
public:
    void input(){
        int n;
        cin>>n;
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial of a number is: "<<fact<<endl;
    }

};
class B:public A{
public:
    void output(){
    int n;
    cin>>n;
    int temp=n;
    int rem,rev=0;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<"Reverse of the number is: "<<rev<<endl;
    }
};
class C:public B{
public:
    void get(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            cout<<"Number is prime number ";;
            break;
        }
        else{
            cout<<"Number is not prime number "<<endl;
        }
    }
    }
};
int main(){
C c1;
c1.input();
c1.output();
c1.get();
return 0;

}
