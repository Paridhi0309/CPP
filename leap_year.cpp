#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n%400==0 || n%100!=0 && n%4==0)
{
    cout<<"Leap year";
}
else{
    cout<<"Not a leap year";
}
return 0;
}
