//delete element from  End of linked list;


  1->2->3->4->NULL// before deletion

1->2->3->NULL  //after deletion

#include <iostream>
using namespace std;

 struct Node
 {
     int data;
     Node* next;
     Node(int val)
     {
         data=val;
         next=NULL;
     }
 };
 
 
 void insertAtend(Node *&head,int val)
  {
      Node* temp=head;
      Node* n =new Node(val);
      if(head==NULL)
      {
          head=n;
          return;
      }
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=n;
     
  }
  
  
  void deleteFromEnd(Node* &head)
  {
      if(head!=NULL)
      {
          Node* dummyNode= new Node(-100);
          dummyNode->next=head;
          
         Node* prev=dummyNode;
         Node* curr=head;
         
         while(curr->next!=NULL)
         {
             prev=curr;
             curr=curr->next;
         }
         
         delete curr;
         prev->next=NULL;
         head=dummyNode->next;
      }
  }
  
  void display(Node* head)
  {
      Node* temp=head;
         while(temp!=NULL)
       {
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }
 
 int main() 
 
{
    Node *head=NULL;
    insertAtend(head,1);
    insertAtend(head,2);
    insertAtend(head,3);
    insertAtend(head,4);
    display(head);
    deleteFromEnd(head);
    display(head);
}