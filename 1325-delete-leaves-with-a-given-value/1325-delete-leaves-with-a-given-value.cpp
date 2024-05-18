/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == nullptr) return nullptr;

        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);

        if (root->left == root->right && root->val == target){
            return nullptr;
        }
        else{
            return root;
        }
    }
};

/*
  1 2 3

*/


/*
   if (!root) return nullptr;
   while (root != nullptr){
     if (root == target){
        root->next->next;
     }
   }

  if the target == node -> != null delete it 
  if not then he has a child



*/