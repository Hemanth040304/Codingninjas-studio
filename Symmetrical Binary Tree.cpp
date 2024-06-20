// https://www.naukri.com/code360/problems/symmetric-tree_981177?interviewProblemRedirection=true&search=Sy&difficulty%5B%5D=Medium&leftPanelTabValue=PROBLEM


/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool fun(TreeNode<int> *r1,TreeNode<int> *r2,bool x){
        if((r1==NULL and r2!=NULL)or(r1!=NULL and r2==NULL)){
            x = false;
            return x;
        }
        if(r1==NULL and r2==NULL)return x;
        if(r1->data==r2->data)x=true;
        else x = false;
        return fun(r1->left,r2->right,x) && fun(r1->right,r2->left,x);
    }

bool isSymmetric(TreeNode<int> *root)
{
    // Write your code here
    return fun(root -> left, root -> right, false);

}
