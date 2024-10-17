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

       public static enPrimNotPrime CheckPrime(int Number)
        {
            int M = (int)Math.Round((double)Number / 2); 
            for (int Counter = 2; Counter <= M; Counter++) 
            {
                if (Number % Counter == 0) 
                    return enPrimNotPrime.NotPrime;
            }
            return enPrimNotPrime.Prime; 
        }

       public static void PrintPrimeNumbersFrom1ToNumber(int Number)
        {
            Console.WriteLine("Prime Numbers from " + 1 + " To " + Number + " are :\n"); ;
            for (int i = 1; i <= Number; i++) 
            {
                if (CheckPrime(i) == enPrimNotPrime.Prime)
                {
                    Console.WriteLine(i);  
                }
            }
        }



        static void Main(string[] args)
        {
            PrintPrimeNumbersFrom1ToNumber(ReadPositiveNumber("Pleas enter apositive number "));

        }
    }
}