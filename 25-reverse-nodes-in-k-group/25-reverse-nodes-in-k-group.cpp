/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* reverseKGroup(ListNode* head, int k)
{
    vector<int> v;
    ListNode *p= head;
    while(p!=NULL)
    {
        v.push_back(p->val);
        p=p->next;
    }
    int n=v.size();
    for(int i=0;i<=n-k;i+=k)
    {
        reverse(v.begin()+i,v.begin()+i+k);
    }        
    ListNode* l1, *l2, *l3=NULL;
    int ok=1;
    for(int i=0;i<n;i++)
    {
        l1= new ListNode(v[i]);
        if(ok==1) l3=l1,l2=l1,ok=0;
        else l2->next=l1,l2=l2->next;
    }
    return l3;
}

};