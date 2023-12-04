#include<iostream> 
//user-defined datatype class
class node{ 
    public:
        int data; 
        node* next;
}; 
void printList(node*n){  
    //loop to print the values
    while(n!=NULL){ 
         std::cout<<n->data<<std::endl;  //values stored in the int data 
         std::cout<<n->next<<std::endl;
        n=n->next;//memory address of node*next
    }
}
int main(){ 
      node*head=new node();  
      node*second=new node(); 
      node*third=new node(); 
      //assign the values to nodes
      head->data=1; 
      head->next=second; 
      second->data=23; 
      second->next=third; 
      third->data=45; 
      third->next=NULL; 
      //callback the function to print 
      printList(head);  
      delete head; 
      delete second; 
      delete third;
      return 0;

}