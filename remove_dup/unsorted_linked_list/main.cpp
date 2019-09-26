#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *remove_dup(struct node *);
struct node *display(struct node *);
struct node *delete_node(struct node *);
struct node *delete_beg(struct node *start);

int main()
{
    start=create_ll(start);
    
    start=remove_dup(start);
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
struct node *delete_node(struct node *dup){
    struct node *ptr;
    ptr=dup;
    dup=dup->next;
    
  free(ptr);
    return start;
}

struct node *remove_dup(struct node *start){
  struct node *ptr1, *ptr2,*dup;
  
  
    ptr1 = start; 
  
    
    while (ptr1 != NULL && ptr1->next != NULL) 
    { 
        ptr2 = ptr1; 
  
        
        while (ptr2->next != NULL) 
        { 
            
            if (ptr1->data == ptr2->next->data) 
            { 
                
                dup = ptr2->next; 
                ptr2->next = ptr2->next->next; 
               delete_node(dup); 
            } 
            else 
                ptr2 = ptr2->next; 
        } 
        ptr1 = ptr1->next; 
    } 
    return start;
} 
