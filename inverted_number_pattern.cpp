//Inverted Number Pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            cout<<n-i+1;
        }
        cout<<endl;
    }

}
