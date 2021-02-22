#include<iostream>
using namespace std;

class node{     //Initializing the node
    public:
    int data;       //the data block of the node
    node* next;     //the pointer block f the node, pointing to the next block
    node(int val){  //constructor
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    
    node* n= new node(val);             //Making a new node
    
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;                    //making a temp node and equal this to the head ie starting, to traverse through the linked list
    while(temp->next!=NULL){            //checking the if the 'next' ie the pointer of the node is null or not if null then the last element 

        temp=temp->next;                //inserting the pointer of the next node in the temp 
    }
    temp->next=n;                       //the loop breaks because it had reached the end , and now we add the new node we have to add 

}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,5);
    display(head);



    return 0;
}






