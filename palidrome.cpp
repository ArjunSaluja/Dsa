#include<iostream>
using namespace std;
bool checkPAlidrome(string str, int i ,int j){
    if(i>j)
    return true;

    if(str[i]!= str[j]){
        return false;
    }
    else{
         return checkPAlidrome(str, i+1,j-1);
    }
}

int main(){
    string name= " abcde";
    
    bool isPalidrome= checkPAlidrome( name, 0,4);
    if(isPalidrome){
        cout<<"its palidrome"<<endl;
    }
    else{
        cout<<"not palidrome"<<endl;
    }
}