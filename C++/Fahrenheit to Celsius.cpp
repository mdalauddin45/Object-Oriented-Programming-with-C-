#include<iostream>
using namespace std;
class Temperature
{ public:
float fahrenheit, celsius;
void result(); // function declaration
};
void Temperature::result() // function definition
{
cout<<"Enter the temperature in Fahrenheit: ";
cin>>fahrenheit;
celsius = (fahrenheit - 32) * 5/9;
cout<<"Temperature in Celsius is: "<<celsius;
}
main()
{
Temperature obj;
obj.result(); // function call
}