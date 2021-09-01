#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    return;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void disp(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout
        << endl;
}

void delathead(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *todel = head;
    temp->next = head->next;
    head = head->next;
    delete todel;
}

void delnode(node *&head, int pos)
{
    if (pos == 0)
    {
        delathead(head);
        return;
    }
    node *temp = head;
    int count = 0;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todel = temp->next;
    temp->next = temp->next->next;
    delete todel;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 7);
    disp(head);
    delnode(head, 0);
    disp(head);
}