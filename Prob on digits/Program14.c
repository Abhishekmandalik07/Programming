#include<stdio.h>
#include<stdbool.h>

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
    int iTemp = 0, iCnt = 0,iMult = 1;
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
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;       // 4
        }

         iSum = iSum + iMult;
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
