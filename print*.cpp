#include<iostream>
 using namespace std;
 int main(){

//      int n;
//     cin>>n;
//     int i=1;
//     // while (i<=n)
//     // {
//     //     cout<<i<<endl;
//     //     i=i+1;

// int sum=0;
// while(i<=n){
//     sum=sum+i;
//     i= i+1;
// }
// cout<<"Value of sum is "<<sum<<endl;

//PATTERN
int  n;
cin>>n;//n matlan kitni row banani ha 
int i =1;// i=row
while(i<=n)//agar i= 0  hota to i<n aata
{
int j=1; //j=column
while(j<=n){
    cout<<"*";
    j=j+1;
}
cout<<endl;
i=i+1;
}
 }
    
 