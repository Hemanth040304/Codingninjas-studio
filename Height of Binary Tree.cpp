// https://www.naukri.com/code360/problems/tree-height_4609628?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Binary%20Trees&leftPanelTabValue=SUBMISSION


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
int heightOfBinaryTree(TreeNode<int> *root){
    // Write your code here.
    if(root == NULL) return 0;

    int left = heightOfBinaryTree(root -> left);
    int right = heightOfBinaryTree(root -> right);
    int  ans = max(right, left) + 1;

    return ans;

}
