 
#include <bits/stdc++.h>
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref,
          int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(
            sizeof(
                struct Node));
 
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void deleteNode(struct Node** head_ref,int key)
{
    struct Node *temp = *head_ref,*prev = NULL;
    if (temp != NULL && temp->data == key) 
    {
        *head_ref = temp->next;
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        printf("asdfgsdfg\n");
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    prev->next = temp->next;   
}
void deleteEvenNodes(Node** head_ref)
{
    Node* ptr = *head_ref;
    while (ptr != NULL) 
    {
       
        if (ptr->data % 2 == 0)
        {
            deleteNode(head_ref, ptr->data);
        }              
        ptr = ptr->next;
    }
}
 
void printList(struct Node* node)
{
    while (node != NULL) {
        printf(" %d -> ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    Node* head = NULL;
    push(&head, 12);
    push(&head, 8);
    push(&head, 6);
    push(&head, 4);
    push(&head, 2);
 
    printf("Initial List: ");
    printList(head);
 
    deleteEvenNodes(&head);
 
    printf("\nFinal List: ");
    printList(head);
}