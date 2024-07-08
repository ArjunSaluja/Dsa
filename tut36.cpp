#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m, int arr3[]){
    int i=0, j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]< arr2[j]){
       arr3[k]=arr1[i];
       k++;
       i++;
        }
        else{
             arr3[k]=arr2[j];
             k++;
             j++;
        }
    }
    // copy first array

    while(i<n){
         arr3[k]=arr1[i];
         k++;
         i++;
    }
    while(j<m){
         arr3[k]=arr2[j];
         k++;
         j++;
    }
}
void print(int arr[],int n){
    for (int i=0;i<n;i++){
 cout<<arr[i]<<"";

    }
    cout<<endl;

}

int main(){
    int arr1[5]={1,23,4,56,34};
    int arr2[4]={22,34,67,3};

    int arr3[9]={0};

    merge(arr1, 5, arr2,4, arr3);
    print(arr3,8);
}