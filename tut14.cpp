//LINEAR SEARCH

#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
   for(int i=0; i<size;i++){
 if( arr[i] == key){
    return 1;
 }

   }
  return 0;
}


int main(){

int arr[7]={1,2,3,34,5,6,7};
cout<<"enter the element you search";
int key;
cin>>key;

bool found = search(arr,7,key);

if (found){
  
  cout<<"Key is present"<<endl;

}
}