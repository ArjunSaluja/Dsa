#include<iostream>
using namespace std;

 int main(){
 int temp[10];
 cout<<sizeof(temp)<<endl;
 int *ptr =&temp[0];
 cout<<sizeof(ptr)<<endl;
 cout<<sizeof(*ptr)<<endl;
 cout<<sizeof(&ptr)<<endl;

 int a[20]={1,2,3,4};
 cout<<&a[0]<<endl;
 cout<<&a<<endl;
 cout<<a<<endl;


 }