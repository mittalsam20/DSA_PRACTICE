#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertatHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void insertatTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        insertatHead(head, val);
    }
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void disp(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
void deleteAtHead(node *&head)
{
    node *delnode = head;
    head = head->next;
    head->prev = NULL;
    delete delnode;
}

void todelete(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 0;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    delete temp;
}

int main()
{
    node *head = NULL;
    insertatTail(head, 1);
    insertatTail(head, 2);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);
    insertatTail(head, 6);
    // todelete(head, 3);
    disp(head);
}