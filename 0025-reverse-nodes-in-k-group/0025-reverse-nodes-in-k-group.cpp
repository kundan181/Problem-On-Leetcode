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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        ListNode* temp = head;
        for(int i = 0; i < k; i++){
            if(temp == NULL) return head;
            temp = temp->next;
        }
        
        
        //step1 revserse k nodes
        ListNode* next = NULL;
        ListNode* current = head;
        ListNode* prev = NULL;
        int count = 0;
        
        while(current != NULL && count<k)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        
        //step2 reverse remaining ll
        if(next != NULL)
        {
            head->next = reverseKGroup(next,k);
        }
        
        //step3 return head of rev ll
        return prev;
        
        
    }
};