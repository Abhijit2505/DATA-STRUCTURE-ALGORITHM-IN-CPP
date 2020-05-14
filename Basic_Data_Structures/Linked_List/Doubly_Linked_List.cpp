#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;
    node(int data)
    {
        this -> data = data;
        this -> prev = nullptr;
        this -> next = nullptr;
    }
};

node* take_input()
{
    int data;
    cin >> data;
    node* head = nullptr;
    node* tail = nullptr;
    while(data != -1)
    {
        node* newnode = new node(data);
        if(head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            node* temp = tail;
            tail = tail -> next;
            tail -> prev = temp;
        }
        cin >> data;
    }
    return head;
}

void print_ll(node* head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

node* pushpos(node* head,int pos, int data)
{
    node* newnode = new node(data);
    if(pos==0)
    {
        head -> prev = newnode;
        newnode -> next = head;
        head = newnode;
        return head;
    }
    int j = 0;
    node* temp = head;
    while(j<pos-1)
    {
        temp = temp -> next;
        j++;
    }
    node* temp2 = temp -> next;
    newnode -> next = temp2;
    newnode -> prev = temp;
    temp -> next = newnode;
    return head;
}

int main()
{
    node* head = take_input();
    print_ll(head);
    cout << endl;
    node* new_head = pushpos(head,2,45);
    print_ll(new_head);
}
