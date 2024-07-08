#include<iostream>
using namespace std;

// length of a string


int getLength(char name[]){

    int count =0;
    for(int i=0; name[i]!= '\0';i++){

        count++;
    
}
  return count;
}
int main(){

char name [20];


    cout<< "enter your namer"<<endl;
    cin>>name;
     // when null came it will be stop 

    cout<<"your name is"<<endl;
    cout<< name<<endl;

    cout<<"length"<<getLength(name)<<endl;

}