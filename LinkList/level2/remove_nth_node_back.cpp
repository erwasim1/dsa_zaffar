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
        
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int ans=len-n;
   
        temp=head;
        int cnt=1;
        while(cnt<ans){
             cnt++;
            temp=temp->next;
           
        }
       
         
        if(len-n <= 0) {
           head = temp->next;
        } else {
            temp->next = temp->next->next;
        }
        
        return head;
    }
};

//o(n),o(1)

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    if (head == NULL || K == 0)
    {
        return head;
    }
     LinkedListNode<int>* start=new LinkedListNode<int>(0);
    start->next=head;
    LinkedListNode<int>*fast=start;
    LinkedListNode<int>*slow=start;
    
    for(int i=1;i<=K;i++){
        fast=fast->next;
    }
    
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    
    return start->next;
}