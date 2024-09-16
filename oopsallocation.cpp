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
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    // static allocatiom
    Hero a;
    a.setHealth(30);
    a.setLevel('c');
cout<<"level is "<<a.level<<endl;
cout<<"health  is "<<a.getHealth()<<endl;




    //dynamic allocation 
    Hero *b =new Hero;
    b->setHealth(10);
    b->setLevel('a');
    cout<<"level is"<<(*b).level<<endl;
     cout<<"health is "<<(*b).getHealth()<<endl;
}