//Alpha pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    char x;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            x='A'+i-1;
            cout<<x;
        }
        cout<<endl;
    }
}
