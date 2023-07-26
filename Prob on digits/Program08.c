// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

/*
    START
        Accept one number as no1
        Acccept another number as no2

        Create one variable as Mult
        Set the value 1 in the variable Mult

        Create one countrer as cnt
        Set the counter to 1

        LOOP:
        Itreate till the counter is less than or equal to no2
            mult = Mult * no1
            increment the counter by 1
       Goto LOOP

        Display the value of mult
    END

*/

#include<stdio.h>

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
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          2-May-2023
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto int iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2); // Power(3,4)

    printf("Result is : %d\n",iRet);

    return 0;
}



