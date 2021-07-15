class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode result = new ListNode(0);
        ListNode dummy = result;
        int val1, val2, carry = 0;
        while(l1 != null || l2 != null){
            val1 = (l1 != null)?l1.val :0;
            val2 = (l2 != null)?l2.val :0;

            int sum = val1+val2 + carry;
            carry = sum/10;
            
            dummy.next = new ListNode(sum%10);
            dummy = dummy.next;
            
            if (l1 != null) l1 = l1.next;
            if (l2 != null) l2 = l2.next;
        }
        
        if(carry > 0){
            dummy.next = new ListNode(carry);
        }
         
        return result.next;
    }
}
