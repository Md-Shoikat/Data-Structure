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

void same(Node *head1, Node *head2)
{
    if (head1 == NULL && head2 == NULL)
    {
        cout << "YES" << endl;
        return;
    }
    if (head1 == NULL || head2 == NULL || head1->val != head2->val)
    {
        cout << "NO" << endl;
        return;
    }
    same(head1->next, head2->next);
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        InsertAtTail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        InsertAtTail(head2, tail2, val);
    }

    same(head1, head2);

    return 0;
}
