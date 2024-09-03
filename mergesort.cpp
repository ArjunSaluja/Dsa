#include<iostream>
using namespace std;

void merge( int *arr, int s, int e){
    int mid =(s+e)/2;

    int len1=mid-s+1;
    int len2= e-mid;

    int *first= new int[len1];
    int *second=new int[len2];
    //copy value
    int mainarrayi=s;
    for(int i=0; i=len1; i++ ){
        first[i]= arr[mainarrayi++];
    }
     int mainarrayi=mid+1;
    for(int i=0; i=len2; i++ ){
        second[i]= arr[mainarrayi++];
    }
    int index1=0;
    int index2=0;

    mainarrayi=s;

    while(index1<len1&& index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayi++]=first[index1++];
        }
        else{
            arr[mainarrayi++]==second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayi++]=first[index1++];

    }
    while(index2 <len2){
        arr[mainarrayi++]=second[index2++];
    }
}
void mergeSort(int *arr int s, int e){
    // base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    // left part sort
    mergeSort( arr,s, mid);
    // right sort
    mergeSort(arr, mid+1, e);

    merge(arr, s,e);
}
 int main(){
    int arr[6]={ 2,1,24,46,23,4};
    int n=6;

    mergeSort(arr, 0, 5);

    for(int i=0; i<n; i++){
cout<< arr[i]<<" ";
    }cout<<endl;
 }