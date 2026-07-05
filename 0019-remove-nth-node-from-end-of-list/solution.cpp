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
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next1 = curr;
        if(curr->next==nullptr) return nullptr;
        while(n!=1){
            next1= next1->next;
            n--;
        }
        while(next1->next!=nullptr){
            prev = curr;
            curr=curr->next;
            next1= next1->next;
        }
        if(prev==nullptr){
            head = head->next;
        }else{
            prev->next= curr->next;
        }

        return head;
    }
};
