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

void InsertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp->next=head;
    head = temp;
}
void print (Node* &head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
    void InsertAtPosition(Node* &tail, Node* &head, int position,int d ){
        //insert at start
        if(position==1){
            InsertAtHead(head,d);
            return;
        }
        // // isert at last
        // if(temp->next == Null){
        //     insertAttail(tail,d);
        //     return;
        // }
        Node* temp = head;
        int cnt=1;
        while(cnt < position){
           temp = temp->next;
            cnt++;
        }
        //isert at last
         
        // create a node d
        Node* nodetoInsert=new Node(d);
        nodetoInsert ->next=temp->next;
        temp->next=nodetoInsert;
    }
    void deleteNode(int position, Node* &head){
        if(position==1){
        Node* temp =head;
        head =head->next;
        // memory free start node;
        temp->next=NULL;
        delete temp;
        }
        else{
            // deleting node middle node or last node
            Node* curr= head;
            Node* prev =NULL;

            int cnt =1;
            while(cnt<=position){
                prev= curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next =NULL;
            delete curr;

        }
    }
    

int main(){
  //  create node 
     Node* node1 =new Node(10);
    // cout<<node1-> data <<endl;
    //cout<<node1->next<<endl;

    //head poinyed
    Node* head =node1;
    print(head);
    InsertAtHead(head,12);
    print(head);
     InsertAtHead(head,22);
     print(head);
     deleteNode(1, head);
     print(head);
     

}