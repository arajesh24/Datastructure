#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node {
    int data;
    struct node *next;
    };
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *reverse(struct node *);
struct node *middle(struct node *);


int main(){
    
    start=create_ll(start);
   start=reverse(start);
    start=display(start);
    start=middle(start);
    return 0;}
struct node *create_ll(struct node *start){
    struct node *new_node,*ptr;
    int n,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        
        scanf("%d",&num);
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=num;
    if(start==NULL){
        new_node->next=NULL;
        start=new_node;
        }else{
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=new_node;
            new_node->next=NULL;
            
            }
    }
    return start;
}
struct node *display(struct node *start){
    
    struct node *ptr;
    ptr=start;
    printf("Linked List : ");
    while(ptr!=NULL){
      printf("-->%d",ptr->data);
        ptr=ptr->next;
        }
     
        return start;
    }
    
struct node *reverse(struct node *start){
    struct node *prev=NULL;
    struct node *ptr=start;
    struct node *nxt;
    while(ptr!=NULL){
        nxt=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=nxt;
    }
    start=prev;
    return start;
}
struct node *middle(struct node *start){
    struct node *ptr,*preptr;
    ptr=start;
    preptr=start;
    if(start!=NULL){
    while(preptr!=NULL&& preptr->next!=NULL){
        preptr=preptr->next->next;
        
        ptr=ptr->next;
    }
    }
    printf("\nThe middle element is [%d]",ptr->data);
    return start;
}
