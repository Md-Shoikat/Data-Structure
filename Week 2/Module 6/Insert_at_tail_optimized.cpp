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
void InsertAtTail(Node* &head, Node* &Tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;

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
    Node *head = new Node(10);
    Node *a = new Node(20);

    Node* Tail = new Node(100);

    head->next = a;
    a->next = Tail;

    InsertAtTail(head,Tail, 1000);
    InsertAtTail(head,Tail, 2000);
    InsertAtTail(head,Tail, 3000);

    PrintLinkedList(head);

    cout <<"TAil : "<<Tail->val<<endl;


    return 0;
}