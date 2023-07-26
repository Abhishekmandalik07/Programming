import java.lang.*;
import java.util.*;
/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Bitwise 
//
//	Function Name:	DisplayBinary
//  	Description :   Used to display Binary of Given number
//  	Input :		Integer
//  	Output :	-
//  	Date :		13-June-2022
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Bitwise
{
    public void DisplayBinary(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 2;
            System.out.print(iDigit);
            iNo = iNo / 2;
        }
        System.out.println();
    }
}
/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Program1 
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        bobj.DisplayBinary(value);
    }
}
