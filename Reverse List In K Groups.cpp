//https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav

#include<bits/stdc++.h>

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.
    Node* fast = head, *slow = head;
    int ind = 1;
    stack<int> st;

    while(slow){
        st.push(slow -> data);

        if(ind == k){
            while(!st.empty()){
                fast -> data = st.top();
                st.pop();
                fast = fast -> next;
            }
            ind = 0;
        }
        ind++;
        slow = slow -> next;
    }

    return head;
}
