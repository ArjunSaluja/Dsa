#include<iostream>
using namespace std;

 int main(){

int arr[10]={2,9,4,5};
cout<<"adress of first memory block is"<<arr << endl;
cout<<"adress of first memory block is"<<&arr[0] << endl;
cout<<"print the*a "<< *arr<<endl;
cout<<"print the*a "<< *arr+1<<endl;
cout<<"print the*a "<< *(arr+1)<<endl;
// arr[2]- * (arr+2) arr= 23,122,41,67; answr will be 41

int i=3;
cout<<i[arr]<< endl;
 }