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

/*
Method:
The basic idea is to store elements in the same level together in a vector of vectors. Layer the final vector can be reversed to get the answer.
Start with the root and push it into the queue. Now for each iteration intialize a new vector and the number of elements to be taken from the queue will be equal to the elements in the current level. Add all those elemnts to a vector and add that vector to the main vector. After all vectors are added to the main vector, reverse the main vector and return it.

Inspiration for this solution: https://www.youtube.com/watch?v=jCqIr_tBLKs&t=352s

This might not be the most efficient solution. Please do tell me how can I make this more optimal :)
*/

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> a;
        queue<TreeNode*> q;
        TreeNode* p;
        if(root==NULL)
            return a;
        q.push(root);
        while(!q.empty()){
            vector<int> b;
            int size=q.size();
            for(int i=0;i<size;i++){
                p=q.front();
                q.pop();
                b.push_back(p->val);
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
            }
            a.push_back(b);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};