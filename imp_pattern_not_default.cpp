#include<iostream>
using namespace std;
int main()
{
    int N,k;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        k=i;
        for(int j=i;j<N;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}
