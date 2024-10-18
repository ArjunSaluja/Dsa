#include<iostream>
#include<stack>
using namespace std;
 class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size ;
    // behaviour constuctor
Stack(int size){
    this->size=size;
    arr= new int[size];
    top=-1;
}
void push(int element){
if(size-top>1){
    top++;
    arr[top]=element;
}
else{
    cout<<"stack overflow"<<endl;
}
}
void pop(){
if(top>=0){
top--;
}
else{
    cout<<"stack underflow"<<endl;


}
}
int peek(){
if(top>=0)
return arr[top];
else{
    cout<<"stack is empty"<<endl;
    return-1;
}
}
bool isempty(){
if(top==-1){
    return true;
}
else{
    return false;
}
 }
 };
int main()
 {
//     // creation of stack
//     stack <int> s;
//     // push
//     s.push(2);
//     s.push(3);
//     // pop
//     s.pop();
//     cout<<"printing top elemeny"<<s.top()<<endl;

//     if(s.empty()){
//         cout<< "stck is empty"<<endl;

//     }
//     else{
//         cout<<"stack is not empty"<<endl;

//     }
//     cout<<"size of stack is"<<s.size()<<endl;

Stack st(5);
st.push(22);
st.push(77);
st.push(88);
st.push(99);
st.push(87);
st.push(82);
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
if(st.isempty()){
    cout<<"stack is empy mera dost"<<endl;
}
else{
    cout<<"stack is not empty mer a dost"<<endl;

}
}