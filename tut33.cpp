//map- data store in key value 
#include<iostream>
#include<map>
 using namespace std;

 int main(){
    map<int , string>m;
    m[1]="arjun";
    m[2]="aks";
    m[3]="alpha";

    m.insert({5,"Arjun"});

    for(auto i:m){
        cout<<i.first<< "  " <<i.second<<endl; 
    }

    cout<<"finding"<<m.count(3)<<endl;
 }
 //0 log (n)

 