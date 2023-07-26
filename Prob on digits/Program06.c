#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Reverse
//  Description :   Used to return the reverse Number
//  Input :         Integer
//  Output :        Integer
//  Date :          27-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

   return iRev;
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

    iRet = Reverse(iValue); // Reverse(7562)

    printf("Reverse number is : %d\n",iRet);

    return 0;
}

