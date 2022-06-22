#include<stdio.h>
#include<stdlib.h>
/*
InsertFirst
InsertLast
InsrtAtPosition

DeleteFirst
DelestLast
DeleteAtPosition

Display
Count
*/

struct node
{
    int data;
    struct node*next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
/*
1: Allocate memory for node 
2: INitialise the node 
3: Check the ll is empty or not
4:If LL is emplty the new  node is first node 
5:
*/
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    if(*Head == newn)
    {
        *Head == newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    
    return 0;
}   

/*
Rules
1. Use only dynamic memory allocation
2. Don't Write any technical syntax in main function
3. Don't use any global variable  
4. Be careful while manipulating first pointer. 
5. Pass the First pointer directy if the is not goint to modify the LL  (Dispaly,Count)
*/
