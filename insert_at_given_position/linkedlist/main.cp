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
struct node *insert_node(struct node *);



int main(){
    
    start=create_ll(start);
    start=insert_node(start);
    start=display(start);
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
        printf("->%d",ptr->data);
        ptr=ptr->next;
        }
        return start;
    }
struct node *insert_node(struct node *start){
    int n;
    scanf("%d",&n);
    int val;
    scanf(" %d",&val);
    struct node *new_node,*preptr,*ptr;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=val;
    int count=1;
    int len=1;
    ptr=start;
  while(ptr!=NULL){
      len++;
      ptr=ptr->next;
  }ptr=start;
  if(n<len){
  while(count!=n){
      preptr=ptr;
      ptr=ptr->next;
      count++;
  }
  preptr->next=new_node;
  new_node->next=ptr;
  }else{
  printf("Invalid position!\n");}
    return start;
}
