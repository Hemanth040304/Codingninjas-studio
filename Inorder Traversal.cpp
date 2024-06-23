//https://www.naukri.com/code360/problems/inorder-traversal_8230857?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Binary%20Trees&leftPanelTabValue=PROBLEM

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inorder(TreeNode *root, vector<int> &ans){
    if(root == NULL) return;


    inorder(root -> left, ans);
    ans.emplace_back(root -> data);
    inorder(root -> right, ans);
}


vector<int> getInOrderTraversal(TreeNode *root){
    // Write your code here.

    vector<int> ans;

    inorder(root, ans);

    return ans;
}
