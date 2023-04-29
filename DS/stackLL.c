//stack using linked list
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
}*top = NULL;
void push(int);
void pop();
void display();

void main()
{
    int n,value;
    printf("RITIKA   \n 2100320130140");
    while(1){
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter your choice:");
        scanf("%d",&n);
        switch(n){
        case 1:printf("enter the value to be inserted:");
               scanf("%d",&value);
               push(value);
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:printf("\n invalid choice\n ");

        }
    }
}
void push(int value)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(top == NULL)
        newnode->next=top;
    else
        newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
        printf("\nstack is empty\n");
    else
    {
        struct node*temp=top;
        printf("\ndeleted element:%d\n",temp->data);
        top=temp->next;
        free(temp);
    }
}
void display()
{
    if(top==NULL)
        printf("\nstack is empty\n");
    else
    {
        struct node*temp=top;
        while(temp->next!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}

