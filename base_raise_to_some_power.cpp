//Base raise to some power is:
#include<iostream>
using namespace std;
int main()
{
    int n,m,o=1;
    cout<<"Enter the number and power: ";
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        o=o*n;
    }
    cout<<"Base raise to some power is: "<<o;
}
