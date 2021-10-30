SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if(llist==NULL) return llist;
SinglyLinkedListNode* curr=llist->next;
SinglyLinkedListNode* prev=llist;
while(curr!=NULL){
    if(curr->data==prev->data){
        SinglyLinkedListNode* temp=curr;
        curr=curr->next;
        prev->next=curr;
        free(temp);
        
    }
    
    else{
        prev=curr;
        curr=curr->next;
    }
    
}
return llist;
}