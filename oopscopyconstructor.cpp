#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    Hero(){
        cout<<"simple constructor is called"<<endl;
    }

    void print(){
        cout<<"health "<<this->health<<endl;
         cout<<"level "<<this->level<<endl;

    }
    int getHealth(){
        return health;

    }
    char getLevel(){
        return level;

    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){

 Hero S(40,'s');
S.print();
// // copy constructor
// Hero ritesh(S);
// ritesh.print();
}