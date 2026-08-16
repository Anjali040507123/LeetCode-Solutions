class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL){
            return NULL;
        }

        if(head->next == NULL){
            return NULL;
        }

        ListNode* temp = head;
        int cnt = 0;

        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }

        int middle = cnt / 2;
        temp = head;

        for(int i = 1; i < middle; i++){
            temp = temp->next;
        }

        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;

        return head;
    }
};