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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* mergeList = NULL, *lastNode;
        
        ListNode* dummy = NULL;
        
        while(list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                dummy = new ListNode(list1->val);
                
                if (mergeList == NULL)
                {
                    mergeList = dummy;
                    lastNode = dummy;
                } 
                else
                {
                    lastNode->next = dummy;
                    lastNode = lastNode->next;
                }
                
                list1 = list1->next;
                
            }
            else
            {
                dummy = new ListNode(list2->val);
                
                if (mergeList == NULL)
                {
                    mergeList = dummy;
                    lastNode = dummy;
                } 
                else
                {
                    lastNode->next = dummy;
                    lastNode = lastNode->next;
                }
                
                list2 = list2->next;
            }
        }
        
        while(list1 != NULL)
        {
            dummy = new ListNode(list1->val);
                
                if (mergeList == NULL)
                {
                    mergeList = dummy;
                    lastNode = dummy;
                } 
                else
                {
                    lastNode->next = dummy;
                    lastNode = lastNode->next;
                }
                
                list1 = list1->next;
        }
        
        while(list2 != NULL)
        {
            dummy = new ListNode(list2->val);
                
                if (mergeList == NULL)
                {
                    mergeList = dummy;
                    lastNode = dummy;
                } 
                else
                {
                    lastNode->next = dummy;
                    lastNode = lastNode->next;
                }
                
                list2 = list2->next;
        }
        
        return mergeList;
    }
};





