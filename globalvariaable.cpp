#include<iostream>
using namespace std;
 int score=14;
void a(int& i){
    cout<<score<<"in a"<<endl;
    cout<<i<<endl;
}
void b(int& i){
    cout<<i<<endl;
    
cout<<score<<"in b"<<endl;
}
int main(){
int i=5; //LOCAL VARIABLE
cout<<score<<"in main"<<endl;
a(i);
b(i);
}