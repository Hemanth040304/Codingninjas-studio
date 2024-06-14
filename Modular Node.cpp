//https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
// 14 June 2024 Easy



#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node* modularNode(int k, Node* head) {
    // Write your code here.
    Node* ans = nullptr;
    int i = 1;
    while(head){
        if(i % k == 0) ans = head;
        head = head -> next;
        i++;
    }

    return ans;
}
