#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int value);
        ~ArrayX();
        void Accept();
        void Display();
        T Maximum();
};

template<class T>
ArrayX<T>::ArrayX(int value)
{
    Size = value;
    Arr = new T[Size];
}

template<class T>
ArrayX<T>::~ArrayX()
{
    delete [] Arr;
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Accept (Generic)
//  Description :   Used to Accept Array
//  Input :         -
//  Output :        -
//  Date :          15-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

template<class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the values : "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cin>>Arr[i];
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display (Generic)
//  Description :   Used to Display Array
//  Input :         -
//  Output :        -
//  Date :          15-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

template<class T>
void ArrayX<T>::Display()
{
    cout<<"Values are: "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Maximun (Generic)
//  Description :   Used to return Maximum from Array
//  Input :         -
//  Output :        DataType
//  Date :          14-June-2022
//  Author :        Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

template<class T>
T ArrayX<T>::Maximum()
{
    T Max= Arr[0];
    for(int i = 0; i < Size; i++)
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
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();
    int ret = obj1.Maximum();
    cout<<"Maximum is : "<<ret<<endl;

    ArrayX <float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fret = obj2.Maximum();
    cout<<"Maximum is : "<<fret<<endl;

    return 0;
}
