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

        public static void PrintPerfectNumberFrom1ToNum(int Number)
        {
            Console.WriteLine();
            for (int i = 1; i < Number; i++) 
            {
                if (IsPerfectNumber(i))
                    Console.WriteLine(i);
            }
        }

        static void Main(string[] args)
        {
            PrintPerfectNumberFrom1ToNum(ReadPositiveNumber("Pleas enter a positive number "));

        }
    }
}