    #include<iostream>
 using namespace std;

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
 cout<<arr[i]<<"";

    }
    cout<<endl;

}

void insertionSort(int arr[],int n){

    for(int i=1;i<n;i++){
        int temp =arr[i];
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){

    int arr[8]={2, 34, 45, 1, 67, 23 ,11 ,22};
    insertionSort(arr,8);
    printArray(arr,8);
  }
// very adaptable,stabel algo.
//space complexity- o(1)
//time complexity-o(n2)
//best case-o(n)
//worst caseo(n2)