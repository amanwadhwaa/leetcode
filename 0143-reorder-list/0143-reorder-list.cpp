class Solution {
public:
    ListNode* reverseList(ListNode *head){
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while(curr != nullptr){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
            if(head == nullptr || head->next == nullptr) return;

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = head;
        while(fast != nullptr && fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr;

        ListNode *head1 = head;
        ListNode *head2 = reverseList(slow);

        while(head1 != nullptr && head2 != nullptr){
            ListNode *temp1 = head1->next;
            ListNode *temp2 = head2->next;

            head1->next = head2;
            if(temp1 != nullptr){
                head2->next = temp1;
            }

            head1 = temp1;
            head2 = temp2;
        }
    }
};