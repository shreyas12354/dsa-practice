
#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(){
        val = 0;
        next = NULL;
    }
    ListNode(int val1){
        val = val1;
        next = NULL;
    }
    ListNode(int val1, ListNode *next1){
        val = val1;
        next = next1;
    }
};
int main() {
    ListNode head(1);
    ListNode newNode1(0);
    head.next = &newNode1;
    ListNode newNode2(2);
    newNode1.next = &newNode2;
    ListNode newNode3(0);
    newNode2.next = &newNode3;
    ListNode newNode4(1);
    newNode3.next = &newNode4;

    ListNode* temp = &head;   
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;    
    }
    cout << "\n";
    temp = &head;
    
    ListNode zeroDummy(-1), oneDummy(-1), twoDummy(-1);
    ListNode* zero = &zeroDummy;
    ListNode* one  = &oneDummy;
    ListNode* two  = &twoDummy;

    while (temp != NULL) {
        if (temp->val == 0) {
            zero->next = temp;
            zero = zero->next;
        }
        else if (temp->val == 1) {
            one->next = temp;
            one = one->next;
        }
        else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = oneDummy.next ? oneDummy.next : twoDummy.next;
    one->next  = twoDummy.next;
    two->next  = NULL;  

    
    ListNode* newHead = zeroDummy.next;

    temp = newHead;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}