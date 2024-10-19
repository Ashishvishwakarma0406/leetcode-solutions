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
    int getDecimalValue(ListNode* head) {
        string s="";
        int decimal=0;
        struct ListNode *d=head;
        while (d!=NULL){
            s.push_back(d->val);
            d=d->next;
        }
        for(int i = s.size()-1,j=0;i>=0 && j<s.size();i--,j++){
            decimal+=s[i]*pow(2,j);
        }
        return decimal;
    }
};
