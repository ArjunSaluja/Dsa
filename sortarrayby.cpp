#include<iostream>
using namespace std;

bool sortarr(int arr[],int size){
    // base case
    if(size==0|| size==1){
        return true;

    }
     if(arr[0]>arr[1])
        return false;
        else{
            bool remainingpart =sortarr(arr+1, size-1);
            return remainingpart;
        }
     
}
int main(){
    int arr[5]={2,3,4,5,7};
    int size=5;

    bool ans=sortarr(arr,size);
    if(ans){
        cout<<" ams is sortedd"<< endl;
    }
    else{
        cout<<" not sorted"<<endl;
    }
}