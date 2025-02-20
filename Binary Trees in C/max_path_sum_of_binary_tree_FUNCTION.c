// maximum path sum (BACKTRACKING)

// FUNCTION BELOW

int maxPathSum(Node* root)
{
    int maxi = INT_MIN;
    maxPathDown(root, maxi);
    return maxi;
}

int maxPathDown(Node* node, int &maxi)
{
    if (node == NULL)
        return 0;
    
    int left = max(0, maxPathDown(node->left, maxi));
    int right = max(0, maxPathDown(node->right, maxi));
    maxi = max(maxi, left + right + node->val);
    return max(left, right) + node->val;
}