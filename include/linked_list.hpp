struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
    private:
        Node* head;
    public:
        //Write a function to return head value
        Node* GetHead();
        void SetHead(Node* head);
        void Insert(int data); //Inserts at the end of the linkedlist
        void InsertAtBeginning(int data);
        void InsertAtPosition(int data, int position);
        void DeleteAtPosition(int position);
        void ReverseIterative();
        void ReverseRecursive(Node* head);
        void Print();
        void PrintRecursive(Node* head);
        void PrintReverseRecursive(Node* head);
};
