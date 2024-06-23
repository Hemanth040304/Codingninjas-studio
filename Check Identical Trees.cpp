// https://www.naukri.com/code360/problems/check-identical-trees_10297907?topList=ninjas-sde-sheet&problemListRedirection=true&practice_topic%5B%5D=Binary%20Trees&leftPanelTabValue=PROBLEM

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>

    class BinaryTreeNode {
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

***********************************************************/

bool identicalTrees(BinaryTreeNode<int>* r1, BinaryTreeNode<int>* r2) {

    return (!r1 && !r2 || (r1 && r2) && identicalTrees(r1->left,r2->left) && identicalTrees(r1->right,r2->right) );

}
