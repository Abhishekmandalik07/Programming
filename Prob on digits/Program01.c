#include<stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigits
//  Description :   Used to display the Digits of Number
//  Input :         Integer
//  Output :        -
//  Date :          27-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          27-April-2023
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);  // DiplsayDigits(-721);

    return 0;
}























