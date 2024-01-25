//https://www.codingninjas.com/studio/problems/add-one-to-linked-list_7100680?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

/**
 * Definition of linked list
 * class ListNode {
 *     int val;
 *     ListNode* next;
 *     ListNode(int val = 0) {
 *         this -> val = val;
 *     }
 *     ListNode(int val, ListNode* next) {
 *         this -> val = val;
 *         this -> next = next;
 *     }
 * }
 */
void fun(ListNode* head, int &x){
    if(head==NULL)return;
    fun(head->next,x);
    if((head->val+x)>9){
        int v = (head->val+x);
        x = v/10;
        head->val = v%10;
    }
    else{
        head->val+=x;
        x=0;
    }
}

ListNode* addOneToLinkedList(ListNode* head) {
    // Write your code here
    int x=1;
    fun(head,x);
    if(x>0){
        ListNode* Ne = new ListNode(x);
        x = 0;
        Ne ->next = head;
        return Ne;
    }
    return head;
}
