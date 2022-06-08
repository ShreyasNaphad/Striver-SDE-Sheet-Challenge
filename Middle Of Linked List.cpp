Node *findMiddle(Node *head) {
   
    int length = 1;
    Node* end = head;
    while(end->next!=NULL)
    {
        length++;
        end = end->next;
    }
    int mid = length/2;
    length = 0;
    while(length<mid)
    {
        head = head->next;
        length++;
    }
    return head;
}
