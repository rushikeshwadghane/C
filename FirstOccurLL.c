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

int Frequency(PNODE Head,int iNo)
{
    int icnt=0;
    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            icnt++;
        }
        Head = Head->next;
    }
    return icnt;
}
int IndexOccure(PNODE Head,int iNo)
{
    int index=0;
    while (Head!=NULL)
    {
        if(iNo == Head->data)
           {
          
            break;
        }
        index++;
        Head=Head->next;
    }
    if(Head == NULL)
    {
        return -1;
    }
    else
    {
        return index;
    } 
}
int LastOccurence(PNODE Head ,int iNo)
{
    int index=0,last=0;
    while (Head!=NULL)
    {
        if(iNo == Head->data)
        {
            last =index;
        }
         index++;
        Head=Head->next;
    }
        return last;

}
int MiddleValue(PNODE Head)
{
    PNODE temp = Head;
    int iCnt=0;
    while (Head!=NULL)
    {
        iCnt++;

        Head = Head->next;
    }
    for(int i=0;i<(iCnt/2);i++)
    {
          temp = temp->next;
    }
    
    return temp->data;    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,6);
    InsertFirst(&First,40);
    InsertFirst(&First,496);
    InsertFirst(&First,28);
    InsertFirst(&First,6);
    InsertFirst(&First,15);

    Display(First);
    int icet = Frequency(First,20);
   // printf("Frequency of iNO in linked list is %d\n",icet);

 
    int ind = IndexOccure(First,496);
 //   printf("Number found at index : %d\n",ind);

   // int iret = LastOccurence(First,6);
   // printf("6 occur at last index : %d\n",iret);

    iRet = MiddleValue(First);
    printf("\n<< %d>> is middle value\n",iRet);

    return 0;
}
