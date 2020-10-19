//Binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n,rem,ans=0,i=0;
    while(temp!=0)
    {
        rem=temp%10;
        ans=ans+pow(2,i)*rem;
        temp=temp/10;
        i++;

    }
    cout<<"Binary to Decimal: "<<ans;
}
