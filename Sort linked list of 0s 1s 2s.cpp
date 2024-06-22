// https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?interviewProblemRedirection=true&practice_topic%5B%5D=Linked%20List&leftPanelTabValue=PROBLEM
// EASY

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

Node* sortList(Node *head) {
    vector<int> v;
    Node *current = head;
    while (current) {
        v.push_back(current->data);
        current = current->next;
    }

    sort(v.begin(), v.end());

    Node *dummy = new Node();
    Node *tail = dummy;

    for (int i = 0; i < v.size(); ++i) {
        Node *newNode = new Node(v[i]);
        tail->next = newNode;
        tail = newNode;
    }

    return dummy->next;
}
