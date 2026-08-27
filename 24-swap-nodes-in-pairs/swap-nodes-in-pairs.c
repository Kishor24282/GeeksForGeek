/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(!head || !head->next)
        return head;
    struct ListNode* prev=NULL;
    struct ListNode* first=head;
    struct ListNode* second=head->next;
    while(first && second){
        struct ListNode* third=second->next;
        second->next=first;
        first->next=third;
        if(prev==NULL){
            head=second;
        }
        else{
            prev->next=second;
        }
        prev=first;
        first=third;
        if(third!=NULL){
            second=third->next;
        }
        else{
            second=NULL;
        }
    }
    return head;
}