#include<iostream>
using namespace std;

int main(){
    char c;
    c=cin.get();
    int dig=0;    // count of digits
    int ch=0;    // count of characters
    int sp=0;    // count of spaces
    while(c!='$')
    {
        if(c>='0' && c<='9')
        {
            dig++;
        }
        else if(c>='a' && c<='z')
        {
            ch++;
        }
        // else
        else if(c==' '||c=='\n'||c=='\t')      // space ko handle krne k liye ye teeno check krne hain
        {
            sp++;
        }
        c=cin.get();
    }
    cout<<ch<<" "<<dig<<" "<<sp;
}
