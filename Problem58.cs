using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        public static int ReadPositiveNumber(string Message)
        {
            int Number = 0;
            do
            {
                Console.WriteLine(Message);
                Number =Convert.ToInt16( Console.ReadLine());

            } while (Number <= 0);
            return Number;
        }


        public static int CountDigitFrequency(short DigitToCheck, int Number) 
        { 
            int FreqCount = 0, Remainder = 0; 
            
            while (Number > 0) 
            {
                Remainder = Number % 10;
                Number = Number / 10; 

                if (DigitToCheck == Remainder) 
                { 
                    FreqCount++;
                } 
            } 
            return FreqCount; 
        }



        static void Main(string[] args)
        {
                int Number = ReadPositiveNumber("Please enter the main number?"); 
            int DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

            Console.WriteLine("Digit " + DigitToCheck + " Frequency is " + CountDigitFrequency((short)DigitToCheck, Number) + " Time(s).\n");


        }
    }
}