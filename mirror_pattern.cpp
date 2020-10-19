//Mirror Number Pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            k=j;
            cout<<k++;
        }
        cout<<endl;
    }
}
