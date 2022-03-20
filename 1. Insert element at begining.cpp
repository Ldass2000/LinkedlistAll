//Insert element at begining

//3<-2<-1<-NULL

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
 
 
  void insertAtBeg(Node* &head,int val)
  {
      Node* n=new Node(val);
      n->next=head;
      head=n;
  }
 
  void display(Node* head)
  {
      Node* temp=head;
         while(temp!=NULL)
       {
          cout<<temp->data<<"<-";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }
 
 int main() 
 
{
    Node *head=NULL;
    insertAtBeg(head,1);
    insertAtBeg(head,2);
    insertAtBeg(head,3);
    display(head);
}