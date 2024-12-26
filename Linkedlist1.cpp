#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *next = NULL;
  Node(int data) {
    val = data;
    next = NULL;
  }
};
void insertAtNode(Node *&head, int val) {
  Node *new_node = new Node(val);
  if (head == NULL) {
    head = new_node;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->next = NULL;
}
void deleteremove(Node* &head, int n) {
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->val == temp->next->val) {
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate;
        } else {
            temp = temp->next;
        }
    }
}

void display(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << endl;
}
int main() {
  int n, data;
  cout << "Enter Number of node: ";
  cin >> n;
  Node *head = NULL;
  for (int i = 0; i < n; i++) {
    cin >> data;
    insertAtNode(head, data);
  }
  display(head);
  cout << "Linked list after Removing duplicate element: " << endl;
  deleteremove(head, n);
  display(head);
}
