//Interesting Alphabets
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        char x='A'+n-i;
        for(j=1;j<=i;j++)
        {
            cout<<x++;
        }
        cout<<endl;
    }

}
