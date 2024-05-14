#include<iostream>
 using namespace std;
void printArray(int arr[],int n){
  cout<<"printing the array"<<endl;
   for (int i = 0; i < n; i++)
  {
     cout<<arr[i]<<" ";
       }
  cout<<"printing done"<<endl;
}
  
  int main(){
//  int num[15];
// // access an array
//  cout<<"value of 1 is "<<num[1]<<endl;
//   cout<<"value of 20 is "<<num[20]<<endl;

// // baki element 0
//  int third[15]={2,32};
//   int n=15;
//   cout<<"print the array "<<endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout<<third[i]<<" ";
//   }
  int third[15]={2,7};
  int k=15;
  printArray(third,15);
 int fourth[10]={0,0,0,0,0,0,0,0,0,0,};
 int l=10;
 printArray(fourth,10);

 }