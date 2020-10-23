#include<iostream>
using namespace std;
class fibonacci
{
public:
    void input()
    {
        int n;
        cin>>n;
        int a=0,b=1,sum=0;
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<=n;i++)
        {
            sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;

        }
    }


};
int main()
{
    fibonacci f1;
    f1.input();
    return 0;

}
