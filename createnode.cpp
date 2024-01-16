#include<iostream>
using namespace std;
//create node
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
    

};
void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
int main(){
    Node *first=new Node(2);//dynamic memory allocation
   // cout<<first->data<<endl;
   // cout<<first->next<<endl;
    Node *second= new Node(3);
    //cout<<second->data<<endl;
    //cout<<second->next<<endl;
    Node *third= new Node(4);
   // cout<<third->data<<endl;
    //cout<<third->next<<endl;
    first->next=second;
    second->next=third;
    //cout<<first->data<<" "<<first->next<<endl;
    //cout<<second->data<<" "<<second->next<<endl;
    //cout<<third->data<<" "<<third->next<<endl;
    display(first);



    return 0;
}