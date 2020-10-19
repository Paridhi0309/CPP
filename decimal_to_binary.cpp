//Decimal to Binary:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n,ans=0,pv=1,rem;
    while(temp!=0)
    {
        rem=temp%2;
        ans=ans+rem*pv;
        temp=temp/2;
        pv=pv*10;//pv stands for place value


    }
    cout<<"Decimal to binary: "<<ans;


}
