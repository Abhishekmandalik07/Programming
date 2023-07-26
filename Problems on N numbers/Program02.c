#include<stdio.h>
#include<stdlib.h>      // for malloc and free

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display 
//  Description :   Used to display Elements of Array
//  Input :         Integer Array,Integer
//  Output :        -
//  Date :          3-May-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    printf("Elements of array are : \n");
    //      1               2           3
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);    // 4
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
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

   printf("Enter elements : \n");
   for(iCnt = 0; iCnt < iSize; iCnt++ )
   {
        scanf("%d",&ptr[iCnt]);
   }

    Display(ptr, iSize);       // Display(100, 4);
    free(ptr);  // free(100);
    return 0;
}
