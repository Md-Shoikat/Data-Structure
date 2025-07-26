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
void delete_Head(Node *&head, Node *&tail)
{
    Node* deleteNode = head;
    head = head->next;
    if(head ==NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
    delete deleteNode;
}

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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_Head(head, tail);
    delete_Head(head, tail);
    Print_forword(head);

    return 0;
}