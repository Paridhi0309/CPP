#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
        cout<<arr[i]<<" ";
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    */

}
