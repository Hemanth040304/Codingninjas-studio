/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

void fun(Node* &NN, Node* &nd, Node* head){
    if(head==NULL)return;
    fun(NN,nd,head->next);
    if(NN==NULL){
        NN = head;
        NN->next = NULL;
        NN->prev = NULL;
        nd = NN;
    }
    else{
        Node* t = head;
        nd -> next = t;
        t -> next = NULL;
        t -> prev = nd;
        nd = t;
    }
}

Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head==NULL) return head;
    if(head->next==NULL)return head;
    Node* NN = NULL,*nd = NULL;
    fun(NN,nd,head);
    return NN;
}

