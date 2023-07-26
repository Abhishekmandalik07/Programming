#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayF 
//  Description :   Used to Display in Forward Direction
//  Input :         Integer
//  Output :        -
//  Date :          26-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void DisplayF(int iNo)
{
    int iCnt = 0;
    //  1                   2                3
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d\n",iCnt);        // 4
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          26-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

void DisplayB(int iNo)
{
    int iCnt = 0;
    //          1               2           3
    for(iCnt = iNo; iCnt>= 1; iCnt--)
    {
        printf("%d\n",iCnt);        // 4
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          25-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    printf("Forward Display\n");
    DisplayF(iValue);
    printf("Backard Display\n");
    DisplayB(iValue);
    return 0;
}
