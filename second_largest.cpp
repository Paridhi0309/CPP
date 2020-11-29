#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int num,n;
    cin>>num;
    int max=INT_MIN,second_max=INT_MIN;
    for(int i=1;i<=num;i++)
    {
        cin>>n;
        if(n>max)
        {
            second_max=max;
            max=n;
        }
        else if(n>second_max && n!=max)
        {
            second_max=n;
        }

    }
    cout<<second_max;
}
