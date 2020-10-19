//Reverse of a number:
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int rev=0,temp=n,rem;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<"Reverese of the number: "<<rev;
    return 0;
}
