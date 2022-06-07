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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *temp = headA, *temp1 = headB;
        
        while(temp) {
            
            while(temp1) {
                
                if(temp == temp1) {
                    
                    return temp;
                }
                
                temp1 = temp1->next;
            }
            
            temp1 = headB;
            temp = temp->next;
        }
        
        return NULL;
    }
};