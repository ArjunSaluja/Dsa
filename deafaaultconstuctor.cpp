 #include<iostream>
 #include<cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char *name;
    char level;
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
int main(){
Hero hero1;
hero1.setHealth(12);
hero1.setLevel('D');
char name[7]="babbar";
hero1.setName(name);
hero1.print();
// use deafault
Hero hero2(hero1);
hero2.print();

}