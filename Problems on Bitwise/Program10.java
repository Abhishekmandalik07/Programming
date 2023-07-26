
import java.lang.*;
import java.util.*;

//              0   0   1   0   1   0   1   1       iNo
//              0   0   0   0   1   0   0   0       iMask
//-------------------------------------------
//              0   0    1  0   0   0   1   1       iResult


//              0   0   1   0   0   0   1   1       iNo
//              0   0   0   0   1   0   0   0       iMask
//-------------------------------------------
//              0   0   1   0   1   0   1   1       iReult


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
        int iMask = 0X00000048;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Program10
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program10
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


