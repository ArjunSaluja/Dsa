#include<iostream>
 #include<cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char *name;
    char level;
    static int timetocomplete;
    // parameter

    Hero(){
        cout<<"Simple constructor is callaed"<<endl;
        name=new char[100];
    }
    Hero(int health){
       
        this -> health=health;
    }
    Hero(int health, char level){
       this ->level=level;
         this -> health=health;
    }
    //   Hero(Hero& temp){
    //     cout<<"copy contructor called"<<endl;
    //     this->health=temp.health;
    //     this->level=temp.level;
    //   }
    

    void print(){
        cout<<"name"<<this->name<<endl;
        cout<<"health"<<this->health<<endl;
         cout<<"level"<<this->level<<endl;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }
};
int Hero:: timetocomplete=5;

int main(){
    cout<<Hero::timetocomplete<<endl;
}
