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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return head;
        ListNode* curr = head;     
        ListNode* next = head->next;
        ListNode* dummy;
        while (curr && curr->next)
        {
            if(curr->val == next->val)
            {
                dummy = next; 
                next = next->next;
                curr->next = next; 
                delete dummy;
            }
            else
            {
                curr = next;
                next = next->next;
            }
        }
        
        return head;
    }
};