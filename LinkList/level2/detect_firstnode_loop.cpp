/****************************************************************

    Following is the class structure of the Node class:

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
Node *firstNode(Node *head)
{
	if(head ==NULL)return NULL;
    Node* firstloop=getstartingNode(head);
  //  if(firstloop ==NULL)return head;
    
    return firstloop;
}