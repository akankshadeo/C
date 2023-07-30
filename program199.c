//Doubly linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;     // #
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("|%d| <=> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");

}

int Count (PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

   return iCnt;
}

void InsertAtFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;        //#

    if (*Head == NULL)        //LL is empty
    {
        *Head = newn;
    }
    else                      //LL contains at least one node
    {
        (*Head)->prev = newn;            //#
        newn->next = *Head;           //first two lines sequence not imp
        *Head = newn;
    }
}

void InsertAtLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;        //#

    if (*Head == NULL)        //LL is empty
    {
        *Head = newn;
    }
    else                      //LL contains at least one node
    {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newn;
            newn->prev = temp;   //#

    }

}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

     if (((iPos) < 1) || (iPos > iLength + 1))  //invalid position
    {
        printf("Enter appropriate position.\n");
        return;
    }

     if(iPos == 1)
    {
        InsertAtFirst(Head,no);
    }
    else if (iPos == iLength + 1)
    {
        InsertAtLast(Head,no);
    }
    else
    {
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;        //#

        //sequence is imp
        newn -> next = temp -> next;        //join right side first
        temp->next->prev = newn;       //#
        temp->next = newn;
        newn->prev = temp;               //#
    }
}


void DeleteFirst(PPNODE Head)
{
    if (*Head == NULL)        //LL is empty
    {
        return;
    }
    else if ((*Head) -> next == NULL)         //LL has 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                  //LL has more than one node
    {
        *Head = (*Head)->next;
        free((*Head)->prev);     //#
        (*Head)->prev = NULL;           //#
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)        //LL is empty
    {
        return;
    }
    else if ((*Head) -> next == NULL)         //LL has 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                  //LL has more than one node
    {
        while(temp->next->next != NULL)  //Type 3 while loop
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }

}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);
    int iCnt = 0;
    PNODE temp = *Head;

     if (((iPos) < 1) || (iPos > iLength))  //invalid position
    {
        printf("Enter appropriate position.\n");
        return;
    }

     if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);       //#
        temp->next->prev = temp;      //#
    }

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First, 50);
    InsertAtFirst(&First, 40);
    InsertAtFirst(&First, 30);
    InsertAtFirst(&First, 20);
    InsertAtFirst(&First, 10);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes in LL are : %d\n", iRet);

    InsertAtLast(&First, 60);
    InsertAtLast(&First, 70);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes in LL are : %d\n", iRet);

    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes in LL are : %d\n", iRet);

    InsertAtPos(&First, 25, 2);
    DeleteAtPos(&First, 4);

    Display(First);
    iRet = Count(First);
    printf("The number of nodes in LL are : %d\n", iRet);


    return 0;
}

