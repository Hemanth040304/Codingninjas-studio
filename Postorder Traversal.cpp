// https://www.naukri.com/code360/problems/postorder-traversal_9404536?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Binary%20Trees

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

void postorder(TreeNode *root, vector<int> &ans){
    if(root == NULL) return;

    postorder(root -> left, ans);
    postorder(root -> right, ans);
    ans.emplace_back(root -> data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;

    postorder(root, ans);

    return ans;
}
