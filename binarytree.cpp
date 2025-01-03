#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
     node* right;

     node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;


     }
};

node* buildTree(node* root){
    cout<<"enter the datta :"<<endl;
    int data;
    cin>>data;
    root= new node(data);

    if(data==-1){
        return NULL;

    }
    cout<<"Enter data for insertng in left"<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for inserting in right"<<endl;
    root->right=buildTree(root->left);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp =q.front();
        
        q.pop();

       if(temp=NULL){//purana level complete traverse ho chuka hsi
       cout<<endl;
       if(!q.empty){
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
void inorder(node* root){
    //base case
    if(root==NULL){
        return;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);



}

void preorder(node* root){
    //base case
    if(root==NULL){
        return;

    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case
    if(root==NULL){
        return;

    }
    
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
 void  buildfromlevelorder(node* &root)
{
    queue<node*> q;
    cout<<"enter a data for root"<<endl;
    int data;
    cin>> data;
    root=new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter left node "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);

        }
        cout<<"enter right  node "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->left);
            
        }

    }
}
int main(){
    node* root=NULL;
    // creating a tree
    // root=buildTree(root);
buildfromlevelorder(root);

    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // //level order
    // cout<<"print the level of order traversal output"<<endl;
    // levelOrderTraversal(root);
    // cout<<"inorder traversal is:";
    // inorder(root);
    // cout<<"preorder traversal is:";
    // preorder(root);
    // cout<<"postorder traversal os :";
    // postorder(root);

}