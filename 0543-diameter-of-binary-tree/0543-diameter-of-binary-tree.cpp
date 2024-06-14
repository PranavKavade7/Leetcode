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
    int diameterOfBinaryTree(TreeNode* root) {
        int edges = 0;
        // function call
        calculateDiameter(root,edges);
        // ans
        return edges;
    }

    private:
    
    int calculateDiameter(TreeNode* root,int &edges){
        if (root == nullptr) return 0;

        int leftDepth = calculateDiameter(root->left,edges);
        int rightDepth = calculateDiameter(root->right,edges);

        edges = max(leftDepth + rightDepth,edges);

        return 1 + max(leftDepth,rightDepth);
    }
};

// class Solution {
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         int diameter = 0;
//         CalculateDiameter(root,diameter);
//         return diameter;
//     }
  
//    private:

//     int CalculateDiameter(TreeNode* root,int &diameter) {
      
//       if (root == nullptr) return 0;

//       int leftheight = CalculateDiameter(root->left,diameter);
//       int rightheight = CalculateDiameter(root->right,diameter);
       
//        diameter = max(diameter, leftheight + rightheight);
        
//         // Return the height of the current subtree
//         return 1 + max(leftheight, rightheight); 
//     }
// };

// class Solution {
// public:
//     int diameterOfBinaryTree(TreeNode* root) {

//         if (root == nullptr) return 0;

//         int cnt_Ltree = 0;
//         int cnt_Rtree = 0;

//         if (root->left == nullptr){
//             root->val;
//             cnt_Ltree++;
//         }

//         if (root->right == nullptr){
//             root->val;
//             cnt_Rtree++;
//         }
        
//         if (cnt_Ltree > cnt_Rtree){
//             return cnt_Ltree;
//         }
//         return cnt_Rtree;
//     }
// };