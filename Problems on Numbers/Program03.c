// Input :      10
// Output :    8

// Input :      9
// Output :     4

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumFactors 
//  Description :   Used to return the Sum of Factors
//  Input :         Integer
//  Output :        Integer
//  Date :          25-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
              iSum =  iSum + iCnt;
        }
    }
    return iSum;
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
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum of factors : %d\n",iRet);
    return 0;
}
