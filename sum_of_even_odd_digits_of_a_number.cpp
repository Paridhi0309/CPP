//Sum of even and odd digits of a number
#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum1=0,sum2=0;
    cin>>n;
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem%2==0)
        {
            sum1=sum1+rem;
        }
        else
        {
            sum2=sum2+rem;
        }
        temp=temp/10;

    }
    cout<<sum1<<"\t"<<sum2;
}
