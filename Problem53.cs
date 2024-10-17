using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem_Solving
{
    internal class Program
    {
        public enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

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

        public static bool IsPerfectNumber(int Number)
        {
           int Sum = 0;
           for (int i = 1; i < Number; i++)
           {
               if (Number % i == 0) 
                   Sum += i; 
           }
           return Number == Sum;
        }

        public static void PrintResult(int Number)
        {
            if (IsPerfectNumber(Number))
                Console.WriteLine(+ Number + " Is Perfect Number \n");
            else 
                Console.WriteLine(+ Number + " Is Not Perfect Number \n");
        }




        static void Main(string[] args)
        {
            PrintResult(ReadPositiveNumber("Pleas enter a positive number "));

        }
    }
}