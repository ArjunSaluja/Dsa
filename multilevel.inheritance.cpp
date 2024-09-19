#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

    
};
class Dog:public Animal{

};
class GermanSheperd : public Dog{

};

int main(){
    GermanSheperd g;
    g.speak();
}