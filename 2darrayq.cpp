#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target,int i,int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]== target){
                return 1;
            }
        }
    }
    return 0;

}
int main(){
    // create a 2d array
    int arr[3][4];
//     int arr[3][4] ={1,2,3,4,56,7,5,12,13,114,132,1322};
// // int arr[3],[4]={{1,2,3,4},{5,6,7,8,9},{11,12,13,14}}
    // taking input - row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    //print
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<"enter thre element to search"<<endl;
    int target;
    cin>>target;

    if(ispresent(arr, target,3,4)){
        cout<<"element found"<<endl;

    }
    else{ 
        cout<<"npt found"<<endl;
    }


}
