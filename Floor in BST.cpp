// 22nd June 2024 Moderate

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void check(TreeNode<int> *root, int X, int &ans){
    if(root == NULL) return;
    if(root -> val <= X and ans < root -> val) ans = root -> val;
    check(root -> left, X, ans);
    check(root -> right, X, ans);
}


int floorInBST(TreeNode<int> * root, int X){
    // Write your code here.
    int ans = 0;
    check(root, X, ans);
    return ans;
}
