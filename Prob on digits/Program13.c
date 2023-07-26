#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Power
//  Description :   Used to return the Power of Number
//  Input :         Integer,Integer
//  Output :        Integer
//  Date :          2-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1; 
    }
    return iMult;
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckArmstrong
//  Description :   Used to Check the Number is Amstrong Number or Not?
//  Input :         Integer
//  Output :        Boolean
//  Date :          2-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

bool CheckArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;


    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
         iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          2-May-2023
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int  main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }

    return 0;
}
