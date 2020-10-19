#include<iostream>
using namespace std;
int gcd_or_hcf(int first,int second)
{
    if(first==0)
    {
        return second;
    }
    else if(second==0)
    {
        return first;
    }
    else if(first>second)
    {
        return gcd_or_hcf(first-second,second);
    }
    else
    {
        return gcd_or_hcf(first,second-first);
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<gcd_or_hcf(a,b);
}
