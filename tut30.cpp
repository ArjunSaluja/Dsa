//Queue first in first out
#include<iostream>
#include<queue>
 using namespace std;

 int main()
 {
    queue<string> q;

    q.push("love");
    q.push("bababe");
    q.push("asss");

    cout<<"size before pop"<<q.size()<<endl;

    cout<<"first elemnt"<<q.front()<<endl;

    q.pop();
    cout<<"first element"<<q.front()<<endl;

    cout<<"size after pop"<<q.size()<<endl;

 }