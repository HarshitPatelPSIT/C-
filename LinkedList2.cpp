#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int val;
Node *next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertAtNode(Node* &head,int n){
    Node* new_node=new Node(n);
     Node* temp=head;
    if(head==NULL){
         head=new_node;
         new_node->next=NULL;
         
    }
    else{
         while (temp->next!=NULL)
         {
           temp=temp->next;
         }
         temp->next=new_node;
         new_node->next=NULL;
         
    }
}
    void reverse(Node* &head){
        Node* temp=head;
        if(temp->next==NULL){
            cout<<temp->val<<"->";
        }
        else{
            reverse(temp->next);
            cout<<temp->val<<"->";
        }
}
void reverseByHead(Node* &head){
     if (head == NULL || head->next == NULL) {
        return;
    }

    Node* current=head;
    Node* prev=NULL;
    Node*  next1=NULL;
    while (current!=NULL)
    {
         next1=current->next;
        current->next=prev;
        prev=current;
        current=next1;
    }
    head=prev;   
}
    void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of Node: ";
    cin>>n;
    Node* head=NULL;
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
    insertAtNode(head,value);
    }
    display(head);
    cout<<"Reverse List: ";
    reverse(head);
    reverseByHead(head);
    display(head);
}