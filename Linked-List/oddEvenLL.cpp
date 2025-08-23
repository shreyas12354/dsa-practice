// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//         if(!head) return NULL;

//         ListNode* temp = head;
//         vector<int>ans;
//         while(temp!=NULL && temp->next!=NULL){
//             ans.push_back(temp->val);
//             temp=temp->next->next;
//         }
//         if(temp) ans.push_back(temp->val);

//         temp = head->next;
//         while(temp!=NULL && temp->next!=NULL){
//             ans.push_back(temp->val);
//             temp=temp->next->next;
//         }
//         if(temp) ans.push_back(temp->val);

//         int i=0;
//         temp = head;
//         while(temp!=NULL){
//             temp->val = ans[i++];
//             temp=temp->next;
//         }
//         return head;
//     }
// }; O(n) space and time

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !(head->next) ) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;

        while(even!=NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next = evenHead;
        return head;
    }
};
// O(n/2) tc
// O(1) sc
