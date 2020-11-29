#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,n,sum=0;
cin>>n;
cout<<"Fibonacci Series: ";
cout<<a<<" "<<b<<" ";
for(int i=2;i<=n;i++)
{
    sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;


}

}
