//////////////////////////////////////
//****Doubly Circuler Linked List****
/////////////////////////////////////


#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
//  Structure Name:  node(self referental structure)
//  Description :   Structure contains a Integer and 2 Pointers
//  Date :          25-May-2022
//  Author :        Abhishek Balasaheb Mandalik
////////////////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

/////////////////////////////////////////////////////////////////////////////
//  Class Name:     SinglyCLL
//  Description :   Class contains 3 characteristics and 9 Behaviours
//  Date :          24-May-2022
//  Author :        Abhishek Balasaheb Mandalik
////////////////////////////////////////////////////////////////////////////

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
        int CountNode;

     public:
        DoublyCLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int, int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        int Count();
        void Display();
};
