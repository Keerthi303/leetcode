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
        ListNode *temp = head,*prev = NULL;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            if(n == len-cnt+1 && prev != NULL && temp->next != NULL){
                prev->next = temp->next;
                delete temp;
                return head;
            }
            else if(n == len-cnt+1 && prev == NULL ){
                head = temp->next;
                delete temp;
                return head;
            }
            else if(n == len-cnt+1 && temp->next == NULL ){
                prev->next = NULL;
                delete temp;
                return head;
            }
            prev = temp;
            temp = prev->next;
        }
        return head;
        
    }
};