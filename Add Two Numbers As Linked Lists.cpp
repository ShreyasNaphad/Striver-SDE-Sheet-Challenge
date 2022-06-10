Node *addTwoNumbers(Node *head1, Node *head2)
{
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    Node* ans = new Node(0);
    Node* left = head1, *right = head2, *curr=ans;
    int carry = 0;
    while(left!=NULL || right!=NULL)
    {
        int u = (left!=NULL)?left->data : 0;
        int v = (right!=NULL)?right->data : 0;
        int sum = u+v+carry;
        curr->next = new Node(sum%10);
        curr=curr->next;
        carry = sum/10;
        if(left!=NULL)
            left=left->next;
        if(right!=NULL)
            right=right->next;
    }
    if(carry>0)
        curr->next = new Node(carry);
    return ans->next;
}
