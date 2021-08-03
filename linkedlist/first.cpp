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

bool search(node *head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    // cout << endl
    //      << head->data << endl;
    // cout << temp->next->data;
    if (val == head->data)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    // cout << temp->data;
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    disp(head);
    insertAtHead(head, 4);
    disp(head);
    // cout << search(head, 2);
    deletion(head, 4);
    cout << endl;
    disp(head);

    return 0;
}