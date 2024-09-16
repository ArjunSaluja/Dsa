#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    // parameter
    Hero(int health){
        cout<<"this->" <<this<<endl;
        this -> health=health;
    }

    void ptint(){
        cout<<level<<endl;

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
    Hero ramesh(10);
    cout<<"address of ramesh is "<< &ramesh<<endl;
    ramesh.getHealth();

    Hero *h = new Hero();

}