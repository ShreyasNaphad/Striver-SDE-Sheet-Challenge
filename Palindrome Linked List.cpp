bool isPalindrome(LinkedListNode<int> *head) {
    vector<int>vec;
    while(head!=NULL)
    {
        vec.push_back(head->data);
        head=head->next;
    }
    int n = vec.size();
    int start = 0, end = n-1;
    for(int i = start; i<end; i++)
    {
        if(vec[start]!=vec[end])
            return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;

}
