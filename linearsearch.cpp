#include<iostream>
using namespace std;
bool linearSearch( int arr[],int size, int k){
    // basse cade
    if(k==0)
        return false;

        if(arr[0]==k){
            return true;
        }
        else{
            bool remainingpart=linearSearch(arr+1, size-1, k);
            return remainingpart;
        }
    
}

int main(){
    int arr[5]={3,4,52,4,5};
    int size=5;
     int key=4;

     bool ans=linearSearch(arr,size,key);
     if(ans){
        cout<<"present"<< endl;
     }
     else{
        cout<<"not present"<<endl;
     }
}