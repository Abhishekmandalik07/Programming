#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayEven
//  Description :   Used to Display the Sum of even digits of Number
//  Input :         Integer
//  Output :        -
//  Date :          27-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void DisplayEven(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }
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
    int iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);
return 0;
}

























