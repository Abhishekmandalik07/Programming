#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayF 
//  Description :   Used to check Number is Prime or Not?
//  Input :         Integer
//  Output :        Boolean
//  Date :          26-April-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    //          1           2                       3
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)     // 4
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
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
    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}
