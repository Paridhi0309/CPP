#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int x;
cin>>x;
for(int i=0;i<n;i++)
{
    for(int j=n-1;j>i;j--)
    {
        for(int k=n-1;k>j;k--)
        {
            if(x==arr[i]+arr[j]+arr[k])
            {
                int o=min(arr[i],min(arr[j],arr[k]));
                int p=max(arr[i],max(arr[j],arr[k]));
                cout<<o<<" "<<x-o-p<<" "<<p<<endl;
            }
        }
    }
}
}
