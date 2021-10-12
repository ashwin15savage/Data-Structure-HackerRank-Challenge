int height(Node* root) {
        // Write your code here.
        if(!root) return -1;
   int left=height(root->left)+1;
   int right=height(root->right)+1;
        return max(left,right);
    }
