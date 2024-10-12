#include<iostream>
#include<map>
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
bool isCircularList(Node* head){
    // empty lsit 
    if(head==NULL){
        return true;

    }
    Node* temp= head->next;
    while(temp!= NULL&& temp!=head){
        temp= temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}
// Detect method
bool detectLoop(Node*, head){
    if(head== NULL)
    return false;

    map<Node*,bool>visited;
    Node* temp=head;
    while(temp!=NULL){

        //cycle is present
        if(visited[temp]==true){
            cout<<"present on which element"<<temp->data<<endl;
            return 1;

        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
// flyod method
Node* floydDetectLoop(Node* head){
    if(head==NULL)
    return NULL;

    Node* slow= head;
    Node* fast= head;

    while(slow!=NULL&& fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow== fast){
            return slow;
        }
    }
    return NULL;
}

// starting node

Node* getstartNode(Node* head){
    if(head==NULL)
    return NULL;

    Node* intersection= floydDetectLoop(head);
    Node* slow = head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;

    }
    return slow;
}
//REMOVE LOOP
void removeLoop(Node* head){
    if(head== NULL)
    return;

    Node* startOfloop=getstartNode(head);
    Node* temp= startOfloop;
    while(temp->next!=startOfloop){
        temp=temp->next;

    }
    temp->next=NULL;
}
int main(){
    Node* tail =NULL;


    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
//  insertNode(tail,5,7);
//     print(tail);
//  insertNode(tail,5,6);
//     print(tail);
//     deleteNode(tail,3);
//     print(tail);
// if(isCircularList(tail)){
//     cout<<"lnked list is circular"<<endl;
// }
// else{
//     cout<<"linked list is not circular"<<endl;
// }
if(detectLoop(tail)){
    cout<<"cycle is present"<<endl;
}
else{
    cout<<"no cycle"<<endl;
}

if(floydDetectLoop(head)!=NULL){
    cout<<"cycle is presed"
}
else{
    cout<<"nocycel"
}

Node* loop= getstartNode(tail);
cout<<"Loop start at"<<loop-> data<<endl;

removeLoop(tail);
print(tail);

}
