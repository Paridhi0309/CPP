#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout<<"ENTER A BINARY NUMBER: ";
    cin>>number;
    int ans=0,temp=number,rem,i=0;
    //Binary to decimal
    while(temp!=0)
    {
        rem=temp%10;
        ans=ans+rem*pow(2,i);
        temp=temp/10;
        i++;
    }
    //decimal to octal
    int temp1=ans,ans1=0,rem1,pv=1;
    while(temp1!=0)
    {
        rem1=temp1%8;
        ans1=ans1+pv*rem1;
        temp1=temp1/8;
        pv=pv*10;
    }
    cout<<"Binary to octal: "<<ans1;
}
