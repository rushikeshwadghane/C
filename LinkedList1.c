#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int rollno;
    char name[30];
};

struct node 
{
    struct Student Data;
    struct node * next;
};
typedef struct node NODE;
typedef struct Student SNODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertNode(PPNODE Head,SNODE info)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));
    PNODE temp = *Head;
    newn->next = NULL;
    newn->Data = info;
    if(*Head==NULL)
    {
        *Head= newn;
    }
    else{
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;     
    }    
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
       printf("%d: ",(Head->Data).rollno);
       printf("%s\n",(Head->Data).name);
         Head = Head->next;
    }
}
SNODE SerchStudent(PNODE Head,int no,char str[])
{
    while (Head->next!=NULL)
    {
         if(no==Head->Data.rollno)
         {
             break;
         }
    }
    return Head->Data;
}
int main()
{
    PNODE first = NULL;
    int n=0,i=0;
    struct node obj;
    printf("Enter number of Student\n");
    scanf("%d",&n);
    printf("Enter name and rollno:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%s",obj.Data.name);
        scanf("%d",&obj.Data.rollno);
        InsertNode(&first,obj.Data);
    }
    Display(first);
    int roll=0;
    char string[30];
    printf("Enter roll no for Searching:\n");
    scanf("%d",&roll);

    SNODE Search = SerchStudent(first,roll,string);    

    printf("%d : %s\n",obj.Data.rollno,obj.Data.name);
    return 0;
}