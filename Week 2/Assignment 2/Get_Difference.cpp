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
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int MinMaxDifference(Node *head)
{
    int minVal = head->val;
    int maxVal = head->val;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val < minVal)
            minVal = temp->val;
        if (temp->val > maxVal)
            maxVal = temp->val;
        temp = temp->next;
    }
    int result = maxVal - minVal;
    cout << result << endl;
    return result;
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

    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    MinMaxDifference(head);

    return 0;
}
