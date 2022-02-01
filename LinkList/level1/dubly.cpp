#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;

    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data"<<val<<endl;
    }
};

//traverse
void print(Node*&head){
    Node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//finding length
int getLength(Node*&head){
    int len=0;
    Node*temp=head;
    while(temp !=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAthead(int d,Node*&head,Node*&tail){

    //empty list
    if(head==NULL){
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{

    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}

void insertAttail(int d,Node*&tail,Node*&head){

     if(tail==NULL){
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void inserAtposition(int position,int d,Node*&head,Node*&tail){
    //insert at head
    if(position==1){
        insertAthead(d,head,tail);
        return;
    }

    Node* temp=head;

    int cnt=1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at last
    if(temp->next==NULL){
        insertAttail(d,tail,head);
        return;
    }
    //creating new node
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;


}

void deletion(int position,Node*&head){

    //deletat first
    if(position==1){
    Node*temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;

}else{
      int cnt=1;
        Node*curr=head;
        Node*prev=NULL;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
}
}

int main(){
    Node* node1= new Node(10);
   // Node*head=node1;
  //  Node*tail=node1;

  //  print(head);
   // cout<<getLength(head);

    Node*head=NULL;
    Node*tail=NULL;

    insertAthead(12,head,tail);
    print(head);
     insertAthead(15,head,tail);
    print(head);
     insertAthead(17,head,tail);
    print(head);
     cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
    insertAttail(31,tail,head);
     print(head);
      cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;
     inserAtposition(2,95,head,tail);
      print(head);
      cout<<"head"<<head->data<<endl;
     cout<<"tail"<<tail->data<<endl;   

     deletion(2,head);
     print(head);


}