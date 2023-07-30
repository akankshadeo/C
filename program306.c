#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)             //insering root node
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(No == temp->data)
            {
                printf("Duplicate element : unable to insert\n");
                free(newn);
                break;
            }
            else if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp -> lchild;
            }
        }
    }

}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Display(Head->lchild);
        Display(Head->rchild);
        printf("%d\t",Head->data);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Display(Head->lchild);
        Display(Head->rchild);
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Display(Head->lchild);
        printf("%d\t",Head->data);
        Display(Head->rchild);
    }
}

bool Search(PNODE Head, int No)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty\n");
        return flag;
    }

    while(Head != NULL)
    {
        if(No == Head->data)
        {
            flag = true;
            break;
        }
        else if(No > Head->data)
        {
            Head = Head->rchild;
        }
        else if(No < Head->data)
        {
            Head = Head->lchild;
        }
    }
    return flag;
}

int CountNodesR(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        iCount++;
        CountNodesR(Head->lchild);
        CountNodesR(Head->rchild);
    }
    return iCount;
}

int CountLeafNodesR(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) && (Head->rchild == NULL))
        {
            iCount++;
        }
        CountNodesR(Head->lchild);
        CountNodesR(Head->rchild);
    }
    return iCount;
}

int CountparentNodesR(PNODE Head)
{
    static int iCount = 0;

    if(Head != NULL)
    {
        if((Head->lchild == NULL) || (Head->rchild == NULL))
        {
            iCount++;
        }
        CountNodesR(Head->lchild);
        CountNodesR(Head->rchild);
    }
    return iCount;
}




int main()
{
    PNODE First = NULL;
    bool bRet = false;
    Insert(&First,21);
    Insert(&First,25);
    Insert(&First,15);
    Insert(&First,78);
    Insert(&First,56);
    Insert(&First,10);
    Insert(&First,55);
    Insert(&First,34);
    Insert(&First,20);

    printf("\nElements in preorder format : \n");
    Preorder(First);

    printf("\nElements in Inorder format : \n");
    Inorder(First);

    printf("\nElements in postorder format : \n");
    Postorder(First);

    bRet = Search (First,56);
    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }


    Display(First);

    return 0;
}
