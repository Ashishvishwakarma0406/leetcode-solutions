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
    int count(ListNode* head,int n){
        if(head==nullptr) return n;
        head=head->next;
        n=n+1;
        return count(head,n);
    }

    void fromMid(ListNode* &head, int n,int m){
        if(n==m){
            return;
        }
        head=head->next;
        m=m+1;
        return fromMid(head,n,m);
    }

    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp = head;
        int t =count(temp,n);
        if(t%2==0){
            t=(t/2);
            fromMid(head,t,0);
        }else{
            t=(t/2);
            fromMid(head,t,0);
        }
        return head;
    }
};
