#include<iostream>
#include<deque>
 using namespace std;

 int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    // d.pop_back();
    // cout<<endl;
    // for(int i:d
    //     cout<<i<<" ";

        cout<<"element at 1 index->"<<d.at(0)<<endl;

        cout<<"first element"<<d.front()<<endl;
     cout<<"Last element"<<d.back()<<endl;

     cout<<"before erase"<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+1);
     cout<<"after erasse"<<d.size()<<endl;
     for(int i:d){
        cout<<i<<endl;
     }
    }
 