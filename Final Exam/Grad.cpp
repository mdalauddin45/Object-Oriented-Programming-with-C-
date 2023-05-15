#include<bits/stdc++.h>
using namespace std;
class grade
{
    public:
    void result();
};
void grade::result(){
    int x;
    cin>>x;
    if(x<0 || x>100){
        cout<<"Invalid Score\n";
        return;
    }
    switch (x/10)
    {
    case 10:
    case 9:
       cout<<"A+";
        break;
    case 8:
      cout<<"A";
        break;
    case 7:
       cout<<"B";
        break;
    case 6:
      cout<<"C";
        break;
    case 5:
       cout<<"D";
        break;
    default:
       cout<<"F";
        break;
    }
}
int main(){
    grade obj;
    obj.result();
    return 0;
}