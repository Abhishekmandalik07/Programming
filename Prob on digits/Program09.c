// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)


#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Power
//  Description :   Used to return the Power of Number
//  Input :         Integer,Integer
//  Output :        Long Integer
//  Date :          2-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

long int Power(int iNo1, int iNo2)
{
    long int lMult = 1;
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
    auto long int lRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2);

    printf("Result is : %ld\n",lRet);

    return 0;
}



