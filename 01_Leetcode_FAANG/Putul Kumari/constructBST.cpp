class Solution {
public:
    int i=0;
    TreeNode* bstFromPreorder(vector<int>& pre,int bound=INT_MAX) {
        if(i==pre.size()||pre[i]>bound)
            return NULL;
        TreeNode* root=new TreeNode(pre[i++]);
        root->left=bstFromPreorder(pre,root->val);
        root->right=bstFromPreorder(pre,bound);
        return root;
    }
};