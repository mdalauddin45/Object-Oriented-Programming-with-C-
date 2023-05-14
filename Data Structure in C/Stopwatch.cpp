#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<windows.h>
using namespace std;
int main(){
    short minutes, seconds; int time;
    do
    {
        cout<<"Enter Seconds: ";
        cin>>seconds;
    } while (seconds>59);
    do
    {
        cout<<"Enter Minutes: ";
        cin>>minutes;
    } while (minutes>59);
    time = (minutes!=0)? minutes*60 : 0;
    time += seconds;

    for( int i= time;i>0;i--){
        system("clear");
        // system("cls");
        cout<<"Enter time remaining is 0:"<<minutes<<":"<<seconds<<endl;
        minutes = (i%60==0)? --minutes: minutes;
        seconds = (seconds==0)? 59: --seconds;
        sleep(1);
        // system("sleep 1");
        // system("TIMEOUT");
      
    }
    system("clear");
    cout<<"**************\nTimer ended!\a\nLasted for "<<time <<" Secondes"<<"\n**************\n\n\n\n"<<endl;
    return 0;
}