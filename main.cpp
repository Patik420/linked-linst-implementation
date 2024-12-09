#include <iostream>

using namespace std;

struct node
{
    int data;
    node*next;
};

void insertAtPosition(node* head, int pos) {
    int count = 0;
    node* temp = head;
    while(temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    if (pos < 0 || pos > count) {
        cout << "Invalid position" << endl;
        return;
    }
    node* newnode = new node;
    cout<<"Enter the data for new node - ";
    cin>>newnode->data;
    if(pos==0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        for(int i = 0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp ->next = newnode;
    }
     temp = head;
    cout<<"New Linked list - ";
    while (temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of element in linked list - ";
    cin>>n;
    node*head = nullptr,*temp = nullptr,*newnode = nullptr;
      for(int i = 0;i<n;i++)
    {
        newnode = new node;
        cin>>newnode->data;
        newnode->next = nullptr;
        if(head== nullptr)
        {
            head = newnode;
        }
        else{
            temp->next =  newnode;
        }
        temp = newnode;
    }
    temp = head;
    cout<<"Linked list - ";
    while (temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    int pos;
    cout << "Enter the position to insert the new element: ";
    cin >> pos;

    insertAtPosition(head, pos);

    return 0;
}
