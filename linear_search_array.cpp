#include<iostream>
using namespace std;
int main()
{
    int n;
    int val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a value to search in array: ";
    cin>>val;
    for(int i=0;i<n;i++)
    {
        if(val==arr[i])
        {
            cout<<"Number exists ";
        }
    }
    return 0;
}
