#include<iostream>
#include<vector>
 using namespace std;
 //stl in vector- size will be double if we use extra element , dynamic, we can increase or decrease

 int main(){
    vector<int> v;// initalize the vector
 vector<int> a(5,1);
 //vector<int> last(a)this howw we copy.
 cout<<"print a"<<endl;
 for(int i:a){
    cout<<i<<"";
 }
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;
     v.push_back(2);
    cout<<"capacity ->"<<v.capacity()<<endl;
     v.push_back(3);
    cout<<"capacity ->"<<v.capacity()<<endl;//size will double
  cout<<"size ->"<<v.size()<<endl;

    cout<<"element at 2 index->"<<v.at(2)<<endl;
   cout<<"first element"<<v.front()<<endl;
     cout<<"Last element"<<v.back()<<endl;

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<"";
    }
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;

 }
