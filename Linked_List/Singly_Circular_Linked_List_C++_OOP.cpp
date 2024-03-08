#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private :
        PNODE Head;
        PNODE Tail;

    public :
        SinglyCLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};
        
SinglyCLL::SinglyCLL()
{            
    Head = NULL;
    Tail = NULL;
}
        

void SinglyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn= new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if((Head==NULL)&&(Tail==NULL))
    {
        Head=newn;
        Tail=newn;
    }

    else
    {
        newn->next=Head;
        Head=newn;
    }
    Tail->next=Head;
}

void SinglyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn= new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if((Head==NULL)&&(Tail==NULL))
    {
        Head=newn;
        Tail=newn;
    }

    else
    {
        Tail->next=newn;
        Tail=newn;
    }
    Tail->next=Head;

}

void SinglyCLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = Count();

    if((iPos < 1) || (iPos > iSize+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(iNo);
    }
    else
    {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = iNo;
            newn->next = NULL;

            PNODE temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < iPos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp -> next;
            temp->next = newn;
    }
}
void SinglyCLL::DeleteFirst()
{
    PNODE Temp = NULL;
    if(Head == NULL && Tail == NULL)        
    {
        return;
    }

    else if(Head==Tail)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }

    else
    {
        Head=Head->next;
        delete Tail->next;
        Tail->next=Head;
    }
}

void SinglyCLL::DeleteLast()
{
    PNODE Temp = NULL;
    if(Head == NULL && Tail == NULL)        
    {
        return;
    }

    else if(Head==Tail)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }

    else
    {
        Temp=Head;

        while(Temp->next!=Tail)
        {
            Temp=Temp->next;
        }
        free(Temp->next);
        Tail=Temp;
        Tail->next=Head;
    }
}

void SinglyCLL::DeleteAtPos(int iPos)
{
    int iSize = Count();

    if((iPos < 1) || (iPos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
            PNODE temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < iPos-1; iCnt++)
            {
                temp1 = temp1->next;
            }

            PNODE temp2 = temp1->next;

            temp1->next = temp2->next;
            delete temp2;
    }
}

void SinglyCLL::Display()
{
    cout<<"Elements in LL are:"<<endl;

    PNODE Temp =Head;

    if(Head == NULL && Tail == NULL)        
    {
        return;
    }

    do
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp=Temp->next;

    }while(Temp!=Head);

    cout<<endl;
}

int SinglyCLL::Count()
{
    int iCnt = 0 ;
    PNODE Temp =Head;

    if(Head == NULL && Tail == NULL)        
    {
        return 0;
    }

    do
    {
        iCnt++;
        Temp=Temp->next;

    }while(Temp!=Head);
    return iCnt;
}


int main()
{
    SinglyCLL obj;
    int iRet = 0 ;

    obj.InsertFirst(121);
    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet=obj.Count();

    cout<<"Elements in LL are : " << iRet <<endl;

    obj.DeleteFirst();

    obj.Display();
    iRet=obj.Count();

    cout<<"Elements in LL are : " << iRet <<endl;

    obj.DeleteLast();

    obj.Display();
    iRet=obj.Count();

    cout<<"Elements in LL are : " << iRet <<endl;

    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    return 0;
}