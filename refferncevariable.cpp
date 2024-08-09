#include<iostream>
using namespace std;

void update2(int& n){

n++;
}

void update(int n){

n++;
}
 int main(){
    int i=5;
    //create a reffernce variable
    int& j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    int n=9;

cout<<"before"<<n<<endl;
update(n);
cout<<"after"<<n<<endl;
    cout<<"before"<<n<<endl;
update2(n);
cout<<"after"<<n<<endl;
    

 }