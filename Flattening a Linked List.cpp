Node* merger(Node*l1, Node*l2)
{
    Node* temp = new Node(0);
    Node* res = temp;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data<l2->data)
        {
            temp->child = l1;
            temp = temp->child;
            l1 = l1->child;
        }
        else
        {
            temp->child = l2;
            temp = temp->child;
            l2=l2->child;
        }     
    }
    if(l1)
        temp->child = l1;
    else
        temp->child = l2;
    return res->child;
}

Node* flattenLinkedList(Node* head) 
{
     if(head==NULL || head->next==NULL)
         return head;
    head->next = flattenLinkedList(head->next);
    
    head = merger(head,head->next);
    return head;
}
