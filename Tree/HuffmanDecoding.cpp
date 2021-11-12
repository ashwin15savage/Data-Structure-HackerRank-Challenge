void decode_huff(node * root, string s) {
    string s1;
node* current=root;
for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            current=current->left;
        
        else current=current->right;
        
        if(current!=NULL && current->left==NULL && current->right==NULL){
            cout<<current->data;
            current=root;
        }
    }
}
