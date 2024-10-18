using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {

        public static long ReadPositiveNumber(string Message)
        {
            long Number = 0;
            do
            {
                Console.WriteLine(Message);
                Number =Convert.ToInt64( Console.ReadLine());

            } while (Number <= 0);
            return Number;
        }


        public static int CountDigitFrequency(short DigitToCheck, long Number) 
        {
            int FreqCount = 0;
            long Remainder = 0; 
            
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

        public static void PrintAllDigitsFrequencey(long Number)
        {
            Console.WriteLine();
            for (short i = 0; i < 10; i++)
            {
                int DigitFrequency = 0;
                DigitFrequency = CountDigitFrequency(i, Number);
                if (DigitFrequency > 0)
                {

                    Console.WriteLine("Digit " + i + " Frequency is " + DigitFrequency + " Time(s).");

                }
            }
        }

        static void Main(string[] args)
        {
            long Number = ReadPositiveNumber("Please enter the a number?");
            PrintAllDigitsFrequencey(Number);


        }
    }
}