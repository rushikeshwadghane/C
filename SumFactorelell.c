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

int Summation(PNODE Head)
{
    int iSum =0;

    while(Head!= NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE  Head)
{
    int iMax = 0;
    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
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
void SumFactors(PNODE Head)
{
    int ino=0,sum=0,i=0;
    while (Head!=NULL)
    {
        ino = Head->data;
        for(i=1;i<=(ino/2);i++)
        {
            if(ino%i==0)
            {
                sum = sum+i;
            }
        }
        printf("%d: %d\n",Head->data,sum);
        Head = Head->next;
        sum=0;
    }   
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,496);
    InsertFirst(&First,28);
    InsertFirst(&First,6);


    Display(First);
    iRet = Summation(First);
    printf("Addition is : %d\n",iRet);

    int iret = Maximum(First);
    printf("Maximum element int LL: %d\n",iret);

    int icet = Frequency(First,20);
    printf("Frequency of iNO in linked list is %d\n",icet);

    SumFactors(First);


    return 0;
}
