#include<linked_list.hpp>
#include<iostream>

// The following is the implementation of the class methods

// Getters and Setters

Node* LinkedList::GetHead()
{
    std::cout << "The head of the linked list is " << head << std::endl;
    return head;
}

void LinkedList::SetHead(Node* head)
{
    this->head = head;
}

void LinkedList::Insert(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = new_node;
    }
    else 
    {
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void LinkedList::InsertAtBeginning(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void LinkedList::InsertAtPosition(int data, int position)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(position == 0)
    {
        InsertAtBeginning(data);
    }
    else
    {
        Node* temp = head;
        for(int i=0; i<position-1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void LinkedList::DeleteAtPosition(int position)
{
    if(position == 0)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node* temp = head;
        for(int i=0; i<position-1; i++)
        {
            temp = temp->next;
        }
        Node* temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}

void LinkedList::ReverseIterative()
{
    Node* current = head;
    Node* prev = NULL;
    Node* next_node = NULL;
    while(current !=NULL)
    {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }
    head = prev;
}

void LinkedList::ReverseRecursive(Node* head)
{
    if(head->next == NULL)
    {
        this->head = head;
        return;
    }
    ReverseRecursive(head->next);
    Node* temp = head->next;
    temp->next = head;
    head->next = NULL;
}

void LinkedList::Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void LinkedList::PrintRecursive(Node* head)
{
    if(head == NULL)
    {
        std::cout<<std::endl;
        return;
    }
    std::cout << head->data << " "<< std::endl;
    PrintRecursive(head->next);
}

void LinkedList::PrintReverseRecursive(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    PrintReverseRecursive(head->next);
    std::cout << head->data << " " << std::endl;
}

// The following is the implementation of the main function
int main()
{
    LinkedList ll;
    Node* head = NULL;
    ll.SetHead(NULL);
    ll.Insert(10);
    ll.Insert(20);
    ll.Insert(30);
    ll.Insert(40);
    ll.Insert(50);
    head = ll.GetHead();
 
    ll.PrintRecursive(head);

    ll.ReverseRecursive(head);
    head = ll.GetHead();
    ll.PrintRecursive(head);
    return 0;
}
