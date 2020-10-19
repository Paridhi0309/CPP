#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"Enter size of two arrays: ";
cin>>n>>m;
int arr1[n],arr2[m];
for(int i=0;i<n;i++)
{
    cin>>arr1[i];
}
for(int j=0;j<m;j++)
{
    cin>>arr2[j];
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            arr2[j]=-1000;
        }
    }
}
return 0;
}
