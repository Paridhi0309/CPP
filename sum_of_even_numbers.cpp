//Sum of even numbers
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of terms for getting sum: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum of even numbers: "<<sum;
}
