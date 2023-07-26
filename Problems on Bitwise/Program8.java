import java.lang.*;
import java.util.*;
//  0000    0000    0000    0000    0010    0000    0000    0000
//      0       0           0         0          2          0           0       0

/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Bitwise 
//
//	Function Name:	OnBit
//  	Description :   Used to ON perticular bit and Return the number
//  	Input :		Integer
//  	Output :	Integer
//  	Date :		13-June-2022
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Bitwise
{
    public int OnBit(int iNo)       // 4
    {
        int iMask = 0X04000000;
        int iResult = 0;

        iResult = iNo | iMask;
        return iResult;
    }
}
/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Program8
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program8
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iret = bobj.OnBit(value);
        System.out.println("Updated number is  : "+iret);
    }
}

/*
Decimal       Hexadecimal           Binary
0                      0                        0000
1                       1                       0001
2                       2                       0010
3                       3                       0011
4                       4                       0100
5                       5                       0101
6                       6                       0110
7                       7                       0111
8                       8                       1000
9                       9                       1001
10                      A                      1010
11                      B                      1011
12                      C                       1100
13                      D                      1101
14                      E                      1110
15                      F                       1111
*/
