///////////////////////////////////////////
//****Singly Linear Linked List****
//////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////
//  Structure Name:  node(self referental structure)
//  Description :   Structure contains a Integer and Pointer
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;           // 4
    struct node *next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertFirst
//  Description :   Used to Insert a Node at First position of Linked list.
//  Input :         StructPointer , Integer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE head, int no)
{
    
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
        newn->next = *head;
        *head = newn;
    }
}


/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertLast
//  Description :   Used to Insert a Node at Last position of Linked list.
//  Input :         StructPointer , Integer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE head, int no)
{


    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
            // travel till last node
            // store address of new node in the next pointer of last node
          temp = *head;

          while(temp->next != NULL)
          {
            temp = temp->next;
          }
          temp->next = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Used to Display the nodes of Linked list.
//  Input :         StructPointer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void Display(PNODE head)
{
    printf("Elements from linked list are : \n");

    while(head != NULL)
    {
        printf("| %d |-> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description :   Used to Return the Count the nodes of Linked list.
//  Input :         StructPointer
//  Output :        Integer
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteFirst
//  Description :   Used to Delete the first node of Linked list.
//  Input :         StructPointer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE head)
{
    
    PNODE temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else        // LL contains atleast one node
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteLast
//  Description :   Used to Delete the Last node of Linked list.
//  Input :         StructPointer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void DeleteLast(PPNODE head)
{
    

    PNODE temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else if((*head) -> next == NULL) // LL contains one node
    {
            free(*head);
            *head = NULL;
    }
    else    // LL contains more than one node
    {
            temp = *head;
           while(temp->next->next != NULL)
           {
                temp = temp -> next;
           }

           free(temp->next);
           temp->next = NULL;
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertAtPos
//  Description :   Used to insert the node at Position of Linked list.
//  Input :         StructPointer,Integer,Integer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void InsertAtPos(PPNODE head, int no, int pos)
{

    int size = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size+1)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else        // Logic
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp->next = newn;
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteAtPos
//  Description :   Used to Delete specific node of Linked list.
//  Input :         StructPointer,Integer
//  Output :        -
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
////////////////////////////////////////////////////////////////////////////


void DeleteAtPos(PPNODE head, int pos)
{

    int size = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else        // Logic
    {
        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }
}


/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          11-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);    // call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteLast(&first);
    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);


    return 0;
}
