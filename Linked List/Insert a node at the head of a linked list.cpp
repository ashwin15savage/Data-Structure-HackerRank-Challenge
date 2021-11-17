SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
newNode->data=data;

if(llist==NULL) return newNode;

else {
newNode->next=llist;
llist=newNode;
}
return llist;


}
