#include <iostream>

using namespace std;

struct BTreeNode
{
	int data;
	struct BTreeNode* left = NULL;
	struct BTreeNode* right = NULL;
};
BTreeNode* root = NULL;

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = new BTreeNode;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}

void post(BTreeNode* node) {
	if (node == NULL) return;

	post(node->left);
	post(node->right);
	cout << node->data << "\n";
}

void InsertNode(BTreeNode* parent, BTreeNode* node) {
	if (root == NULL) root = node;
	else {
		if (node->data == root->data)
			return;
		else if (node->data < parent->data) {
			if (parent->left == NULL) {
				if (parent->left != NULL) {
					delete parent->left;
				}
				parent->left = node;
			}
			else
				InsertNode(parent->left, node);
		}
		else {
			if (parent->right == NULL) {
				if (parent->right != NULL) {
					delete parent->right;
				}
				parent->right= node;
			}
			else
				InsertNode(parent->right, node);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int data;

	while (cin >> data)
	{	
		BTreeNode* node = MakeBTreeNode();
		node->data = data;

		InsertNode(root, node);
	}

	post(root);
}