#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void inserathead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertattail(Node* &tail,int data){
    Node* temp=new Node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;

}
void display(Node* &head){
    Node* mover=head;
    while(mover!=NULL){
        cout<<mover->data<<" ";
        
    
        mover=mover->next;


    }
    cout<<endl;
    
    

}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(12);
    Node* third=new Node(13);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    Node* head=first;
    Node* tail=third;

    display(head);
    inserathead(head,19);
    display(head);
    insertattail(tail,23);
    display(head);

    return 0;
}