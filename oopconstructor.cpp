 #include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

Hero(){
    cout<<"constuctor called"<<endl;
}

    void print(){
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
   // cout<<"hi"<<endl;
   // static
    Hero ramesh;
   // cout<<"hello"<<endl;
// dynamic
Hero *h= new Hero();

}