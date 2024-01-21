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
void insertathead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

}
void deletenode(Node* &head,int k){
    //case 1:- k==1
    if(k==1){
        Node* temp=head;
        temp->next=NULL;
        delete(temp);
    }else{
        Node* prev=NULL;
        Node* curr=head;
        int cnt=1;
        while(cnt<k){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
       // cout<<"prev data"<<prev->data<<endl;
                //cout<<"curr data"<<curr->data<<endl;
prev->next=curr->next;
curr->next=NULL;
delete(curr);
        
    }
}
void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    Node* first=new Node(10);
    Node* head=first;
    display(head);
    insertathead(head,11);
    insertathead(head,12);
    insertathead(head,13);
    insertathead(head,14);
    display(head);
    deletenode(head,2);
    display(head);
    

    return 0;
}