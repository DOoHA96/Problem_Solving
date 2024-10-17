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


        public static int SumOfDigits(int Number)
        {
            int Sum =0, Remainder = 0;
            while (Number > 0)
            {
                Remainder = Number % 10;
                Number = Number / 10;
                Sum += Remainder;
            }
            return Sum;
        }



        static void Main(string[] args)
        {
            Console.WriteLine("Sum Of Digits = " + SumOfDigits
                (ReadPositiveNumber("Please enter a positive number ? ")));
           
            
        }
    }
}