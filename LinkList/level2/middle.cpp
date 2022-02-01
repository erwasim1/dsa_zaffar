  //brute force
  
   class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getlength(Node*head){
   int cn=0;
     
    while(head!=NULL){
        cn++;
        head=head->next;
    }
    return cn;
}
Node *findMiddle(Node *head) {
    // Write your code her
    int len =getlength(head);
    int ans=len/2;
    int cnt=0;
    Node*temp=head;
    while(cnt<ans){
        cnt++;
        temp=temp->next;
    }
    return temp;
}


Node* getMiddle(Node*head){
    if(head ==NULL || head->next==NULL){
        return head;
    }
    Node*slow=head;
    Node*fast=head->next;
    
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
Node *findMiddle(Node *head) {
    // Write your code her
 /*   int len =getlength(head);
    int ans=len/2;
    int cnt=0;
    Node*temp=head;
    while(cnt<ans){
        cnt++;
        temp=temp->next;
    }
    return temp;
    */
    
    return getMiddle(head);
}