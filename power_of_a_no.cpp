//Power of a number:
#include<iostream>
using namespace std;
int main()
{
    int n,m,o=1;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        o=o*n;

    }
    cout<<o;
    return 0;
}
