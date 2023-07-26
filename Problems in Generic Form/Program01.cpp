#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SwapR (Generic)
//  Description :   Used to swap Numbers
//  Input :         any DataType,any DataType
//  Output :        -
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
template <class T>
void SwapR(T &p, T &q)
{
    T temp;
    temp = p;
    p = q;
    q = temp;
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
    int No1 = 11, No2 = 21;

    cout<<"Before swap data is : "<<No1<<" "<<No2<<endl;

    SwapR(No1,No2);

    cout<<"After swap data is : "<<No1<<" "<<No2<<endl;

    return 0;
}
