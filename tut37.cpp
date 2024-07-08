#include<iostream>
using namespace std;

// int main(){

//     char name [20];


//     cout<< "enter your namer"<<endl;
//     cin>>name;

//     cout<<"your name is"<<endl;
//     cout<< name<<endl;
//     //only one word is written
//     //cin will execute stop when we give space tab new line enter
// }
int main(){

    char name [20];


    cout<< "enter your name"<<endl;
    cin>>name;
    name[2]='\0'; // when null came it will be stop 

    cout<<"your name is"<<endl;
    cout<< name<<endl;
    //only one word is written
    //cin will execute stop when we give space tab new line enter
}
