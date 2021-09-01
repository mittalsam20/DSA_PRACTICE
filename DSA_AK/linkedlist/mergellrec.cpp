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

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void disp(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *recmergell(node *&head1, node *&head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = recmergell(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = recmergell(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 3);
    insertAtTail(head1, 5);
    insertAtTail(head1, 7);
    insertAtTail(head1, 9);
    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 6);
    insertAtTail(head2, 8);
    insertAtTail(head2, 10);
    disp(head1);
    disp(head2);
    node *newhead = recmergell(head1, head2);
    disp(newhead);

    return 0;
}