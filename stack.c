#include"linkedlist.h"

node* top = NULL;

int isEmpty(){
    if(top==0) return 1;
    else return 0;
}

int pop(){
        if(head==0){
            printf("Stack Overflow");
            top =0;
            return -1;
        }else if(head->next==0){
            int data =  head->data;
            head = removehead(head);
            top =NULL;
            return data;
        }
       else{
        head = removehead(head);
        top = head;
        return head->data;
       }
}


void push(int data){
   head = addhead(head , data);
   top = head;

}


