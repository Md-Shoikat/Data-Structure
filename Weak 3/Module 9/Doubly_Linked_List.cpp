#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void Print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

}
int main()
{
    Node *head = new Node(1);
    Node* a = new Node(2);
    Node* tail = new Node(30);

    head ->next = a;
    a->prev = head; 
    a->next = tail;
    tail->prev = a;

    Print_forword(head);
    Print_backward(tail);

    return 0;
}