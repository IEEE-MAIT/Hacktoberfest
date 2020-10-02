/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */ListNode* reverse(ListNode* a);
int Solution::lPalin(ListNode* a)
{
    if(a->next==NULL)
        return 1;
    ListNode* sp=a;
    ListNode* hp=a;
    while(sp!=NULL && hp->next!=NULL)
    {
        // cout<<"a";
        hp=hp->next;
        if(hp->next!=NULL)
        {
            sp=sp->next;
            hp=hp->next;
        }
    }
    ListNode* rp=reverse(sp->next);
    sp->next=NULL;
    while(a!=NULL && rp!=NULL)
    {
        if(a->val!=rp->val)
            return 0;
        a=a->next;
        rp=rp->next;
    }
    return 1;
}
ListNode* reverse(ListNode* a)
{
    ListNode* prev=NULL;ListNode* curr=a;
    while(curr!=NULL)
    {
        ListNode* nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr = nxt;
    }
    return prev;
}

