#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Addition (Generic)
//  Description :   Used to Add 2 Numbers of any DataTypes
//  Input :         any DataType,any DataType
//  Output :        DataType
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
template <class T>
T Addition(T A, T B)
{
    T Ans;
    Ans = A + B;
    return Ans;
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
    int ret = 0;
    ret = Addition(No1,No2);
    cout<<"Addition is : "<<ret<<endl;

    float fNo1 = 11.89, fNo2 = 21.90;
    float fret = 0.0;
    fret = Addition(fNo1,fNo2);
    cout<<"Addition is : "<<fret<<endl;
    return 0;
}
