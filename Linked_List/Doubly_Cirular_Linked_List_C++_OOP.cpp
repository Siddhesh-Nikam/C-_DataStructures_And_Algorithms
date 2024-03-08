#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class DoublyCLL
{
    private:
    PNODE Head;
    int CountNode;
    PNODE Tail;

    public:
    DoublyCLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int iNo,int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    int Count();
    void Display();
};

DoublyCLL::DoublyCLL()
{
    Head=NULL;
    Tail=NULL;
    CountNode=0;
}

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(CountNode==0) //if((Head==NULL)&&(Tail==NULL))
    {
        Head=newn;
        Tail=newn;
    }

    else
    {
        newn->next=Head;
        Head->prev=newn;
        Head=newn;
    }
    Head->prev=Tail;
    Tail->next=Head;
    CountNode++;
}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(CountNode==0) //if((Head==NULL)&&(Tail==NULL))
    {
        Head=newn;
        Tail=newn;
    }

    else
    {
        Tail->next=newn;
        newn->prev=Tail;//(newn->next=Head;)//check
        Tail=newn;
    }

    Head->prev=Tail;
    Tail->next=Head;
    CountNode++;
}

void DoublyCLL::InsertAtPos(int iNo,int iPos)
{
    if((iPos<1)||(iPos>(CountNode+1)))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos==1)
    {
        InsertFirst(iNo);
    }

    else if(iPos==CountNode+1)
    {
        InsertLast(iNo);
    }

    else
    {
        PNODE newn=NULL;
        newn=new NODE;

        newn->data=iNo;
        newn->next=NULL;
        newn->prev=NULL;

        PNODE Temp=NULL;
        Temp=Head;

        for(int i=1;i<iPos-1;i++)
        {
            Temp=Temp->next;
        }
        newn->next=Temp->next;
        Temp->next->prev=newn;
        Temp->next=newn;
        newn->prev=Temp;
        CountNode++;
    }

}

void DoublyCLL::DeleteFirst()
{
    if(CountNode==0)
    {
        return;
    }

    else if(CountNode==1)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }

    else
    {
        Head=Head->next;
        delete Tail->next;  //delete Head->prev;
    }
    Tail->next=Head;
    Head->prev=Tail; 
    CountNode--;
}

void DoublyCLL::DeleteLast()
{
    if(CountNode==0)
    {
        return;
    }

    else if(CountNode==1)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }

    else
    {
        Tail=Tail->prev;
        delete Tail->next; //delete Head->prev;
    }
    Tail->next=Head;
    Head->prev=Tail; 
    CountNode--;

}

void DoublyCLL::DeleteAtPos(int iPos)
{
    if((iPos<1)||(iPos>CountNode))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();
    }

    else if(iPos==CountNode)
    {
        DeleteLast();
    }

    else
    {
        PNODE Temp=NULL;
        Temp=Head;

        for(int i=1;i<iPos-1;i++)
        {
            Temp=Temp->next;
        }
        Temp->next=Temp->next->next;
        delete Temp->next->prev;
        Temp->next->prev=Temp;
        CountNode--;
    }
}

void DoublyCLL::Display()
{
    PNODE Temp=Head;
    int i=0;
    for(i=1;i<=CountNode;i++)
    {
        cout<<"|"<<Head->data<<"|->";
        Temp=Temp->next;
    }
    cout<<"\n";
}

int DoublyCLL::Count()
{
    return CountNode;
}



int main()
{
    DoublyCLL obj;
    int iRet=0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    obj.Count();
    cout<<"Number of nodes are:"<<obj.Count()<<endl;
    
    /////////////////////////////////////////////////////////
    
    obj.DeleteFirst();
    obj.Display();
    obj.Count();
    cout<<"Number of nodes are:"<<obj.Count()<<endl;
    
    /////////////////////////////////////////////////////////
    
    obj.DeleteLast();
    obj.Display();
    obj.Count();
    cout<<"Number of nodes are:"<<obj.Count()<<endl;
    
    /////////////////////////////////////////////////////////
    
    obj.InsertAtPos(75,3);
    obj.Display();
    obj.Count();
    cout<<"Number of nodes are:"<<obj.Count()<<endl;
    
    /////////////////////////////////////////////////////////
    
    obj.DeleteAtPos(3);
    obj.Display();
    obj.Count();
    cout<<"Number of nodes are:"<<obj.Count()<<endl;
    

    return 0;
}