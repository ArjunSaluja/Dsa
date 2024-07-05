//set - every element is unique

#include<iostream>
#include<set>
 using namespace std;
 int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    for(auto i:s){
        cout<<i<<endl; 
    }
        set<int> :: iterator it=s.begin();
        it++;
        s.erase(it);//+2

        for(auto i:s){
        cout<<i<<endl; 
           }

           cout<<s.count(2)<<endl;//present or not

          
 
 }