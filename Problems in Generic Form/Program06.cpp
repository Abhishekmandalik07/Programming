#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Maximun (Generic)
//  Description :   Used to return Maximum from Array
//  Input :         any DataType,Integer
//  Output :        DataType
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

template <class T>
T Maximum(T Arr[], int size)
{
    T Max = Arr[0];
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
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
    int iret = Maximum(Brr,5);
    cout<<"MAximum is : "<<iret<<endl;

    float Crr[] = {10.11,20.11,30.11,40.11,50.11};
    float fret = Maximum(Crr,5);
    cout<<"MAximum is : "<<fret<<endl;

    return 0;
}
