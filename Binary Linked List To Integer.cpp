//https://www.naukri.com/code360/problem-of-the-day/easy?leftPanelTabValue=PROBLEM


#include<bits/stdc++.h>
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

int binaryToInteger(int n, Node *head) {
    //    Write your code here
    int t = 1, sum = 0;

    vector<int> ans;

    while(head){
        ans.emplace_back(head -> data);
        head = head -> next;
    }

    reverse(ans.begin(), ans.end());

    for(auto it: ans){
        sum += t * it;
        t *= 2;
    }

    return sum;


}
