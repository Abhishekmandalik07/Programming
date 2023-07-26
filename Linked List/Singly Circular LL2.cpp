//////////////////////////////////////////////////////////////
//****Singly Circuler Linked List(In Menu Driven Format)****
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
//  Structure Name:  node(self referental structure)
//  Description :   Structure contains a Integer and Pointer
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////////////////////
//  Class Name:     SinglyCLL
//  Description :   Class contains 2 characteristics and 9 Behaviours
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
////////////////////////////////////////////////////////////////////////////

class SinglyCLL
{
    private:                    // Characteristics
        PNODE Head;
        PNODE Tail;

    public:                     // Behaviours
        SinglyCLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////////////////////
//Constructor
////////////////////////////////////////////////////////////////////////////
SinglyCLL::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertFirst
//  Description :   Used to Insert a Node at First position of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void SinglyCLL::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))    // If LL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else        // If LL constains atleast one node
    {
        newn -> next = Head;
        Head = newn;
    }
    Tail -> next = Head;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertLast
//  Description :   Used to Insert a Node at Last position of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void SinglyCLL::InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))    // If LL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else        // If LL constains atleast one node
    {
        Tail -> next = newn;
        Tail = newn;
    }
    Tail -> next = Head;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertAtPos
//  Description :   Used to insert the node at Position of Linked list.
//  Input :         Integer,Integer
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

void SinglyCLL::InsertAtPos(int no, int ipos)
{
    int iSize = Count();

    if((ipos < 1) || (ipos > iSize+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iSize + 1)
    {
        InsertLast(no);
    }
    else
    {
            PNODE newn = NULL;

            newn = new NODE;

            newn->data = no;
            newn->next = NULL;

            PNODE temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp -> next;
            temp->next = newn;
    }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteFirst
//  Description :   Used to Delete the first node of Linked list.
//  Input :         -
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void SinglyCLL::DeleteFirst()
{
    if(Head == NULL && Tail ==  NULL)       // If LL is empty
    {
        return;
    }
    else if(Head == Tail)       // If LL contains 1 node
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else    // If LL contains more than 1 node
    {
        Head = Head -> next;
        delete Tail->next;

        Tail->next = Head;
    }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteLast
//  Description :   Used to Delete the Last node of Linked list.
//  Input :         -
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void SinglyCLL::DeleteLast()
{
    if(Head == NULL && Tail ==  NULL)       // If LL is empty
    {
        return;
    }
    else if(Head == Tail)       // If LL contains 1 node
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else    // If LL contains more than 1 node
    {
        PNODE temp = Head;

        while(temp->next != Tail)
        {
            temp = temp->next;
        }

        delete Tail;
        Tail = temp;

        Tail->next = Head;
    }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteAtPos
//  Description :   Used to Delete specific node of Linked list.
//  Input :         Integer
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void SinglyCLL::DeleteAtPos(int ipos)
{
    int iSize = Count();

    if((ipos < 1) || (ipos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iSize)
    {
        DeleteLast();
    }
    else
    {
            PNODE temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < ipos-1; iCnt++)
            {
                temp1 = temp1->next;
            }

            PNODE temp2 = temp1->next;

            temp1->next = temp2->next;
            delete temp2;
    }
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to Display the nodes of Linked list.
//  Input :         -
//  Output :        -
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
void SinglyCLL::Display()
{
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|-> ";
        temp = temp -> next;
    }while(temp != Head);

    cout<<endl;
}
/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description :   Used to Return the Count the nodes of Linked list.
//  Input :         -
//  Output :        Integer
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////
int SinglyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return 0;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Head);

    return iCnt;
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iChoice = 1;
    SinglyCLL obj;
    int iValue = 0, ipos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.InsertAtPos(iValue,ipos);
                break;

            case 4:
                obj.DeleteFirst();
               break;

           case 5:
                obj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.DeleteAtPos(ipos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

                default:
                    cout<<"Please enter proper choice\n";
                    break;
        }   // End of switch
    }// End of while

    return 0;
}





