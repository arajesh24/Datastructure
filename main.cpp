

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node* next;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *delete_node(struct node*,int position);
struct node *display(struct node*);

int main(){
    start=create_ll(start);
    int pos;
    scanf("%d",&pos);
    start=delete_node(start,pos);
    start=display(start);
    return 0;
}
struct node *create_ll(struct node *start){
    int n;
    scanf("%d",&n);
    int i; int num;
    struct node *new_node,*ptr;
    for(i=0;i<n;i++){
        scanf("%d",&num);
        new_node=(struct node*)malloc(sizeof(struct node));
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
struct node *delete_node(struct node *start,int position){
    int count=0;
    struct node *ptr,*preptr;
    ptr=start;
    
    while(ptr!=NULL){
       if(position==0){
            start=start->next;
            free(ptr);
            break;
        }
        while(count!=position){
            preptr=ptr;
            ptr=ptr->next; count++;
        }
        preptr->next=ptr->next;
        free(ptr);
        break;
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return start;
}