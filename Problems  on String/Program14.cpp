#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountVoewls
//  Description :   Used to return the Frequency of vowels
//  Input :         Character Array
//  Output :        Integer
//  Date :          7-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

int CountVoewls(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e')  || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E')  || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    iRet = CountVoewls(Arr);
    cout<<"Number of vowels  are : "<<iRet<<endl;

    return 0;
}
