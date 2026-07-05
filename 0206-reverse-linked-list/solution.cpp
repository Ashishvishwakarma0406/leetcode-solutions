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
    void insert(vector<int> &arr,ListNode* head){
        if(head==nullptr)return;
        arr.push_back(head->val);
        head=head->next;
        return insert(arr,head);
    }
    void insertInLL(vector<int> &arr,ListNode* head,int n){
        if(n<0)return;
        head->val=arr[n];
        head= head->next;
        n=n-1;
        return insertInLL(arr,head,n);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp= head;
        vector<int> arr;
        insert(arr,temp);
        ListNode* temp2= head;
        int n = arr.size()-1;
        insertInLL(arr,temp2,n);

        return head;

    }
};
