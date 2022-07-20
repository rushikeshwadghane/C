#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node  *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE  Head,int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data =iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    PNODE temp = *Head;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL);
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL);
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;                

            }
            else if(iNo == temp->data)
            {
                free(newn);
                break;
            }


        }
    }
}
void Inorder(PNODE Head)
{
    if(Head!= NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }
}
void Preorder(PNODE Head)
{
    if(Head!= NULL)
    {
        printf("%d\n",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}
void Postorder(PNODE Head)
{
    if(Head!= NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\n",Head->data);

    }
}

int main()
{
    PNODE First = NULL;
    PNODE first = NULL;

    Insert(&first,11);
    Insert(&First,21);
    Insert(&First,7);

    printf("Inorder data\n");
    Inorder(first);


    printf("preorder data\n");
    Preorder(first);

    printf("Postorder data\n");

    Postorder(first);
    return 0;
}