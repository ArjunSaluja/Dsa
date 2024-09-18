#include<iostream>
using namespace std;
 class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;

    }
    int setWeight(int w){
        this->weight=w;

    }
 };

    class male:public Human{
        public:
        string color;
        void sleep(){
            cout<<"male sleeping";
        }
    };
int main(){
 male object1;
 cout<<object1.age<<endl;
 cout<<object1.weight<<endl;
 cout<<object1.height<<endl;
 object1.sleep();

}