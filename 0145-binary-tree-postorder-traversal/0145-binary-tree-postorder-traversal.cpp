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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1 ; 
        vector<int> result ; 
        TreeNode* t = root ; 

        while(t != nullptr){
            result.push_back(t->val); 
            s1.push(t); 
            t = t->right ; 
        }

        while(!s1.empty()){
            t = s1.top();
            s1.pop(); 
            t = t->left; 

            while(t != nullptr){
                result.push_back(t->val); 
                s1.push(t); 
                t = t->right; 
            }
        }
        reverse(result.begin() , result.end());
        return result; 
    }
};