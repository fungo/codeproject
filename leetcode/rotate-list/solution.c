#include <stdio.h>
#include <stdlib.h>


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
 ListNode *rotateRight(ListNode *head, int k) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        int count = 0, i;
        ListNode * p = head, *pk;
        
        
         while(p != NULL)
        {
            p = p->next;
            count++;
        }
        if(count > 0)
            k = k%count;
        
        pk = head;
        
        for(i = 0; i < count - k -1; i++){
            pk = pk->next;
        }
        
        
        p = head;
        
        while(p != NULL)
        {
            if(p->next == NULL)
                break;
            p = p->next;
        }
        
        if(p != NULL)
        {
            p->next = head;
            head = pk->next;
            pk->next = NULL;
        }
        
        return head;                
    }

int
main()
{
}
