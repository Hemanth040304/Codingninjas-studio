// https://www.naukri.com/code360/problems/right-view_764605?interviewBundleRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=2&search=&company%5B%5D=Accenture&difficulty%5B%5D=Medium&sort_entity=order&sort_order=ASC&customSource=studio_nav&attempt_status=NOT_ATTEMPTED

/*************************************************************
 
    Following is the Binary Tree node structure:

    template <typename T>

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

void rightView(BinaryTreeNode<int>* root, int level, vector <int> &ans) {
    if (!root) return;

    if (level == ans.size()) ans.emplace_back(root -> data);
    rightView(root -> right, level + 1, ans);
    rightView(root -> left, level + 1, ans);
}

vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    rightView(root, 0, ans);

    return ans;
}
