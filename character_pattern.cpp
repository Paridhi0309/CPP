//Character Pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    char x,y;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            x='A'+i-1;
            y=x+j-1;
            cout<<y;
        }
        cout<<endl;
    }
}
