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
        // isert at last
        if(temp->next ==Null){
            insertAttail(tail,d);
            return;
        }
        Node* temp = head;
        int cnt=1;
        while(cnt < position-1){
           temp = temp->next;
            cnt++;
        }
        // create a node d
        Node* nodetoInsert=new Node(d);
        nodetoInsert ->next=temp->next;
        temp->next=nodetoInsert;
    }
    

int main(){
    //create node 
    Node* node1 =new Node(10);
    cout<<node1-> data <<endl;
    cout<<node1->next<<endl;

    //head poinyed
    Node* head =node1;
    print(head);
    InsertAtHead(head,12);
    print(head);
    //  InsertAtHead(head,22);
    // print(head);
     InsertAtHead(head,32);
    print(head);
    InsertAtPosition(head,3,42);
    print(head);
    return 0;

}