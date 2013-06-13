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
    ListNode *swapPairs(ListNode *head) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *p, *q, *tmp, *tmpHead;
        
        p = q = head;
        
        if(p == NULL) return head;
        q = q->next;
        if(q == NULL) return head;
        tmp = q->next;
        q->next = p;
        p->next = tmp;
        head = q;
        
        tmpHead = p;
        p = p->next;
        
        while(p != NULL && p->next != NULL)
        {
            q = p->next;
            
            tmp = q->next;
            q->next = p;
            p->next = tmp;
            tmpHead->next = q;
            
            tmpHead = p;
            p = p->next;
            
        }
        
        return head;
    }
};
