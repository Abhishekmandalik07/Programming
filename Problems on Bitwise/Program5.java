import java.lang.*;
import java.util.*;
/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Bitwise 
//
//	Function Name:	Checkbit
//  	Description :   Used to check the Bit is On or OFF
//  	Input :		Integer
//  	Output :	Boolean
//  	Date :		13-June-2022
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////
class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0X00100000;                 //1048576;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Program5
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret = bobj.CheckBit(value);

        if(bret == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
    }
}

