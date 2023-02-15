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
    ListNode* deleteDuplicates(ListNode* head) {
        
        // //ll is empty
        // if(head == nullptr)
        // {
        //     return nullptr;
        // }
        // //not empty
        // ListNode* current = head;
        // while(current != nullptr)
        // {
        //     //equal
        //     if((current->next != nullptr) && current->val == current->next->val)
        //     {
        //         ListNode* next_next = current->next->next;
        //         ListNode* nodeToDelete = current->next;
        //         delete(nodeToDelete);
        //         current = next_next;
        //     }
        //     //not equal
        //     else
        //     {
        //         current = current->next;
        //     }
        // }
        // return head;
        
        ListNode* current = head;
        while(current)
        {
            while(current ->next && current->val == current->next->val)
            {
                current->next = current->next->next;
            }
            current = current->next;
        }
        return head;
    }
};



