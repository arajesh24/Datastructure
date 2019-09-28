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
struct node *delete(struct node *,int);
struct node *delete_beg(struct node *);
struct node *check2(struct node *,int );

int main()
{ 
    start=create_ll(start);
    int n;
    scanf("%d",&n);
  
    start=delete(start,n);
    start=check2(start,n);
    start=display(start);
    return 0;
}
struct node *create_ll(struct node *start){
    int n,num,i;
    struct node *new_node,*ptr;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new_node=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&num);
        new_node->data=num;
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
        }else{
        ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->next=NULL;
        
    }
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("->%d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}
struct node *delete(struct node *start,int n){
   
    struct node *ptr,*preptr;
    ptr=start;
    if(ptr->data==n){
        start=delete_beg(start);
        return start;
    
   } else{
    
    while(ptr!=NULL && ptr->data!=n){
        preptr=ptr;
    ptr=ptr->next;
    
    }
    preptr->next=ptr->next;
    free(ptr);
    
   
   }
   
 
    return start;
}
struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr=start;
    start=start->next;
    free(ptr);
    return start;
    
}

struct node *check2(struct node *start,int n){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
    if(ptr->data==n){
        start=delete(start,n);
    }ptr=ptr->next;
    }
   
    
       
    
    
    return start;
}
