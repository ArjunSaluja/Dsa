#include<iostream>
using namespace std;
 inline getMax(int& a, int& b){
    return (a>b)? a: b;//inline
}

int main(){
    int a= 1;
    int b=2;
    int ans=0;
    ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;
     ans=getMax(a,b);
     cout<<ans<<endl;
}