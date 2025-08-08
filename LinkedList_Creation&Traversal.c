#include<stdio.h>
#include<stdlib.h>
int num;
struct linked{
    int data;
    struct linked *next;
};
int main(){
    printf("enter total element in linked list \t");
    scanf("%d",&num);
    int value;
    struct linked *header = NULL;
    struct linked *temp = NULL;
    struct linked *tail = NULL;
    for(int i =0;i<num;i++){
        printf("enter number %d\t",i+1);
        scanf("%d", &value);
        temp = (struct linked*)malloc(sizeof(struct linked));//creating memory for node
        temp->data=value;
        temp->next =NULL;       //new node is the last node in the linked list so the next pointer is intialized to null
        if(header == NULL){     //for the first node
            header = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail= temp;

        }
    }
    printf("\nlinked list");
    temp = header;
    while(temp!=NULL){      //printing the linked list till last node
        printf("%d->",temp->data);
        temp= temp->next;
    }
    printf("NULL\n");
return 0;
    
}
