/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        //base case agar ll empty huvi to
        
        if(head == NULL)
            return 0;
       
        //step1 start detecting cycle
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                return true;
            }
        }
        return 0;
    }
};



