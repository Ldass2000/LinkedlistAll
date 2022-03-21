//delete element from  given position of linked list;


10->12->14->16->NULL // before deletion

10->12->14->NULL  //after deletion

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
  
  
  void deleteFromPosition(Node* &head,int position)
  {
     if(head==NULL || position<0) return;
     
     Node* dummyNode=new Node(-100);
     dummyNode->next=head;
     
     Node* temp=head;
     int count=0;
     Node* prev=dummyNode;
     
     while(count<position  && temp->next!=NULL)
     {
         count++;
         prev=temp;
         temp=temp->next;
     }
     
     if(count<position) return;
     prev->next=temp->next;
     delete temp;
     head=dummyNode->next;
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
    insertAtend(head,10);
    insertAtend(head,12);
    insertAtend(head,14);
    insertAtend(head,16);
    display(head);
    deleteFromPosition(head,3);
    display(head);
}