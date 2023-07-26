#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountSmall
//  Description :   Used to return the Frequency of small case letters
//  Input :         Character Array
//  Output :        Integer
//  Date :          7-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          7-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = CountSmall(Arr);
    cout<<"Number of small characters are : "<<iRet<<endl;

    return 0;
}
