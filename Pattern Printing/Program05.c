// Input :  4
// Output :     1   2   3   4   4   3   2   1
// O(2N)

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display 
//  Description :   Used to display the Pattern
//  Input :         Integer
//  Output :        -
//  Date :          9-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt= iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main 
//  Description :   Entry Point FUnction of Application
//  Date :          9-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int main()
{
    int iValue =0;

    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
