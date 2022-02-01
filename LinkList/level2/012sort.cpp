// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    //t.c->0(n)
    //s.c->0(1)
    Node* segregate(Node *head) {
        
        int c0=0;
        int c1=0;
        int c2=0;
        
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==0)c0++;
            else if(temp->data==1)c1++;
            else if(temp->data==2)c2++;
            
            temp=temp->next;
        }
        temp=head;
        
        while(temp!=NULL){
            if(c0 !=0){
                temp->data=0;
                c0--;
            }
            else if(c1 !=0){
                temp->data=1;
                c1--;
            }
            else if(c2 !=0){
                temp->data=2;
                c2--;
            }
            temp=temp->next;
        }
        return head;
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends


/*

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

********************************

void insertAttail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head)
{
    Node* zerohead =new Node(-1);
    Node *zerotail=zerohead;
    Node* onehead =new Node(-1);
    Node*onetail=onehead;
    Node* twohead =new Node(-1);
    Node*twotail=twohead;
    
    Node*curr=head;
    while(curr!=NULL){
        int value=curr->data;
        
        if(value ==0){
            insertAttail(zerotail,curr);
        }
        else if(value == 1){
            insertAttail(onetail,curr);
        }
         else if(value == 2){
            insertAttail(twotail,curr);
        }
        curr=curr->next;
    }
    
    //merge list 
    if(onehead->next !=NULL){
        zerotail->next=onehead->next;
    }else{
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    
    //SETRUP head
    head=zerohead->next;
    //delete dummynode
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;
    
    
    
}
*/