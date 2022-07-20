#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}
void Deletenode(PPNODE Head,int Data)
{
    PNODE temp = *Head;
    PNODE prev = NULL;
    if(temp !=NULL && temp->data == Data)
    {
        *Head = temp->next;
        return;
    }
    while(temp!=NULL && temp->data !=Data)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp==NULL)
    {
        return;
    }
    prev->next  =temp->next;
}

void DeleteEven(PPNODE Head)
{
    PNODE Previous = NULL;
    PNODE Targeted = *Head;
    if(Targeted == NULL)
    {
        return;
    }
    while(Targeted!=NULL)
    {
    
        if((Targeted->data)%2==0)
        {
            Deletenode(Head,Targeted->data);
            Targeted = Targeted->next;
        }

    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,7);
    InsertFirst(&First,6);
    InsertFirst(&First,3);
    InsertFirst(&First,20);
    InsertFirst(&First,5);

    Display(First);
    DeleteEven(&First);

    
    Display(First);

    return 0;
}