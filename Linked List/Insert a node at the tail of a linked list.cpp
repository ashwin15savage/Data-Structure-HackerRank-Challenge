SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);// we are calling the constructor SinglyLinkedListNode and passing data as parameter
newnode->next=NULL;
newnode->data=data;

SinglyLinkedListNode* temp=head;
if(head==NULL) return newnode;

while(temp->next != NULL)
    temp=temp->next;

temp->next=newnode;

return head;

}
