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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

int length(node *head)
{
    int l = 1;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

node *swapNodes(node *&head, int k)
{
    int l = length(head);
    int start = 1;
    int end = 1;
    node *temp = head;

    while (start != k)
    {
        temp = temp->next;
        start++;
        // cout << start << endl;
    }

    node *temp2 = head;
    while (end != l - k)
    {
        temp2 = temp2->next;
        end++;
    }
    // cout << temp->data << temp2->data << endl;
    swap(temp->data, temp2->data);
    return head;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);

    disp(head);
    node *newhead = swapNodes(head, 3);
    disp(newhead);
    return 0;
}