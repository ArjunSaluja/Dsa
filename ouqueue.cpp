#include<iostream>
#include<queue>
using namespace std;


int main(){
    // create queue
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(12);

    cout<<"size of queeue is "<<q.size()<<endl;
    q.pop();
     cout<<"size of queeue is "<<q.size()<<endl;

     if(q.empty()){
        cout<<"queue is empty"<<endl;

     }
     else{
        cout<<"queue is not empty"<<endl;
     }
}