//Insert element in between

//1->2->25->3->4->NULL

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
  
  
   void insertAtBeetween(Node* head, Node* n1, Node* n2,int val)
  {
      Node* temp=head;
      while(temp!=n1)
      {
          temp=temp->next;
      }
      
      Node* n=new Node(val);
      n->next=n2;
      n1->next=n;
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
    
    Node* n1=head->next;
    Node* n2=head->next->next;
    insertAtBeetween(head,n1,n2,25);
    display(head);
}