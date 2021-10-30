 while(llist==NULL) return -1;
    int forward=0;
    int counter=0;
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* node=llist;
     while(temp->next!=NULL){
         forward++;
         temp=temp->next;
         if(forward-counter > positionFromTail){
             node=node->next;
             counter++;
         }
         
     }
     
    return node->data;