// https://www.naukri.com/code360/problems/left-view-of-binary-tree_625707?interviewBundleRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=1&search=&company%5B%5D=Accenture&difficulty%5B%5D=Medium&sort_entity=order&sort_order=ASC&customSource=studio_nav

void rightView(BinaryTreeNode<int>* root, int level, vector <int> &ans) {
    if (!root) return;

    if (level == ans.size()) ans.emplace_back(root -> data);
    rightView(root -> left, level + 1, ans);
    rightView(root -> right, level + 1, ans);
}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    rightView(root, 0, ans);

    return ans;
}
