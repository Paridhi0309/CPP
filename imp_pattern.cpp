//Important pattern
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i,j,k;
   for(i=1;i<=n;i++)
   {
       k=i;
       for(j=1;j<=i;j++)
       {
           cout<<k++;
       }
        cout<<endl;
   }

}
