//////////////////////////////////////
//****Doubly Circuler Linked List****
/////////////////////////////////////

#include "Header163.h"

////////////////////////////////////
//Constructor
///////////////////////////////////

DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
    CountNode = 0;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertFirst
//  Description :   Used to Insert a Node at First position of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(CountNode == 0)  // if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head -> prev = newn;
        Head = newn;
    }

    Head->prev = Tail;
    Tail->next = Head;

    CountNode++;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertLast
//  Description :   Used to Insert a Node at Last position of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(CountNode == 0)  // if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
           Tail->next = newn;
           newn->prev = Tail;

           Tail = newn;
    }

    Head->prev = Tail;
    Tail->next = Head;

    CountNode++;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertAtPos
//  Description :   Used to insert the node at Position of Linked list.
//  Input :         Integer,Integer
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void DoublyCLL::InsertAtPos(int iNo, int iPos)
{
        if((iPos < 1) || (iPos > CountNode+1))
        {
            cout<<"Invalid position\n";
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == CountNode+1)
        {
            InsertLast(iNo);
        }
        else
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = iNo;
            newn->next = NULL;
            newn->prev = NULL;

            PNODE temp = Head;

            for(int i = 1; i<iPos-1; i++)
            {
                temp = temp->next;
            }

                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;

                CountNode++;
        }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteFirst
//  Description :   Used to Delete the first node of Linked list.
//  Input :         -
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void DoublyCLL::DeleteFirst()
{
    if(CountNode == 0)
    {
            return;
    }
    else if(CountNode == 1)
    {
            delete Head;
            Head = NULL;
            Tail = NULL;
    }
    else
    {
            Head = Head->next;
            delete Tail->next;          // delete Head->prev;
    }

    Tail->next = Head;
    Head->prev = Tail;
    CountNode--;
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteLast
//  Description :   Used to Delete the Last node of Linked list.
//  Input :         -
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void DoublyCLL::DeleteLast()
{
  if(CountNode == 0)
    {
            return;
    }
    else if(CountNode == 1)
    {
            delete Tail;
            Head = NULL;
            Tail = NULL;
    }
    else
    {
            Tail = Tail->prev;
            delete Tail->next;          // delete Head->prev;
    }

    Tail->next = Head;
    Head->prev = Tail;
    CountNode--;
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteAtPos
//  Description :   Used to Delete specific node of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void DoublyCLL::DeleteAtPos(int iPos)
{
        if((iPos < 1) || (iPos > CountNode))
        {
            cout<<"Invalid position\n";
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == CountNode)
        {
            DeleteLast();
        }
        else
        {
             PNODE temp = Head;

            for(int i = 1; i<iPos-1; i++)
            {
                temp = temp->next;
            }

            temp->next = temp->next->next;
            delete temp->next->prev;
            temp->next->prev = temp;

            CountNode--;
        }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to Display the nodes of Linked list.
//  Input :         -
//  Output :        -
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void DoublyCLL::Display()
{
       int i = 0;
       PNODE temp = Head;

       for(i = 1; i<= CountNode; i++)
       {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
       }
       cout<<"\n";
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description :   Used to Return the Count the nodes of Linked list.
//  Input :         -
//  Output :        Integer
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
int DoublyCLL::Count()
{
    return CountNode;
}
