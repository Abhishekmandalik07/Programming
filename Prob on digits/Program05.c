#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumEven
//  Description :   Used to return the sum of Even digits
//  Input :         Integer
//  Output :        Integer
//  Date :          27-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int SumEven(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo /10;
    }
    return iSum;
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

    iRet = SumEven(iValue);

    printf("Summation of even digits are : %d\n",iRet);
    return 0;
}

























