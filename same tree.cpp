/*
The idea is to perform simultaneously inorder traversals on both the trees. If nodes are found in the same place in both the trees, we compare values present in both places. If the value is same, we can proceed. Else the trees are not the same. The other case could be that at the same position, one of the trees could have a node and there might not be a node in the the other tree. In such a case also the trees are not the same.   
*/

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
    void inord(TreeNode* p, TreeNode* q,int &f){
        if(p&&q){
            inord(p->left,q->left,f);
            if(p->val!=q->val){
                f=1;
                return;
            }
            inord(p->right,q->right,f);
        }
        else if((!p && q)||(!q&&p)){
            f=1;
            return;
        }
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int f=0;
        inord(p,q,f);
        if(f==1)
            return false;
        else
            return true;
    }
};