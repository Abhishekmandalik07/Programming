#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display (Generic)
//  Description :   Used to Display Array
//  Input :         any DataType,Integer
//  Output :        -
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
template<class T>
void Display(T Arr[], int size)
{
       int i = 0;
       for(i = 0; i < size;i++)
       {
            cout<<Arr[i]<<endl;
       }
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Main
//  Description :   Entry Point Function of the Application
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int Brr[] = {10,20,30,40,50};
    Display(Brr,5);

    float Crr[] = {10.11,20.11,30.11,40.11,50.11};
    Display(Crr,5);

    return 0;
}
