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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *p, *q;
        p = q = head;
        while(n--)
        q = q->next;
        
     
     while(q != NULL && q->next != NULL)
     {
        p = p->next;
        q = q->next;
     }
     
     if(q == NULL)
     {
        head = head->next;
        delete p;
     }
     else
     {
        q = p->next;
        p->next = q->next;
        delete q;
     }
            
        
        return head;
    }
};
