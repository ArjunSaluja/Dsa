#include<iostream>
using namespace std;

void print (int arr[], int n, int s=0){
    for(int i=s; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
 int main(){
    int arr[5]={1,2,3,4,5,};
int size=5;
    print(arr, size);
    cout<<endl;
    print(arr, size, 2);

 }