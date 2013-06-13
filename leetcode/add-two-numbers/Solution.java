/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        // Start typing your Java solution below
        // DO NOT write main() function
        int carry = 0;
        ListNode head = new ListNode(0);
        ListNode tail = head;
        while(l1 != null || l2 != null|| carry != 0)
        {
            int digit = 0, num1 = 0, num2 = 0;
            tail.next = new ListNode(0);
            if(l1 != null)
            {
                num1 = l1.val;
                l1 = l1.next;
            }
            if(l2 != null)
            {
                num2 = l2.val;
                l2 = l2.next;
            }
            
            
            tail.next.val = num1 + num2 + carry;
            carry = tail.next.val / 10;
            tail.next.val %= 10;
            tail = tail.next;
        }
        return head.next;      
    }
    
    public static void main(String args[])
    {
        Solution aSolution = new Solution();
        System.out.println("hi");
    }
}


