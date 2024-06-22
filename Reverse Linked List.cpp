// https://www.naukri.com/code360/problems/reverse-linked-list_920513?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Linked%20List&leftPanelTabValue=PROBLEM

/****************************************************************

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
        

*****************************************************************/

Node* reverseLinkedList(Node *head){

    // Write your code here
    if(head == NULL || head -> next == NULL) return head;

    Node *newhead = reverseLinkedList(head -> next);
    Node *front = head -> next;
    front -> next = head;
    head -> next = NULL;

    return newhead;
}
