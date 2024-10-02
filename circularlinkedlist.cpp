#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
// constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value= this ->data;
        // MEMORY FREE
         if(this ->next!=NULL){
            delete next;
            next=NULL;
         }
         cout<<"memory is free for node with data"<<value<<endl;
    }



};

void insertNode(Node* &tail, int element, int d){
    // assuming the element is present
    // empty lst
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail= newNode;
        newNode->next =newNode;

    }
    else{

        Node* curr =tail;

        while(curr->data !=element){
            curr = curr->next;

        }
        Node* temp =new Node(d);
        temp->next =curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp =tail;
   
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while (tail!= temp);
   
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"list is empty,pleaase check again";
        return;
    }
    else{
        // non-empty

        // assue the value

        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!= value){
            prev=curr;
            curr =curr->next;
        }
  prev-> next=curr->next;
  if(tail== curr){
    tail =prev;
  }
  curr-> next =NULL;
  delete  curr;
    }
}
int main(){
    Node* tail =NULL;


    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
 insertNode(tail,5,7);
    print(tail);
 insertNode(tail,5,6);
    print(tail);
    deleteNode(tail,3);
    print(tail);

}
