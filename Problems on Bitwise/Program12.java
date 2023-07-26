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
//	Function Name:	ToggleBit
//	Description :   Used to Toggle Bit
//  	Input :		Integer,Integer
//  	Output :	Integer
//  	Date :		13-June-2022
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Bitwise
{
        public int ToggleBit(int iNo, int iPos)
        {
            if((iPos <=0) || (iPos > 32))
            {
                System.out.println("Invalid position");
                return 0;
            }

            int iMask = 0X00000001;
            int iResult = 0;

            iMask = iMask << (iPos-1);

            iResult = iNo ^ iMask;
            return iResult;
        }
}

/////////////////////////////////////////////////////////////////////
//
//  Class Name:	Program12 
//
//	Function Name:  Main
//	Description :   Entry Point Function of the Application
//	Date :          13-June-2023
//
//  Author :	Abhishek Balasaheb Mandalik
//
/////////////////////////////////////////////////////////////////////

class Program12
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        System.out.println("Enter position ");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(value,pos);
        System.out.println("Updated number is : "+iRet);
    }
}


