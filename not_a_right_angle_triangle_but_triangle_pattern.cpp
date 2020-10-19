//Triangle Pattern which is not a right angle triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }

}
