#include<iostream> 


class Node{ 
public: 
    int data; 
    Node*memory; 
}; 
void insert (Node**head,int number){ 
    //New node
    Node* newNode=new Node();  
    newNode->data=number;
    //Assgin before head
    newNode->memory=*head; 
    //Move before the head 
    *head=newNode;
}
int main(){ 
   Node *head=new Node();
   Node *second=new Node();
   Node *third=new Node(); 

    head->data=1;
    head->memory=second; 
    second->data=23; 
    second->memory=third;
    third->data=45; 
    third->memory=NULL;    
    //insert a node at first
     insert(&head,12);
    while(head!=NULL){
    std::cout<<head->data<<"\n";
    std::cout<<head->memory<<"\n";  
    head=head->memory;
    }  
    return 0;
}