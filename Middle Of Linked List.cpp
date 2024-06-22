// https://www.naukri.com/code360/problems/middle-of-linked-list_8230764?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Linked%20List&leftPanelTabValue=PROBLEM

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {

    Node* fast = head, *slow = head;

    while(fast and fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;

}

