//circular doubly linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if (Head != NULL && Tail != NULL)
    {
        do
    {
        printf("|%d| <=>", Head->data);
        Head = Head->next;
    }
    while(Head != Tail->next);

    printf("\n");

    }
    else
    {
        printf("Linked List is empty.\n");
    }

}

int Count (PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if (Head != NULL && Tail != NULL)
    {
        do
    {
        iCnt++;
        Head = Head->next;
    }
    while(Head != Tail->next);
    return iCnt;

    }
    else
    {
         return 0;
    }

}

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
         *Head = newn;
    }

    (*Head)->next = *Tail;
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
         newn->prev = *Tail;

         *Tail = newn;
    }

    (*Head)->next = *Tail;
    (*Tail)->next = *Head;

}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }


}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;

        free((*Tail)-> next);
        (*Tail) -> next = *Head;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 50);
    InsertFirst(&First, &Last, 40);
    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&First, &Last, 60);
    InsertLast(&First, &Last, 70);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&First, &Last);
    DeleteLast(&First, &Last);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n", iRet);



    return 0;
}
