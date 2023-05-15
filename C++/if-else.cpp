#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter Your Number ";
    cin>>num;
    if(num>0)
    {
        cout<<"Positive";
    }
    if(num==0)
    {
        cout<<"Zero";
    }
    else
        cout<<"Negative";
    return 0;
}
