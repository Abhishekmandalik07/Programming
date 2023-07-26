#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display 
//  Description :   Used to display Elements of Array
//  Input :         Integer Array
//  Output :        -
//  Date :          3-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

void Display(int Arr[])
{
    int iCnt = 0;
    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);    
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          3-May-2023
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

int main()
{
    auto int Brr[5];
    register int iCnt = 0;

    printf("Enter elements : \n");
    
   for(iCnt = 0; iCnt < 5; iCnt++ )
   {
        scanf("%d",&Brr[iCnt]);
   }

    Display(Brr);       // Display(100);
    // Add(iValue1,iValue2);
    return 0;
}


// Arr[2];
// *(Arr + 2);
// *(2 + Arr);
// 2[Arr];













