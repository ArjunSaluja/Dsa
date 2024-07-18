#include<iostream>
using namespace std;


void print(int*p){
    cout<<p<<endl;
    cout<<*p<<endl;

}
void update(int*p){
    // p=p+1;
    *p=*p+1;
}
void getSum(int arr[],int n){

    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


 int main(){
 
//  int value=5;
//  int*p= &value;

// print(p);
// cout<<"before"<<p<<endl;
// cout<<"before"<<*p<<endl;
// update(p);
//  cout<<"after"<<p<<endl;

// cout<<"after"<<*p<<endl;


int arr[5]={12,23,1222,11,13};
cout<<"sum is"<<getSum(arr,5)<<endl;


 }
