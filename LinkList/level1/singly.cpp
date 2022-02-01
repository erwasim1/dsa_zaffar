#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
           this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};
void insertAttail(Node*&tail,int d){
      Node*temp= new Node(d);
      tail->next=temp;
      tail=tail->next;
}

void insertionAthead(Node*&head,int d){
    Node*temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtposition(Node*&tail,Node*&head,int position,int d){
    //insert at head
    if(position==1){
        insertionAthead(head,d);
        return;
    }
    
     Node*temp=head;
     int cnt=1;

     while(cnt<position-1){
         temp=temp->next;
         cnt++;
     }

     //insert at tail
     if(temp->next==NULL){
         insertAttail(tail,d);
         return;

     }
     //create node which u want to insert
     Node* nodetoinsert=new Node(d);
     nodetoinsert->next=temp->next;
     temp->next=nodetoinsert;
}

void deleteNode(int position,Node*&head){
    //deleting first node
    if(position ==1){
        Node*temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }

    else{
        //deleting at middle or last position
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
     Node*node1=new Node(10);
     cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head declare
     Node*head=node1;
     Node*tail=node1;
     //insert
     insertionAthead(head,20);
     print(head);
      insertionAthead(head,30);
     print(head);
     insertAttail(tail,35);
     print(head);
        insertAttail(tail,45);
     print(head);
     insertAtposition(tail,head,3,99);
     print(head);
     insertAtposition(tail,head,1,79);
     print(head);
      insertAtposition(tail,head,8,999);
     print(head);

     deleteNode(1,head);
     print(head);
     deleteNode(7,head);
     print(head);
     cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
}