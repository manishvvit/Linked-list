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
void insertattail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertatmid(int position,int data,Node* &head,Node* &tail){
    if(position==1){
        insertathead(head,data);
        return;
    }
    Node* newnode=new Node(data);
    Node* mover=head;
    int count=1;

    while(count<position-1){
        mover=mover->next;
        count++;

    }
    newnode->next=mover->next;
    mover->next=newnode;
    if(mover->next==NULL){
        insertattail(tail,data);
        return ;
    }

}
int lengthofLL(Node* &head){
    Node* mover=head;
    int counter=1;

    while(mover->next!=NULL){
        counter++;
        mover=mover->next;
    }
   // cout<<"Mover "<<mover->data<<endl;
    cout<<"length of LL "<<counter<<endl;
   return counter;
}
void checker(Node* &head){
    Node* prev=nullptr;
Node* temp=head;

while(temp->next!=NULL){
    temp=temp->next;
    prev=temp->next;
}
cout<<"mover "<<prev->data<<endl;
cout<<"temp "<<temp->data<<endl;
}

void deleteLL(Node* &head,int k){
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
    Node * tail=new Node(10);
    Node* head=tail;

   // display(head);
    insertattail(tail,12);
    //cout<<tail->data<<endl;
    //display(head);
     insertattail(tail,3);
    //display(head);
    insertathead(head,13);
    //display(head);
insertattail(tail,3);
    //display(head);
insertatmid(4,55,head,tail);
//display(head);
insertatmid(1,56,head,tail);
//display(head);
insertatmid(8,58,head,tail);
display(head);
deleteLL(head,9);
display(head);
deleteLL(head,5);
display(head);
//checker(head);




    return 0;
}