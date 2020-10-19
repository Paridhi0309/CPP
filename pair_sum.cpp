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
            if(x==arr[i]+arr[j])
            {
                cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}
