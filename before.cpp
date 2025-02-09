#include<iostream>
using namespace std;

 int main(){

// int *p=0;
// cout<<*p<<endl;
// int i=9;
// int *p =0;
// p=&i;

// cout<<p<<end;
// cout<<*p<<endl;


int num=5;
int a= num;
a++;
cout<<num<<endl;

int *p= &num;
cout<<"befor"<<num<<endl;
(*p)++;
cout<<"after"<<num<<endl;
//copy
int*q=p;
cout<<p<<"-"<<q<<endl;
cout<<*p<<"-"<<*q<<endl;

// imp concept

int i=3;
int*t=&i;
*t=*t+1;
cout<<*t<<endl;
cout<<"befpre t"<<t<<endl;
t=t+1;
cout<<"after t "<<t<<endl;

 }