#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertAtFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc (sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head = newn;
    }
}
void InsertAtLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = (*head)    ;

    newn =(PNODE) malloc(sizeof(NODE));
    newn->data= no;
    newn->next = NULL;
    if((*head) == NULL)
    {
        (*head) = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
         temp->next = newn;
    }

}

void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = (*head);
        *head = temp->next;
        free(temp);

    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    
    if(*head==NULL)
    {
        return;
    } 
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head,int no,int pos)
{
    int Size = 0;
    PNODE newn = NULL;
    int cnt = 0;
    PNODE temp = NULL;

    Size  =Count(*head);
    if(pos<1 || pos>(Size+1))
    {
        printf("Invalid Position");
        return;
    }
    else if(pos == 1)
    {
        InsertAtFirst(head,no);
    }
    else if(pos == (Size+1))
    {
        InsertAtLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next =NULL;
        temp = *head;
        for(cnt=1;cnt<pos-1;cnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }    

}
void Display(PNODE head)
{
    printf("Element in Linked is:\n");
    while(head!=NULL)
    {
        printf("| %d |",head->data);
        head = head->next;
    }
    printf("\n");

}
int Count(PNODE head)
{
    int cnt=0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}


int main()
{
    PNODE first = NULL;
    int iret=0;

    InsertAtFirst(&first,101);
    InsertAtFirst(&first,51);
    InsertAtFirst(&first,11);
    InsertAtFirst(&first,10);
    Display(first);
    iret= Count(first);
    printf("No of element in LL :%d\n",iret);



    InsertAtLast(&first,151);
    InsertAtLast(&first,201);
    Display(first);
    iret  =Count(first);
    printf("No of element in LL :%d\n",iret);


    DeleteFirst(&first);
    Display(first);
    iret  =Count(first);
    printf("No of element in LL :%d\n",iret);

    DeleteLast(&first);
    Display(first);
    iret  =Count(first);
    printf("No of element in LL :%d\n",iret);


    InsertAtPos(&first,301,2);
    InsertAtPos(&first,401,3);
    Display(first);
    iret  =Count(first);
    printf("No of element in LL :%d\n",iret);

    
    return 0;
}