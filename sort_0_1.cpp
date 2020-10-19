/*Traversal is done twice
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            count++;
        }

    }
    for(int i=0;i<count;i++)
    {
        arr[i]=0;
    }
    for(int i=count;i<n;i++)
    {
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
//Traversal is done once only
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n],left=0,right=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(left<right)
    {
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
