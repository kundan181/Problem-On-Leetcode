class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto slow = head, fast = head;
        while(fast && fast -> next) 
            slow = slow -> next,                                  // slow moves at 1 node / iteration
            fast = fast -> next -> next;                          // fast moves 2 nodes / iteration
        return slow;                                              // slow ends up at mid
    }
};