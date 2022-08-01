#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data ;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head ,int no)
{
  
    PNODE newn  = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
int  Count(PNODE head)
{
    int Count=0;
    while(head!=NULL)
    {
        Count++;
        head = head->next;
    }
    return Count;
}
void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;
    PNODE temp = *head;
    if(*head== NULL)
    {
        *head = newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next = NULL;
    }
}
void InsertAtPos(PPNODE head ,int no,int pos)
{
    int size = 0;
     size = Count(*head);
    if(pos < 1 && pos > (size+1))
    {
        printf("Invalid Position");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    if(pos== (size))
    {
        InsertLast(head,no);
    }
    else
    {
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        PNODE temp = *head;
        for(int i=1;i<pos-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void Display(PNODE head)
{
    printf("Element from Linked List:\n");  
    while(head!=NULL)
    {
        printf("%d  ",head->data);
        head = head->next;
    }

    printf("\n");
}


int main()
{
    PNODE first  =NULL;

    InsertFirst(&first,60);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

     Display(first);

    InsertLast(&first,70);
    InsertLast(&first,80);
    Display(first);

    InsertAtPos(&first,110,4);
    InsertAtPos(&first,210,6);
    Display(first);

    
    return 0;
}