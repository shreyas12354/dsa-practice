/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode* ,int>T;
        ListNode *temp = headA;
        
        while(temp!=NULL){
            T[temp] = 1;
            temp=temp->next;
        }
        temp = headB;
        while(temp!=NULL){
            if(T.find(temp)!=T.end()) return temp;
            temp=temp->next;
        }
        return NULL;
    }
};