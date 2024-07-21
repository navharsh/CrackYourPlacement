// https://leetcode.com/problems/reverse-linked-list/submissions/1327927629

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* temp = head;

        while(temp != NULL){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            
        }
        return prev;
    }
};