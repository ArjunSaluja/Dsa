#include<iostream>
#include<vector>
using namespace std;

class solution{
    private:
    bool checkpalidrome(vector<int> arr){
  int n=0;
  int s=0;
  int e=n-1;
  while(s<=e){
    if(arr[s]!=arr[e]){
        return 0;
    }
    s++;
    e--;
  }
  return 1;
    }
    public:
    bool ispalidrome(Node *head ){
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkpalidrome(arr).
    }
}