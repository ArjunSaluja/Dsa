#include<iostream>
using namespace std;

 int main(){
    int num=5;
    cout<<num<<endl;

    // address of operator -& hexa decimal form ma
    cout<< " address"<< &num<<endl;
int *ptr= &num;
cout<< "value is:"<<*ptr;// value
cout<< "value is:"<<ptr;// adress
cout<<"size of integer is"<<sizeof(num)<<endl;
cout<<"size of pointer is "<<sizeof(ptr)<<endl;// hmesha address ka size 8 hoga 


 }