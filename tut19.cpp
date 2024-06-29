// find first and last occurence
#include<iostream>
  using namespace std;

  int firstOccur(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){

         if(arr[mid]==key){
        ans= mid;
        e=mid-1;

    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else if (key<arr[mid]){
        e=mid-1;
    }
mid=s+(e-s)/2;
}
return ans;
 }
 int lastOccur(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
     int ans=-1;
     while(s<=e){

         if(arr[mid]==key){
        ans= mid;
        s=mid+1;

    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else if (key< arr[mid]){
        e=mid-1;
    }
mid=s+(e-s)/2;
}
return ans;
 }
int main(){

    int even[9]={1,2,3,3,3,3,3,3,5};
    cout<< "first occurence of 3 index is "<<firstOccur(even,3,9);
    cout<< "last occurence of 3 index is "<<lastOccur(even,3,9);
return 0;
}
     
  