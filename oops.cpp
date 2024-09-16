#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

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
    void getHealth(char ch){
        level=ch;
    }
};
int main(){
    Hero ramesh;
    cout<<"ranesh is"<<sizeof(ramesh)<<endl;
cout<< "Ramesh is "<<ramesh.getHealth()<<endl;
// ramesh.health=70; error
ramesh.setHealth(20);
cout<< "Ramesh is "<<ramesh.getHealth()<<endl;
}