#include<iostream>
#include<conio.h>
using namespace std;
class addition{
public:
    int frist_num,second_num,result;
    void input()
    {
        cout<<"Enter integer for First Number : ";
        cin>>frist_num;
        cout<<"Enter integer for second Number : ";
        cin>>second_num;
    }
    void add()
    {
        result = frist_num + second_num;
        cout<<"Addition is "<<result;
    }

};
 main()
{
 addition obj;
 obj.input();
 obj.add();
 getch();
}
