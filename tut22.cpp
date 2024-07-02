#include<iostream>
 using namespace std;

 
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
 cout<<arr[i]<<"";

    }
    cout<<endl;

}

void selectionSort(int arr[], int n){

for( int i=0; i<n-1;i++ ){
    int minIndex=i;

    for(int j=i+1;j<n; j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);
}


}

  int main(){

    int arr[8]={2, 34, 45, 1, 67, 23 ,11 ,22};
    selectionSort(arr,8);
    printArray(arr,8);
  }

  //space complexity- o(1)
  //time complexity-o(n2)
  // best case- o(n2)
  //worst caase- 0(n2)

  // use case- array size small we will use selection sort.
  // selection sort is not a stable element because it may swap non adjancey element.