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
void insertathead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
   // head=temp;

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
    Node* head=new Node(10);
    display(head);
    cout<<"head "<<head->data<<endl;
    insertathead(head,23);
    display(head);
    cout<<"head "<<head->data<<endl;

  return 0;
}