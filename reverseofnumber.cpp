#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a number: ";
cin>>n;
int temp=n,rem,rev=0;
while(temp!=0)
{

    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;

}
cout<<"Reverse is: "<<rev;
return 0;
}
