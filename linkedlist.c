#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;
 node* head = NULL;


node*create_node(int data){
// printf("%d",sizeof(node*));
     node* temp = malloc(sizeof(node));
    temp -> next = NULL;
    temp -> data = data;
    return temp;
}


node* addtail(node*head,int data){
    // head->next = create_node(data);
   if(head==0){
       head=create_node(data);
       return head;
   }
    node*ptr = head;
    while (ptr->next!=0)
    {

        ptr= ptr->next;
        
    }
    ptr->next = create_node(data);

    return head;

    
}

node*addhead(node*head,int data){
    if(head==0){
        head = addtail(head,data);
        return head;
    
    }
    node*temp = create_node(data);
    temp->next = head;
    return temp;
    
}

node*removehead(node*head){

    node* temp = head->next;
    free(head);
    return temp;    
    
}


void printlss(node*head){

    node*temp = head;
    while (temp!=0)
    {
        printf("|%d|",temp->data);
        temp = temp->next;        
    }
    if(temp==0) return;
    
}

