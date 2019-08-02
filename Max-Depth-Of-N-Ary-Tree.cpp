// Maximum Depth of N-Ary Tree
// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/


class Solution {
public:
    int maxDepth(Node* root) {
        
        if(!root) return 0;
        
        int mx = 0;
        for(auto it:root->children)
            mx = max(mx, maxDepth(it));
        
        return mx + 1;
    }
};