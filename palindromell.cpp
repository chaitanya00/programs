bool isPalindrome(Node *head)
{
    int c=0,a;
    Node* temp=head;
    Node* temp1=NULL;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    if(c%2!=0)
    {
        a=(c/2)+1;
        temp1=head;
        while(a)
        {
            temp1=temp1->next;
            a--;
        }
    }
    else
    {
        a=c/2;
        temp1=head;
        while(a)
        {
            temp1=temp1->next;
            a--;
        }
        //cout<<temp1->data<<" ";
    }
    c=c/2;
    Node* cur=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(c)
    {
       next=cur->next;
       cur->next=prev;
       prev=cur;
       cur=next;
       c--;

    }
    head=prev;
  /*while(prev!=NULL)
    {
        cout<<prev->data<<" ";
        prev=prev->next;
    }
    cout<<"\n";
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<"\n";*/
    Node* temp2=temp1;
    while(prev!=NULL && prev->data==temp1->data)
    {
        //cout<<prev->data<<" "<<temp1->data<<"\n";
        prev=prev->next;
        temp1=temp1->next;
    }
    if(prev!=NULL && prev->data!=temp1->data)
    {
        return false;
    }
    else
    {
        return true;
    }
   // return true;
}
