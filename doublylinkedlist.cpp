#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
// constructor
    Node(int data){
        this->data=data;
         this->prev=NULL;
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
void print (Node* &head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int getLength(Node* head){
    int length=0;
    Node* temp = head;
    while (temp !=NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertatHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next= head;
    head->prev=temp;
    head=temp;


}
void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next= temp;
    temp->prev=tail;
    tail=temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position,int d ){
        //insert at start
        if(position==1){
            insertatHead(head,d);
            return;
        }
        
        Node* temp = head;
        int cnt=1;
        while(cnt < position-1){
           temp = temp->next;
            cnt++;
        }

        // isert at last
        if(temp->next == NULL){
            insertattail(tail,d);
            return;
        }
        // create a node d
        Node* nodetoInsert=new Node(d);
        nodetoInsert ->next=temp->next;
        temp->next->prev=nodetoInsert;
        temp->next=nodetoInsert;
        nodetoInsert->prev=temp;
    }


    void deleteNode(int position, Node* &head){
        if(position==1){
        Node* temp =head;
        temp->next->prev=NULL;
        head=temp->next;
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
            curr->prev=NULL;
            prev->next=curr->next;
            curr->next =NULL;
            delete curr;

        }
    }
    

int main(){
    Node* node1= new Node(10);
    Node* head =node1;
Node* tail =node1;


    print(head);
    cout<<getLength(head)<<endl;

    insertatHead(head,11);
    print(head);

    insertatHead(head,13);
    print(head);
    insertatHead(head,12);
    print(head);

    insertattail(tail,42);
    print(tail);
    insertAtPosition(tail,head,2,100);
    print(head);
    deleteNode(3,head);
    print(head);
}