#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void InsertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void RemoveDuplicates(Node *head)
{
    Node *fixed = head;
    while (fixed != NULL)
    {
        Node *prev = fixed;
        Node *curr = fixed->next;
        while (curr != NULL)
        {
            if (curr->val == fixed->val)
            {
                Node *deleteNode = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete deleteNode;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        fixed = fixed->next;
    }
}

void PrintLinkedList(Node *head)
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
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        InsertAtTail(head, tail, val);
    }

    RemoveDuplicates(head);
    PrintLinkedList(head);

    return 0;
}
