#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *delete_end(struct node *);
int main()
{
  start=create_ll(start);
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  start=delete_end(start);
}
start=display(start);
    return 0;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    printf("Linked List : ");
    while(ptr!=NULL){
        printf("->%d",ptr->data);
        ptr=ptr->next;
    }
    return start;
    
}

struct node *create_ll(struct node *start){
    struct node *new_node,*ptr;
    int n,i,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new_node=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&num);
        new_node->data=num;
        
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
           
            
        }
        else{
            ptr=start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
        ptr->next=new_node;
        new_node->next=NULL;
        
                
            
            
        }
    }
    return start;
    
}
struct node *delete_end(struct node *start){
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return start;
}
