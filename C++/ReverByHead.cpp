#include <bits/stdc++.h>
using namespace std;

class ReverByHead {
public:
    int val;
    ReverByHead* next;
    ReverByHead(int data) {
        val = data;
        next = nullptr;
    }
};

void InputAtNode(ReverByHead* &head, int value) {
    ReverByHead* new_node = new ReverByHead(value);
    if (head == nullptr) {
        head = new_node;
        head->next = head;
    } else {
        ReverByHead* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
    }
}

void print(ReverByHead* head) {
    if (head == nullptr) return; 
    ReverByHead* temp = head;
    do {
        cout << temp->val << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

int main() {
    int n;
    cout << "Enter the Number of Node: ";
    cin >> n;
    ReverByHead* head = nullptr;
    int input;
    for (int i = 0; i < n; i++) {
        cout << "Enter the Value of Node " << i + 1 << ": ";
        cin >> input;
        InputAtNode(head, input);
    }
    print(head);

    return 0;
}
