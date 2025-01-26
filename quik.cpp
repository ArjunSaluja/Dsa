#include<iostream>
using namespace std;
 int partiton(int arr[],int s, int e){
    int pivot= arr[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if 
        (arr[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at right place
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right sambhal
    int i=s,  j=e;
    while(i<pivotIndex&& j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex&& j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;

 }
void quickSor(int arr[], int s, int e){
// base case
if(s>=e)
    return ;
     // partition 
     int p = partiton(arr, s, e);

     // left part
     quickSor(arr, s ,p-1);
// right part
quickSor(arr, p+1, e);
}

int main(){

    int arr[5]={3,1,4,6,2};
    int n=5;
     quickSor(arr, 0, 4);
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }cout<<endl;

}