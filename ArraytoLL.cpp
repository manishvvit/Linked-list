#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* converter(vector<int> &arr){
    Node* head=new Node(arr[0]);//first node
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* node=new Node(arr[i]);
        temp->next=node;
        temp=node;
}
return head;


}
void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
int main(){
    vector<int> v={3,4,8,9};
    Node* temp=converter(v);
    display(temp);

    return 0;
}