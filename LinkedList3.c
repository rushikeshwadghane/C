//Doubly Lineaer LinkedList
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node * next;
    struct node * prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if(*head==NULL)
    {
        *head=newn;
    }
    else{
        newn->next = (*head);
        (*head)->prev = newn;
        *head = newn;          
    }
}
void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc (sizeof(NODE));
    PNODE temp = *head;
    newn->Data=no;
    newn->next=NULL;
    newn->prev=NULL;
    if(*head==NULL)
    {
        *head=newn;
    }
    else{
        while (temp->next!=NULL)
        {
            temp =temp->next;
        }
        temp->next= newn;
        newn->prev = temp; //or temp->next->prev = temp;
    }
}
void Display(PNODE head)
{
    printf("Element from Linked List\n");
    while (head!=NULL)
    {
        printf("%d ",head->Data);
        head=head->next;
    }
    printf("\n");
}
int Count(PNODE head)
{
    int iCnt=0;
    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE head)
{
    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
    }
    else{
        *head = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
    }
}
void DeleteLast(PPNODE head)
{
    PNODE temp = *head;
    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
    }
    else{
       while (temp->next->next!=NULL)
       {
           temp = temp->next;
       }
        free(temp->next);
        temp->next=NULL;
    }    
}
void InsertAtPos(PPNODE head,int no,int Pos)
{
    int Size = Count(*head);
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->next = NULL;
    newn->prev = NULL;
    PNODE temp = *head;
    int i=0;
    if(Pos<1 || Pos > (Size+1))
    {
        printf("Invalid Position:\n");
        return;
    }
    if(Size==1)
    {
        InsertFirst(head,no);
    }
    else if(Pos==Size)
    {
        InsertLast(head,no);
    }
    else
    {
        for(i=1;i<(Pos-1);i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        newn->prev = temp;
        newn->next->prev = newn;
    }
}
void DeleteAtPos(PPNODE head, int pos)
{
    PNODE temp = NULL;

    int size = 0, iCnt = 0;
    size = Count(*head);

    if((pos < 1) || (pos > size))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos ==1)
    {
        DeleteFirst(head);
    }
    else if(pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(iCnt =1; iCnt < (pos-1) ;iCnt++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
     }
}
int main()
{
    PNODE first = NULL;
    int iret = 0;
    InsertFirst(&first,11);
    InsertLast(&first,21);
    InsertLast(&first,51);
    InsertLast(&first,101);
    InsertLast(&first,151);
    InsertLast(&first,201);
    InsertLast(&first,301);

    Display(first);
    iret = Count(first);
    printf("Number of Node in LL is : %d \n",iret);



    DeleteFirst(&first);
    Display(first);
    iret = Count(first);
    printf("Number of Node in LL is : %d \n",iret);

    DeleteLast(&first);
    Display(first);
    iret = Count(first);
    printf("Number of Node in LL is : %d \n",iret);                                 

    InsertAtPos(&first,75,3);
    Display(first);
    iret = Count(first);
    printf("Number of Node in LL is : %d \n",iret);     

    DeleteAtPos(&first,3);
    Display(first);
    iret = Count(first);
    printf("Number of Node in LL is : %d \n",iret); 




    return 0;
}