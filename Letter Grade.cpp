#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter Your Mark ";
    cin>>mark;
    if(mark>100 || mark<0)
    {
        cout<<"Invalid Mark";
        return mark;
    }

    if(mark>=80)
    {
        cout<<"A+";
    }
    if(mark>=70)
    {
        cout<<"A";
    }
    if(mark>=80)
    {
        cout<<"A+";
    }
    if(mark>=60)
    {
        cout<<"A-";
    }
    if(mark>=50)
    {
        cout<<"B";
    }
    if(mark>=40)
    {
        cout<<"C";
    }
    if(mark>=33)
    {
        cout<<"D";
    }
    else
        cout<<"Fail";
    return 0;
}
