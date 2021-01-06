#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
};
int main(){
    Student s1;
    s1.name="Paridhi";
    s1.rollno=11;
    Student s2;
    s2.name="Aakriti";
    s2.rollno=12;
    cout<<s1.name<<" "<<s1.rollno<<endl;
    cout<<s2.name<<" "<<s2.rollno;
}
