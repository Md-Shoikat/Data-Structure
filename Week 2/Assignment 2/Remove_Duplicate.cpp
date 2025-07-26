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

void insert_at_tail(Node* &head, Node* &tail, int val)
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

void remove_duplicates(Node *head)
{
    Node *fixed = head;

    while (fixed != NULL)
    {
        Node *prev = fixed;
        Node *current = fixed->next;

        while (current != NULL)
        {
            if (current->val == fixed->val)
            {
                Node *deleteNode = current;
                prev->next = current->next;
                current = current->next;
                delete deleteNode;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }

        fixed = fixed->next;
    }
}

void print_list(Node *head)
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
    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}
