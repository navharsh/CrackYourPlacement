// https://leetcode.com/problems/middle-of-the-linked-list/submissions/1322936352

class Solution {
public:
    int getLen(ListNode* head){
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
    ListNode* middleNode(ListNode* head) {
        int len=getLen(head);
        int mid=(len+1)/2;
        int i=1;
        ListNode* temp=head;
        while (i<mid) {
            temp=temp->next;
            i++;
        }
    return temp;
    }
};
