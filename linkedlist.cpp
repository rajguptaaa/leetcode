#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr) {
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* middle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool isPalindrome(Node* head) {
    if (!head) return false;

    Node* mid = middle(head);
    Node* secondHalf = reverseList(mid);
    Node* firstHalf = head;

    while (secondHalf) {
        if (firstHalf->val != secondHalf->val)
            return false;
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    if (isPalindrome(head))
        cout << "The list is a palindrome." << endl;
    else
        cout << "The list is not a palindrome." << endl;

    return 0;
}
