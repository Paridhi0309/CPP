#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        sum=sum+arr[j];
    }
    cout<<"Sum is: "<<sum;
    return 0;


}
