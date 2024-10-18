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


        public static int ReverseNumbers(int Number)
        {
            int Remainder = 0;
            int Number2 = 0;
            while (Number > 0) 
            {
                Remainder = Number % 10;
                Number /= 10; 
                Number2 = Number2 * 10 + Remainder;
                
            }
            return Number2;
        }
        public static void PrintDigits(int Number)
        {
            int Remainder = 0;
            while (Number > 0) 
            {
                Remainder = Number % 10; 
                Number /= 10;
                Console.WriteLine(Remainder);
            }
        }


        static void Main(string[] args)
        {
            PrintDigits(ReverseNumbers(ReadPositiveNumber("Pleas enter a positive Number ? ")));
        }
    }
}