#include<stdio.h>

typedef unsigned long int ULONG;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Power
//  Description :   Used to return the Power of Number
//  Input :         Integer,Integer
//  Output :        Unsigned Long Integer
//  Date :          2-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


ULONG Power(int iNo1, int iNo2)
{
    ULONG lMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1;
    }
    return lMult;
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          2-May-2023
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto ULONG lRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result is : %ld\n",lRet);

    return 0;
}



