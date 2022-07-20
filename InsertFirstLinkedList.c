#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;

}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    *Head = newn;
}
int main()
{
    PNODE first = NULL;
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    return 0;
}