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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *p, *q, *end, *tmp, *tmpHead;
        int count = m;
        
        p = q = head;
        
        if(m == n)
        return head;
        
        
        
        if(m == 1)
        {
            q = end = head;
            p = p->next;
            n--;
            while(n--)
                {
                tmp = p->next;
                p->next =q;
                q = p;
                p = tmp;
                }
                
                end->next = p;
                head = q;
                return head;
        }
        
        else
        {
           n = n - m + 1;
           
           while(m-- > 1)
            {
                tmpHead = p;
                p = p->next;
            }
            
            q = end = p;
            
            
            
            while(n--)
                {
                tmp = p->next;
                p->next =q;
                q = p;
                p = tmp;
                }
                
                end->next = p;
                tmpHead->next = q;
                return head;
                      
        }
        
    }
};
