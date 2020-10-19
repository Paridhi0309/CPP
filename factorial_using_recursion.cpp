#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
    return num*factorial(num-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of a number is: "<<factorial(n);
}

