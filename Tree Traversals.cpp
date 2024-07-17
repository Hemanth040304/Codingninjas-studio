// https://www.naukri.com/code360/problems/tree-traversal_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

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

void inOrder(TreeNode *root, vector <int> &ord) {
    if (!root) return;

    inOrder(root -> left, ord);
    ord.emplace_back(root -> data);
    inOrder(root -> right, ord);
}

void preOrder(TreeNode *root, vector <int> &ord) {
    if (!root) return;

    ord.emplace_back(root -> data);
    preOrder(root -> left, ord);
    preOrder(root -> right, ord);
}

void postOrder(TreeNode *root, vector <int> &ord) {
    if (!root) return;

    postOrder(root -> left, ord);
    postOrder(root -> right, ord);
    ord.emplace_back(root -> data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans;

    vector <int> ord;

    inOrder(root, ord);
    ans.push_back(ord);
    ord.clear();

    preOrder(root, ord);
    ans.push_back(ord);
    ord.clear();

    postOrder(root, ord);
    ans.push_back(ord);
    ord.clear();

    return ans;
}
