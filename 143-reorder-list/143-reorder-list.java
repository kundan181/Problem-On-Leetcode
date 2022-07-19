class Solution {
    public void reorderList(ListNode head) {
	
	//First we find mid pointer by using two pointers fast and slow
	
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null && fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode mid = slow;
		
		//We reverse the second half
		
        mid = reverseList(mid);
		
		//We connect the nodes
		
        while(mid!=null){
            if(head.next == mid) {
                head = head.next;
                mid = mid.next;
                continue;
            }
            ListNode nextNode = head.next;
            ListNode nextMid  = mid.next;
            head.next = mid;
            mid.next = nextNode;
            mid = nextMid;
            head = nextNode;
        }
    }
    public ListNode reverseList(ListNode head){
        ListNode node = null;
        while(head!=null){
            ListNode nextNode = head.next;
            head.next = node;
            node = head;
            head = nextNode;
        }
        return node;
    }
}