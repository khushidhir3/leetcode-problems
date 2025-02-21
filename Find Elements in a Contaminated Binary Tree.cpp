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
class FindElements {
public:
unordered_set<int>a;
    FindElements(TreeNode* root) {
       if(root){
        root->val=0;
        a.insert(0);
        recover(root);
       }
     

    }
    void recover(TreeNode* root){
        if(!root)return;
        if(root->left){
        root->left->val=2*root->val+1;
        a.insert(root->left->val);
    recover(root->left);

       }
       if(root->right){
         root->right->val=2*root->val+2;
         a.insert(root->right->val);
         recover(root->right);
       }
    }
    
    bool find(int target) {
        return a.find(target)!=a.end();
    }
}; 

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
