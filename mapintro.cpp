#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<string, int> m;
    //insertion 1
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);
   
   // insert2
   pair<string , int> pair2("love", 2);
   m.insert(pair2);

   // 3 single entry no duplicate key

   m["mera"]=1;

   // what will happen 
   m["mera"]=2;

   // search
   cout<<m["mera"]<<endl;
   cout<<m.at("babbar")<<endl;

   cout<<m.at("unknownkey")<<endl;

   // size()
   cout<<m.size()<<endl;

   // check pressence
   cout<<m.count("bro")<<endl;

   //erase
   m.erase("love");
   cout<<m.size()<<endl;
   
//    for(auto i: m){
//     cout<< i.first<<" "<<i.second<<endl;

    // iterator upar nicha ata hai output
    
    unordered_map<string, int>:: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
   }


}