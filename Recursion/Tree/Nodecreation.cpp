#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    
    Node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
int main(){
    Node* root=new Node(1);
        //Node* node1=new Node(2);
    //Node* node2=new Node(3);
    //node1=root->left;
   // node2=root->right;
   root->left=new Node(2);
   root->right=new Node(3);



    return 0;
}