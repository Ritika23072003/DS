#include<stdio.h>
int stack[100],top,i,x,n,choice;
void push(void);
void pop(void);
void peek(void);
void display(void);
int main()
{

    top=-1;
    printf("\nRitika \n2100320130140\n");
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t stack operations using array:");
    printf("\n\t 1.push\n\t 2.pop\n\t 3.peek\n\t 4.display\n\t 5.exit");
    do
    {
        printf("\nenter the choice:-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                   push();
                   break ;
                }
            case 2:
                {
                   pop();
                   break;
                }
            case 3:
                {
                   peek();
                   printf("a pointer point at top:%d\n",stack[top]);
                   break;
                }
            case 4:
                {
                   dispaly();
                   break;
                }
            case 5:
                {
                   printf("\n\texit");
                   break;
                }
            default:
                {
                    printf("valid choice(1/2/3/4/5)");
                }
        }
    }
    while(choice!=5);
    return 0;
}
void peek()
{
    return stack[top];
}
void push()
{
    if (top>=n-1)
    {
        printf("\nstack is overflow\n");
    }
    else
    {
        printf("enter a value to be push:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nstack is underflow\n");
    }
    else
    {
        printf("enter a value to be pop:%d",stack[top]);
        scanf("pop element is:%d\n",stack[top]);
        top--;
    }
}
void dispaly()
{
    if(top>=0)
    {
        printf("\n element in stack:\n");
        for(i=top;i>=0;i++)
            printf("\n%d",stack[i]);
        printf("enter next choice:");
    }
    else
    {
        printf("stack is empty");
    }
}
