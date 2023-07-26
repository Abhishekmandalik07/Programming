#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayNonFactors 
//  Description :   Used to display the NonFactors of Number
//  Input :         Integer
//  Output :        -
//  Date :          25-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    return 0;
}

// Time Complexity : O(N/2)



/*
Input : 10
iNo = 10

if((iNo % 1) == 0)
{}
if((iNo % 2) == 0)
{}
if((iNo % 3) == 0)
{}
if((iNo % 4) == 0)
{}
if((iNo % 5) == 0)
{}
if((iNo % 6) == 0)
{}
if((iNo % 7) == 0)
{}
if((iNo % 8) == 0)
{}
if((iNo % 9) == 0)
{}

















*/






















