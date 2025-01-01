#include <bits/stdc++.h>
using namespace std;
class CircularLinked
{
public:
    int val;
    CircularLinked* next;
    CircularLinked(int data){
        val=data;
        next=NULL;

    }
};
void InputAtNode(CircularLinked* &head,int value ){
    CircularLinked* new_node=new CircularLinked(value);
    CircularLinked* temp=head;
    if(temp==NULL){
        head=new_node;
        new_node->next=NULL;
    }
    else{
        for(;temp->next!=NULL;){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=;
    }
}
void print(CircularLinked* &head){
    CircularLinked* temp=head;
    for(; temp!=head;){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main() {
   int n;
   cout<<"Enter the Number of Node: ";
   cin>>n;
   int input;
   CircularLinked* head=NULL;
   for(int i=0;i<n;i++){
    cout<<"Enter the Value of Node "<<i<<": ";
    cin>>input;
    InputAtNode(head,input);
   }
   print(head);
   

    return 0;
}
