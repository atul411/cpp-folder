#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void push(Node** head, int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(*head == NULL)
    {
        *head = temp;
    }
    else
    {
        Node *temp1 = *head;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;

    }
}
void print(Node** head)
{
    Node* temp = *head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    push(&head, 11);
    push(&head, 12);
    push(&head, 13);
    push(&head, 1);
    push(&head, 121);
    push(&head, 115);
    print(&head);

}
