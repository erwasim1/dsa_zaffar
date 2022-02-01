/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydcycle(Node*head){
    if(head==NULL)return NULL;
    
    Node*slow=head;
    Node*fast=head;
    while(slow !=NULL && fast !=NULL){
        fast=fast->next;
        if(fast !=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
Node* getstartingNode(Node*head){
    if(head ==NULL)return NULL;
    
    Node*intersection=floydcycle(head);
    if(intersection == NULL ) return NULL;
    Node*slow=head;
    while(slow !=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
   if(head ==NULL) return NULL;
    Node* startofloop = getstartingNode(head);
    if(startofloop ==NULL)return head;
    Node* temp= startofloop;
    
    while(temp->next !=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
    
}