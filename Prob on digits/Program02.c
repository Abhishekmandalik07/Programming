#include<stdio.h>

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountDigits
//  Description :   Used to return Count Digits of Number
//  Input :         Integer
//  Output :        Integer
//  Date :          27-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int CountDigits(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iCnt++;
        iNo = iNo /10;
    }
    return iCnt;
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

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);
    return 0;
}






/*

iNo = 98675


















*/

























