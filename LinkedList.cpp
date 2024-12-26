#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
void insertAtHead(Node* &head ,int val){
    Node* new_node= new Node(val);
    new_node->next= head;
    head=new_node;
}
void insertAtEnd(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    
    
}
void insertAtRandom(Node* &head,int val,int loc){
    Node* new_node=new Node(val);
    Node* temp=head;
    int count=1;
    if(loc==0){
        insertAtHead(head,val);
        return;
    }
    while(count!=loc){
        temp=temp->next;
        count++;
    }
    Node* temp1=temp->next;
    temp->next=new_node;
    new_node->next=temp1;
}
void UpdateAtLocation(Node* &head,int n,int loc){
    Node* temp=head;
    int count=0;
    while(count!=loc){
        temp=temp->next;
        count++;
    }
    temp->val=n;
}
void DeletAtStart(Node* &head){
    head=head->next;
}
void DeletAtEnd(Node* &head){
    Node* temp=head;
    Node* temp1=head->next;
    while (temp1->next!=NULL)
    {
      temp=temp->next;
      temp1=temp1->next;
    }
    temp->next=NULL;
}
void DeletAtRandom(Node* &head ,int loc){
    Node* temp=head;
    Node* temp1=head->next;
    int count=0;
    if(loc==0){
        DeletAtStart(head);
        return;
    }
    else{
    while (count!=loc-1)
    {
        temp=temp->next;
       temp1=temp1->next;
       count++;
    }
    temp->next=temp1->next;
    free(temp1);  
    }
}
void display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<"->";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
      display(head);
    insertAtHead(head,4);
     insertAtHead(head,5);
      insertAtHead(head,6);
   display(head);
    insertAtHead(head,7);
     insertAtHead(head,8);
      insertAtHead(head,9);
   display(head);
   insertAtEnd(head,13);
   insertAtEnd(head,24);
   display(head);
   insertAtRandom(head ,89,5);
   insertAtRandom(head ,54,10);
   insertAtRandom(head ,125,0);
   display(head);
  UpdateAtLocation(head ,98,5);
  UpdateAtLocation(head ,45,10);
 UpdateAtLocation(head ,521,0);
   display(head);
   DeletAtStart(head);
   display(head);
   DeletAtEnd(head);
   display(head);
   DeletAtRandom(head,5);
   display(head);
     DeletAtRandom(head,0);
   display(head);
   DeletAtRandom(head,1);
   display(head);
   DeletAtRandom(head,0);
   display(head);
   DeletAtRandom(head,1);
   display(head);
   DeletAtRandom(head,4);
   display(head);
}