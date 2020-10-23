//Time complexity comes out to be O(n^4)
#include<iostream>
using namespace std;
int main()
{
    int n,maxim=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                for(int u=k+1;u<n;u++)
                {
                    maxim=max(maxim,arr[i]*arr[j]*arr[k]*arr[u]);
                }
            }
        }
    }
    cout<<maxim;
    return 0;
}
