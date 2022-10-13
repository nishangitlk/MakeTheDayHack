#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *sp)
{
    if(sp->top==MAX-1)
    {
        return 1;
    }
    else return 0;
}
int isEmpty(struct stack *sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    else return 0;
}
int push(struct stack *sp,int val)
{
    if(isFull(sp))
    {
        printf("Stack overflow\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
int pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        printf("Stack underflow\n");
    }
    else
    {
        int val;
        val=sp->arr[sp->top];
        sp->top=sp->top-1;
        return val;
    }
}
void traverse(struct stack *sp)
{
    for(int i=0;i<=sp->top;i++)
    {
        printf("%d ",sp->arr[i]);
    }
}
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=MAX;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*(sizeof(int)));
    printf("Pushed element is:%d ",push(sp,90));
    printf("\nPushed element is:%d ",push(sp,80));
    printf("\nPushed element is:%d ",push(sp,100));
    printf("\nPushed element is:%d ",push(sp,150));
    printf("\nPushed element is:%d ",push(sp,60));
    printf("\nElement popped is:%d ",pop(sp));
    printf("\nElement popped is:%d ",pop(sp));
    printf("\nAfter calling pop two times:");
    traverse(sp);
    printf("\n");
}