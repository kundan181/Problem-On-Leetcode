/*
    1.take the two pointers slow and fast 
    2.initialise slow with head and fast with head
    3.point slow  with head and slow with slow -> next
    4.at last return slow

*/
class Solution{
  public:
    ListNode* middleNode(ListNode* head){
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
};