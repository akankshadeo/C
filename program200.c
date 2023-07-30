//circular linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if (Head != NULL && Tail != NULL)
    {
        do
    {
        printf("|%d| ->", Head->data);
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

int Count(PNODE Head, PNODE Tail)
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

    if ((*Head == NULL) && (*Tail == NULL))         //ll is empty
    {
        *Head = newn;
        *Tail = newn;              //#
    }
    else        //LL contains at least one node
    {
        newn->next = *Head;
        *Head = newn;
    }

    (*Tail)->next = *Head;            //#
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL))         //ll is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else        //LL contains at least one node
    {
        (*Tail)->next = newn;
        (*Tail) = newn;

    }

    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    int iLength = 0;
    iLength = Count(*Head,*Tail);   //calculate length of linked list

    if (((iPos) < 1) || (iPos > iLength + 1))  //invalid position
    {
        printf("Enter appropriate position.\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if (iPos == iLength + 1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;

        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        //sequence is imp
        newn -> next = temp -> next;
        temp->next = newn;
    }

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
    }

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

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
        while (temp->next != *Tail)
        {
            temp = temp->next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }


}

void DeleteAtPos (PPNODE Head, PPNODE Tail, int iPos)
{
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE tempX = NULL;

    int iLength = 0;
    iLength = Count(*Head,*Tail);   //calculate length of linked list

    if (((iPos) < 1) || (iPos > iLength))   //invalid position
    {
        printf("Enter appropriate position.\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if (iPos == iLength)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        tempX = temp->next;

        //sequence is imp
        temp -> next = temp->next->next;
        free(tempX);
    }

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;     //#
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

    InsertAtPos(&First, &Last,25,2);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&First, &Last, 4);

    Display(First,Last);
    iRet = Count(First, Last);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}
