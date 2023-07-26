#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  strcatX
//  Description :   Used to concat the string
//  Input :         Character Array,Character Array
//  Output :        -
//  Date :          7-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////


void strcatX(char *src, char *dest)
{
        while(*dest != '\0')
        {
            dest++;
        }

        while(*src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }
        *dest = '\0';
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
    char Brr[20];  

    cout<<"Enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter second string"<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);

    cout<<"String after concatination : "<<Brr<<endl;

    return 0;
}
