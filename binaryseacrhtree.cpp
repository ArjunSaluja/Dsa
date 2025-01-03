#include<iostream>
#include<queue>
using namespace std;

class Node{

    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;



    }
};

    Node* inserIntoBst(Node* &root, int d){
        //base case
        if(root==NULL){
            root=new Node(d);
            return root;

        }

        if(d>root->data){
            root->right=inserIntoBst(root->right,d);
        }
        else{
            root->left=inserIntoBst(root->left,d);
        }
        return root;
    }

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
       root= insertIntoBst(root,data);
        cin>>data;

    }
}


void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp =q.front();
        
        q.pop();

       if(temp=NULL){//purana level complete traverse ho chuka hsi
       cout<<endl;
       if(!q.empty)
       {
        q.push(NULL);
       }

       }
       else{
cout<<temp->data;
        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);

        }
       }
    }
}
int main(){
    Node* root =NULL;
    cout<<"Enter data to create BSt"<<endl;
    takeInput(root);

    cout<<"printing the bst"<<endl;

    levelOrderTraversal(root);
}