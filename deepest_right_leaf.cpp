#include <bits/stdc++.h> 
/**********************************************************
    Following is the Binary Tree Node class structure

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

#include <bits/stdc++.h>
using namespace std;

BinaryTreeNode<int> *deepestRightLeaf(BinaryTreeNode<int> *root) {
  if (!root)
    return NULL;

  BinaryTreeNode<int> *ans = NULL;
  queue<BinaryTreeNode<int> *> q;
  q.push(root);

  while (!q.empty()) {
    auto p = q.front();
    q.pop();

    if (p->left)
      q.push(p->left);

    if (p->right) {
      if (!p->right->left and !p->right->right)
        ans = p->right;

      q.push(p->right);
    }
  }

  return ans;
}
