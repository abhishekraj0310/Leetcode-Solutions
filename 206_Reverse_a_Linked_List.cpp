class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* temp=head;
        // while(temp!=NULL)
        // {
        //     next=temp->next;
        //     temp->next=prev;
        //     prev=temp;
        //     temp=next;
        // }
        // return prev;
        // stack<int>st;
        // while(temp!=NULL)
        // {
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL)
        // {
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        if(head==NULL|| head->next==NULL)
        {
            return head;
        }
        ListNode* newhead=reverseList(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
};
