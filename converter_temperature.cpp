//Fahrenheit to celcius with starting and end point with a gap value
#include <iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int e;
    cin>>e;
    int gap;
    cin>>gap;
    int result;
    for(int i=s;i<=e;i=i+gap)
    {
        result=((5*i)-160)/9;
        cout<<i<<" "<<result<<endl;
    }

}
