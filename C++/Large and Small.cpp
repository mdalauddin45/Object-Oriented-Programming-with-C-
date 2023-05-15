#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Number1 ";
    cin>>num1;
     cout<<"Enter Number2 ";
    cin>>num2;
    if(num1>num2)
    {
        cout<<num1,cout<<"is greater than ", cout<<num2;
    }
    if(num2>num1)
    {
        cout<<num2; cout<<" is greater than  ",cout<<num1;
    }
  if(num1==num2)
    {
       cout<<"Two Number is Equal";
    }
    return 0;
}
