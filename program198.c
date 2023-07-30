#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next ;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
   return iCnt;
}

void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;        //pointer new node

    newn = (PNODE)malloc(sizeof(NODE));            //allocate memory for node

    //initialize node
    newn -> data = No;
    newn -> next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;        //pointer new node

    newn = (PNODE)malloc(sizeof(NODE));            //allocate memory for node

    //initialize node
    newn -> data = No;
    newn -> next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = *Head;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }

}
void InsertAtPos(PPNODE Head ,  int No , int Pos)
{

}

void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}
void DeleteAtPos(PPNODE Head , int Pos)
{

}


int main()
{
    PNODE First = NULL;
    int icount = 0;

    InsertFirst (&First,101);
    InsertFirst (&First,81);
    InsertFirst (&First,51);     //InsertFirst(60,51);
    InsertFirst (&First,21);     //InsertFirst(60,21);
    InsertFirst (&First,11);     //InsertFirst(60,11);

    Display(First);
    icount = Count(First);
    printf("The number of nodes are : %d\n", icount);

    InsertLast (&First, 61);
    InsertLast (&First, 91);

    Display(First);

    return 0;
}
