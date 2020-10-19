//Palindrome of a number:
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n,rev=0,rem;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;


    }
    if(n==rev)
    {
        cout<<rev<<" is a palindrome ";
    }
    else
    {
        cout<<rev<<" is not a palindrome";
    }
}
