/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    if(A==NULL)
    return ans;
    q.push(A);
    q.push(NULL);
    vector<int> v;
    v.push_back(A->val);
     ans.push_back(v);
     v.clear();
    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            if(q.size()==1)
            break;
            ans.push_back(v);
            v.clear();
            q.push(NULL);
        }
       else{
            if(q.front()->left!=NULL)
           { q.push(q.front()->left);v.push_back(q.front()->left->val);}
            if(q.front()->right!=NULL)
            {q.push(q.front()->right);v.push_back(q.front()->right->val);}}
        q.pop();
    }
    return ans;
}
