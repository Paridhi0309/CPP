#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=num,ans=0,rem;
    while(temp!=0)
    {
        rem=temp%10;
        ans=ans+rem*rem*rem;
        temp=temp/10;

    }
    if(num==ans)
    {
    cout<<"Armstrong of a number is: "<<ans;
    }
    else{
        cout<<"Armstrong of the number doesnot exist";
    }
    return 0;
}
