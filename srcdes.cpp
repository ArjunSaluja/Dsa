#include<iostream>
using namespace std;
void Reachhome(int src, int des){
    cout<<"src"<<src<<"des"<<des<<endl;
    if(src==des){
        cout<<"pahuch gya"<<endl;
  return;
    }
    src++;
    // recursive cll
    Reachhome(src,des);
}
int main(){
    int des=10;
    int src= 1;
    cout<<endl;
    Reachhome(src, des);
}