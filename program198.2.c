#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

//1. allocate memory for new node
//2. Initialize the node
//3. Check if linked list is empty or not
//4. If ll is empty store address of new node in first
//5. Otherwise store the address of new node inside inside next pointer of old first node
//6. Update first pointer with the address of new node

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));   //1

    newn -> data = no;
    newn -> next = NULL;              //2

    if (*Head == NULL)         //3
    {
        *Head = newn;             //4
    }
    else
    {
        newn->next = *Head;    //5
        *Head = newn;           //6
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));   //1

    PNODE temp = *Head;

    newn -> data = no;
    newn -> next = NULL;              //2

    if (*Head == NULL)         //3
    {
        *Head = newn;             //4
    }
    else
    {
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;

    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("|%d| -> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");

}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;

}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)   //ll is empty
    {
       // printf("Linked List is empty");
        return;
    }
    else if((*Head) -> next == NULL)   //has one node
    {
        free(*Head);
        *Head = NULL;
    }
    else                   //contains more than one node
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if (*Head == NULL)   //ll is empty
    {
       // printf("Linked List is empty");
        return;
    }
    else if((*Head) -> next == NULL)   //has one node
    {
        free(*Head);
        *Head = NULL;
    }
    else                   //contains more than one node
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head,int no, int iPos)
{
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    int iLength = 0;
    iLength = Count(*Head);   //calculate length of linked list

    if (((iPos) < 1) || (iPos > iLength + 1))  //invalid position
    {
        printf("Enter appropriate position.\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,no);
    }
    else if (iPos == iLength + 1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = no;
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

void DeleteAtPos(PPNODE Head,int iPos)
{
    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE tempX = NULL;

    int iLength = 0;
    iLength = Count(*Head);   //calculate length of linked list

    if (((iPos) < 1) || (iPos > iLength))   //invalid position
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

        tempX = temp->next;

        //sequence is imp
        temp -> next = temp->next->next;
        free(tempX);
    }

}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 31);
    InsertLast(&First, 41);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are %d\n", iRet);

    InsertFirst(&First, 51);
    InsertFirst(&First, 61);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are %d\n", iRet);


    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);

    DeleteLast(&First);
    Display(First);

    InsertAtPos(&First, 20, 2);
    Display(First);

    DeleteAtPos(&First, 2);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are %d\n", iRet);


    return 0;
}
