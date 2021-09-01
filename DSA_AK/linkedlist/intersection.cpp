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

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *longptr;
    node *shortptr;
    if (l1 > l2)
    {
        d = l1 - l2;
        longptr = head1;
        shortptr = head2;
    }
    else
    {
        d = l2 - l1;
        shortptr = head1;
        longptr = head2;
    }
    while (d)
    {
        longptr = longptr->next;
        if (longptr == NULL)
            return -1;
        d--;
    }
    while (longptr != NULL && shortptr != NULL)
    {
        if (shortptr == longptr)
            return longptr->data;
        longptr = longptr->next;
        shortptr = shortptr->next;
    }

    return -1;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    disp(head1);
    disp(head2);
    cout << endl
         << intersection(head1, head2) << endl;
    return 0;
}