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

void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void disp(node *&head)
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
}

node *knoderev(node *&head, int k)
{

    node *prev = NULL;
    node *curr = head;
    node *nxtptr;
    int count = 0;

    while (curr != NULL && count < k)
    {
        nxtptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nxtptr;
        count++;
    }
    int remain = 0;
    node *temp = nxtptr;
    while (temp != NULL)
    {
        temp = temp->next;
        remain++;
    }
    cout << endl
         << remain << endl;
    if (remain >= k && nxtptr != NULL)
        head->next = knoderev(nxtptr, k);
    else
        while (nxtptr != NULL)
        {
            head->next = nxtptr;
            cout << "sx" << nxtptr->data << "sa" << endl;
            cout << "sx" << head->data << "sa" << endl;
            nxtptr = nxtptr->next;
        }
    return prev;
}

int main()
{
    node *head = NULL;
    insertathead(head, 5);
    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 2);
    insertathead(head, 1);
    disp(head);
    cout << endl;
    node *newhead = knoderev(head, 3);
    disp(newhead);
}