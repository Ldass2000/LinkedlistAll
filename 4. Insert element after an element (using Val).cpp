//Insert element after an element (using Val)


//1->2->3->200->4->NULLL

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
  
  
 void insertAfterelemenT(Node* head, int after,int val)
  {
      Node* temp=head;
      while(temp!=NULL && temp->next!=NULL && temp->data!=after)
      {
          temp=temp->next;
      }
      
      if((temp==NULL) || (temp->data!=after))
      {
          return;
      }
      
      else
      {
          Node* n=new Node(val);
          n->next=temp->next;
          temp->next=n;
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
    
     insertAfterelemenT(head,3,200);
     display(head);
}