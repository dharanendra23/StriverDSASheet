/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size = 0;
        ListNode *temp = head, *temp1;
        while(temp) {
            
            size++;
            temp = temp->next;
        }
        
        temp = head;
        if(size == n) {
            
            temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        
        while(size) {
            
            if(size-1 == n && size-1 == 0) {
                
                delete(temp->next);
                temp->next = nullptr;
                return head;
            }
            
            if(size-1 == n) {
                
                temp1 = temp->next;
                temp->next = temp->next->next;
                delete(temp1);
                return head;
            }
            temp = temp->next;
            size--;
        }
        
        return head;
    }
};