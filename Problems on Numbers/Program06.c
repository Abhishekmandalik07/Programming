#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckPerfect 
//  Description :   Used to check Number is Perfect or Not?
//  Input :         Integer
//  Output :        Boolean
//  Date :          26-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
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
        if(iSum > iNo)
        {
            break;
        }
    }

    if(iSum == iNo)
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
//  Date :          26-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}
