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
struct node *delete_list(struct node *);
struct node *delete_beg(struct node *);
int main()
{ 
    start=create_ll(start);
    start=delete_list(start);
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
struct node *delete_list(struct node *start){
    struct node *ptr;
    int n;
    scanf("%d",&n);
  ptr=start;
 while(ptr!=NULL && ptr->data!=n){
     start=delete_beg(start);
    
     ptr=ptr->next;
     
 }if(ptr==NULL){
  printf("Invalid Node!\n");
  return start;
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
