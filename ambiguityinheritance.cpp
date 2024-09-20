#include<iostream>
using namespace std;

class  A{

    public:
    void func(){
        cout<<"inside function 1"<<endl;
    }
};
class B{
     public:
    void func(){
        cout<<"inside function 2"<<endl;
    }
};

class C:public A,public B{

} ;

int main(){
    C obj;
    //obj.func();
    obj.A::func();
}