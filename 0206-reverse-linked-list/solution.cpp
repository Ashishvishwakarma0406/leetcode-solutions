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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        if(!head || !head->next)return head;
        ListNode* next1 = head->next;
        ListNode* temp = head;
        curr->next=nullptr;
        while(next1->next!=nullptr){
            temp = next1->next;
            next1->next = curr;
            curr = next1;
            next1 = temp;
        }
        next1->next=curr;
        head = next1;
        return head;
    }

};
