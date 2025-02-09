#include<iostream>
 using namespace std;

 
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
 cout<<arr[i]<<"";

    }
    for (int j=0;j<n;j++){
 cout<<arr[j]<<"";

    }
    cout<<endl;

}
void bubbleSort(int arr[], int n){

    for( int i=0; i<n-1;i++ ){
        for(int j=0; j=n-i;j++ ){
            if ( arr[j]>  arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

  int main(){

    int arr[8]={2,3,1,4,6,75,5,11};
    bubbleSort(arr,8);
    printArray(arr,8);
  }

  //time complexity-o(n2)
  //space complexity-o(1)
  //bext case -o(n)
  //bubble sort is a stable algo.