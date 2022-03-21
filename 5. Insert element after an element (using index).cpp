//Insert element after an element (using index)


//1->2->3->500->4->NULL

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
  
 void  insertAfterelemenTwithIndex(Node* prevNode,int val)
 {
     if(prevNode==NULL) return;
     Node* n=new Node(val);
     n->next=prevNode->next;
     prevNode->next=n;
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
    
   
     Node * n1=head->next->next;
     insertAfterelemenTwithIndex(n1,500);
     display(head);
}