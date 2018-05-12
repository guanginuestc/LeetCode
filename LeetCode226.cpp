#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
void iii(TreeNode* root) {
	if (root == NULL) {
		return;
	}
	TreeNode * temp = NULL;
	temp = root->left;
	root->left = root->right;
	root->right = temp;
	iii(root->left);
	iii(root->right);
}
TreeNode* invertTree(TreeNode* root) {
	iii(root);
	return root;
	
}
int main() {
	
}