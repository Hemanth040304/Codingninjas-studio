//https://www.codingninjas.com/studio/problem-of-the-day/moderate?leftPanelTabValue=PROBLEM

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int height(TreeNode<int>* root){
    if(root==NULL)return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}


bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    if(root==NULL)return true;
    if(isBalancedBT(root->left)==false)return false;
    if(isBalancedBT(root->right)==false)return false;
    int l = height(root->left);
    int r = height(root->right);
    if(abs(l-r)<=1)return true;
    else return false;
    
}
