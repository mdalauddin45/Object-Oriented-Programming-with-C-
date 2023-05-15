#include<bits/stdc++.h>
using namespace std;
class algo{
    public:
    void result();
};
void algo::result(){
     int n;
    cin>>n;
    if(n==1){
        return ;
    }else if(n%2!=0){
    n=3*n+1;
   cout<<n;
   }else if(n%2==0){
    n=n/2;
    cout<<n;
   }
}
int main(){
   algo obj;
   obj.result();
   return 0;
}