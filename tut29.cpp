//stack last int first out
#include<iostream>
#include<stack>

 using namespace std;
 int main(){
    stack <string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    cout<<"top elemennt"<<s.top()<<endl;
    s.pop();
    cout<<"top element->"<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"empty or not->"s.empty()<<endl;
     }