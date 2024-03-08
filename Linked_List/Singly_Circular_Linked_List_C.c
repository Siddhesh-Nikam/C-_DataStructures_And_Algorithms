#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    
    if((*Head)==NULL)
    {
        *Head=newn;
        (*Head)->next=(*Head);
        return;
    }
    
    PNODE Temp = (*Head);
    
    while(Temp->next!=(*Head))
    {
        Temp=Temp->next;
    }
    Temp->next=newn;
    newn->next=(*Head);
    (*Head)=newn;
  
}

////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    
    if((*Head)==NULL)
    {
        *Head=newn;
        (*Head)->next=(*Head);
        return;
    }
    
    PNODE Temp = (*Head);
    
    while(Temp->next!=(*Head))
    {
        Temp=Temp->next;
    }
    Temp->next=newn;
    newn->next=(*Head);
}

////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE Temp=NULL;
    Temp=(*Head);

    if((*Head)==NULL)
    {
        return;
    }
    
    if((Temp->next)==(*Head))
    {
        (*Head)=NULL;
        return;
    }
    
    PNODE TempDelete = (*Head);
    
    while((TempDelete->next)!=(*Head))
    {
        TempDelete=TempDelete->next;
    }
    TempDelete->next=(*Head)->next;
    (*Head)=(*Head)->next;
    free(Temp);
}

////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE Temp=NULL;
    Temp=(*Head);

    if((*Head)==NULL)
    {
        return;
    }
    
    if((Temp->next)==(*Head))
    {
        (*Head)=NULL;
        return;
    }
    
    PNODE TempDelete = (*Head);
    PNODE TempDelete1= NULL;
    
    while((TempDelete->next->next)!=(*Head))
    {
        TempDelete=TempDelete->next;
    }
    TempDelete1=TempDelete->next;
    TempDelete->next=(*Head);
    free(TempDelete1);
}

////////////////////////////////////////////////////

void Display(PNODE Head)
{
    printf("Elements in LL are:\n");
    int iCnt=0;
    PNODE Temp = NULL;
    Temp=Head;
    
    if(Head==NULL)
    {
        return;
    }
    
    do{
        printf("|%d|->",Temp->data);
        Temp=Temp->next;
    }while(Temp!=Head);
    printf("\n");
}

////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iCnt=0;
    PNODE Temp = NULL;
    Temp=Head;
    
    if(Head==NULL)
    {
        return 0;
    }
    
    do{
        Temp=Temp->next;
        iCnt++;
    }while(Temp!=Head);
    return iCnt;
}

////////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,int iNo,int iPos)
{
    int iSize = 0;
    PNODE Temp=NULL;
    PNODE newn=NULL;
    iSize = Count(*Head);
    
    if((iPos<1)||(iPos>(iSize+1)))
    {
        printf("Invalid position\n");
        return;
    }
    
    else if(iPos==1)
    {
        InsertFirst(Head,iNo);
    }
    
    else if(iPos==(iSize+1))
    {
        InsertLast(Head,iNo);
    }
    
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->data=iNo;
        newn->next=NULL;
        
        Temp=(*Head);
        
        for(int iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            Temp=Temp->next;
        }
        newn->next=Temp->next;
        Temp->next=newn;
    }
}

////////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,int iPos)
{
    int iSize = 0;
    PNODE Temp=NULL;
    PNODE newn=NULL;
    PNODE TempDelete=NULL;
    iSize = Count(*Head);
    
    if((iPos<1)||(iPos>iSize))
    {
        printf("Invalid position\n");
        return;
    }
    
    else if(iPos==1)
    {
        DeleteFirst(Head);
    }
    
    else if(iPos==(iSize))
    {
        DeleteLast(Head);
    }
    
    else
    {
        
        Temp=(*Head);
        
        for(int iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            Temp=Temp->next;
        }
        TempDelete=Temp->next;
        Temp->next=Temp->next->next;
        free(TempDelete);
    }
}

////////////////////////////////////////////////////
/************************************************************************/
////////////////////////////////////////////////////
int main()
{
    printf("Demonstration of Singly Circular Linked List and main operations:\n");
    printf("1.InsertFirst\n");
    printf("2.InsertLast\n");
    printf("3.DeleteFirst\n");
    printf("4.DeleteLast\n");
    printf("5.InsertAtPos\n");
    printf("6.DeleteAtPos\n");
    printf("7.Display\n");
    printf("8.Count\n");
    
    printf("******************************************************************\n");
    

    int iRet = 0;
    PNODE First = NULL;
    
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////
    
    InsertLast(&First,111);
    InsertLast(&First,121);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////
    
    DeleteFirst(&First);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////
    
    DeleteLast(&First);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////   

    InsertAtPos(&First,71,3);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////   
    
    DeleteAtPos(&First,3);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of elements in LL are:%d\n",iRet);
    
    ////////////////////////////////////////////////   

    return 0;
}