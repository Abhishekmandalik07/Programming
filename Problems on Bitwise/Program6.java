import java.lang.*;
import java.util.*;
//  0000	0000	0000	0000	0010	0000	0000	0000
//   0		0	0	0	2	0	0	0

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
        int iMask = 0X00002000;
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
//  Class Name:	Program6
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program6
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  

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

