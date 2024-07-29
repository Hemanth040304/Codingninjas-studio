// https://www.naukri.com/code360/problem-of-the-day/moderate?leftPanelTabValue=PROBLEM
// 29 July 2024 Moderate


#include <bits/stdc++.h> 
/***********************************************
	The structure of Binary tree is given below: 
	
	template <typename T>
	class BinaryTreeNode {
	public:
		T data;
		BinaryTreeNode<T>* left;
		BinaryTreeNode<T>* right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	};
***********************************************/
void order(BinaryTreeNode<int> *root, vector <int> &v) {
	if (!root) return;
	v.emplace_back(root -> data);
	order (root -> left, v);
	order (root -> right, v);
}


bool findTargetPair(BinaryTreeNode<int>* root, int target) {
	// Write your code here.
	vector <int> v;
	order(root, v);

	sort(v.begin(), v.end());
	int i = 0, j = v.size() - 1;

	while (i <= j) {
		int x = v[i] + v[j];
		if (x == target) return true;
		else if (x > target) j--;
		else if (x < target) i++;
	}

	return false;

}
