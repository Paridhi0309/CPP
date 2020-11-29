#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
        if(arr[j]>current)
        {
            arr[j+1]=current;
        }
        else{
            break;
        }
        }
        arr[j+1]=current;
    }
}
int main()
{
    int arr[]={23,78,441,20,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
}
